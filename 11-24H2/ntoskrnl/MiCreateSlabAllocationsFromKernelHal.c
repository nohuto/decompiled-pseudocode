/*
 * XREFs of MiCreateSlabAllocationsFromKernelHal @ 0x140C593CC
 * Callers:
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 * Callees:
 *     MiActOnLargeKernelHalPages @ 0x1407E79F8 (MiActOnLargeKernelHalPages.c)
 */

__int64 MiCreateSlabAllocationsFromKernelHal()
{
  __int64 i; // rbx
  __int64 result; // rax

  for ( i = 0LL; !(_DWORD)i; i = 1LL )
  {
    result = MiActOnLargeKernelHalPages(*(_QWORD *)(qword_140E2D840[i] + 48), (__int64)MiCreateKernelHalSlabRange, 0);
    if ( (int)result < 0 )
      return result;
  }
  if ( (MiFlags & 0x4000) != 0 )
    _InterlockedOr(&dword_140E38C04, 8u);
  return 0LL;
}
