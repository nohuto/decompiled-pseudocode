/*
 * XREFs of MiReferenceFileObjectForMap @ 0x140918140
 * Callers:
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 *     MiAllowImageMap @ 0x14086D7E4 (MiAllowImageMap.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
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
