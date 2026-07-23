/*
 * XREFs of MiInitializeNonCachedMappingRegion @ 0x140C5BEA8
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiInitializeDynamicRegion @ 0x140C5708C (MiInitializeDynamicRegion.c)
 *     MiInitializePteInfo @ 0x140C5BF50 (MiInitializePteInfo.c)
 */

__int64 MiInitializeNonCachedMappingRegion()
{
  __int64 v0; // rdi
  __int64 v1; // rsi
  unsigned int v2; // ebx
  __int64 Pool; // rax

  v0 = qword_140E38C90;
  v1 = qword_140E38C88;
  v2 = 0;
  if ( !(unsigned int)MiInitializeDynamicRegion(6) )
    return 0LL;
  Pool = MiAllocatePool(0x40uLL, 216LL * (unsigned int)(unsigned __int16)KeNumberNodes, 538996045);
  if ( !Pool )
    return 0LL;
  LOBYTE(v2) = (unsigned int)MiInitializePteInfo((unsigned int)&unk_140E35EC0, 6, 0, 5, v1, v0, 1, Pool) != 0;
  return v2;
}
