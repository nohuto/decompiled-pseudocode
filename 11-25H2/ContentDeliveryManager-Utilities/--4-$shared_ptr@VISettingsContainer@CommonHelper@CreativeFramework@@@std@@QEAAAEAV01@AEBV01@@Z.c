/*
 * XREFs of ??4?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180083A48
 * Callers:
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x180085D24 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 * Callees:
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18004AD68 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800596A4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 *__fastcall std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]

  v3 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v7,
         a2);
  v4 = v3[1];
  v3[1] = a1[1];
  a1[1] = v4;
  v5 = *v3;
  *v3 = *a1;
  *a1 = v5;
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return a1;
}
