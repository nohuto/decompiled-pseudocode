/*
 * XREFs of ?_AreAdjacentItemsCurated@CAppLayout@@AEAAHPEAUIAppLayoutItem@@@Z @ 0x1806C52B4
 * Callers:
 *     ?IsCurated@CAppLayout@@UEAAHPEAUIAppLayoutItem@@@Z @ 0x1806C4400 (-IsCurated@CAppLayout@@UEAAHPEAUIAppLayoutItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_GetAdjacentItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1806C59E4 (-_GetAdjacentItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_T.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayout::_AreAdjacentItemsCurated(CAppLayout *this, struct IAppLayoutItem *a2)
{
  unsigned int v3; // ebx
  int AdjacentItem; // eax
  __int64 v6; // rdx
  __int64 v8; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+38h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-30h] BYREF
  __int128 v11; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v3 = 0;
  v9 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  AdjacentItem = CAppLayout::_GetAdjacentItem(this, a2, 1LL, 5LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v9);
  if ( AdjacentItem >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
    AdjacentItem = CAppLayout::_GetAdjacentItem(
                     this,
                     a2,
                     0xFFFFFFFFLL,
                     5LL,
                     &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
                     &v8);
    if ( AdjacentItem >= 0 )
    {
      v10 = 0LL;
      v11 = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v9 + 56LL))(v9, 0LL, &v10);
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v8 + 56LL))(v8, 0LL, &v11);
      LOBYTE(v3) = (unsigned int)(v11 + 1 + DWORD2(v10) - DWORD2(v11) - v10) <= 2;
      goto LABEL_7;
    }
    v6 = 1217LL;
  }
  else
  {
    v6 = 1216LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
    (const char *)(unsigned int)AdjacentItem);
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  return v3;
}
