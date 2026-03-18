/*
 * XREFs of GreGetPeakHandleCount @ 0x1401C4DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetPeakHandleCount(__int64 a1)
{
  return **(unsigned int **)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 5672LL);
}
