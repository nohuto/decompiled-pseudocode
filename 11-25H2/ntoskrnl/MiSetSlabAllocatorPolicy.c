/*
 * XREFs of MiSetSlabAllocatorPolicy @ 0x14067D014
 * Callers:
 *     MiMakePartitionActive @ 0x14048C0A0 (MiMakePartitionActive.c)
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetSlabAllocatorPolicy(__int64 a1)
{
  if ( dword_140FC4244 != 1
    && (MiFlags & 0x4000) != 0
    && (!*(_DWORD *)(a1 + 17748) || *(_QWORD *)(a1 + 18512) >= 0xED800uLL || dword_140FC4244 == 2) )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 4), 8u);
  }
}
