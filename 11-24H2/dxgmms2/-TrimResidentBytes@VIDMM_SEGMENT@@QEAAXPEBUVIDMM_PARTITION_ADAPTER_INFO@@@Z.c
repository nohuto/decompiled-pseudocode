/*
 * XREFs of ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1400F655C
 * Callers:
 *     ?TrimResidentBytes@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x14009D404 (-TrimResidentBytes@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ?PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAUVIDMM_ALLOC@@I_K@Z @ 0x1400EC39C (-PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?NotifyAllocationReclaimed@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N@Z @ 0x1400E08B0 (-NotifyAllocationReclaimed@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N@Z.c)
 *     ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1400F6AC0 (-VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 */

void __fastcall VIDMM_SEGMENT::TrimResidentBytes(
        VIDMM_PHYSICAL_ADAPTER **this,
        const struct VIDMM_PARTITION_ADAPTER_INFO *a2)
{
  struct VIDMM_PHYSICAL_ALLOC **v4; // rdx
  VIDMM_SEGMENT *v5; // rdi
  const struct VIDMM_PARTITION_ADAPTER_INFO *v6; // rcx
  __int64 v7; // rax
  struct VIDMM_PHYSICAL_ALLOC *v8; // rbx
  VIDMM_GLOBAL *v9; // rcx

  if ( ((_DWORD)this[13] & 0x1001) != 0 && *(_QWORD *)(*(_QWORD *)a2 + 64LL) > *((_QWORD *)a2 + 2) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v7 = WdLogNewEntry5_WdTrace(this);
      *(_QWORD *)(v7 + 24) = *((_QWORD *)a2 + 2);
      *(_QWORD *)(v7 + 32) = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
      WdLogGlobalForLineNumber = 26316;
    }
    v5 = this[27];
    while ( v5 != (VIDMM_SEGMENT *)(this + 27) )
    {
      v4 = (struct VIDMM_PHYSICAL_ALLOC **)((char *)v5 - 264);
      v5 = *(VIDMM_SEGMENT **)v5;
      v6 = v4[44];
      if ( v6 == a2 )
      {
        v8 = *v4;
        (*((void (__fastcall **)(VIDMM_PHYSICAL_ADAPTER **, struct VIDMM_PHYSICAL_ALLOC **, _QWORD, _QWORD, _QWORD))*this
         + 3))(
          this,
          v4,
          *((_QWORD *)*v4 + 10),
          *((_QWORD *)*v4 + 2),
          *(_QWORD *)v6);
        VIDMM_PHYSICAL_ADAPTER::NotifyAllocationReclaimed(this[4], v8, 0);
        if ( VIDMM_GLOBAL::VerifyGlobalResidentLimit(v9, a2) )
          break;
      }
    }
  }
}
