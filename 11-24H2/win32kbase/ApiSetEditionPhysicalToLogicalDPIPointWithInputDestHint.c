/*
 * XREFs of ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x140192A68
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x14005EDC8 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x14018CE80 (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 * Callees:
 *     EditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x140109094 (EditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4))(void)
{
  __int64 (*result)(void); // rax

  *a1 = a2;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 7000LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))EditionPhysicalToLogicalDPIPointWithInputDestHint((__int64)a1, a2, a3, a4);
  }
  return result;
}
