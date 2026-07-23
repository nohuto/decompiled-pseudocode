/*
 * XREFs of MiSetSlabAllocatorPolicy @ 0x1406899D4
 * Callers:
 *     MiMakePartitionActive @ 0x140485044 (MiMakePartitionActive.c)
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetSlabAllocatorPolicy(__int64 a1)
{
  if ( dword_140FC5254 != 1
    && (MiFlags & 0x4000) != 0
    && (!*(_DWORD *)(a1 + 17748) || *(_QWORD *)(a1 + 18512) >= 0xED800uLL || dword_140FC5254 == 2) )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 4), 8u);
  }
}
