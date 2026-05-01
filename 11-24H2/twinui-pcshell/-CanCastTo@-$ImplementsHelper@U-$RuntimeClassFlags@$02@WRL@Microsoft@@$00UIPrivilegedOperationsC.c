/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@UIWindowEventDispatcherHostTermination@ViewManagerInterop@89Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800D73D4
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIUwpWindowEventDispatcherInternal@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@UIWindowDispatcherConnectedStandby@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@UIWindowEventDispatcherHostTermination@ViewManagerInterop@89Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIUwpWindowEventDispatcherInternal@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@UIWindowDispatcherConnectedStandby@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@UIWindowEventDispatcherHostTermination@ViewManagerInterop@89Windows@@@23@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800D6FD8 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection,Windows::Internal::Shell::ViewManagerInterop::IWindowEventDispatcherHostTermination>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != -1211751484
    || a2[1] != *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data2
    || a2[2] != *(_DWORD *)GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4
    || a2[3] != *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4[4] )
  {
    a1 += 8LL;
    if ( *a2 != -1738762077
      || a2[1] != *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data2
      || a2[2] != *(_DWORD *)GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4
      || a2[3] != *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4[4] )
    {
      a1 += 8LL;
      if ( *a2 != 1178068892
        || a2[1] != *(_DWORD *)&GUID_4637e79c_de03_4aef_8a87_e796659e5e8d.Data2
        || a2[2] != *(_DWORD *)GUID_4637e79c_de03_4aef_8a87_e796659e5e8d.Data4
        || a2[3] != *(_DWORD *)&GUID_4637e79c_de03_4aef_8a87_e796659e5e8d.Data4[4] )
      {
        a1 += 8LL;
        if ( *a2 != -1972408237
          || a2[1] != *(_DWORD *)&GUID_8a6f7053_3035_4eb7_8020_551e80a67998.Data2
          || a2[2] != *(_DWORD *)GUID_8a6f7053_3035_4eb7_8020_551e80a67998.Data4
          || a2[3] != *(_DWORD *)&GUID_8a6f7053_3035_4eb7_8020_551e80a67998.Data4[4] )
        {
          a1 += 8LL;
          if ( *a2 != -167823563
            || a2[1] != *(_DWORD *)&GUID_f5ff3735_0d15_416a_adad_a11939bdd4c1.Data2
            || a2[2] != *(_DWORD *)GUID_f5ff3735_0d15_416a_adad_a11939bdd4c1.Data4
            || a2[3] != *(_DWORD *)&GUID_f5ff3735_0d15_416a_adad_a11939bdd4c1.Data4[4] )
          {
            return 2147500034LL;
          }
        }
      }
    }
  }
  *a3 = a1;
  return 0LL;
}
