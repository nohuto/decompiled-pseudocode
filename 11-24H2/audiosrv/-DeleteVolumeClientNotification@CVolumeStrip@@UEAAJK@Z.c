/*
 * XREFs of ?DeleteVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x180086FA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qd @ 0x1800C3678 (WPP_SF_qd.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 */

__int64 __fastcall CVolumeStrip::DeleteVolumeClientNotification(CVolumeStrip *this, int a2)
{
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      17LL,
      &WPP_ad74f306bfe33f421203cd208d411976_Traceguids,
      (char *)this - 8);
  }
  return CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::RemoveInterface(
           (LPCRITICAL_SECTION)((char *)this + 16),
           a2);
}
