/*
 * XREFs of VidMmAllocateFenceStorageSlot @ 0x1400FA270
 * Callers:
 *     VidSchCreateSyncObject @ 0x1400F9A30 (VidSchCreateSyncObject.c)
 * Callees:
 *     ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@@Z @ 0x1400276EC (-AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STOR.c)
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x140027804 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140032DD0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VidMmAllocateFenceStorageSlot(
        struct VIDMM_MONITORED_FENCE_STORAGE *a1,
        char a2,
        char a3,
        char a4,
        __int64 a5,
        char a6)
{
  struct VIDMM_PROCESS *v10; // r8
  struct VIDMM_PROCESS *v11; // rdx
  VIDMM_PROCESS_FENCE_STORAGE *v12; // rcx
  __int64 result; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx

  if ( !DXGPROCESS::GetCurrent() )
  {
    v11 = 0LL;
LABEL_6:
    v10 = 0LL;
    goto LABEL_7;
  }
  v10 = (struct VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 8);
  if ( v10 )
    v10 = (struct VIDMM_PROCESS *)*((_QWORD *)v10 + 1);
  v11 = v10;
  if ( !v10 || (*(_DWORD *)(*((_QWORD *)v10 + 4) + 408LL) & 0x100) == 0 )
    goto LABEL_6;
  if ( a2 )
    a3 = 1;
LABEL_7:
  if ( !a4 && !a2 && !a3 && v11 )
  {
    v12 = (VIDMM_PROCESS_FENCE_STORAGE *)*((_QWORD *)v11 + 5);
    goto LABEL_17;
  }
  if ( v10 && a2 && !a3 )
  {
    v15 = *((_QWORD *)v11 + 4);
    v16 = *(_DWORD *)(v15 + 408);
    if ( (v16 & 0x100) != 0 )
      v17 = *(_QWORD *)(v15 + 592);
    else
      v17 = v15 & -(__int64)((v16 & 0x80u) != 0);
    v18 = *(_QWORD *)(v17 + 64);
    if ( v18 )
      v18 = *(_QWORD *)(v18 + 8);
    v12 = *(VIDMM_PROCESS_FENCE_STORAGE **)(v18 + 40);
    *((_BYTE *)v12 + 128) = 1;
    goto LABEL_11;
  }
  v12 = VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage;
  if ( a2 )
  {
    if ( !a3 )
    {
LABEL_11:
      v10 = 0LL;
LABEL_12:
      LODWORD(result) = VIDMM_PROCESS_FENCE_STORAGE::AllocateSharedFenceStorageSlot((KSPIN_LOCK *)v12, a1, v10);
      goto LABEL_19;
    }
LABEL_24:
    v12 = VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage;
    goto LABEL_12;
  }
  if ( a3 )
    goto LABEL_24;
LABEL_17:
  if ( *((_BYTE *)v12 + 128) )
    goto LABEL_11;
  LODWORD(result) = VIDMM_PROCESS_FENCE_STORAGE::AllocateFenceStorageSlot((KSPIN_LOCK *)v12, a1);
LABEL_19:
  if ( (int)result >= 0 )
  {
    v14 = (_QWORD *)*((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 4) = a5;
    if ( a6 )
      *v14 = a5;
    else
      *(_DWORD *)v14 = a5;
  }
  return (unsigned int)result;
}
