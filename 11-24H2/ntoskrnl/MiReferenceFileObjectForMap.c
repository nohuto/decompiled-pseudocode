/*
 * XREFs of MiReferenceFileObjectForMap @ 0x1408E1590
 * Callers:
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 *     MiAllowImageMap @ 0x1408694B4 (MiAllowImageMap.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
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
