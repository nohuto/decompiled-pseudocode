/*
 * XREFs of ?EndInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805A9548
 * Callers:
 *     ?OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180046F10 (-OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLI.c)
 *     ?OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1800473FC (-OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?IsActive@InteractionRecord@SnapInteraction@@QEAAX_N@Z @ 0x1801AEA80 (-IsActive@InteractionRecord@SnapInteraction@@QEAAX_N@Z.c)
 *     ?IsSnapped@InteractionRecord@SnapInteraction@@QEAAX_N@Z @ 0x1801CFF1C (-IsSnapped@InteractionRecord@SnapInteraction@@QEAAX_N@Z.c)
 * Callees:
 *     ?CommitInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801F4108 (-CommitInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage@.c)
 */

__int64 __fastcall SnapInteraction::InteractionRecord::EndInteraction(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = SnapInteraction::InteractionRecord::CommitInteraction(a1, a2);
  *(_BYTE *)(a1 + 24) = 0;
  return result;
}
