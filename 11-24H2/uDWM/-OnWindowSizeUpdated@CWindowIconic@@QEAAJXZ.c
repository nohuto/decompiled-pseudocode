/*
 * XREFs of ?OnWindowSizeUpdated@CWindowIconic@@QEAAJXZ @ 0x180097A7C
 * Callers:
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180052B98 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180052CAC (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowIconic::OnWindowSizeUpdated(CWindowIconic *this)
{
  return CWindowIconic::UpdateSizeOrMargins(this, 0);
}
