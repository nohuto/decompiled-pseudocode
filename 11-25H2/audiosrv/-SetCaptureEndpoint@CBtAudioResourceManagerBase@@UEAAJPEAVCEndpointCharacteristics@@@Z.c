/*
 * XREFs of ?SetCaptureEndpoint@CBtAudioResourceManagerBase@@UEAAJPEAVCEndpointCharacteristics@@@Z @ 0x180054990
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x180020B2C (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180055680 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$com_weak_query_nothrow@AEAPEAVCEndpointCharacteristics@@@wil@@YAJAEAPEAVCEndpointCharacteristics@@PEAPEAUIWeakReference@@@Z @ 0x1800D31B0 (--$com_weak_query_nothrow@AEAPEAVCEndpointCharacteristics@@@wil@@YAJAEAPEAVCEndpointCharacterist.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBtAudioResourceManagerBase::SetCaptureEndpoint(CBtAudioResourceManagerBase *this, LPCWCH *a2)
{
  _QWORD *v4; // rsi
  const WCHAR *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPCWCH *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v4 = (_QWORD *)((char *)this + 56);
  v5 = (const WCHAR *)*((_QWORD *)this + 7);
  if ( v5 )
  {
    if ( CompareStringOrdinal(v5, -1, a2[6], -1, 1) != 2 )
    {
      v8 = -2147418113;
      v9 = 104LL;
      goto LABEL_4;
    }
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      v4,
      0LL);
    v8 = _AllocString<CTCoAllocPolicy>(v7, v6, a2[6], v4);
    if ( v8 < 0 )
    {
      v9 = 100LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
  }
  v11 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v8 = wil::com_weak_query_nothrow<CEndpointCharacteristics * &>(&v13, (char *)this + 80);
  if ( v8 < 0 )
  {
    v9 = 106LL;
    goto LABEL_4;
  }
  return 0LL;
}
