/*
 * XREFs of ?NeedsCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CA_NPEAVCWindowData@@@Z @ 0x1800215EC
 * Callers:
 *     ?TransformHitTestPointForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@PEAUtagPOINT@@@Z @ 0x180021540 (-TransformHitTestPointForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@PEAUtagPOINT@.c)
 *     ?ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z @ 0x1800215B0 (-ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::NeedsCorrectionScaleForUniformSpaceWindow(struct CWindowData *a1)
{
  return *((_DWORD *)a1 + 93) & 1;
}
