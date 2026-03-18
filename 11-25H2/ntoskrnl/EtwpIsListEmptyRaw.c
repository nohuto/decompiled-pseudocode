/*
 * XREFs of EtwpIsListEmptyRaw @ 0x1406443DC
 * Callers:
 *     EtwpFinalizeHeader @ 0x140992E74 (EtwpFinalizeHeader.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsListEmptyRaw(_QWORD *a1)
{
  return *a1 == (_QWORD)a1;
}
