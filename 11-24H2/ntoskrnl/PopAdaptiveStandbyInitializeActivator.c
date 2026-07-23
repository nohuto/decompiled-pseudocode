/*
 * XREFs of PopAdaptiveStandbyInitializeActivator @ 0x140760F10
 * Callers:
 *     PopDelayedPdcRegistrationWorker @ 0x14075C3F0 (PopDelayedPdcRegistrationWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x1404123E0 (EtwActivityIdControl.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     IoSetActivityIdThread @ 0x140451750 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140459F90 (IoClearActivityIdThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     Pdcv2ActivationClientRegister @ 0x14078D88C (Pdcv2ActivationClientRegister.c)
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
  if ( (unsigned int)dword_140E08218 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08218,
      (unsigned __int8 *)byte_14004EFF5,
      &ActivityId,
      (const GUID *)v0,
      2u,
      &v6);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock);
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
  PopReleaseRwLock(&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08218 > 5 )
  {
    v8 = &v3;
    v3 = v1;
    v9 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08218,
      (unsigned __int8 *)&dword_14004F054,
      &ActivityId,
      v5,
      3u,
      &v6);
  }
  return IoClearActivityIdThread((struct _LIST_ENTRY *)v5);
}
