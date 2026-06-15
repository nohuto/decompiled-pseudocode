/*
 * XREFs of ?QueueRecurringWaitItem@CSerialWorkQueue@@QEAAJPEAXV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@3@@Z @ 0x18001FB78
 * Callers:
 *     ?RuntimeClassInitialize@AudioModeEffectsWatcher@@QEAAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@@Z @ 0x18001FA68 (-RuntimeClassInitialize@AudioModeEffectsWatcher@@QEAAJPEAUEndpointCharacteristicsDescriptor@@U_G.c)
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x1800580B0 (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@KPEAUIAudioModeEffectsWatcher@@@Z @ 0x180059270 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEB.c)
 *     ?SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ @ 0x1800CAC64 (-SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ.c)
 * Callees:
 *     ?QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@J@ZV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@5@@Z @ 0x18001DB1C (-QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x18001DDF0 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSerialWorkQueue::QueueRecurringWaitItem(CSerialWorkQueue *this, HANDLE h, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  PTP_WAIT *v9; // r8
  unsigned int v10; // ebx
  __int64 *v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // [rsp+38h] [rbp-50h] BYREF

  v8 = std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)&v14, a3);
  v10 = CSerialWorkQueue::QueueWaitItemInternal(this, h, v9, v8, a4);
  v11 = *(__int64 **)(a3 + 56);
  if ( v11 )
  {
    v12 = *v11;
    LOBYTE(v12) = v11 != (__int64 *)a3;
    (*(void (__fastcall **)(__int64 *, __int64))(*v11 + 32))(v11, v12);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return v10;
}
