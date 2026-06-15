/*
 * XREFs of ?IsPropertyChangeRelevant@CSpatialProperties@@QEAA_NAEBU_tagpropertykey@@@Z @ 0x180135060
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18001774C (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RemoveDeviceFormatChangeHandling@@@details@wil@@QEAA_NXZ @ 0x1801384F4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RemoveDeviceFormatChang.c)
 */

char __fastcall CSpatialProperties::IsPropertyChangeRelevant(
        CSpatialProperties *this,
        const struct _tagpropertykey *a2)
{
  char IsEnabled; // al
  char v5; // r8
  bool v6; // zf

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_RemoveDeviceFormatChangeHandling>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_RemoveDeviceFormatChangeHandling>::GetImpl'::`2'::impl);
  v5 = 0;
  if ( IsEnabled )
  {
    if ( !*((_QWORD *)this + 5)
      || !*((_QWORD *)this + 8)
      || *(_QWORD *)&a2->fmtid.Data1 != *(_QWORD *)&PKEY_SpatialAudio_Signaling_Key.fmtid.Data1
      || *(_QWORD *)a2->fmtid.Data4 != *(_QWORD *)PKEY_SpatialAudio_Signaling_Key.fmtid.Data4 )
    {
      return v5;
    }
    v6 = a2->pid == 2;
    goto LABEL_15;
  }
  if ( *((_QWORD *)this + 5) && *((_QWORD *)this + 8) )
  {
    if ( *(_QWORD *)&a2->fmtid.Data1 == *(_QWORD *)&PKEY_SpatialAudio_Signaling_Key.fmtid.Data1
      && *(_QWORD *)a2->fmtid.Data4 == *(_QWORD *)PKEY_SpatialAudio_Signaling_Key.fmtid.Data4
      && a2->pid == 2 )
    {
      return 1;
    }
    if ( *(_QWORD *)&a2->fmtid.Data1 == *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1
      && *(_QWORD *)a2->fmtid.Data4 == *(_QWORD *)PKEY_AudioEngine_DeviceFormat.fmtid.Data4 )
    {
      v6 = a2->pid == 0;
LABEL_15:
      if ( v6 )
        return 1;
    }
  }
  return v5;
}
