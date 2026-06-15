/*
 * XREFs of ??$MakeAndInitialize@VCMicBoostNotificationsDelegator@@V1@PEAVCMicBoostNotificationsHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCMicBoostNotificationsDelegator@@$$QEAPEAVCMicBoostNotificationsHandler@@@Z @ 0x14005FFBC
 * Callers:
 *     ?RegisterMicBoostNotification@CMicBoostNotificationsHandler@@AEAAJXZ @ 0x140060660 (-RegisterMicBoostNotification@CMicBoostNotificationsHandler@@AEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1400116B4 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPro.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005555C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CMicBoostNotificationsDelegator@@QEAAJPEAVCMicBoostNotificationsHandler@@@Z @ 0x140060780 (-RuntimeClassInitialize@CMicBoostNotificationsDelegator@@QEAAJPEAVCMicBoostNotificationsHandler@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CMicBoostNotificationsDelegator,CMicBoostNotificationsDelegator,CMicBoostNotificationsHandler *>(
        CMicBoostNotificationsDelegator **a1,
        struct CMicBoostNotificationsHandler **a2)
{
  CMicBoostNotificationsDelegator *v4; // rax
  CMicBoostNotificationsDelegator *v5; // rbx
  int v6; // edi
  __int64 v7; // rax
  CMicBoostNotificationsDelegator *v9; // [rsp+30h] [rbp+8h] BYREF
  CMicBoostNotificationsDelegator *v10; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = (CMicBoostNotificationsDelegator *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v9 = v4;
  if ( v4 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>((__int64)v4);
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IControlChangeNotify>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v5 = &CMicBoostNotificationsDelegator::`vftable';
    *((_QWORD *)v5 + 2) = 0LL;
    v10 = v5;
    v9 = 0LL;
    v6 = CMicBoostNotificationsDelegator::RuntimeClassInitialize(v5, *a2);
    v7 = *(_QWORD *)v5;
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(CMicBoostNotificationsDelegator *))(v7 + 8))(v5);
      *a1 = v5;
      (*(void (__fastcall **)(CMicBoostNotificationsDelegator *))(*(_QWORD *)v5 + 16LL))(v5);
      v6 = 0;
    }
    else
    {
      (*(void (__fastcall **)(CMicBoostNotificationsDelegator *))(v7 + 16))(v5);
    }
  }
  else
  {
    v6 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>((void **)&v9);
  return (unsigned int)v6;
}
