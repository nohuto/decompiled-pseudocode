/*
 * XREFs of EtwpIsListEmptyRaw @ 0x14064EA2C
 * Callers:
 *     EtwpFinalizeHeader @ 0x1409D652C (EtwpFinalizeHeader.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsListEmptyRaw(_QWORD *a1)
{
  return *a1 == (_QWORD)a1;
}
