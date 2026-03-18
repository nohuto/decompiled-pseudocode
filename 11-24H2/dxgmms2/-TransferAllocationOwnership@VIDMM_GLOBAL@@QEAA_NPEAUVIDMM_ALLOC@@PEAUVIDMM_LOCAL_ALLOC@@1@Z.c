/*
 * XREFs of ?TransferAllocationOwnership@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x1400D9AD8
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1400D9BB4 (-TransferOwnershipToProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEA.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1400DA3A4 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLO.c)
 */

// write access to const memory has been detected, the output may be wrong!
bool __fastcall VIDMM_GLOBAL::TransferAllocationOwnership(
        VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC ***a2,
        struct VIDMM_LOCAL_ALLOC *a3,
        struct VIDMM_LOCAL_ALLOC *a4)
{
  struct VIDMM_GLOBAL_ALLOC *v4; // rbx
  struct VIDMM_GLOBAL_ALLOC *v5; // rax
  __int64 v6; // rax

  v4 = **a2;
  if ( a4 )
  {
    a4 = VIDMM_GLOBAL::TransferOwnershipToProcess(this, **a2, a3, a4);
  }
  else
  {
    if ( *((_DWORD *)v4 + 19) && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 195;
      JUMPOUT(0x1400D9BABLL);
    }
    v5 = a2[2][5];
    if ( v5 )
    {
      v6 = *((_QWORD *)v5 + 7);
      if ( v6 )
      {
        if ( *(_DWORD *)(v6 + 64) )
        {
          if ( (**((_DWORD **)v4 + 49) & 0x10) == 0 )
          {
            a4 = VIDMM_GLOBAL::TransferOwnershipToSystemProcess(this, **a2, a3);
            *((_DWORD *)v4 + 8) = *((_DWORD *)v4 + 8) & 0xFFFFFFFB | (a4 != 0LL ? 4 : 0);
          }
        }
        else
        {
          *((_DWORD *)v4 + 8) |= 1u;
        }
      }
    }
  }
  *((_QWORD *)v4 + 6) = a4;
  return a4 != 0LL;
}
