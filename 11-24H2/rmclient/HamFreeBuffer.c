/*
 * XREFs of HamFreeBuffer @ 0x1800091E0
 * Callers:
 *     HamCompleteActivityRestore @ 0x1800027C0 (HamCompleteActivityRestore.c)
 *     HampConnectionDestroy @ 0x180004D70 (HampConnectionDestroy.c)
 *     RmpClientWnfDestroySubscription @ 0x180004DD0 (RmpClientWnfDestroySubscription.c)
 *     HampConnectionCleanup @ 0x180004ECC (HampConnectionCleanup.c)
 *     CrmRegister @ 0x180008990 (CrmRegister.c)
 *     CrmActivityAllocateInternal @ 0x180008E00 (CrmActivityAllocateInternal.c)
 *     CrmActivityAllocate @ 0x180008F10 (CrmActivityAllocate.c)
 *     HamCreateActivityEx @ 0x180009820 (HamCreateActivityEx.c)
 *     HamCreateExtendedExecution @ 0x18000C810 (HamCreateExtendedExecution.c)
 *     ?CrmpActivityQueryWindowClosedReasons@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@PEAPEAW4_CRM_WINDOW_CLOSED_REASON@@PEAK@Z @ 0x18000F020 (-CrmpActivityQueryWindowClosedReasons@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@PEAPEAW4_CRM_WINDOW_CLOSED.c)
 *     HamPlmNotifyNewSession @ 0x1800113E0 (HamPlmNotifyNewSession.c)
 *     HamConnectToServerEx @ 0x180011840 (HamConnectToServerEx.c)
 *     HamAssociateActivityContext @ 0x18001A630 (HamAssociateActivityContext.c)
 *     HampCltDelayCloseContextDestroy @ 0x18001B788 (HampCltDelayCloseContextDestroy.c)
 *     UnsubscribeActivityCoordinatorPolicyInternal @ 0x18001BDD8 (UnsubscribeActivityCoordinatorPolicyInternal.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall HamFreeBuffer(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
