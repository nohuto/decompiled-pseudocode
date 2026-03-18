/*
 * XREFs of PopAdaptiveStandbyHandlePowerMessage @ 0x140761570
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x140A23DB4 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     EtwActivityIdControl @ 0x14041E010 (EtwActivityIdControl.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     IoGetActivityIdThread @ 0x14043F3F0 (IoGetActivityIdThread.c)
 *     IoSetActivityIdThread @ 0x14045C3B0 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140463690 (IoClearActivityIdThread.c)
 *     PopAdaptiveStandbyQueryReserveConfiguration @ 0x1405DB334 (PopAdaptiveStandbyQueryReserveConfiguration.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     Pdcv2ActivationClientDeactivate @ 0x1409EF760 (Pdcv2ActivationClientDeactivate.c)
 */

struct _KTHREAD *__fastcall PopAdaptiveStandbyHandlePowerMessage(__int64 a1)
{
  struct _LIST_ENTRY *v2; // rax
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // r9d
  int v7; // eax
  struct _LIST_ENTRY *v8; // rax
  int v9; // ecx
  struct _LIST_ENTRY *ActivityIdThread; // rax
  unsigned __int8 *v11; // rdx
  __int64 v12; // rcx
  char v14; // [rsp+38h] [rbp-29h] BYREF
  int v15; // [rsp+3Ch] [rbp-25h] BYREF
  PVOID v16; // [rsp+40h] [rbp-21h] BYREF
  GUID ActivityId; // [rsp+48h] [rbp-19h] BYREF
  GUID *v18; // [rsp+58h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v19[2]; // [rsp+68h] [rbp+7h] BYREF
  PVOID *v20; // [rsp+88h] [rbp+27h]
  int v21; // [rsp+90h] [rbp+2Fh]
  int v22; // [rsp+94h] [rbp+33h]
  PVOID *v23; // [rsp+98h] [rbp+37h]
  int v24; // [rsp+A0h] [rbp+3Fh]
  int v25; // [rsp+A4h] [rbp+43h]

  v18 = 0LL;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v2 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
  v18 = (GUID *)v2;
  if ( (unsigned int)dword_140E08258 > 5 )
  {
    v3 = *(_DWORD *)a1;
    v22 = 0;
    v15 = v3;
    v21 = 4;
    v20 = (PVOID *)&v15;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08258,
      (unsigned __int8 *)&byte_14004D837,
      &ActivityId,
      (const GUID *)v2,
      3u,
      v19);
  }
  PopAcquireRwLockExclusive(&PopAdaptiveStandbyLock);
  if ( *(_DWORD *)a1 == 19 )
  {
    v12 = *(_QWORD *)(a1 + 8);
    qword_140F06E9C = v12;
    if ( (unsigned int)dword_140E08258 <= 5 )
      goto LABEL_16;
    v22 = 0;
    v25 = 0;
    v20 = (PVOID *)&v14;
    v14 = v12;
    v23 = (PVOID *)&v15;
    v21 = 1;
    v15 = HIDWORD(v12);
    v24 = 4;
    ActivityIdThread = IoGetActivityIdThread();
    v11 = (unsigned __int8 *)&dword_14004D7EC;
  }
  else
  {
    if ( *(_DWORD *)a1 != 20 )
      goto LABEL_16;
    byte_140F06EB8 = 0;
    if ( qword_140F06EC0 )
    {
      v7 = Pdcv2ActivationClientDeactivate(qword_140F06EC0);
      if ( (unsigned int)dword_140E08258 > 5 )
      {
        v22 = 0;
        v25 = 0;
        v15 = v7;
        v20 = (PVOID *)&v15;
        v16 = qword_140F06EC0;
        v23 = &v16;
        v21 = 4;
        v24 = 8;
        v8 = IoGetActivityIdThread();
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E08258,
          (unsigned __int8 *)byte_14004D78D,
          (const GUID *)v8,
          0LL,
          4u,
          v19);
      }
      qword_140F06EC0 = 0LL;
    }
    if ( qword_140F06EA8 != *(_QWORD *)(a1 + 8) )
    {
      PopAdaptiveStandbyQueryReserveConfiguration((__int64)&PopAdaptiveStandbyContext, v4, v5, v6);
      goto LABEL_16;
    }
    v9 = *(_DWORD *)(a1 + 16);
    dword_140F06EB0 = v9;
    if ( (unsigned int)dword_140E08258 <= 5 )
      goto LABEL_16;
    v22 = 0;
    v25 = 0;
    v16 = (PVOID)qword_140F06EA8;
    v20 = &v16;
    v23 = (PVOID *)&v15;
    v21 = 8;
    v15 = v9;
    v24 = 4;
    ActivityIdThread = IoGetActivityIdThread();
    v11 = (unsigned __int8 *)byte_14004D8EB;
  }
  tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E08258, v11, (const GUID *)ActivityIdThread, 0LL, 4u, v19);
LABEL_16:
  PopReleaseRwLock((signed __int64 *)&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08258 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08258,
      (unsigned __int8 *)&qword_14004D8C8,
      &ActivityId,
      v18,
      2u,
      v19);
  return IoClearActivityIdThread((struct _LIST_ENTRY *)v18);
}
