/*
 * XREFs of ??1?$list@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@V?$allocator@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@@2@@std@@QEAA@XZ @ 0x180099940
 * Callers:
 *     _DragManagerClientProxy::DragManagerClientProxy_::_1_::dtor$3 @ 0x1801C9F08 (_DragManagerClientProxy--DragManagerClientProxy_--_1_--dtor$3.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$12 @ 0x1801CAB26 (_EdgyProcessor--EdgyProcessor_--_1_--dtor$12.c)
 *     _ConsumerControlDeviceCollection::ConsumerControlDeviceCollection_::_1_::dtor$3 @ 0x1801CE3E0 (_ConsumerControlDeviceCollection--ConsumerControlDeviceCollection_--_1_--dtor$3.c)
 *     _std::variant_std::monostate_HeatInputConfigContextMessage_HeatLowPowerStateContextMessage_HeatHingeAngleContextMessage_HeatDisplayOcclusionContextMessage_HeatVirtualTouchpadContextMessage_HeatTouchpadEnabledContextMessage_HeatTouchpadHapticConfigContextMessage_HeatTouchpadClickForceSensitivityContextMessage_::emplace_HeatVirtualTouchpadContextMessage_5_0__::_1_::dtor$3 @ 0x1801D0D1F (_std--variant_std--monostate_HeatInputConfigContextMessage_HeatLowPowerStateContextMessage_HeatH.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18007A618 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUUsageList@ConsumerControlDeviceCollec.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>>::~list<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>>(
        __int64 *a1)
{
  std::_List_node<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((char *)*a1, (const struct std::nothrow_t *)0x28);
}
