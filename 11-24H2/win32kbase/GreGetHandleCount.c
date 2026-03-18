/*
 * XREFs of GreGetHandleCount @ 0x1401C4D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetHandleCount(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 5672LL) + 4LL);
}
