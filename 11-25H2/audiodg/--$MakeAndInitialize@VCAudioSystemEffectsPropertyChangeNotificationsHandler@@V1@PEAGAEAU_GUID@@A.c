/*
 * XREFs of ??$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@V1@PEAGAEAU_GUID@@AEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@$$QEAPEAGAEAU_GUID@@AEAPEAUIMMDevice@@@Z @ 0x14003FB28
 * Callers:
 *     ?GetAudioSystemEffectPropertyChangeNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@U_GUID@@PEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x140017490 (-GetAudioSystemEffectPropertyChangeNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@U.c)
 * Callees:
 *     ?RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAJPEBGU_GUID@@PEAUIMMDevice@@@Z @ 0x14003FC20 (-RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAJPEBGU_GUID@@.c)
 *     ??0CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAA@XZ @ 0x14003FCD0 (--0CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005562C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAudioSystemEffectsPropertyChangeNotificationsHandler,CAudioSystemEffectsPropertyChangeNotificationsHandler,unsigned short *,_GUID &,IMMDevice * &>(
        CAudioSystemEffectsPropertyChangeNotificationsHandler **a1,
        const unsigned __int16 **a2,
        struct _GUID *a3,
        struct IMMDevice **a4)
{
  unsigned int v8; // edi
  CAudioSystemEffectsPropertyChangeNotificationsHandler *v9; // rax
  CAudioSystemEffectsPropertyChangeNotificationsHandler *v10; // rbx
  int v11; // ebp
  struct _GUID v13; // [rsp+30h] [rbp-28h] BYREF
  CAudioSystemEffectsPropertyChangeNotificationsHandler *v14; // [rsp+60h] [rbp+8h] BYREF

  v8 = 0;
  *a1 = 0LL;
  v9 = (CAudioSystemEffectsPropertyChangeNotificationsHandler *)operator new(
                                                                  0xC0uLL,
                                                                  (const struct std::nothrow_t *)&std::nothrow);
  v14 = v9;
  if ( !v9 )
    return (unsigned int)-2147024882;
  v10 = CAudioSystemEffectsPropertyChangeNotificationsHandler::CAudioSystemEffectsPropertyChangeNotificationsHandler(v9);
  v14 = 0LL;
  v13 = *a3;
  v11 = CAudioSystemEffectsPropertyChangeNotificationsHandler::RuntimeClassInitialize(v10, *a2, &v13, *a4);
  if ( v11 >= 0 )
  {
    if ( v10 )
      (*(void (__fastcall **)(CAudioSystemEffectsPropertyChangeNotificationsHandler *))(*(_QWORD *)v10 + 8LL))(v10);
    *a1 = v10;
    if ( v10 )
      (*(void (__fastcall **)(CAudioSystemEffectsPropertyChangeNotificationsHandler *))(*(_QWORD *)v10 + 16LL))(v10);
    return v8;
  }
  if ( v10 )
    (*(void (__fastcall **)(CAudioSystemEffectsPropertyChangeNotificationsHandler *))(*(_QWORD *)v10 + 16LL))(v10);
  Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v14);
  return (unsigned int)v11;
}
