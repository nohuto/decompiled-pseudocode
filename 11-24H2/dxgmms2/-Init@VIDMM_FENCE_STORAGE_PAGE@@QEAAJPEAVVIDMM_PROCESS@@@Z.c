/*
 * XREFs of ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1400A8610
 * Callers:
 *     ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@@Z @ 0x14001C28C (-AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STOR.c)
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x14001C3A4 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140031A2C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ @ 0x1400A89B8 (-FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1400A8C34 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1400C43B0 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 *     ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x1400C6A4C (-GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ.c)
 *     ?GetVmwpProcess@VIDMM_PROCESS@@QEAAPEAV1@XZ @ 0x14010A570 (-GetVmwpProcess@VIDMM_PROCESS@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::Init(VIDMM_FENCE_STORAGE_PAGE *this, struct VIDMM_PROCESS *a2)
{
  int v4; // esi
  void *CurrentPartitionHandle; // rcx
  _QWORD *v6; // rbx
  int v7; // esi
  struct _MDL *Mdl; // rax
  __int64 v9; // rax
  __int64 v11; // rcx
  VIDMM_PROCESS *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  struct VIDMM_PROCESS *VmwpProcess; // rbx
  _QWORD *v17; // rdi
  char *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v23[80]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v24; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v25; // [rsp+C8h] [rbp+20h] BYREF

  v25 = 0LL;
  v24 = 4096LL;
  v4 = 0x8000000;
  CurrentPartitionHandle = 0LL;
  if ( *((VIDMM_PROCESS_FENCE_STORAGE **)this + 21) != VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage )
  {
    v4 = 134479872;
    CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
  }
  v6 = (_QWORD *)((char *)this + 104);
  v7 = MmCreateSection((char *)this + 104, 0LL, 0LL, &v24, 4, v4, CurrentPartitionHandle, 0LL);
  if ( v7 < 0 )
  {
    *v6 = 0LL;
    goto LABEL_14;
  }
  v22 = 4096LL;
  v7 = MmMapViewInSystemSpaceEx(*v6, (char *)this + 112, &v22, &v25, 0LL);
  if ( v7 >= 0 )
  {
    Mdl = VidMmiAllocateMdl(*((PVOID *)this + 14), 0x1000uLL);
    *((_QWORD *)this + 15) = Mdl;
    if ( !Mdl )
    {
      _InterlockedAdd((volatile signed __int32 *)&gVidMmLowResourceAccumulated, 1u);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 327;
      DxgkLogInternalTriageEvent(v11, 262145LL);
      v7 = -1073741801;
      goto LABEL_14;
    }
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    *((_BYTE *)this + 136) = 1;
    v9 = *((_QWORD *)this + 21);
    if ( *(_BYTE *)(v9 + 128) )
    {
      if ( !a2 )
      {
        v12 = *(VIDMM_PROCESS **)v9;
LABEL_17:
        *((_QWORD *)this + 4) = v12;
        v7 = VIDMM_PROCESS::MapHostAddressesToGuest(
               v12,
               *((struct _MDL **)this + 15),
               0x1000uLL,
               (void **)this + 19,
               (unsigned __int64 *)this + 18);
        if ( v7 >= 0 )
        {
          v14 = *((_QWORD *)this + 21);
          if ( !*(_BYTE *)(v14 + 128) )
          {
            if ( *(_QWORD *)v14 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 404;
              DxgkLogInternalTriageEvent(v15, 262146LL);
            }
            *(_BYTE *)(*((_QWORD *)this + 21) + 129LL) = 1;
            *((_BYTE *)this + 160) = 1;
            VmwpProcess = VIDMM_PROCESS::GetVmwpProcess(*((VIDMM_PROCESS **)this + 4));
            DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
              (DXGAUTOPUSHLOCKEXCLUSIVE *)v23,
              (struct _KTHREAD **)VmwpProcess + 8);
            v17 = (_QWORD *)((char *)this + 16);
            v18 = (char *)VmwpProcess + 48;
            v19 = *(_QWORD *)v18;
            if ( *(char **)(*(_QWORD *)v18 + 8LL) != v18 )
              __fastfail(3u);
            *v17 = v19;
            v17[1] = v18;
            *(_QWORD *)(v19 + 8) = v17;
            *(_QWORD *)v18 = v17;
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
          }
          return 0LL;
        }
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 392;
        DxgkLogInternalTriageEvent(v13, 0x40000LL);
        goto LABEL_14;
      }
    }
    else if ( !a2 )
    {
      if ( *((_QWORD *)this + 19) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 417;
        DxgkLogInternalTriageEvent(v20, 262146LL);
      }
      if ( *((_QWORD *)this + 18) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 418;
        DxgkLogInternalTriageEvent(v21, 262146LL);
      }
      return 0LL;
    }
    v12 = VIDMM_PROCESS::GetVmwpProcess(a2);
    goto LABEL_17;
  }
LABEL_14:
  VIDMM_FENCE_STORAGE_PAGE::FreeStorage(this);
  return (unsigned int)v7;
}
