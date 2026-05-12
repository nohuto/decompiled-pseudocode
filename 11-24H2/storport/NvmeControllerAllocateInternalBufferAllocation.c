/*
 * XREFs of NvmeControllerAllocateInternalBufferAllocation @ 0x1400728A8
 * Callers:
 *     NvmeControllerAllocateInternalBuffer @ 0x1400EA7C0 (NvmeControllerAllocateInternalBuffer.c)
 * Callees:
 *     RaidDmaAllocateUncachedExtension @ 0x14006B0F0 (RaidDmaAllocateUncachedExtension.c)
 *     RaidDmaGetAdapterInfo @ 0x14006B154 (RaidDmaGetAdapterInfo.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     RaidInitializeDma @ 0x140183F38 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x1401840CC (RaidIsDmaInitialized.c)
 */

__int64 __fastcall NvmeControllerAllocateInternalBufferAllocation(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebp
  __int64 v7; // rcx
  __int64 result; // rax
  int v9; // [rsp+40h] [rbp-68h] BYREF
  int v10; // [rsp+44h] [rbp-64h] BYREF
  char v11; // [rsp+50h] [rbp-58h]

  v6 = 0x80000000;
  memset_0(&v10, 0, 0x54uLL);
  if ( *(_DWORD *)(a2 + 1640) )
    return 0LL;
  if ( !(unsigned __int8)RaidIsDmaInitialized(a1 + 1144) )
  {
    result = RaidInitializeDma(v7, *(_QWORD *)(a1 + 32), a1 + 176);
    if ( (int)result < 0 )
      return result;
    v9 = 1;
    if ( (int)RaidDmaGetAdapterInfo((int *)(a1 + 1144), (__int64)&v9) >= 0 && (v11 & 2) != 0 )
      *(_DWORD *)(a1 + 976) |= 8u;
  }
  v9 = 1;
  if ( (int)RaidDmaGetAdapterInfo((int *)(a1 + 1144), (__int64)&v9) >= 0 && (v11 & 2) != 0 )
    *(_DWORD *)(a1 + 976) |= 8u;
  if ( !a3 )
    goto LABEL_22;
  if ( (*(_DWORD *)(a3 + 220) & 4) != 0 )
    v6 = *(_DWORD *)(a1 + 1008);
  if ( *(_BYTE *)(a3 + 144) == 2 )
  {
    if ( *(_QWORD *)(a1 + 1360) < 0x100000000uLL )
      *(_QWORD *)(a1 + 1360) = -1LL;
    *(_QWORD *)(a1 + 1376) = 0x100000000LL;
    goto LABEL_21;
  }
  if ( *(_BYTE *)(a3 + 144) == 3 )
  {
    if ( *(_QWORD *)(a1 + 1360) < 0x100000000uLL )
      *(_QWORD *)(a1 + 1360) = -1LL;
    *(_QWORD *)(a1 + 1376) = 0LL;
LABEL_21:
    *(_QWORD *)(a1 + 1392) = -1LL;
  }
LABEL_22:
  result = RaidDmaAllocateUncachedExtension(
             a1 + 1144,
             0x2000,
             *(_QWORD *)(a1 + 1368),
             *(_QWORD *)(a1 + 1360),
             *(_QWORD *)(a1 + 1376),
             *(_DWORD *)(a1 + 1352),
             v6,
             a2 + 1624);
  if ( (int)result >= 0 )
    return 0LL;
  if ( v6 != 0x80000000 )
  {
    result = RaidDmaAllocateUncachedExtension(
               a1 + 1144,
               0x2000,
               *(_QWORD *)(a1 + 1368),
               *(_QWORD *)(a1 + 1360),
               *(_QWORD *)(a1 + 1376),
               *(_DWORD *)(a1 + 1352),
               0x80000000,
               a2 + 1624);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
