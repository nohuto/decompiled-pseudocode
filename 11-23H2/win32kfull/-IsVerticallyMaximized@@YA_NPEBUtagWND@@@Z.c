/*
 * XREFs of ?IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C005FE74
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C005E99C (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     CitGetWindowInfo @ 0x1C005FC80 (CitGetWindowInfo.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C01E8FDC (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C01EB3CC (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ECFA8 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C0200170 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsVerticallyMaximized(const struct tagWND *a1)
{
  int v1; // eax

  v1 = *((_DWORD *)a1 + 80);
  return (v1 & 0x4000000) != 0 && (v1 & 0x8000000) != 0;
}
