/*
 * XREFs of ?_Reset0@?$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISettingsContainer@CommonHelper@CreativeFramework@@PEAV_Ref_count_base@2@@Z @ 0x18005BA8C
 * Callers:
 *     ??$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@XZ @ 0x1800494CC (--$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@YA-AV-$shared_.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18004AF68 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$make_shared@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@PEBGU_FILETIME@@@std@@YA?AV?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@0@$$QEAPEBG$$QEAU_FILETIME@@@Z @ 0x18005FAA8 (--$make_shared@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentMan.c)
 *     ??$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEBD@std@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@$$QEAPEBD@Z @ 0x18007A284 (--$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEBD@std@@YA-AV-$sha.c)
 *     ??$_Resetp@VISettingsContainer@CommonHelper@CreativeFramework@@@?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAAXPEAVISettingsContainer@CommonHelper@CreativeFramework@@@Z @ 0x1800837E0 (--$_Resetp@VISettingsContainer@CommonHelper@CreativeFramework@@@-$shared_ptr@VISettingsContainer.c)
 *     ??$_Resetp@VSetLockScreenHotspotsService@Actions@CreativeFramework@@@?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEAAXPEAVSetLockScreenHotspotsService@Actions@CreativeFramework@@@Z @ 0x180097F28 (--$_Resetp@VSetLockScreenHotspotsService@Actions@CreativeFramework@@@-$shared_ptr@VIActionServic.c)
 *     ??$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_WPEB_W_N@std@@YA?AV?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@0@$$QEAPEB_W0$$QEA_N@Z @ 0x18009C9D0 (--$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_WPEB_W_N@std@@YA-AV-$shared_ptr.c)
 *     ??$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_W_N@std@@YA?AV?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@0@$$QEAPEB_W$$QEA_N@Z @ 0x18009CABC (--$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_W_N@std@@YA-AV-$shared_ptr@VTas.c)
 *     ??$make_shared@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@XZ @ 0x1800AB8EC (--$make_shared@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA-AV-$shared_ptr@UIt.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180059B44 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Ptr_base<CreativeFramework::CommonHelper::ISettingsContainer>::_Reset0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  std::_Ref_count_base *v5; // rcx

  v5 = (std::_Ref_count_base *)a1[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  *a1 = a2;
  a1[1] = a3;
}
