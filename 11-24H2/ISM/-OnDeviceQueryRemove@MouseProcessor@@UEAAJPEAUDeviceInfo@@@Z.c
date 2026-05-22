/*
 * XREFs of ?OnDeviceQueryRemove@MouseProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180198040
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@QEAA_NXZ @ 0x1800CB118 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@QEAA.c)
 *     ?CheckForHapticMouseQueryRemove@MouseProcessor@@AEAAXPEBUDeviceInfo@@@Z @ 0x1801979D0 (-CheckForHapticMouseQueryRemove@MouseProcessor@@AEAAXPEBUDeviceInfo@@@Z.c)
 */

__int64 __fastcall MouseProcessor::OnDeviceQueryRemove(MouseProcessor *this, struct DeviceInfo *a2)
{
  MouseProcessor *v3; // rcx

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_MouseHaptics2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_MouseHaptics2>::GetImpl'::`2'::impl) )
    MouseProcessor::CheckForHapticMouseQueryRemove(v3, a2);
  return 0LL;
}
