/*
 * XREFs of ?UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1C00C5304
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0134430 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     InitCreateUserCrit @ 0x1C02DD5E0 (InitCreateUserCrit.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void EnterLeaveCritMitRitHandOffHazard::UnInitialize(void)
{
  if ( WPP_MAIN_CB.Dpc.DpcListEntry.Next )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)WPP_MAIN_CB.Dpc.DpcListEntry.Next);
    WPP_MAIN_CB.Dpc.DpcListEntry.Next = 0LL;
  }
}
