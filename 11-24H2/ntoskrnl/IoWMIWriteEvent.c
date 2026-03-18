/*
 * XREFs of IoWMIWriteEvent @ 0x14042E980
 * Callers:
 *     PpmFireWmiEvent @ 0x1405D7EF8 (PpmFireWmiEvent.c)
 *     PpmWmiFireIdleAccountingEvent @ 0x1405D7F80 (PpmWmiFireIdleAccountingEvent.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     WmipDoFindRegEntryByProviderId @ 0x140338F70 (WmipDoFindRegEntryByProviderId.c)
 *     EtwTraceEvent @ 0x140346CD0 (EtwTraceEvent.c)
 *     ExInterlockedInsertTailList @ 0x14042EC00 (ExInterlockedInsertTailList.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoWMIWriteEvent(PVOID WnodeEventItem)
{
  NTSTATUS v1; // edi
  int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // ebx
  NTSTATUS result; // eax
  struct _LIST_ENTRY *Pool2; // rbp
  int v9; // ebx
  _DWORD *RegEntryByProviderId; // rax
  KIRQL v11; // r8
  struct _LIST_ENTRY *v12; // rbx

  v1 = 0;
  if ( !WmipServiceDeviceObject )
    return -1073741823;
  v3 = *((_DWORD *)WnodeEventItem + 11);
  if ( (v3 & 0x60000) != 0 )
  {
    v4 = *(_DWORD *)WnodeEventItem;
    v5 = *((unsigned __int16 *)WnodeEventItem + 4);
    v6 = v3 & 0x20000;
    if ( (unsigned int)v4 < 0x30 )
      return -1073741789;
    if ( v6 )
    {
      if ( (unsigned int)v4 <= 0xFFFF )
        goto LABEL_7;
    }
    else if ( v4 >= 0 )
    {
LABEL_7:
      result = EtwTraceEvent(v5, (unsigned __int16 *)WnodeEventItem, 0x30u, -1072431104, 0);
      if ( v6 )
        return result;
      goto LABEL_8;
    }
    return -2147483643;
  }
LABEL_8:
  Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return -1073741670;
  v9 = *((_DWORD *)WnodeEventItem + 1);
  KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByProviderId = WmipDoFindRegEntryByProviderId(v9);
  v12 = (struct _LIST_ENTRY *)RegEntryByProviderId;
  if ( RegEntryByProviderId )
    _InterlockedIncrement(RegEntryByProviderId + 12);
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v11);
  *((_DWORD *)WnodeEventItem + 10) = *((_DWORD *)WnodeEventItem + 2);
  Pool2[1].Flink = v12;
  Pool2[1].Blink = (struct _LIST_ENTRY *)WnodeEventItem;
  ExInterlockedInsertTailList(&WmipNPEvent, Pool2, &WmipNPNotificationSpinlock);
  if ( _InterlockedIncrement(&WmipEventWorkItems) == 1 )
    ExQueueWorkItem(&WmipEventWorkQueueItem, DelayedWorkQueue);
  return v1;
}
