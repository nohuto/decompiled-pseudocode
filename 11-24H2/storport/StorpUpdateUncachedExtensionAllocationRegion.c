/*
 * XREFs of StorpUpdateUncachedExtensionAllocationRegion @ 0x140075D68
 * Callers:
 *     StorPortGetUncachedExtension @ 0x140073D40 (StorPortGetUncachedExtension.c)
 * Callees:
 *     RaidDmaAllocateUncachedExtension @ 0x14006B0F0 (RaidDmaAllocateUncachedExtension.c)
 *     StorFreeContiguousMemory @ 0x140184F04 (StorFreeContiguousMemory.c)
 */

__int64 __fastcall StorpUpdateUncachedExtensionAllocationRegion(__int64 a1, int *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // edi
  __int64 v4; // r14
  int UncachedExtension; // esi
  unsigned int v8; // edi
  __int64 v9; // r8
  __int64 v10; // rcx

  v2 = a1 + 912;
  v3 = 0x80000000;
  v4 = a1 + 880;
  do
  {
    UncachedExtension = RaidDmaAllocateUncachedExtension(
                          v4,
                          v3,
                          *(_QWORD *)(a1 + 4296),
                          *(_QWORD *)(a1 + 4288),
                          *(_QWORD *)(a1 + 4304),
                          *(_DWORD *)(a1 + 4280),
                          *a2,
                          v2);
    if ( UncachedExtension >= 0 )
    {
      v10 = *(_QWORD *)(a1 + 920);
      *(_QWORD *)(a1 + 4296) = v10 & 0xFFFFFFFF00000000uLL;
      *(_QWORD *)(a1 + 4288) = v10 | 0xFFFFFFFFLL;
      goto LABEL_11;
    }
    v3 >>= 1;
  }
  while ( v3 >= 0x8000000 );
  if ( *a2 == 0x80000000 )
    return (unsigned int)UncachedExtension;
  v8 = 0x80000000;
  while ( 1 )
  {
    UncachedExtension = RaidDmaAllocateUncachedExtension(
                          v4,
                          v8,
                          *(_QWORD *)(a1 + 4296),
                          *(_QWORD *)(a1 + 4288),
                          *(_QWORD *)(a1 + 4304),
                          *(_DWORD *)(a1 + 4280),
                          0x80000000,
                          v2);
    if ( UncachedExtension >= 0 )
      break;
    v8 >>= 1;
    if ( v8 < 0x8000000 )
      return (unsigned int)UncachedExtension;
  }
  v9 = *(_QWORD *)(a1 + 920);
  *a2 = 0x80000000;
  *(_QWORD *)(a1 + 4296) = v9 & 0xFFFFFFFF00000000uLL;
  *(_QWORD *)(a1 + 4288) = v9 | 0xFFFFFFFFLL;
LABEL_11:
  StorFreeContiguousMemory(v4, v2);
  return (unsigned int)UncachedExtension;
}
