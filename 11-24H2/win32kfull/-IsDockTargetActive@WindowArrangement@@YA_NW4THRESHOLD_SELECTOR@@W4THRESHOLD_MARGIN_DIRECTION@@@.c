/*
 * XREFs of ?IsDockTargetActive@WindowArrangement@@YA_NW4THRESHOLD_SELECTOR@@W4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1402DC8AC
 * Callers:
 *     ?IsDockTargetActive@@YAEPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1402A5FA0 (-IsDockTargetActive@@YAEPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall WindowArrangement::IsDockTargetActive(__int64 a1, __int64 a2)
{
  return *(_BYTE *)((int)a2 + *(_QWORD *)(W32GetUserSessionState(a1, a2) + 63488) + 4LL * (int)a1) != 0;
}
