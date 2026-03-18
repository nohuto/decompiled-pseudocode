/*
 * XREFs of MiGetPageTablePfnBuddyRaw @ 0x1402C9D00
 * Callers:
 *     MiRecheckCombineVm @ 0x140224E0C (MiRecheckCombineVm.c)
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MiRestoreTransitionPte @ 0x14024EBD8 (MiRestoreTransitionPte.c)
 *     MiSetProbePagesAhead @ 0x1402AE4D0 (MiSetProbePagesAhead.c)
 *     MiLockStealUserVm @ 0x1402C97A0 (MiLockStealUserVm.c)
 *     MiStoreCheckCandidatePage @ 0x1402CA054 (MiStoreCheckCandidatePage.c)
 *     MiFillSystemPtes @ 0x14032AD60 (MiFillSystemPtes.c)
 *     MiLegitimatePageForDriversToMap @ 0x1404336D0 (MiLegitimatePageForDriversToMap.c)
 *     MiCapturePfnVm @ 0x14045C04C (MiCapturePfnVm.c)
 *     MiStoreDiscardPoisonedPage @ 0x1406806F8 (MiStoreDiscardPoisonedPage.c)
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
    return (PEPROCESS)(qword_140E38878 + 16LL * ((_QWORD)result - 1));
  if ( result == (PEPROCESS)0x10000000001LL )
  {
    if ( PsInitialSystemProcess )
      return PsInitialSystemProcess;
  }
  return result;
}
