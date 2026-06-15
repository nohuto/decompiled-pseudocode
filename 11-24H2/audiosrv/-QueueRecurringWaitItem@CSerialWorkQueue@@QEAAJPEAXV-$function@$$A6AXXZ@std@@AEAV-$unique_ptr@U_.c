/*
 * XREFs of ?QueueRecurringWaitItem@CSerialWorkQueue@@QEAAJPEAXV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@3@@Z @ 0x1800289F4
 * Callers:
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x18001E254 (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 *     ?RuntimeClassInitialize@AudioModeEffectsWatcher@@QEAAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@@Z @ 0x1800288E4 (-RuntimeClassInitialize@AudioModeEffectsWatcher@@QEAAJPEAUEndpointCharacteristicsDescriptor@@U_G.c)
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@KPEAUIAudioModeEffectsWatcher@@@Z @ 0x18004B3E0 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEB.c)
 *     ?SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ @ 0x1800CA334 (-SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ.c)
 * Callees:
 *     ?QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@J@ZV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@5@@Z @ 0x180027A44 (-QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180027BB0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x180027D1C (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSerialWorkQueue::QueueRecurringWaitItem(CSerialWorkQueue *this, HANDLE h, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v12; // [rsp+38h] [rbp-50h] BYREF

  v8 = std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)&v12, a3);
  LODWORD(h) = CSerialWorkQueue::QueueWaitItemInternal(this, h, v9, v8, a4);
  std::_Func_class<void,>::_Tidy(a3, v10);
  return (unsigned int)h;
}
