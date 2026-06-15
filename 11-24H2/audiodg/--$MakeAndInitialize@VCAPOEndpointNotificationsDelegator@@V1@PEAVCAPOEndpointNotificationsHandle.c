/*
 * XREFs of ??$MakeAndInitialize@VCAPOEndpointNotificationsDelegator@@V1@PEAVCAPOEndpointNotificationsHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAPOEndpointNotificationsDelegator@@$$QEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x14004C648
 * Callers:
 *     ?RegisterControlChangeNotify@CAPOEndpointNotificationsHandler@@AEAAJXZ @ 0x140018580 (-RegisterControlChangeNotify@CAPOEndpointNotificationsHandler@@AEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1400116B4 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPro.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005555C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAPOEndpointNotificationsDelegator@@QEAAJPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x140055698 (-RuntimeClassInitialize@CAPOEndpointNotificationsDelegator@@QEAAJPEAVCAPOEndpointNotificationsHa.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAPOEndpointNotificationsDelegator,CAPOEndpointNotificationsDelegator,CAPOEndpointNotificationsHandler *>(
        CAPOEndpointNotificationsDelegator **a1,
        struct CAPOEndpointNotificationsHandler **a2)
{
  unsigned int v4; // edi
  CAPOEndpointNotificationsDelegator *v5; // rax
  CAPOEndpointNotificationsDelegator *v6; // rbx
  int v7; // esi
  __int64 v8; // rax
  CAPOEndpointNotificationsDelegator *v10; // [rsp+40h] [rbp+8h] BYREF
  CAPOEndpointNotificationsDelegator *v11; // [rsp+50h] [rbp+18h]

  v4 = 0;
  *a1 = 0LL;
  v5 = (CAPOEndpointNotificationsDelegator *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  v10 = v5;
  if ( v5 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>((__int64)v5);
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioEndpointVolumeInternalCallback>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v6 = &CAPOEndpointNotificationsDelegator::`vftable';
    *((_QWORD *)v6 + 2) = 0LL;
    v11 = v6;
    v10 = 0LL;
    v7 = CAPOEndpointNotificationsDelegator::RuntimeClassInitialize(v6, *a2);
    v8 = *(_QWORD *)v6;
    if ( v7 < 0 )
    {
      (*(void (__fastcall **)(CAPOEndpointNotificationsDelegator *))(v8 + 16))(v6);
      Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v10);
      return (unsigned int)v7;
    }
    (*(void (__fastcall **)(CAPOEndpointNotificationsDelegator *))(v8 + 8))(v6);
    *a1 = v6;
    (*(void (__fastcall **)(CAPOEndpointNotificationsDelegator *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
