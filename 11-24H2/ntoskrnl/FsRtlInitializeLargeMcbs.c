/*
 * XREFs of FsRtlInitializeLargeMcbs @ 0x140C18FC4
 * Callers:
 *     FsRtlInitSystem @ 0x140C18D7C (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x14045FB10 (ExInitializeNPagedLookasideListInternal.c)
 *     ExInitializePagedLookasideList @ 0x140A94D10 (ExInitializePagedLookasideList.c)
 */

void FsRtlInitializeLargeMcbs()
{
  ExInitializePagedLookasideList(&FsRtlFirstPagedMappingLookasideList, 0LL, 0LL, 0, 0x78uLL, 0x6D695346u, 4u);
  ExInitializeNPagedLookasideListInternal(
    (__int64)&FsRtlFirstNonPagedMappingLookasideList,
    0LL,
    0LL,
    512,
    120,
    1835619142,
    4,
    0);
  ExInitializeNPagedLookasideListInternal((__int64)&FsRtlFastMutexLookasideList, 0LL, 0LL, 512, 56, 1835422534, 32, 0);
}
