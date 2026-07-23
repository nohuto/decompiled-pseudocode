/*
 * XREFs of MiIsPfnCommitNotCharged @ 0x140345F70
 * Callers:
 *     MiHardFaultPageRelease @ 0x140258B7C (MiHardFaultPageRelease.c)
 *     MiWriteCompletePfn @ 0x1402FA874 (MiWriteCompletePfn.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiLockProtoPoolPageForce @ 0x140333E20 (MiLockProtoPoolPageForce.c)
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 *     MiCombineCandidate @ 0x140344930 (MiCombineCandidate.c)
 *     MiCheckProtoPtePageState @ 0x140345BB0 (MiCheckProtoPtePageState.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140675D20 (MmMarkPhysicalMemoryAsBad.c)
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
