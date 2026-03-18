/*
 * XREFs of MiInitializeNonCachedMappingRegion @ 0x140C489E8
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiInitializeDynamicRegion @ 0x140C43C7C (MiInitializeDynamicRegion.c)
 *     MiInitializePteInfo @ 0x140C48A90 (MiInitializePteInfo.c)
 */

__int64 MiInitializeNonCachedMappingRegion()
{
  __int64 v0; // rdi
  __int64 v1; // rsi
  unsigned int v2; // ebx
  __int64 Pool; // rax

  v0 = qword_140E38910;
  v1 = qword_140E38908;
  v2 = 0;
  if ( !(unsigned int)MiInitializeDynamicRegion(6) )
    return 0LL;
  Pool = MiAllocatePool(0x40uLL, 216LL * (unsigned int)(unsigned __int16)KeNumberNodes, 538996045);
  if ( !Pool )
    return 0LL;
  LOBYTE(v2) = (unsigned int)MiInitializePteInfo((unsigned int)&unk_140E35B40, 6, 0, 5, v1, v0, 1, Pool) != 0;
  return v2;
}
