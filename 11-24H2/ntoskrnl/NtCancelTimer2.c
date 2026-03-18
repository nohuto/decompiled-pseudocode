/*
 * XREFs of NtCancelTimer2 @ 0x14048AB80
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1403C1C30 (ExpSetTimer2.c)
 */

NTSTATUS __fastcall NtCancelTimer2(void *a1)
{
  return ExpSetTimer2(a1, 0LL, 0LL, 0LL);
}
