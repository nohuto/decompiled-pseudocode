/*
 * XREFs of StorPortGetUncachedExtension @ 0x140073D40
 * Callers:
 *     StorPortGetUncachedExtensionVrfy @ 0x1401C13A0 (StorPortGetUncachedExtensionVrfy.c)
 * Callees:
 *     StorAllocateContiguousIoResources @ 0x14001EE28 (StorAllocateContiguousIoResources.c)
 *     RaMiniportGetRaidAdapter @ 0x140036868 (RaMiniportGetRaidAdapter.c)
 *     MiniportGetNvmeAdapter @ 0x140053A10 (MiniportGetNvmeAdapter.c)
 *     RaidDmaAllocateUncachedExtension @ 0x14006B0F0 (RaidDmaAllocateUncachedExtension.c)
 *     NVMeGetUncachedExtensionEx @ 0x140072684 (NVMeGetUncachedExtensionEx.c)
 *     StorpUpdateUncachedExtensionAllocationRegion @ 0x140075D68 (StorpUpdateUncachedExtensionAllocationRegion.c)
 *     RaidInitializeDma @ 0x140183F38 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x1401840CC (RaidIsDmaInitialized.c)
 */

__int64 __fastcall StorPortGetUncachedExtension(__int64 a1, __int64 a2, int a3)
{
  _BYTE *v3; // rcx
  int v4; // esi
  __int64 NvmeAdapter; // rax
  __int64 v8; // rdx
  int v9; // r8d
  __int64 v10; // rdi
  __int64 RaidAdapter; // rax
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rcx
  unsigned __int64 v16; // r10
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // rax
  unsigned int v25; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(_BYTE **)(a1 - 16);
  v4 = 0x80000000;
  v25 = 0x80000000;
  if ( (v3[248] & 1) == 0 )
  {
    RaidAdapter = RaMiniportGetRaidAdapter(v3);
    v13 = RaidAdapter;
    if ( !RaidAdapter )
      return 0LL;
    if ( *(_DWORD *)(RaidAdapter + 928) )
      return *(_QWORD *)(v13 + 912);
    v14 = RaidAdapter + 880;
    if ( !(unsigned __int8)RaidIsDmaInitialized(RaidAdapter + 880)
      && (int)RaidInitializeDma(v15, *(_QWORD *)(v13 + 32), v13 + 384) < 0 )
    {
      return 0LL;
    }
    if ( a2 )
    {
      if ( (*(_DWORD *)(a2 + 220) & 4) != 0 )
      {
        v4 = *(_DWORD *)(v13 + 4656);
        v25 = v4;
      }
      if ( *(_BYTE *)(a2 + 144) == 2 )
      {
        if ( *(_QWORD *)(v13 + 4288) < 0x100000000uLL )
          *(_QWORD *)(v13 + 4288) = -1LL;
        *(_QWORD *)(v13 + 4304) = 0x100000000LL;
      }
      else
      {
        if ( *(_BYTE *)(a2 + 144) != 3 )
        {
          if ( *(_BYTE *)(a2 + 144) == 4 )
          {
            v16 = *(_QWORD *)(v13 + 4288);
            v17 = v16;
            if ( v16 < 0x100000000LL )
            {
              *(_QWORD *)(v13 + 4288) = -1LL;
              v16 = -1LL;
              v17 = -1LL;
            }
            v18 = v17;
            if ( HighestPhysicalAddress != -1 )
            {
              if ( (_DWORD)HighestPhysicalAddress )
              {
                if ( (unsigned __int64)HighestPhysicalAddress > 0x100000000LL )
                {
                  v19 = HighestPhysicalAddress & 0xFFFFFFFF00000000uLL;
                  if ( v16 >= (HighestPhysicalAddress & 0xFFFFFFFF00000000uLL) )
                  {
                    v18 = v19 - 1;
                    *(_QWORD *)(v13 + 4288) = v19 - 1;
                    v20 = (v19 - 1) & 0xFFFFFFFF00000000uLL;
                    if ( *(_QWORD *)(v13 + 4296) > v20 )
                      *(_QWORD *)(v13 + 4296) = v20;
                  }
                }
              }
            }
            *(_QWORD *)(v13 + 4304) = 0x100000000LL;
            *(_QWORD *)(v13 + 4320) = v18;
            StorpUpdateUncachedExtensionAllocationRegion(v13, &v25);
            v4 = v25;
          }
          goto LABEL_31;
        }
        if ( *(_QWORD *)(v13 + 4288) < 0x100000000uLL )
          *(_QWORD *)(v13 + 4288) = -1LL;
        *(_QWORD *)(v13 + 4304) = 0LL;
      }
      *(_QWORD *)(v13 + 4320) = -1LL;
    }
LABEL_31:
    if ( (int)RaidDmaAllocateUncachedExtension(
                v14,
                a3,
                *(_QWORD *)(v13 + 4296),
                *(_QWORD *)(v13 + 4288),
                *(_QWORD *)(v13 + 4304),
                *(_DWORD *)(v13 + 4280),
                v4,
                v13 + 912) >= 0
      || v4 != 0x80000000
      && (int)RaidDmaAllocateUncachedExtension(
                v14,
                a3,
                *(_QWORD *)(v13 + 4296),
                *(_QWORD *)(v13 + 4288),
                *(_QWORD *)(v13 + 4304),
                *(_DWORD *)(v13 + 4280),
                0x80000000,
                v13 + 912) >= 0 )
    {
      if ( *(_BYTE *)(a2 + 144) == 4 )
      {
        v21 = *(_QWORD *)(v13 + 920);
        v22 = v21 | 0xFFFFFFFFLL;
        v23 = *(_QWORD *)(v13 + 4296) == 0LL;
        *(_QWORD *)(v13 + 4312) = v21 & 0xFFFFFFFF00000000uLL;
        if ( v23 )
          v21 &= 0xFFFFFFFF00000000uLL;
        *(_QWORD *)(v13 + 4320) = v22;
        *(_QWORD *)(v13 + 4296) = v21;
        *(_QWORD *)(v13 + 4288) = v22;
        if ( !*(_QWORD *)(v13 + 120) )
        {
          v24 = 316LL;
          if ( *(_DWORD *)v13 != 1314275652 )
            v24 = 524LL;
          *(_QWORD *)(v13 + 120) = StorAllocateContiguousIoResources(
                                     ((*(_DWORD *)(v24 + v13) + 7) & 0xFFFFFFF8) + 1184,
                                     v21,
                                     (_QWORD *)v13);
        }
      }
      return *(_QWORD *)(v13 + 912);
    }
    return 0LL;
  }
  NvmeAdapter = MiniportGetNvmeAdapter(v3);
  v10 = 0LL;
  if ( NvmeAdapter )
    return NVMeGetUncachedExtensionEx(NvmeAdapter, v8, v9);
  return v10;
}
