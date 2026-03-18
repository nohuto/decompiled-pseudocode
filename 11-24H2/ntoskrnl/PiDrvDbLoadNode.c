/*
 * XREFs of PiDrvDbLoadNode @ 0x140925F40
 * Callers:
 *     PiDrvDbNodeActionCallback @ 0x140925E10 (PiDrvDbNodeActionCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1404A044C (PnpDiagnosticTraceObjectWithStatus.c)
 *     ZwWaitForSingleObject @ 0x1406A6490 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     _PnpCtxRegOpenKey @ 0x1408C7AFC (_PnpCtxRegOpenKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C7B60 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall PiDrvDbLoadNode(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // ebx
  _QWORD *v6; // r14
  NTSTATUS v8; // eax
  int v9; // edi
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( *(_BYTE *)(a1 + 80) )
  {
    v5 = -1073740697;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 488) )
    {
      KeCancelTimer((PKTIMER)(a1 + 264));
      *(_BYTE *)(a1 + 488) = 0;
    }
    v6 = (_QWORD *)(a1 + 72);
    if ( !*(_QWORD *)(a1 + 72) )
    {
      if ( (int)RegRtlOpenKeyTransacted(0LL, *(const WCHAR **)(a1 + 40), 0, 0x2000000u, &Handle, 0LL) < 0
        || (v5 = PnpCtxRegOpenKey(0LL, (__int64)Handle, (__int64)L"DriverDatabase", 0, 0x2000000u, a1 + 72),
            ZwClose(Handle),
            v5 < 0) )
      {
        if ( PnpShutdownEvent.Header.SignalState )
        {
          v5 = -1073741077;
          goto LABEL_6;
        }
        v8 = ZwWaitForSingleObject(*(HANDLE *)(a1 + 472), 0, 0LL);
        v9 = v8;
        if ( !*(_BYTE *)(a1 + 489) )
        {
          *(_BYTE *)(a1 + 489) = 1;
          PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseUnload_Stop, (unsigned __int16 *)(a1 + 16), v8);
          PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseLoaded_Stop, (unsigned __int16 *)(a1 + 16), v9);
        }
        *(_QWORD *)(a1 + 248) = a1;
        *(_QWORD *)(a1 + 240) = PiDrvDbLoadNodeWorkerCallback;
        *(_QWORD *)(a1 + 224) = 0LL;
        KeInitializeEvent((PRKEVENT)(a1 + 200), SynchronizationEvent, 0);
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 224), CriticalWorkQueue);
        KeWaitForSingleObject((PVOID)(a1 + 200), Executive, 0, 0, 0LL);
        if ( *v6 )
        {
          v5 = 0;
        }
        else if ( *(_BYTE *)(a1 + 80) )
        {
          v5 = -1073740697;
        }
        else
        {
          v5 = -1073741823;
          if ( *(int *)(a1 + 256) < 0 )
            v5 = *(_DWORD *)(a1 + 256);
        }
      }
    }
    *a2 = *v6;
  }
LABEL_6:
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
