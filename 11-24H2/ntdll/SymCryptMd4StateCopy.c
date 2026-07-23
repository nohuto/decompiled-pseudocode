/*
 * XREFs of SymCryptMd4StateCopy @ 0x180157250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SymCryptMd4StateCopy(_OWORD *a1, _OWORD *a2)
{
  *a2 = *a1;
  a2[1] = a1[1];
  a2[2] = a1[2];
  a2[3] = a1[3];
  a2[4] = a1[4];
  a2[5] = a1[5];
  a2[6] = a1[6];
}
