/*
 * XREFs of NtCreateIRTimer @ 0x1407ABEE0
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateTimer2 @ 0x140A16540 (NtCreateTimer2.c)
 */

__int64 __fastcall NtCreateIRTimer(int a1, int a2, int a3)
{
  return NtCreateTimer2(a1, a2, 0, 2, a3);
}
