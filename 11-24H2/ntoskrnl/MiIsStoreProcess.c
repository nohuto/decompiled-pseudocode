/*
 * XREFs of MiIsStoreProcess @ 0x1402FB9C0
 * Callers:
 *     MiStoreCheckCandidatePage @ 0x140229014 (MiStoreCheckCandidatePage.c)
 *     MiAgeWorkingSet @ 0x140235110 (MiAgeWorkingSet.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiProcessSuitableForCombining @ 0x1402FB97C (MiProcessSuitableForCombining.c)
 *     MiResolveDemandZeroFault @ 0x1402FC600 (MiResolveDemandZeroFault.c)
 *     MiZeroFault @ 0x1402FEA50 (MiZeroFault.c)
 *     MiOrderTrimList @ 0x140433A4C (MiOrderTrimList.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068BF88 (MiStoreDiscardPoisonedPage.c)
 *     MiCloneProcessAddressSpace @ 0x140ABD72C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsStoreProcess(__int64 a1)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(a1 + 1198));
  return *(_DWORD *)(v1 + 1204) != -1 && *(_QWORD *)(v1 + 1696) == a1;
}
