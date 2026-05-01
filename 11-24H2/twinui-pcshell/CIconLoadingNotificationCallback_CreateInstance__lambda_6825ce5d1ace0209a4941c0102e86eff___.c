/*
 * XREFs of CIconLoadingNotificationCallback_CreateInstance__lambda_6825ce5d1ace0209a4941c0102e86eff___ @ 0x1804A0DD4
 * Callers:
 *     ?LoadIconW@CIconLoaderInternal@@UEAAJPEAUIApplicationView@@AEBUtagSIZE@@1IPEAUISwitchItem@@@Z @ 0x1804A1800 (-LoadIconW@CIconLoaderInternal@@UEAAJPEAUIApplicationView@@AEBUtagSIZE@@1IPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Details::Make_CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff_____lambda_6825ce5d1ace0209a4941c0102e86eff__const_&_ @ 0x1804A0E80 (Microsoft--WRL--Details--Make_CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c010.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CIconLoadingNotificationCallback_CreateInstance__lambda_6825ce5d1ace0209a4941c0102e86eff_(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, _QWORD *),
        _QWORD *a3)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // rbx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  *a3 = 0LL;
  Microsoft::WRL::Details::Make_CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff_____lambda_6825ce5d1ace0209a4941c0102e86eff__const___(
    &v9,
    a1);
  v4 = v9;
  if ( v9 )
  {
    v6 = (**v9)(v9, &GUID_09bd08f6_5805_4a9c_b795_a08c46164aea, a3);
    v7 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x56,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
        (const char *)(unsigned int)v6);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v4)[2])(v4);
    return v7;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
