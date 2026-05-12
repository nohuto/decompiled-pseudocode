/*
 * XREFs of StorPortAdapterDirectedPowerDownRequestD3 @ 0x1400799C0
 * Callers:
 *     StorPortAdapterDirectedPowerDown @ 0x140079880 (StorPortAdapterDirectedPowerDown.c)
 *     StorPortAdapterDirectedPowerDownRequestD3Passive @ 0x140079BE0 (StorPortAdapterDirectedPowerDownRequestD3Passive.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140053FF0 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall StorPortAdapterDirectedPowerDownRequestD3(char *Context)
{
  _QWORD **v2; // r14
  NTSTATUS v3; // edi
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // r8
  PVOID Contexta; // [rsp+20h] [rbp-48h]
  PIRP *Irp; // [rsp+28h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  v2 = (_QWORD **)(Context + 4960);
  if ( *((_DWORD *)Context + 87) == 1 )
  {
    if ( (*((_DWORD *)*v2 + 5) & 0x80u) != 0 && (*(_DWORD *)((*v2)[1] + 12LL) & 0x800) != 0 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( KeGetCurrentIrql() )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 1424, 1, 0) )
          IoQueueWorkItem(
            *((PIO_WORKITEM *)Context + 710),
            StorPortAdapterDirectedPowerDownRequestD3Passive,
            DelayedWorkQueue,
            Context);
        return;
      }
      v3 = PoRequestPowerIrp(
             *((PDEVICE_OBJECT *)Context + 1),
             0,
             (POWER_STATE)1,
             StorPortAdapterPoFxWaitWakeCompletion,
             Context,
             (PIRP *)*v2 + 9);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
      if ( v3 == 259 )
        *((_DWORD *)*v2 + 5) |= 0x40u;
    }
    if ( PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)4,
           (PREQUEST_POWER_COMPLETE)StorPortAdapterDirectedPowerDownCompletion,
           Context,
           0LL) == 259 )
    {
      Context[107] |= 4u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v5 = (__int64)*v2;
  *((_QWORD *)Context + 666) = MEMORY[0xFFFFF78000000008];
  v6 = *(_DWORD *)(v5 + 20);
  if ( (Context[108] & 1) != 0 )
  {
    *(_DWORD *)(v5 + 20) = v6 | 0x20;
    if ( !*((_QWORD *)Context + 665) )
      *((_QWORD *)Context + 665) = *((_QWORD *)Context + 666);
  }
  else
  {
    *(_DWORD *)(v5 + 20) = v6 & 0xFFFFFFDF;
  }
  PoFxCompleteDirectedPowerDown(**v2, v5, v4);
  if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
  {
    LODWORD(Irp) = 0;
    LODWORD(Contexta) = *((_DWORD *)Context + 14);
    McTemplateK0pqq_EtwWriteTransfer(v7, &EventAdapterDirectedPowerDownStop, v8, **v2, Contexta, Irp);
  }
}
