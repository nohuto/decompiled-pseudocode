/*
 * XREFs of ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0@Z @ 0x140183E60
 * Callers:
 *     ?CreateUsermodeParameters@QueryGlyphAttrsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x14033F2D0 (-CreateUsermodeParameters@QueryGlyphAttrsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall UmfdTls::TryComputeAlignedFieldSizes(
        unsigned int a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int *a4)
{
  if ( a1 + 7 < a1 )
    return 0;
  *a2 = (a1 + 7) & 0xFFFFFFF8;
  if ( a3 + 7 < a3 )
    return 0;
  *a4 = (a3 + 7) & 0xFFFFFFF8;
  return 1;
}
