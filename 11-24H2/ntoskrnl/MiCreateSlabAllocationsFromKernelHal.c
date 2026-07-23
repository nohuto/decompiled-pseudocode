/*
 * XREFs of MiCreateSlabAllocationsFromKernelHal @ 0x140C5B55C
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     MiActOnLargeKernelHalPages @ 0x1407E7FC8 (MiActOnLargeKernelHalPages.c)
 */

__int64 MiCreateSlabAllocationsFromKernelHal()
{
  __int64 i; // rbx
  __int64 result; // rax

  for ( i = 0LL; !(_DWORD)i; i = 1LL )
  {
    result = MiActOnLargeKernelHalPages(*(char **)(qword_140E2D980[i] + 48));
    if ( (int)result < 0 )
      return result;
  }
  if ( (MiFlags & 0x4000) != 0 )
    _InterlockedOr(&dword_140E38D44, 8u);
  return 0LL;
}
