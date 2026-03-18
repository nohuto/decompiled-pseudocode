/*
 * XREFs of MiIsStoreProcess @ 0x140239E20
 * Callers:
 *     MiProcessSuitableForCombining @ 0x140239DD8 (MiProcessSuitableForCombining.c)
 *     MiResolveDemandZeroFault @ 0x140241160 (MiResolveDemandZeroFault.c)
 *     MiZeroFault @ 0x1402429D0 (MiZeroFault.c)
 *     MiAgeWorkingSet @ 0x140246F90 (MiAgeWorkingSet.c)
 *     MiStoreCheckCandidatePage @ 0x1402CA054 (MiStoreCheckCandidatePage.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiDecommitInitializePacket @ 0x14038308C (MiDecommitInitializePacket.c)
 *     MiOrderTrimList @ 0x14043CA00 (MiOrderTrimList.c)
 *     MiStoreDiscardPoisonedPage @ 0x1406806F8 (MiStoreDiscardPoisonedPage.c)
 *     MiCloneProcessAddressSpace @ 0x140AB962C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsStoreProcess(__int64 a1)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(a1 + 1198));
  return *(_DWORD *)(v1 + 1204) != -1 && *(_QWORD *)(v1 + 1696) == a1;
}
