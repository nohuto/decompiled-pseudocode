/*
 * XREFs of _lambda_53a10622b8c115a42f3ae5bcca2992b2_::operator() @ 0x180097D80
 * Callers:
 *     ?Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ @ 0x180097D40 (-Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ.c)
 * Callees:
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x180097E50 (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AX.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_53a10622b8c115a42f3ae5bcca2992b2_::operator()(_BYTE **a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  LPVOID v4; // rdi
  _QWORD *v5; // rbx
  void *v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-49h]
  _BYTE v9[8]; // [rsp+30h] [rbp-39h] BYREF
  void **v10; // [rsp+38h] [rbp-31h] BYREF
  __int128 v11; // [rsp+40h] [rbp-29h]
  void ***v12; // [rsp+A0h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  LPVOID pv; // [rsp+D8h] [rbp+6Fh] BYREF
  const wchar_t *v15; // [rsp+E0h] [rbp+77h] BYREF
  const wchar_t *v16; // [rsp+E8h] [rbp+7Fh] BYREF

  v16 = L"AssignedAccessConfiguration";
  v15 = L"SOFTWARE\\Microsoft\\Windows\\AssignedAccessConfiguration";
  pv = 0LL;
  *(_QWORD *)&v8 = &v15;
  *((_QWORD *)&v8 + 1) = &v16;
  v10 = &wistd::__function::__func<_lambda_42d7dced1872ed24a4c1197da8e68253_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`vftable';
  v11 = v8;
  v12 = &v10;
  v2 = wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
         &pv,
         v9);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (unsigned int)"shellcommondesktopbase\\base\\embedded\\sys\\lockdown\\inc\\persistentlocationhelper.h",
      (const char *)(unsigned int)v2,
      (int)&v15);
    if ( pv )
      CoTaskMemFree(pv);
  }
  else
  {
    v4 = pv;
    if ( pv )
    {
      v5 = *a1;
      v6 = (void *)*((_QWORD *)*a1 + 1);
      if ( v6 )
        CoTaskMemFree(v6);
      v5[1] = v4;
      v5[3] = -1LL;
      v5[2] = -1LL;
      *a1[1] = 1;
    }
    return 0;
  }
  return v3;
}
