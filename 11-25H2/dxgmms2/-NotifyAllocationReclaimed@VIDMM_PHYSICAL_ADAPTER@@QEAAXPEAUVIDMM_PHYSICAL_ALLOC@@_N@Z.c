/*
 * XREFs of ?NotifyAllocationReclaimed@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N@Z @ 0x1400DC6E0
 * Callers:
 *     ?ReclaimAllocationForVPRCallback@@YA_NPEAX0@Z @ 0x14009CFB0 (-ReclaimAllocationForVPRCallback@@YA_NPEAX0@Z.c)
 *     NotifyAllocationReclaimed @ 0x1400DC5A0 (NotifyAllocationReclaimed.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400DC5B8 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1400F8594 (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER::NotifyAllocationReclaimed(
        VIDMM_PHYSICAL_ADAPTER *this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        unsigned __int8 a3)
{
  unsigned int v3; // ebp
  __int64 v6; // rbx
  char *v7; // rcx
  char *v8; // rax
  char **v9; // rdx

  v3 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = *(_QWORD *)a2;
    WdLogGlobalForLineNumber = 4115;
  }
  v6 = *(_QWORD *)a2;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 8) + 32LL))(
    *((_QWORD *)a2 + 8),
    *(_QWORD *)a2,
    v3);
  v7 = (char *)this + 1656;
  *(_WORD *)(*(_QWORD *)(v6 + 376) + 10LL) = 0;
  *(_QWORD *)(*(_QWORD *)(v6 + 376) + 40LL) = 0LL;
  *((_QWORD *)a2 + 10) = 0LL;
  *(_DWORD *)(v6 + 72) = 0;
  v8 = (char *)a2 + 176;
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 8) + 104LL) & 0x1001) != 0 )
    v7 = (char *)this + 1672;
  v9 = (char **)*((_QWORD *)v7 + 1);
  if ( *v9 != v7 )
    __fastfail(3u);
  *(_QWORD *)v8 = v7;
  *((_QWORD *)a2 + 23) = v9;
  *v9 = v8;
  *((_QWORD *)v7 + 1) = v8;
}
