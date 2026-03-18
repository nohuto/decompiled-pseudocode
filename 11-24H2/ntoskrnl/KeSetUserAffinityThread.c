/*
 * XREFs of KeSetUserAffinityThread @ 0x140209564
 * Callers:
 *     ExpWorkerThread @ 0x140207CC0 (ExpWorkerThread.c)
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 *     ?SmCompressCtxUpdateThreadTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_ETHREAD@@@Z @ 0x14044A2C8 (-SmCompressCtxUpdateThreadTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     ExpWorkQueueManagerThread @ 0x140A21D40 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiSetAffinityThread @ 0x1403B1A08 (KiSetAffinityThread.c)
 *     KeIsSubsetAffinityEx @ 0x1403B34F0 (KeIsSubsetAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x1403B55D0 (KeIsEmptyAffinityEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiExtendProcessAffinity @ 0x1405C90F8 (KiExtendProcessAffinity.c)
 */

__int64 __fastcall KeSetUserAffinityThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int v5; // ebp
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r15

  v3 = *(_QWORD *)(a1 + 544);
  v5 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL, a3);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  if ( !(unsigned int)KeIsSubsetAffinityEx(a2, *(_QWORD *)(v3 + 80)) )
    KiExtendProcessAffinity(v3, a2);
  KeIsEmptyAffinityEx(a2);
  KiSetAffinityThread(v5);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  return KiProcessDeferredReadyList(CurrentPrcb);
}
