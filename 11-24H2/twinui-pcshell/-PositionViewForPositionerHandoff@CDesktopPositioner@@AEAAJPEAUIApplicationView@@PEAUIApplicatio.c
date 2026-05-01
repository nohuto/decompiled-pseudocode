/*
 * XREFs of ?PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicationViewOperation@@W4SHELL_POSITIONER_TYPE@@PEAUIAppLayout@@PEAUIUnknown@@@Z @ 0x180513460
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18025B7B0 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     _lambda_ebca2bf7fa70890e87a68e152d07e31f_::operator() @ 0x180511E24 (_lambda_ebca2bf7fa70890e87a68e152d07e31f_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     wil::ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf___ @ 0x180511224 (wil--ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopPositioner::PositionViewForPositionerHandoff(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6)
{
  _QWORD v8[7]; // [rsp+28h] [rbp-29h] BYREF
  __int128 v9; // [rsp+60h] [rbp+Fh] BYREF
  _QWORD v10[3]; // [rsp+70h] [rbp+1Fh]
  int v11; // [rsp+88h] [rbp+37h]
  __int64 v12; // [rsp+B0h] [rbp+5Fh] BYREF
  int v13; // [rsp+C0h] [rbp+6Fh] BYREF

  v13 = a4;
  v12 = a2;
  v8[0] = a3;
  v11 = 0;
  v10[0] = 0LL;
  v9 = 0LL;
  *(__m128i *)&v10[1] = _mm_load_si128((const __m128i *)&_xmm);
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 144LL))(a3, &v9);
  v8[1] = a1;
  v8[2] = &v12;
  v8[3] = &a5;
  v8[4] = &v13;
  v8[5] = v8;
  v8[6] = &a6;
  wil::ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf___();
  return 0LL;
}
