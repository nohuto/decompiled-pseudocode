/*
 * XREFs of MiChargeFullProcessCommitment @ 0x140919BC0
 * Callers:
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140211610 (MiProtectPrivateMemory.c)
 *     MiProbeAndLockPrepare @ 0x1402379F0 (MiProbeAndLockPrepare.c)
 *     MiMakeHyperRangeAccessible @ 0x140241470 (MiMakeHyperRangeAccessible.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiSplitPrivatePage @ 0x1403C7720 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x1403C9340 (MiCopyToUserVa.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F6C58 (MiSplitReducedCommitClonePage.c)
 *     MiCommitHotPatchTable @ 0x14067E0B4 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067E494 (MiPrepareImagePagesForHotPatch.c)
 *     MiCommitPageTablesForVad @ 0x140919270 (MiCommitPageTablesForVad.c)
 *     MiComputeProcessUserVa @ 0x14091AEC4 (MiComputeProcessUserVa.c)
 *     MiCreateLargePageVad @ 0x140A7D970 (MiCreateLargePageVad.c)
 * Callees:
 *     PspChargeQuota @ 0x14027BB30 (PspChargeQuota.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiChargeProcessCommitment @ 0x140424250 (MiChargeProcessCommitment.c)
 *     MiGetProcessPartition @ 0x1404329B0 (MiGetProcessPartition.c)
 *     MiReturnProcessCommitment @ 0x14044AEE4 (MiReturnProcessCommitment.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1408D8CB0 (PspChangeJobMemoryUsageByProcess.c)
 *     PsReturnProcessPageFileQuota @ 0x1409DFFA0 (PsReturnProcessPageFileQuota.c)
 *     MiCommitRequestFailed @ 0x140AA7400 (MiCommitRequestFailed.c)
 */

__int64 __fastcall MiChargeFullProcessCommitment(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  char v5; // bl
  __int64 ProcessPartition; // rax
  unsigned int v8; // r14d
  unsigned int v9; // ebp

  if ( (PEPROCESS)a1 == PsInitialSystemProcess || (int)PspChargeQuota(*(_QWORD *)(a1 + 760), a1, 2, a2) >= 0 )
  {
    v5 = 1;
    if ( (unsigned int)MiChargeProcessCommitment((_QWORD *)a1, a2) )
    {
      v5 = 3;
      if ( (*(_DWORD *)(a1 + 496) & 0x10) == 0 )
      {
LABEL_7:
        ProcessPartition = MiGetProcessPartition(a1);
        if ( (unsigned int)MiChargeCommit(ProcessPartition, a2, 0) )
          return 0LL;
        v8 = 4;
        goto LABEL_10;
      }
      if ( PspChangeJobMemoryUsageByProcess(2, a2, a1, 0LL) )
      {
        v5 = 7;
        goto LABEL_7;
      }
      v8 = 3;
    }
    else
    {
      v8 = 2;
    }
LABEL_10:
    v9 = -1073741523;
    PsReturnProcessPageFileQuota(a1, a2);
    if ( (v5 & 2) != 0 )
      MiReturnProcessCommitment(a1, a2);
    if ( (unsigned __int8)v5 >= 4u )
      PspChangeJobMemoryUsageByProcess(2, -(__int64)a2, a1, 0LL);
    goto LABEL_14;
  }
  v9 = -1073741524;
  v8 = 1;
LABEL_14:
  MiCommitRequestFailed(a1, v4, a2, v8);
  return v9;
}
