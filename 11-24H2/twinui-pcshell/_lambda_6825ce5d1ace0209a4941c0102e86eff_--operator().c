/*
 * XREFs of _lambda_6825ce5d1ace0209a4941c0102e86eff_::operator() @ 0x1804A10E8
 * Callers:
 *     CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___::IconLoaded @ 0x1804A17F0 (CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___--IconLoaded.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$CTSmartObj@PEAUHFONT__@@V?$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ @ 0x1802089E8 (-Release@-$CTSmartObj@PEAUHFONT__@@V-$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
int __fastcall lambda_6825ce5d1ace0209a4941c0102e86eff_::operator()(_QWORD *a1, void *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, void *, _QWORD, __int64, __int64 *); // rbx
  int v6; // eax
  __int64 *v7; // rdi
  __int64 v8; // rbx
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  void *v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a2;
  v13 = 0LL;
  v4 = a1[1];
  v5 = *(__int64 (__fastcall **)(__int64, void *, _QWORD, __int64, __int64 *))(*(_QWORD *)v4 + 168LL);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v13);
  v6 = v5(v4, a2, 0LL, 1LL, &v13);
  if ( v6 >= 0 )
  {
    v7 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 32LL))(*a1);
    v8 = v13;
    if ( *v7 != v13 )
    {
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v14 = *v7;
      *v7 = v8;
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v14);
    }
    v9 = (_QWORD *)v7[1];
    v10 = &v9[v7[2]];
    while ( v9 != v10 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 24LL))(*v9);
      ++v9;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB6,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v13);
  return CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release(&v15);
}
