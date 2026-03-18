/*
 * XREFs of CommitVirtualAddressRangesInList @ 0x140092E24
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400B15E0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140037894 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?IteratePhysicalMemoryRanges@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEAU1@0PEBUVIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC@@PEAX@Z3II@Z @ 0x1400AD980 (-IteratePhysicalMemoryRanges@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEAU1@0P.c)
 */

__int64 __fastcall CommitVirtualAddressRangesInList(_QWORD **a1, VIDMM_PHYSICAL_ADAPTER *a2, _QWORD *a3)
{
  __int64 v3; // rsi
  int v7; // ecx
  _QWORD *i; // rbx
  _QWORD *v9; // rdx
  int v10; // r8d
  struct VIDMM_PHYSICAL_ALLOC ****VidMmAllocFromOwner; // rax
  int (*v12)(struct VIDMM_PHYSICAL_ADAPTER *, struct VIDMM_PHYSICAL_ALLOC *, const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *, void *); // r8
  unsigned int v14; // [rsp+20h] [rbp-18h]
  unsigned int v15; // [rsp+28h] [rbp-10h]

  v3 = *((_QWORD *)a2 + 6);
  v7 = 0;
  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    if ( (v9 = i - 4, v10 = *((_DWORD *)i + 10), (v10 & 0x400) == 0) && (*(_BYTE *)(v3 + 40936) & 2) != 0
      || (v10 & 0x800) == 0 && (*(_BYTE *)(v3 + 40936) & 0xC) != 0 )
    {
      a3[2] = v9;
      VidMmAllocFromOwner = (struct VIDMM_PHYSICAL_ALLOC ****)GetVidMmAllocFromOwner(v9[9] & 0xF, v9[8]);
      v7 = VIDMM_PHYSICAL_ADAPTER::IteratePhysicalMemoryRanges(a2, ***VidMmAllocFromOwner, v12, a3, v14, v15);
      if ( v7 < 0 )
        break;
    }
  }
  return (unsigned int)v7;
}
