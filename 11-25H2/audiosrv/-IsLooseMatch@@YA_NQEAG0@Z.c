/*
 * XREFs of ?IsLooseMatch@@YA_NQEAG0@Z @ 0x1800F28E0
 * Callers:
 *     ?CompareAECProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x1800701A8 (-CompareAECProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800271C8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180055680 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetCurrentLoopbackEndpointIdInternal@@YAJPEAGPEAPEAGPEA_N@Z @ 0x1800F15EC (-GetCurrentLoopbackEndpointIdInternal@@YAJPEAGPEAPEAGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall IsLooseMatch(unsigned __int16 *const a1, unsigned __int16 *const a2)
{
  unsigned __int16 *v4; // rcx
  bool v6; // [rsp+30h] [rbp+10h] BYREF
  unsigned __int16 *v7; // [rsp+40h] [rbp+20h] BYREF

  if ( !a1 || !a2 )
    return 0;
  v7 = 0LL;
  v6 = 0;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v7,
    0LL);
  if ( (int)GetCurrentLoopbackEndpointIdInternal(a1, &v7, &v6) < 0 )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&v7,
      0LL);
    if ( (int)GetCurrentLoopbackEndpointIdInternal(a2, &v7, &v6) < 0 || !v7 )
      goto LABEL_6;
    v4 = a1;
  }
  else
  {
    v4 = v7;
    if ( !v7 )
    {
LABEL_6:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v7);
      return 0;
    }
  }
  if ( (unsigned int)_o__wcsicmp(v4) )
    goto LABEL_6;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v7);
  return 1;
}
