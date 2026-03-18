/*
 * XREFs of ImpShutdownWorker @ 0x1C00C2890
 * Callers:
 *     ImSessionStart @ 0x1C00BB5B0 (ImSessionStart.c)
 *     ?ShutdownImWorker@@YAJXZ @ 0x1C00C5340 (-ShutdownImWorker@@YAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0079EA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ImpReleaseLock @ 0x1C007B85C (ImpReleaseLock.c)
 *     ImpAcquireLock @ 0x1C007B8AC (ImpAcquireLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00ADF88 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 */

__int64 ImpShutdownWorker()
{
  int v1; // [rsp+30h] [rbp-68h] BYREF
  int v2; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+40h] [rbp-58h] BYREF
  int *v4; // [rsp+60h] [rbp-38h]
  int v5; // [rsp+68h] [rbp-30h]
  int v6; // [rsp+6Ch] [rbp-2Ch]
  int *v7; // [rsp+70h] [rbp-28h]
  int v8; // [rsp+78h] [rbp-20h]
  int v9; // [rsp+7Ch] [rbp-1Ch]

  ImpAcquireLock();
  if ( !ImpIsWorkerThreadEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  ImpIsWorkerThreadEnabled = 0;
  ImpReleaseLock();
  if ( !ImpWorkerEvent )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  KeSetEvent((PRKEVENT)ImpWorkerEvent, 0, 0);
  if ( (unsigned int)dword_1C0288780 > 5 )
  {
    v6 = 0;
    v9 = 0;
    v1 = (unsigned __int8)ImpIsActive;
    v5 = 4;
    v4 = &v1;
    v2 = ImpSessionId;
    v7 = &v2;
    v8 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0288780, (unsigned __int8 *)dword_1C0261A3B, 0LL, 0LL, 4u, &v3);
  }
  return 0LL;
}
