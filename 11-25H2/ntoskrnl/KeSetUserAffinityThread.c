/*
 * XREFs of KeSetUserAffinityThread @ 0x1403060E4
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 *     ExpWorkerThread @ 0x1403047F0 (ExpWorkerThread.c)
 *     ?SmCompressCtxUpdateThreadTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_ETHREAD@@@Z @ 0x140393740 (-SmCompressCtxUpdateThreadTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     ExpWorkQueueManagerThread @ 0x140A17020 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x1402717F0 (KeIsSubsetAffinityEx.c)
 *     KiSetAffinityThread @ 0x140271884 (KiSetAffinityThread.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiExtendProcessAffinity @ 0x1405C4C24 (KiExtendProcessAffinity.c)
 */

char __fastcall KeSetUserAffinityThread(__int64 a1, struct _KAFFINITY_EX *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r15
  struct _SINGLE_LIST_ENTRY v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 544);
  v8.Next = 0LL;
  v4 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  if ( !(unsigned int)KeIsSubsetAffinityEx(&a2->Count, *(unsigned __int16 **)(v2 + 80)) )
    KiExtendProcessAffinity(v2, a2);
  if ( (unsigned int)KeIsEmptyAffinityEx(a2) )
    a2 = *(struct _KAFFINITY_EX **)(v2 + 80);
  KiSetAffinityThread(v4, &v8, a2, CurrentIrql);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  return KiProcessDeferredReadyList(CurrentPrcb, &v8, CurrentIrql);
}
