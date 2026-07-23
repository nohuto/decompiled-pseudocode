/*
 * XREFs of PiUEventInit @ 0x140C25B44
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x140A12490 (ExSubscribeWnfStateChange.c)
 */

__int64 __fastcall PiUEventInit(int a1)
{
  unsigned int v1; // edx
  __int64 v2; // r8
  __int64 v3; // rcx
  _QWORD *v4; // rax

  v1 = 0;
  if ( !a1 )
  {
    PiUEventClientRegistrationListLock.Owner = 0LL;
    PiUEventClientRegistrationListLock.Count = 1;
    PiUEventClientRegistrationListLock.Event.Header.WaitListHead.Blink = &PiUEventClientRegistrationListLock.Event.Header.WaitListHead;
    v2 = 14LL;
    PiUEventClientRegistrationListLock.Event.Header.WaitListHead.Flink = &PiUEventClientRegistrationListLock.Event.Header.WaitListHead;
    PiUEventClientRegistrationListLock.Contention = 0;
    PiUEventUsermodeEventQueueLock.Event.Header.WaitListHead.Blink = &PiUEventUsermodeEventQueueLock.Event.Header.WaitListHead;
    v3 = 0LL;
    PiUEventUsermodeEventQueueLock.Event.Header.WaitListHead.Flink = &PiUEventUsermodeEventQueueLock.Event.Header.WaitListHead;
    PiUEventBroadcastEventQueueLock.Event.Header.WaitListHead.Blink = &PiUEventBroadcastEventQueueLock.Event.Header.WaitListHead;
    PiUEventBroadcastEventQueueLock.Event.Header.WaitListHead.Flink = &PiUEventBroadcastEventQueueLock.Event.Header.WaitListHead;
    LOWORD(PiUEventClientRegistrationListLock.Event.Header.Lock) = 1;
    PiUEventClientRegistrationListLock.Event.Header.Size = 6;
    PiUEventClientRegistrationListLock.Event.Header.SignalState = 0;
    PiUEventUsermodeEventQueueLock.Count = 1;
    PiUEventUsermodeEventQueueLock.Owner = 0LL;
    PiUEventUsermodeEventQueueLock.Contention = 0;
    LOWORD(PiUEventUsermodeEventQueueLock.Event.Header.Lock) = 1;
    PiUEventUsermodeEventQueueLock.Event.Header.Size = 6;
    PiUEventUsermodeEventQueueLock.Event.Header.SignalState = 0;
    PiUEventBroadcastEventQueueLock.Count = 1;
    PiUEventBroadcastEventQueueLock.Owner = 0LL;
    PiUEventBroadcastEventQueueLock.Contention = 0;
    LOWORD(PiUEventBroadcastEventQueueLock.Event.Header.Lock) = 1;
    PiUEventBroadcastEventQueueLock.Event.Header.Size = 6;
    PiUEventBroadcastEventQueueLock.Event.Header.SignalState = 0;
    do
    {
      *(_QWORD *)((char *)&unk_140F8BDC8 + v3) = (char *)&PiUEventDevInterfaceClientList + v3;
      *(_QWORD *)((char *)&PiUEventDevInterfaceClientList + v3) = (char *)&PiUEventDevInterfaceClientList + v3;
      *(_QWORD *)((char *)&unk_140F8BEE8 + v3) = (char *)&PiUEventDevInstanceClientList + v3;
      *(_QWORD *)((char *)&PiUEventDevInstanceClientList + v3) = (char *)&PiUEventDevInstanceClientList + v3;
      *(_QWORD *)((char *)&unk_140F8BC28 + v3) = (char *)&PiUEventDevInstancePropertyClientList + v3;
      *(_QWORD *)((char *)&PiUEventDevInstancePropertyClientList + v3) = (char *)&PiUEventDevInstancePropertyClientList
                                                                       + v3;
      v4 = (_QWORD *)((char *)&PiUEventDevHandleClientList + v3);
      *(_QWORD *)((char *)&unk_140F8BB48 + v3) = (char *)&PiUEventDevHandleClientList + v3;
      v3 += 16LL;
      *v4 = v4;
      --v2;
    }
    while ( v2 );
    qword_140F8BD48 = (__int64)&PiUEventUsermodeEventQueue;
    PiUEventUsermodeEventQueue = &PiUEventUsermodeEventQueue;
    qword_140F8BDA8 = (__int64)&PiUEventBroadcastEventQueue;
    PiUEventBroadcastEventQueue = &PiUEventBroadcastEventQueue;
    return (unsigned int)ExSubscribeWnfStateChange(
                           (__int64)&PiUEventMetaNotificationHandle,
                           (__int64)&WNF_PNPA_DEVNODES_CHANGED);
  }
  return v1;
}
