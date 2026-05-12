/*
 * XREFs of StorPortAdapterDirectedPowerUpRequestD0 @ 0x140079DD0
 * Callers:
 *     StorPortAdapterDirectedPowerUp @ 0x140079C00 (StorPortAdapterDirectedPowerUp.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140053FF0 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     RaFlushDFxQueue @ 0x14006C134 (RaFlushDFxQueue.c)
 */

void __fastcall StorPortAdapterDirectedPowerUpRequestD0(char *Context)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  PVOID Contexta; // [rsp+20h] [rbp-38h]
  __int64 v5; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  if ( (*((_DWORD *)Context + 87) != 1 || (Context[107] & 4) != 0)
    && PoRequestPowerIrp(
         *((PDEVICE_OBJECT *)Context + 1),
         2u,
         (POWER_STATE)1,
         (PREQUEST_POWER_COMPLETE)StorPortAdapterDirectedPowerUpCompletion,
         Context,
         0LL) == 259 )
  {
    Context[107] |= 2u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoFxReportDevicePoweredOn(**((_QWORD **)Context + 620));
    if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
    {
      LODWORD(v5) = 0;
      LODWORD(Contexta) = *((_DWORD *)Context + 14);
      McTemplateK0pqq_EtwWriteTransfer(
        v2,
        &EventAdapterDirectedPowerUpStop,
        v3,
        **((_QWORD **)Context + 620),
        Contexta,
        v5);
    }
    if ( *((char **)Context + 718) == Context + 5744 )
      Context[109] &= ~0x40u;
    else
      RaFlushDFxQueue(*((struct _DEVICE_OBJECT **)Context + 1));
  }
}
