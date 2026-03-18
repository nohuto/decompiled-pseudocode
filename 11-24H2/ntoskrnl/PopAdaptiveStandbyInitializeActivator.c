/*
 * XREFs of PopAdaptiveStandbyInitializeActivator @ 0x140761B4C
 * Callers:
 *     PopDelayedPdcRegistrationWorker @ 0x14075D450 (PopDelayedPdcRegistrationWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     EtwActivityIdControl @ 0x14041E010 (EtwActivityIdControl.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     IoSetActivityIdThread @ 0x14045C3B0 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140463690 (IoClearActivityIdThread.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     Pdcv2ActivationClientRegister @ 0x14078D95C (Pdcv2ActivationClientRegister.c)
 */

struct _KTHREAD *PopAdaptiveStandbyInitializeActivator()
{
  struct _LIST_ENTRY *v0; // rax
  int v1; // ebx
  int v3; // [rsp+30h] [rbp-9h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-1h] BYREF
  GUID *v5; // [rsp+48h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+50h] [rbp+17h] BYREF
  __int64 v7; // [rsp+60h] [rbp+27h]
  int *v8; // [rsp+70h] [rbp+37h]
  __int64 v9; // [rsp+78h] [rbp+3Fh]

  v5 = 0LL;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v0 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
  v5 = (GUID *)v0;
  if ( (unsigned int)dword_140E08258 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08258,
      (unsigned __int8 *)byte_14004E193,
      &ActivityId,
      (const GUID *)v0,
      2u,
      &v6);
  PopAcquireRwLockExclusive(&PopAdaptiveStandbyLock);
  if ( PopAdaptiveStandbyContext )
  {
    v6.Ptr = 1LL;
    *(_QWORD *)&v6.Size = PopAdaptiveStandbyActivatorCallback;
    v7 = 0LL;
    v1 = Pdcv2ActivationClientRegister(124);
    if ( v1 >= 0 )
      v1 = 0;
  }
  else
  {
    v1 = -1073741637;
  }
  PopReleaseRwLock((signed __int64 *)&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08258 > 5 )
  {
    v8 = &v3;
    v3 = v1;
    v9 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08258,
      (unsigned __int8 *)byte_14004E261,
      &ActivityId,
      v5,
      3u,
      &v6);
  }
  return IoClearActivityIdThread((struct _LIST_ENTRY *)v5);
}
