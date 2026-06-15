/*
 * XREFs of ??$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsDelegator@@V1@PEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSystemEffectsPropertyChangeNotificationsDelegator@@$$QEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x140017090
 * Callers:
 *     ?RegisterPropertyChangeNotification@CAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAAJXZ @ 0x140018AF4 (-RegisterPropertyChangeNotification@CAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAAJ.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x140011684 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPro.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005562C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsDelegator@@QEAAJPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x140055868 (-RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsDelegator@@QEAAJPEAVCAudio.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAudioSystemEffectsPropertyChangeNotificationsDelegator,CAudioSystemEffectsPropertyChangeNotificationsDelegator,CAudioSystemEffectsPropertyChangeNotificationsHandler *>(
        CAudioSystemEffectsPropertyChangeNotificationsDelegator **a1,
        struct CAudioSystemEffectsPropertyChangeNotificationsHandler **a2)
{
  unsigned int v4; // edi
  CAudioSystemEffectsPropertyChangeNotificationsDelegator *v5; // rax
  CAudioSystemEffectsPropertyChangeNotificationsDelegator *v6; // rbx
  int v7; // esi
  __int64 v8; // rax
  CAudioSystemEffectsPropertyChangeNotificationsDelegator *v10; // [rsp+40h] [rbp+8h] BYREF
  CAudioSystemEffectsPropertyChangeNotificationsDelegator *v11; // [rsp+50h] [rbp+18h]

  v4 = 0;
  *a1 = 0LL;
  v5 = (CAudioSystemEffectsPropertyChangeNotificationsDelegator *)operator new(
                                                                    0x18uLL,
                                                                    (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  v10 = v5;
  if ( v5 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>((__int64)v5);
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioSystemEffectsPropertyChangeNotificationClient>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v6 = &CAudioSystemEffectsPropertyChangeNotificationsDelegator::`vftable';
    *((_QWORD *)v6 + 2) = 0LL;
    v11 = v6;
    v10 = 0LL;
    v7 = CAudioSystemEffectsPropertyChangeNotificationsDelegator::RuntimeClassInitialize(v6, *a2);
    v8 = *(_QWORD *)v6;
    if ( v7 < 0 )
    {
      (*(void (__fastcall **)(CAudioSystemEffectsPropertyChangeNotificationsDelegator *))(v8 + 16))(v6);
      Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v10);
      return (unsigned int)v7;
    }
    (*(void (__fastcall **)(CAudioSystemEffectsPropertyChangeNotificationsDelegator *))(v8 + 8))(v6);
    *a1 = v6;
    (*(void (__fastcall **)(CAudioSystemEffectsPropertyChangeNotificationsDelegator *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
