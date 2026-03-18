/*
 * XREFs of ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C4888
 * Callers:
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1400C4570 (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEA.c)
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1400C5C60 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAA_NPEBU_MDL@@_KPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C4A28 (-TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAA_NPEBU_MDL@@_KPEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_MDL_RANGE::Lock(
        VIDMM_MDL_RANGE *this,
        void *a2,
        enum _LOCK_OPERATION a3,
        struct VIDMM_SEGMENT *a4,
        const struct VIDMM_GLOBAL_ALLOC *a5)
{
  char v7; // si
  struct _MDL *Mdl; // rax
  unsigned __int64 v9; // r8
  __int64 v11; // rcx

  v7 = 0;
  Mdl = IoAllocateMdl(a2, *((_DWORD *)this + 4) - *((_DWORD *)this + 2), 0, 0, 0LL);
  *(_QWORD *)this = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    v7 = 1;
    if ( !a4 || VIDMM_SEGMENT::TrackAndValidatePagesOnLock(a4, *(const struct _MDL **)this, v9, a5) )
      return 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 5756;
    DxgkLogInternalTriageEvent(v11, 262145LL);
  }
  if ( *(_QWORD *)this )
  {
    if ( v7 )
      MmUnlockPages(*(PMDL *)this);
    IoFreeMdl(*(PMDL *)this);
    *(_QWORD *)this = 0LL;
  }
  return 3223191809LL;
}
