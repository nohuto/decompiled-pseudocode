/*
 * XREFs of ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x140096780
 * Callers:
 *     VidMmEvictAllocation @ 0x14004C570 (VidMmEvictAllocation.c)
 * Callees:
 *     ?WaitForFence@VIDMM_GLOBAL@@QEAAXPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x14003AE5C (-WaitForFence@VIDMM_GLOBAL@@QEAAXPEAU_VIDSCH_SYNC_OBJECT@@_K@Z.c)
 *     ?VidMmiAllocationMeetsCriteria@@YA_NPEAUVIDMM_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x140096AE4 (-VidMmiAllocationMeetsCriteria@@YA_NPEAUVIDMM_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z.c)
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1400F58C4 (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmEvictAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_MULTI_ALLOC *a2,
        struct VIDMM_MULTI_GLOBAL_ALLOC *a3,
        struct _D3DKMT_EVICTION_CRITERIA *a4)
{
  struct VIDMM_GLOBAL_ALLOC *v7; // rdi
  struct VIDMM_DEVICE *v8; // rdx
  __int64 v9; // rdx
  struct VIDMM_MULTI_GLOBAL_ALLOC *i; // rbx
  int *j; // rdi
  int *v12; // rbp
  struct VIDMM_DEVICE *v13; // rdx
  __int64 v14; // rdx
  unsigned __int64 v15; // [rsp+68h] [rbp+10h] BYREF
  struct VIDMM_MULTI_ALLOC *v16; // [rsp+70h] [rbp+18h] BYREF

  if ( a2 )
  {
    v7 = **(struct VIDMM_GLOBAL_ALLOC ***)a2;
    if ( VidMmiAllocationMeetsCriteria(v7, a4) && *((int *)a2 + 38) > 0 )
    {
      v8 = (struct VIDMM_DEVICE *)*((_QWORD *)a2 + 1);
      v15 = 0LL;
      v16 = a2;
      VIDMM_GLOBAL::Evict(this, v8, &v16, 1u, 0, &v15);
      v9 = *(_QWORD *)(32LL * (*((_DWORD *)v7 + 6) & 0x3F) + *(_QWORD *)(*((_QWORD *)a2 + 1) + 80LL));
      VIDMM_GLOBAL::WaitForFence(this, *(struct _VIDSCH_SYNC_OBJECT **)(v9 + 88), *(_QWORD *)(v9 + 64));
    }
  }
  else if ( a3 )
  {
    if ( VidMmiAllocationMeetsCriteria(a3, a4) )
    {
      for ( i = (struct VIDMM_MULTI_GLOBAL_ALLOC *)*((_QWORD *)a3 + 14);
            i != (struct VIDMM_MULTI_GLOBAL_ALLOC *)((char *)a3 + 112);
            i = *(struct VIDMM_MULTI_GLOBAL_ALLOC **)i )
      {
        for ( j = (int *)*((_QWORD *)i - 2); j != (int *)((char *)i - 16); j = *(int **)j )
        {
          v12 = j - 10;
          if ( j[28] > 0 )
          {
            v13 = (struct VIDMM_DEVICE *)*((_QWORD *)v12 + 1);
            v15 = 0LL;
            v16 = (struct VIDMM_MULTI_ALLOC *)(j - 10);
            VIDMM_GLOBAL::Evict(this, v13, &v16, 1u, 0, &v15);
            v14 = *(_QWORD *)(32LL * (*((_DWORD *)a3 + 6) & 0x3F) + *(_QWORD *)(*((_QWORD *)v12 + 1) + 80LL));
            VIDMM_GLOBAL::WaitForFence(this, *(struct _VIDSCH_SYNC_OBJECT **)(v14 + 88), *(_QWORD *)(v14 + 64));
          }
        }
      }
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 6873;
  }
}
