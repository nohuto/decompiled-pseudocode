/*
 * XREFs of CmpIsValueTombstone @ 0x140914310
 * Callers:
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086D078 (CmDeleteValueKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140913E28 (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsValueTombstone(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(a1 + 160) & 0x80000) != 0 && (*(_BYTE *)(a2 + 16) & 2) != 0;
}
