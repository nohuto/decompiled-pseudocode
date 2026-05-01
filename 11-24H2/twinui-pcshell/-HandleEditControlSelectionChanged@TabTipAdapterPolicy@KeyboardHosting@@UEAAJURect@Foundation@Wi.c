/*
 * XREFs of ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180255820
 * Callers:
 *     <none>
 * Callees:
 *     ??$HandleEditControlSelectionChanged@AEAMAEAMAEAMAEAMIAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAM000$$QEAIAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180083400 (--$HandleEditControlSelectionChanged@AEAMAEAMAEAMAEAMIAEAW4ShellRequestType@Text@Shell@Internal@.c)
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18013C248 (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 *     ?GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x18017FED4 (-GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Win.c)
 *     ?SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z @ 0x1801DAB34 (-SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z.c)
 *     ?GetMonitorHandle@MonitorInformation@KeyboardHosting@@QEBAPEAUHMONITOR__@@XZ @ 0x18047A200 (-GetMonitorHandle@MonitorInformation@KeyboardHosting@@QEBAPEAUHMONITOR__@@XZ.c)
 *     ?GetScaleFactor@MonitorInformation@KeyboardHosting@@QEBA?AW4DEVICE_SCALE_FACTOR@@XZ @ 0x18047A280 (-GetScaleFactor@MonitorInformation@KeyboardHosting@@QEBA-AW4DEVICE_SCALE_FACTOR@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x18047A5A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlSelectionChanged(
        __int64 a1,
        float *a2,
        int *a3)
{
  HMONITOR CurrentMonitor; // rdi
  enum DEVICE_SCALE_FACTOR ScaleFactor; // eax
  float *v8; // rax
  __m128i v9; // xmm0
  int *v10; // rcx
  int v11; // r8d
  __m128i v12; // xmm4
  float *v13; // rax
  __m128i v14; // xmm4
  int v16[4]; // [rsp+30h] [rbp-48h] BYREF
  __m128i v17[3]; // [rsp+40h] [rbp-38h] BYREF

  v17[0] = *(__m128i *)a2;
  CurrentMonitor = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitor(a1, v17);
  KeyboardHosting::MonitorInformation::SetMonitor((RTL_SRWLOCK *)(a1 + 232), CurrentMonitor);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    if ( KeyboardHosting::MonitorInformation::GetMonitorHandle((KeyboardHosting::MonitorInformation *)(a1 + 568)) != CurrentMonitor )
      KeyboardHosting::MonitorInformation::SetMonitor((RTL_SRWLOCK *)(a1 + 568), CurrentMonitor);
    ScaleFactor = KeyboardHosting::MonitorInformation::GetScaleFactor((KeyboardHosting::MonitorInformation *)(a1 + 232));
    v8 = KeyboardHosting::ScalingHelper::PhysicalRectToRelative((float *)v17[0].m128i_i32, a2, ScaleFactor);
    v9 = *(__m128i *)a2;
    v10 = (int *)(a1 + 144);
    v16[0] = v11;
    v12 = _mm_loadu_si128((const __m128i *)v8);
    *(__m128i *)(a1 + 160) = v9;
    *(__m128i *)(a1 + 144) = v12;
    *a3 = 0;
  }
  else
  {
    if ( *(HMONITOR *)(a1 + 568) != CurrentMonitor )
      KeyboardHosting::MonitorInformation::SetMonitor((RTL_SRWLOCK *)(a1 + 568), CurrentMonitor);
    v13 = KeyboardHosting::ScalingHelper::PhysicalRectToRelative((float *)v17[0].m128i_i32, a2, *(_DWORD *)(a1 + 272));
    v10 = (int *)(a1 + 144);
    v14 = _mm_loadu_si128((const __m128i *)v13);
    *(_OWORD *)(a1 + 160) = *(_OWORD *)a2;
    *(__m128i *)(a1 + 144) = v14;
    *a3 = 0;
    v16[0] = *(_DWORD *)(a1 + 272);
  }
  TouchKeyboardExperienceTelemetryLogger::HandleEditControlSelectionChanged<float &,float &,float &,float &,unsigned int,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    v10,
    (int *)(a1 + 148),
    (int *)(a1 + 152),
    (int *)(a1 + 156),
    v16,
    a3);
  return 0LL;
}
