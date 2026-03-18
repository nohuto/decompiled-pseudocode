/*
 * XREFs of MiReferenceFileObjectForMap @ 0x1408FF8F0
 * Callers:
 *     MiInsertInSystemSpace @ 0x1402A4B54 (MiInsertInSystemSpace.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     MiAllowImageMap @ 0x140903D34 (MiAllowImageMap.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 */

void *__fastcall MiReferenceFileObjectForMap(__int64 a1)
{
  __int64 v1; // rbx
  void *v3; // rbx

  v1 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 3) == 0 )
    return 0LL;
  v3 = (void *)(v1 & 0xFFFFFFFFFFFFFFFCuLL);
  ObfReferenceObjectWithTag(v3, 0x63536D4Du);
  return v3;
}
