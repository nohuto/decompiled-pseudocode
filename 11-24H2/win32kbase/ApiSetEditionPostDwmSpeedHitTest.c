/*
 * XREFs of ApiSetEditionPostDwmSpeedHitTest @ 0x1400C3EAC
 * Callers:
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKKPEAHPEAU_InputHitTestResult@@@Z @ 0x1400C3C98 (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x14018CE80 (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 * Callees:
 *     EditionPostDwmSpeedHitTest @ 0x1400E16D4 (EditionPostDwmSpeedHitTest.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionPostDwmSpeedHitTest(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6))(void)
{
  int v8; // esi
  int v9; // ebp
  __int64 (*result)(void); // rax

  v8 = a2;
  v9 = a1;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6032LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))EditionPostDwmSpeedHitTest(v9, v8, a3, a4, a5, a6);
  }
  return result;
}
