/*
 * XREFs of ??$MakeAndInitialize@VCWindowsPolicyManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCWindowsPolicyManager@@@Z @ 0x1800278FC
 * Callers:
 *     ActivatePolicyManager @ 0x18002D800 (ActivatePolicyManager.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000D2A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800150A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyMana.c)
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001F970 (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002060C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x180027EFC (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@U.c)
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18002CC60 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CWindowsPolicyManager,CWindowsPolicyManager,>(void *a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbx
  int v3; // edi
  volatile int *v4; // rdx
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+38h] [rbp+10h]

  v6 = a1;
  g_PolicyManager = 0LL;
  v1 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v2 = v1;
  v6 = v1;
  if ( v1 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>(v1);
    *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::`vftable';
    v2[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::`vftable'{for `ISessionInternalEvents'};
    v2[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioPolicyNotificationManager>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v2 = &CWindowsPolicyManager::`vftable';
    v2[1] = &CWindowsPolicyManager::`vftable'{for `ISessionInternalEvents'};
    v2[2] = &CWindowsPolicyManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioPolicyNotificationManager>'};
    v2[4] = 0LL;
    v2[5] = 0LL;
    *((_DWORD *)v2 + 12) = 0;
    *((_DWORD *)v2 + 13) = 0;
    v7 = v2;
    v6 = 0LL;
    v3 = CWindowsPolicyManager::RuntimeClassInitialize((CWindowsPolicyManager *)v2);
    if ( v3 >= 0 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v2 + 28), v4);
      g_PolicyManager = (CWindowsPolicyManager *)v2;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::Release((volatile signed __int32 *)v2);
      v3 = 0;
    }
    else
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::Release((volatile signed __int32 *)v2);
    }
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v6);
  return (unsigned int)v3;
}
