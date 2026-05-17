/*
 * XREFs of DbgUiWaitStateChange @ 0x180111640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgUiWaitStateChange(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = a2;
  LOBYTE(a2) = 1;
  return ZwWaitForDebugEvent(NtCurrentTeb()->DbgSsReserved[1], a2, v2, a1);
}
