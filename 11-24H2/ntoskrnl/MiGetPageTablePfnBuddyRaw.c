/*
 * XREFs of MiGetPageTablePfnBuddyRaw @ 0x140227FA0
 * Callers:
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     MiLockStealUserVm @ 0x140227A3C (MiLockStealUserVm.c)
 *     MiStoreCheckCandidatePage @ 0x140229014 (MiStoreCheckCandidatePage.c)
 *     MiRestoreTransitionPte @ 0x140271094 (MiRestoreTransitionPte.c)
 *     MiSetProbePagesAhead @ 0x140284570 (MiSetProbePagesAhead.c)
 *     MiLegitimatePageForDriversToMap @ 0x1402855E0 (MiLegitimatePageForDriversToMap.c)
 *     MiFillSystemPtes @ 0x140290A30 (MiFillSystemPtes.c)
 *     MiRecheckCombineVm @ 0x1403140D4 (MiRecheckCombineVm.c)
 *     MiCapturePfnVm @ 0x14045B3C4 (MiCapturePfnVm.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068BF88 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     <none>
 */

PEPROCESS __fastcall MiGetPageTablePfnBuddyRaw(__int64 a1)
{
  __int64 v1; // rdx
  PEPROCESS result; // rax

  v1 = *(_QWORD *)a1 >> 1;
  LODWORD(v1) = v1 & 0x7FFFFFFF;
  result = (PEPROCESS)(v1 | ((unsigned __int64)(*(_DWORD *)(a1 + 36) & 0x3FF0000) << 15));
  if ( !result )
    return 0LL;
  if ( (unsigned __int64)&result[-2411209711LL].CpuPartitionList.Blink > 1 )
    return (PEPROCESS)(qword_140E38AB8 + 16LL * ((_QWORD)result - 1));
  if ( result == (PEPROCESS)0x10000000001LL )
  {
    if ( PsInitialSystemProcess )
      return PsInitialSystemProcess;
  }
  return result;
}
