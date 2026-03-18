/*
 * XREFs of MiSetSlabAllocatorPolicy @ 0x1406888A4
 * Callers:
 *     MiMakePartitionActive @ 0x14048A21C (MiMakePartitionActive.c)
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetSlabAllocatorPolicy(__int64 a1)
{
  if ( dword_140FC4254 != 1
    && (MiFlags & 0x4000) != 0
    && (!*(_DWORD *)(a1 + 17748) || *(_QWORD *)(a1 + 18512) >= 0xED800uLL || dword_140FC4254 == 2) )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 4), 8u);
  }
}
