/*
 * XREFs of PiUEventDequeuePendingEventWorker @ 0x1408570E0
 * Callers:
 *     PiUEventFreeClientRegistrationContext @ 0x1408581CC (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventNotifyClient @ 0x1408D0228 (PiUEventNotifyClient.c)
 *     PiUEventHandleVetoEvent @ 0x140A8758C (PiUEventHandleVetoEvent.c)
 * Callees:
 *     McTemplateK0qqzqqtjqzjzttx_EtwWriteTransfer @ 0x1405A348C (McTemplateK0qqzqqtjqzjzttx_EtwWriteTransfer.c)
 *     PiUEventGatherEventData @ 0x140722678 (PiUEventGatherEventData.c)
 *     PiUEventGetProcessImagePath @ 0x1407226B0 (PiUEventGetProcessImagePath.c)
 *     PiUEventDereferenceEventEntry @ 0x14085796C (PiUEventDereferenceEventEntry.c)
 *     PiUEventFreeProcessImagePath @ 0x140AB79A8 (PiUEventFreeProcessImagePath.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventDequeuePendingEventWorker(__int64 a1, _QWORD *a2, char a3, char a4)
{
  _QWORD **v6; // rcx
  void **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r8
  const wchar_t *v15; // [rsp+98h] [rbp+27h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+2Fh] BYREF
  const WCHAR *v17[2]; // [rsp+A8h] [rbp+37h] BYREF
  const wchar_t *v18; // [rsp+E0h] [rbp+6Fh] BYREF

  v6 = (_QWORD **)*a2;
  v17[0] = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v18 = 0LL;
  if ( v6[1] != a2 || (v9 = (void **)a2[1], *v9 != a2) )
    __fastfail(3u);
  *v9 = v6;
  v6[1] = v9;
  if ( !a3 )
    --*(_DWORD *)(a1 + 128);
  if ( byte_140EEFF64 < 0 || (byte_140EEFF64 & 2) != 0 )
  {
    v10 = (unsigned __int128)((__int64)(MEMORY[0xFFFFF78000000014] - a2[2]) * (__int128)0x346DC5D63886594BLL) >> 64;
    v11 = a2[3];
    v12 = ((unsigned __int64)v10 >> 63) + (v10 >> 11);
    if ( *(_BYTE *)(v11 + 76) )
    {
      if ( v12 <= (unsigned __int16)PiUEventSyncEventTimeMs )
        goto LABEL_10;
      PiUEventGatherEventData(v11, v17, (__int64)&v16, (__int64)&v15);
      PiUEventGetProcessImagePath(*(void **)(a1 + 48), &v18);
      if ( (byte_140EEFF64 & 2) != 0 )
        McTemplateK0qqzqqtjqzjzttx_EtwWriteTransfer(
          *(unsigned __int8 *)(a2[3] + 76LL),
          (const EVENT_DESCRIPTOR *)KMPnPEvt_UEvent_DequeueOldSyncEvent,
          v14,
          *(_DWORD *)(a1 + 132),
          *(_DWORD *)(a1 + 48),
          v18,
          *(_DWORD *)(a1 + 128),
          *(_DWORD *)(a1 + 136),
          a4,
          a2[3] + 80LL,
          *(_DWORD *)(a2[3] + 96LL),
          v17[0],
          v16,
          v15,
          *(_BYTE *)(a2[3] + 76LL),
          a3,
          v12);
    }
    else
    {
      if ( v12 <= (unsigned __int16)PiUEventPendingQueueTimeMs )
        goto LABEL_10;
      PiUEventGatherEventData(v11, v17, (__int64)&v16, (__int64)&v15);
      PiUEventGetProcessImagePath(*(void **)(a1 + 48), &v18);
      if ( byte_140EEFF64 < 0 )
        McTemplateK0qqzqqtjqzjzttx_EtwWriteTransfer(
          *(unsigned __int8 *)(a2[3] + 76LL),
          (const EVENT_DESCRIPTOR *)KMPnPEvt_UEvent_DequeueOldAsyncEvent,
          v13,
          *(_DWORD *)(a1 + 132),
          *(_DWORD *)(a1 + 48),
          v18,
          *(_DWORD *)(a1 + 128),
          *(_DWORD *)(a1 + 136),
          a4,
          a2[3] + 80LL,
          *(_DWORD *)(a2[3] + 96LL),
          v17[0],
          v16,
          v15,
          *(_BYTE *)(a2[3] + 76LL),
          a3,
          v12);
    }
    PiUEventFreeProcessImagePath(&v18);
  }
LABEL_10:
  PiUEventDereferenceEventEntry((PVOID)a2[3]);
  ExFreePoolWithTag(a2, 0x59706E50u);
}
