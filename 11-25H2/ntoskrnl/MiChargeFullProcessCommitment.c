/*
 * XREFs of MiChargeFullProcessCommitment @ 0x1409020A0
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x1402B94E0 (MiMakeHyperRangeAccessible.c)
 *     MiProbeAndLockPrepare @ 0x1402CB3C0 (MiProbeAndLockPrepare.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14037F8B0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     MiCopyToUserVa @ 0x1403DDE48 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x1404672C0 (MiSplitPrivatePage.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F6C24 (MiSplitReducedCommitClonePage.c)
 *     MiCommitHotPatchTable @ 0x140671714 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140671A88 (MiPrepareImagePagesForHotPatch.c)
 *     MiCommitPageTablesForVad @ 0x140900E00 (MiCommitPageTablesForVad.c)
 *     MiComputeProcessUserVa @ 0x140904FA4 (MiComputeProcessUserVa.c)
 *     MiCreateLargePageVad @ 0x140A7F47C (MiCreateLargePageVad.c)
 * Callees:
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     PspChargeQuota @ 0x1403C65E0 (PspChargeQuota.c)
 *     MiChargeProcessCommitment @ 0x140435F00 (MiChargeProcessCommitment.c)
 *     MiGetProcessPartition @ 0x1404402D0 (MiGetProcessPartition.c)
 *     MiReturnProcessCommitment @ 0x140455F94 (MiReturnProcessCommitment.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1408D9260 (PspChangeJobMemoryUsageByProcess.c)
 *     PsReturnProcessPageFileQuota @ 0x1409EC190 (PsReturnProcessPageFileQuota.c)
 *     MiCommitRequestFailed @ 0x140AA6F90 (MiCommitRequestFailed.c)
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
