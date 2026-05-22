/*
 * XREFs of ?SynthesizeKeyEvent@VirtualHotKeyTracker@@AEAAXAEBUKeyEventData@1@U_GUID@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@@Z @ 0x1801AA480
 * Callers:
 *     _lambda_7f079bc5e87df2e09bd622ff86c26e64_::operator() @ 0x1801A9F2C (_lambda_7f079bc5e87df2e09bd622ff86c26e64_--operator().c)
 *     ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801A9F70 (-OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

__int64 __fastcall VirtualHotKeyTracker::SynthesizeKeyEvent(__int64 a1, __int64 *a2, __int128 *a3, unsigned int a4)
{
  __int128 v4; // xmm6
  __int64 v7; // xmm0_8
  __int64 v9; // [rsp+20h] [rbp-68h] BYREF
  int v10; // [rsp+28h] [rbp-60h]
  int v11; // [rsp+34h] [rbp-54h]
  __int128 v12; // [rsp+38h] [rbp-50h]
  __int64 v13; // [rsp+48h] [rbp-40h]

  v4 = *a3;
  memset_0(&v9, 0, 0x40uLL);
  v7 = *a2;
  v13 = a2[2];
  v10 = *((_DWORD *)a2 + 2);
  v9 = v7;
  v11 = 2;
  v12 = v4;
  return NtMITSynthesizeKeyboardInput(a4, &v9);
}
