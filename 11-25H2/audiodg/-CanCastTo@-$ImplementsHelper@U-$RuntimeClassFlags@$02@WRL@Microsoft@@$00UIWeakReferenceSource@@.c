/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x14005833C
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpointVolumeInternalCallback@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpointVolumeInternalCallback@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x140045950 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpointVo.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIControlChangeNotify@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIControlChangeNotify@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x14006000C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIControlChangeNo.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceOrientationNotificationsCallback@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceOrientationNotificationsCallback@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x140060E1C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceOrientati.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialStatusChangedNotificationsCallback@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialStatusChangedNotificationsCallback@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x140060EBC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialStatusCh.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14006B8B0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectab.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != 56
    || a2[1] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
  {
    return 2147500034LL;
  }
  *a3 = a1;
  return 0LL;
}
