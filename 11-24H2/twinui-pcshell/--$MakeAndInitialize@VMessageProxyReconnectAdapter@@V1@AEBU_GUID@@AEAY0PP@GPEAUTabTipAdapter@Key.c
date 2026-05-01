/*
 * XREFs of ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0PP@GPEAUTabTipAdapter@KeyboardHosting@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0PP@G$$QEAPEAUTabTipAdapter@KeyboardHosting@@@Z @ 0x18017BDF4
 * Callers:
 *     ?OnRemotePolicyIsReady@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x18017BD20 (-OnRemotePolicyIsReady@TabTipAdapter@KeyboardHosting@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0MessageProxyReconnectAdapter@@QEAA@XZ @ 0x180225940 (--0MessageProxyReconnectAdapter@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x180675880 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short (&)[255],KeyboardHosting::TabTipAdapter *>(
        MessageProxyReconnectAdapter **a1,
        __int64 a2,
        const unsigned __int16 *a3,
        struct IMessageProxyReconnectAdapterOwner **a4)
{
  MessageProxyReconnectAdapter *v7; // rax
  MessageProxyReconnectAdapter *v9; // rbx
  int v10; // edi
  void *v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  *a1 = 0LL;
  v7 = (MessageProxyReconnectAdapter *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = (__int64)v7;
  if ( !v7 )
    return 2147942414LL;
  v9 = MessageProxyReconnectAdapter::MessageProxyReconnectAdapter(v7);
  v12 = (__int64)v9;
  v11 = 0LL;
  v10 = MessageProxyReconnectAdapter::RuntimeClassInitialize(v9, &GUID_4184362c_9bcb_410f_a461_0bb9001ee6c7, a3, *a4);
  if ( v10 >= 0 )
  {
    if ( v9 )
      (*(void (__fastcall **)(MessageProxyReconnectAdapter *))(*(_QWORD *)v9 + 8LL))(v9);
    *a1 = v9;
    v10 = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v11);
  return (unsigned int)v10;
}
