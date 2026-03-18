/*
 * XREFs of ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400F6590
 * Callers:
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1400CE558 (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1400F58C4 (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 *     ?CleanupAllocationCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400F68E0 (-CleanupAllocationCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_DEVICE::NotifyAllocationEvicted(VIDMM_DEVICE *this, __int64 ***a2)
{
  __int64 *v4; // r11
  unsigned int v5; // r9d
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  VIDMM_DEVICE *v14; // rax
  struct VIDMM_ALLOC **v15; // rdx
  VIDMM_DEVICE **v16; // rcx
  char *v17; // rcx
  VIDMM_DEVICE **v18; // rdx

  v4 = **a2;
  v5 = *((_DWORD *)v4 + 6);
  if ( (v5 & 0x40) == 0 || a2[1][1][37] == *(_QWORD *)v4[42] )
  {
    v6 = *v4;
    v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 304 * (v4[3] & 0x3F);
    if ( (*((_BYTE *)a2 + 36) & 1) != 0 && (v5 & 0x1E0000) == 0x40000 )
      v8 = 0LL;
    else
      v8 = (v5 >> 17) & 0xF;
    v9 = *(_QWORD *)(v6 + 16);
    v10 = *(_QWORD *)(v7 + 8 * v8 + 80);
    if ( v9 > v10 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 68LL, v7 + 8, v10, v9);
      WdLogGlobalForLineNumber = 195;
    }
    else
    {
      *(_QWORD *)(v7 + 8 * v8 + 80) = v10 - v9;
      v11 = *(_QWORD *)(v6 + 16);
      v12 = (*((_DWORD *)v4 + 6) >> 13) & 0xF;
      v13 = *(_QWORD *)(v7 + 8 * v12 + 144);
      if ( v11 <= v13 )
      {
        *(_QWORD *)(v7 + 8 * v12 + 144) = v13 - v11;
        goto LABEL_8;
      }
    }
    g_DxgMmsBugcheckExportIndex = 1;
    v14 = (VIDMM_DEVICE *)WdLogSingleEntry5(0LL, 270LL, 68LL, v7 + 8, v13, v11);
    WdLogGlobalForLineNumber = 195;
    goto LABEL_14;
  }
LABEL_8:
  v14 = (VIDMM_DEVICE *)(a2 + 14);
  v15 = (struct VIDMM_ALLOC **)a2[14];
  if ( v15[1] != (struct VIDMM_ALLOC *)(a2 + 14)
    || (v16 = (VIDMM_DEVICE **)a2[15], *v16 != v14)
    || (*v16 = (VIDMM_DEVICE *)v15,
        v15[1] = (struct VIDMM_ALLOC *)v16,
        v17 = (char *)this + 168,
        v18 = (VIDMM_DEVICE **)*((_QWORD *)this + 22),
        *v18 != (VIDMM_DEVICE *)((char *)this + 168)) )
  {
    __fastfail(3u);
  }
LABEL_14:
  *(_QWORD *)v14 = v17;
  *((_QWORD *)v14 + 1) = v18;
  *v18 = v14;
  *((_QWORD *)v17 + 1) = v14;
}
