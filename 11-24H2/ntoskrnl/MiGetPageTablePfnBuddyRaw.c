/*
 * XREFs of MiGetPageTablePfnBuddyRaw @ 0x1402FB220
 * Callers:
 *     MiRestoreTransitionPte @ 0x140226624 (MiRestoreTransitionPte.c)
 *     MiSetProbePagesAhead @ 0x140239B00 (MiSetProbePagesAhead.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiLockStealUserVm @ 0x14025539C (MiLockStealUserVm.c)
 *     MiFillSystemPtes @ 0x1402A0630 (MiFillSystemPtes.c)
 *     MiStoreCheckCandidatePage @ 0x1402FC214 (MiStoreCheckCandidatePage.c)
 *     MiRecheckCombineVm @ 0x1403F1420 (MiRecheckCombineVm.c)
 *     MiLegitimatePageForDriversToMap @ 0x14041DB10 (MiLegitimatePageForDriversToMap.c)
 *     MiCapturePfnVm @ 0x1404507C4 (MiCapturePfnVm.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068D0B8 (MiStoreDiscardPoisonedPage.c)
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
    return (PEPROCESS)(qword_140E38BF8 + 16LL * ((_QWORD)result - 1));
  if ( result == (PEPROCESS)0x10000000001LL )
  {
    if ( PsInitialSystemProcess )
      return PsInitialSystemProcess;
  }
  return result;
}
