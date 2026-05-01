/*
 * XREFs of _lambda_6825ce5d1ace0209a4941c0102e86eff_::operator() @ 0x180551874
 * Callers:
 *     CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___::IconLoaded @ 0x1802DFBE0 (CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___--IconLoaded.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ObservableProperty@V?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@@@QEAAAEBV?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@AEBV123@@Z @ 0x1805517D8 (--4-$ObservableProperty@V-$ComPtr@UIWICBitmap@@@WRL@Microsoft@@@@QEAAAEBV-$ComPtr@UIWICBitmap@@@.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall lambda_6825ce5d1ace0209a4941c0102e86eff_::operator()(_QWORD *a1, void *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, void *, _QWORD, __int64, __int64 *); // rbx
  int v6; // eax
  __int64 *v7; // rax
  int result; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  void *v11; // [rsp+58h] [rbp+10h]

  v11 = a2;
  v10 = 0LL;
  v4 = a1[1];
  v5 = *(__int64 (__fastcall **)(__int64, void *, _QWORD, __int64, __int64 *))(*(_QWORD *)v4 + 168LL);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v10);
  v6 = v5(v4, a2, 0LL, 1LL, &v10);
  if ( v6 >= 0 )
  {
    v7 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 32LL))(*a1);
    ObservableProperty<Microsoft::WRL::ComPtr<IWICBitmap>>::operator=(v7, &v10);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB6,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
      (const char *)(unsigned int)v6);
  }
  result = Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v10);
  if ( a2 )
    return DeleteObject(a2);
  return result;
}
