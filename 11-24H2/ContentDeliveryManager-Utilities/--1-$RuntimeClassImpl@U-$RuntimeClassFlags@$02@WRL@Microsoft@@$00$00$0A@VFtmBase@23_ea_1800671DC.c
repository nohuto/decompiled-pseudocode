/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800671DC
 * Callers:
 *     ??1ActivityToastNotificationCallback@ToastNotification@@UEAA@XZ @ 0x1800672B8 (--1ActivityToastNotificationCallback@ToastNotification@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180067890 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UINotificationActivationC.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800390A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 72);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWnfNameResolver>::Release(
      2 * v3,
      a2);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 32));
}
