/*
 * XREFs of ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1400F6AC0
 * Callers:
 *     ?PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAUVIDMM_ALLOC@@I_K@Z @ 0x1400EC39C (-PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTR.c)
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1400F655C (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VIDMM_GLOBAL::VerifyGlobalResidentLimit(
        VIDMM_GLOBAL *this,
        const struct VIDMM_PARTITION_ADAPTER_INFO *a2)
{
  __int64 v4; // rax

  if ( *(_QWORD *)(*(_QWORD *)a2 + 64LL) <= *((_QWORD *)a2 + 2) )
    return 1;
  if ( g_IsInternalReleaseOrDbg )
  {
    v4 = WdLogNewEntry5_WdTrace(*(_QWORD *)a2);
    *(_QWORD *)(v4 + 24) = *((_QWORD *)a2 + 2);
    *(_QWORD *)(v4 + 32) = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    WdLogGlobalForLineNumber = 26316;
  }
  return 0;
}
