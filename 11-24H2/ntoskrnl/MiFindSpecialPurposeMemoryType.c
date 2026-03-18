/*
 * XREFs of MiFindSpecialPurposeMemoryType @ 0x14068E758
 * Callers:
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x1407FE2A8 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x1407FE3D4 (MiInitializePartitionSpecialPurposeMemory.c)
 *     MiSpecialPurposeMemoryChangePrepare @ 0x1407FEBA0 (MiSpecialPurposeMemoryChangePrepare.c)
 * Callees:
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 */

_QWORD *__fastcall MiFindSpecialPurposeMemoryType(__int64 a1, const void *a2)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx

  v2 = (_QWORD *)(a1 + 17624);
  for ( i = *(_QWORD **)(a1 + 17624); i != v2; i = (_QWORD *)*i )
  {
    if ( !memcmp(i + 3, a2, 0x20uLL) )
      return i;
  }
  return 0LL;
}
