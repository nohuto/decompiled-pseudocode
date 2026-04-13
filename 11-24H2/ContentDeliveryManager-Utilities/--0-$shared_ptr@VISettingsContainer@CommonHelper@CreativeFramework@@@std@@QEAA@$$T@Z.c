/*
 * XREFs of ??0?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAA@$$T@Z @ 0x180083AE4
 * Callers:
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x180086154 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 * Callees:
 *     ??$_Resetp@VISettingsContainer@CommonHelper@CreativeFramework@@@?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAAXPEAVISettingsContainer@CommonHelper@CreativeFramework@@@Z @ 0x1800837E0 (--$_Resetp@VISettingsContainer@CommonHelper@CreativeFramework@@@-$shared_ptr@VISettingsContainer.c)
 */

_QWORD *__fastcall std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>(
        _QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>::_Resetp<CreativeFramework::CommonHelper::ISettingsContainer>(a1);
  return a1;
}
