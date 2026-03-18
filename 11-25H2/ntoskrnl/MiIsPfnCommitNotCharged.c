/*
 * XREFs of MiIsPfnCommitNotCharged @ 0x14033E4E0
 * Callers:
 *     MiWriteCompletePfn @ 0x14020D42C (MiWriteCompletePfn.c)
 *     MiCombineCandidate @ 0x140210C20 (MiCombineCandidate.c)
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiLockProtoPoolPageForce @ 0x140231620 (MiLockProtoPoolPageForce.c)
 *     MiHardFaultPageRelease @ 0x14023EBE8 (MiHardFaultPageRelease.c)
 *     MiCheckProtoPtePageState @ 0x14033E110 (MiCheckProtoPtePageState.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406690F0 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnCommitNotCharged(__int64 a1)
{
  if ( (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
    || (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL )
  {
    return 0LL;
  }
  else
  {
    return (*(unsigned __int8 *)(a1 + 35) >> 5) & 1;
  }
}
