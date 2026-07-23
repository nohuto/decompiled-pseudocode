/*
 * XREFs of MiIsStoreProcess @ 0x140343630
 * Callers:
 *     MiAgeWorkingSet @ 0x14020F2A0 (MiAgeWorkingSet.c)
 *     MiStoreCheckCandidatePage @ 0x1402FC214 (MiStoreCheckCandidatePage.c)
 *     MiZeroFault @ 0x1403091D0 (MiZeroFault.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiResolveDemandZeroFault @ 0x140342E30 (MiResolveDemandZeroFault.c)
 *     MiProcessSuitableForCombining @ 0x1403435EC (MiProcessSuitableForCombining.c)
 *     MiOrderTrimList @ 0x140425554 (MiOrderTrimList.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068D0B8 (MiStoreDiscardPoisonedPage.c)
 *     MiCloneProcessAddressSpace @ 0x140AB879C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsStoreProcess(__int64 a1)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1 + 1198));
  return *(_DWORD *)(v1 + 1204) != -1 && *(_QWORD *)(v1 + 1696) == a1;
}
