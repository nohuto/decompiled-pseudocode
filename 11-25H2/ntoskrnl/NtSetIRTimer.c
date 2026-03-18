/*
 * XREFs of NtSetIRTimer @ 0x14036EC50
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x140370A80 (ExpSetTimer2.c)
 */

__int64 __fastcall NtSetIRTimer(void *a1)
{
  return ExpSetTimer2(a1);
}
