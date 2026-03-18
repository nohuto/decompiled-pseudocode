/*
 * XREFs of ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C01CD0D4
 * Callers:
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C00E4C14 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x1C01D0BE4 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D354C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     ?IsPrimary@CPointerInfoNode@@QEBAHXZ @ 0x1C01CD0A4 (-IsPrimary@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CPointerInfoNode::IsPrimaryDown(CPointerInfoNode *this)
{
  int IsPrimary; // eax
  __int64 v2; // rcx
  unsigned int v3; // edx

  IsPrimary = CPointerInfoNode::IsPrimary(this);
  v3 = 0;
  if ( IsPrimary )
    return (*(_DWORD *)(v2 + 180) & 0x10000) != 0;
  return v3;
}
