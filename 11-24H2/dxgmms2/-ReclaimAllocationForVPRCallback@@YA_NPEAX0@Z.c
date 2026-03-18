/*
 * XREFs of ?ReclaimAllocationForVPRCallback@@YA_NPEAX0@Z @ 0x14009E860
 * Callers:
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1400C1A1C (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?NotifyAllocationReclaimed@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N@Z @ 0x1400E08B0 (-NotifyAllocationReclaimed@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N@Z.c)
 */

char __fastcall ReclaimAllocationForVPRCallback(void *a1, struct VIDMM_PHYSICAL_ALLOC *a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rbx
  VIDMM_PHYSICAL_ADAPTER *v5; // rdi

  if ( a2 )
  {
    v3 = (_QWORD *)*((_QWORD *)a2 + 8);
    v4 = *(_QWORD *)a2;
    v5 = (VIDMM_PHYSICAL_ADAPTER *)v3[4];
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD, _QWORD))(*v3 + 24LL))(
      v3,
      *(_QWORD *)a2,
      *((_QWORD *)a2 + 10),
      *((_QWORD *)a2 + 2),
      **(_QWORD **)(*(_QWORD *)a2 + 352LL));
    *((_QWORD *)a2 + 10) = 0LL;
    *(_DWORD *)(v4 + 72) = 1;
    VIDMM_PHYSICAL_ADAPTER::NotifyAllocationReclaimed(v5, a2, 0);
  }
  return 1;
}
