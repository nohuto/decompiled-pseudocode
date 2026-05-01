/*
 * XREFs of ?TryGetTitleFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x18020D2D8
 * Callers:
 *     ?AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18020CF24 (-AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x18022581C (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TryGetTitleFromExePath(__int64 a1, const WCHAR *a2)
{
  HRESULT v4; // eax
  void *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  void *ppv; // [rsp+58h] [rbp+28h] BYREF
  _WORD *v9; // [rsp+60h] [rbp+30h] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  if ( *((_QWORD *)a2 + 3) > 7uLL )
    a2 = *(const WCHAR **)a2;
  v4 = SHCreateItemFromParsingName(a2, 0LL, &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93, &ppv);
  if ( v4 >= 0 )
  {
    v9 = 0LL;
    if ( (*(int (__fastcall **)(void *, const PROPERTYKEY *, _WORD **))(*(_QWORD *)ppv + 136LL))(
           ppv,
           &PKEY_Software_ProductName,
           &v9) >= 0
      || (*(int (__fastcall **)(void *, const PROPERTYKEY *, _WORD **))(*(_QWORD *)ppv + 136LL))(
           ppv,
           &PKEY_FileDescription,
           &v9) >= 0 )
    {
      std::wstring::wstring((char **)a1, v9);
      CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&v9);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
      return a1;
    }
    CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&v9);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xFED,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)(unsigned int)v4);
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  v5 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return a1;
}
