/*
 * XREFs of ??$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIUwpWindowManagerBridge@@$$QEAPEAVUwpWindowEventDispatcher@@@Z @ 0x180190890
 * Callers:
 *     ?RuntimeClassInitialize@UwpWindowEventDispatcher@@QEAAJXZ @ 0x1800D761C (-RuntimeClassInitialize@UwpWindowEventDispatcher@@QEAAJXZ.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUwpWindowManagerBridge@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUwpWindowManagerBridge@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180190950 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUwpWindowManag.c)
 *     ??0UwpWindowManagerBridge@@QEAA@XZ @ 0x1801909F0 (--0UwpWindowManagerBridge@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x180190AEC (-RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUwpWindowManagerBridge@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180191020 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUwpWindowManage.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<UwpWindowManagerBridge,IUwpWindowManagerBridge,UwpWindowEventDispatcher *>(
        _QWORD *a1,
        __int64 *a2)
{
  void *v4; // rax
  UwpWindowManagerBridge *v5; // rax
  __int64 v6; // rcx
  UwpWindowManagerBridge *v7; // rbx
  int v8; // esi
  unsigned int v9; // edi
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x138uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v4;
  if ( !v4 )
    return 2147942414LL;
  v5 = UwpWindowManagerBridge::UwpWindowManagerBridge((UwpWindowManagerBridge *)v4);
  v6 = *a2;
  v7 = v5;
  v11 = 0LL;
  v8 = UwpWindowManagerBridge::RuntimeClassInitialize(
         v5,
         (struct IUwpWindowEventDispatcherInternal *)((v6 + 16) & -(__int64)(v6 != 0)));
  if ( v8 < 0 )
  {
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUwpWindowManagerBridge,Microsoft::WRL::FtmBase>::Release(v7);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v11);
    return (unsigned int)v8;
  }
  else
  {
    v9 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUwpWindowManagerBridge,Microsoft::WRL::FtmBase>>(
           v7,
           &GUID_a9936277_04ad_4680_b2ec_9b995a363b3d,
           a1);
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUwpWindowManagerBridge,Microsoft::WRL::FtmBase>::Release(v7);
    return v9;
  }
}
