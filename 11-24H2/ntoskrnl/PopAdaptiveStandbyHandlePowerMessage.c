/*
 * XREFs of PopAdaptiveStandbyHandlePowerMessage @ 0x1407608DC
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x140A181C4 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x1404123E0 (EtwActivityIdControl.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     IoGetActivityIdThread @ 0x140435520 (IoGetActivityIdThread.c)
 *     IoSetActivityIdThread @ 0x140451750 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140459F90 (IoClearActivityIdThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopAdaptiveStandbyQueryReserveConfiguration @ 0x14076146C (PopAdaptiveStandbyQueryReserveConfiguration.c)
 *     Pdcv2ActivationClientDeactivate @ 0x1409ED030 (Pdcv2ActivationClientDeactivate.c)
 */

struct _KTHREAD *__fastcall PopAdaptiveStandbyHandlePowerMessage(__int64 a1)
{
  struct _LIST_ENTRY *v2; // rax
  int v3; // ecx
  int v4; // eax
  struct _LIST_ENTRY *v5; // rax
  int v6; // ecx
  struct _LIST_ENTRY *ActivityIdThread; // rax
  char *v8; // rdx
  __int64 v9; // rcx
  char v11; // [rsp+38h] [rbp-29h] BYREF
  int v12; // [rsp+3Ch] [rbp-25h] BYREF
  PVOID v13; // [rsp+40h] [rbp-21h] BYREF
  GUID ActivityId; // [rsp+48h] [rbp-19h] BYREF
  GUID *v15; // [rsp+58h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v16[2]; // [rsp+68h] [rbp+7h] BYREF
  PVOID *v17; // [rsp+88h] [rbp+27h]
  int v18; // [rsp+90h] [rbp+2Fh]
  int v19; // [rsp+94h] [rbp+33h]
  PVOID *v20; // [rsp+98h] [rbp+37h]
  int v21; // [rsp+A0h] [rbp+3Fh]
  int v22; // [rsp+A4h] [rbp+43h]

  v15 = 0LL;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v2 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
  v15 = (GUID *)v2;
  if ( (unsigned int)dword_140E08218 > 5 )
  {
    v3 = *(_DWORD *)a1;
    v19 = 0;
    v12 = v3;
    v18 = 4;
    v17 = (PVOID *)&v12;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08218,
      (unsigned __int8 *)word_14004DE8A,
      &ActivityId,
      (const GUID *)v2,
      3u,
      v16);
  }
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock);
  if ( *(_DWORD *)a1 == 19 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    qword_140F0719C = v9;
    if ( (unsigned int)dword_140E08218 <= 5 )
      goto LABEL_16;
    v19 = 0;
    v22 = 0;
    v17 = (PVOID *)&v11;
    v11 = v9;
    v20 = (PVOID *)&v12;
    v18 = 1;
    v12 = HIDWORD(v9);
    v21 = 4;
    ActivityIdThread = IoGetActivityIdThread();
    v8 = &byte_14004DE3F;
  }
  else
  {
    if ( *(_DWORD *)a1 != 20 )
      goto LABEL_16;
    byte_140F071B8 = 0;
    if ( qword_140F071C0 )
    {
      v4 = Pdcv2ActivationClientDeactivate(qword_140F071C0);
      if ( (unsigned int)dword_140E08218 > 5 )
      {
        v19 = 0;
        v22 = 0;
        v12 = v4;
        v17 = (PVOID *)&v12;
        v13 = qword_140F071C0;
        v20 = &v13;
        v18 = 4;
        v21 = 8;
        v5 = IoGetActivityIdThread();
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E08218,
          (unsigned __int8 *)byte_14004DF0D,
          (const GUID *)v5,
          0LL,
          4u,
          v16);
      }
      qword_140F071C0 = 0LL;
    }
    if ( qword_140F071A8 != *(_QWORD *)(a1 + 8) )
    {
      PopAdaptiveStandbyQueryReserveConfiguration(&PopAdaptiveStandbyContext);
      goto LABEL_16;
    }
    v6 = *(_DWORD *)(a1 + 16);
    dword_140F071B0 = v6;
    if ( (unsigned int)dword_140E08218 <= 5 )
      goto LABEL_16;
    v19 = 0;
    v22 = 0;
    v13 = (PVOID)qword_140F071A8;
    v17 = &v13;
    v20 = (PVOID *)&v12;
    v18 = 8;
    v12 = v6;
    v21 = 4;
    ActivityIdThread = IoGetActivityIdThread();
    v8 = byte_14004DEB3;
  }
  tlgWriteTransfer_EtwWriteTransfer(
    (__int64)&dword_140E08218,
    (unsigned __int8 *)v8,
    (const GUID *)ActivityIdThread,
    0LL,
    4u,
    v16);
LABEL_16:
  PopReleaseRwLock(&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08218 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08218,
      (unsigned __int8 *)byte_14004DFA3,
      &ActivityId,
      v15,
      2u,
      v16);
  return IoClearActivityIdThread((struct _LIST_ENTRY *)v15);
}
