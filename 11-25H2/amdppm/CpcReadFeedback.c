/*
 * XREFs of CpcReadFeedback @ 0x140005920
 * Callers:
 *     <none>
 * Callees:
 *     CpcSegregateCommandActuation @ 0x140002FAC (CpcSegregateCommandActuation.c)
 */

__int64 __fastcall CpcReadFeedback(__int64 a1)
{
  KeClearEvent(&Event);
  return CpcSegregateCommandActuation((void (__fastcall *)(__int64 *, int *))CpcSubspaceReadFeedback, a1, 1);
}
