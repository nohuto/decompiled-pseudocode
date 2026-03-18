/*
 * XREFs of EtwpIsListEmptyRaw @ 0x1406503EC
 * Callers:
 *     EtwpFinalizeHeader @ 0x1409DBD1C (EtwpFinalizeHeader.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsListEmptyRaw(_QWORD *a1)
{
  return *a1 == (_QWORD)a1;
}
