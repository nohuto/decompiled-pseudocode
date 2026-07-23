/*
 * XREFs of PopAdaptiveStandbyActivatorCallback @ 0x1405D83C0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x1404123E0 (EtwActivityIdControl.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x14078DA44 (Pdcv2ActivationClientRenewActivation.c)
 */

GUID *__fastcall PopAdaptiveStandbyActivatorCallback(PVOID a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  const GUID *Flink; // r9
  int v6; // eax
  GUID *result; // rax
  int v8; // [rsp+30h] [rbp-59h] BYREF
  int v9; // [rsp+34h] [rbp-55h] BYREF
  PVOID v10; // [rsp+38h] [rbp-51h] BYREF
  GUID ActivityId; // [rsp+40h] [rbp-49h] BYREF
  GUID *v12; // [rsp+50h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v13[2]; // [rsp+60h] [rbp-29h] BYREF
  PVOID *v14; // [rsp+80h] [rbp-9h]
  int v15; // [rsp+88h] [rbp-1h]
  int v16; // [rsp+8Ch] [rbp+3h]
  int *v17; // [rsp+90h] [rbp+7h]
  int v18; // [rsp+98h] [rbp+Fh]
  int v19; // [rsp+9Ch] [rbp+13h]
  PVOID *v20; // [rsp+A0h] [rbp+17h]
  int v21; // [rsp+A8h] [rbp+1Fh]
  int v22; // [rsp+ACh] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+B0h] [rbp+27h] BYREF
  const wchar_t *v24; // [rsp+C0h] [rbp+37h]
  __int128 v25; // [rsp+C8h] [rbp+3Fh]

  v8 = 0;
  v12 = 0LL;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  CurrentThread = KeGetCurrentThread();
  Flink = (const GUID *)CurrentThread[1].WaitBlock[1].WaitListEntry.Flink;
  CurrentThread[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)&ActivityId;
  v12 = (GUID *)Flink;
  if ( (unsigned int)dword_140E08218 > 5 )
  {
    v16 = 0;
    v19 = 0;
    v14 = &v10;
    v10 = a1;
    v17 = &v9;
    v15 = 8;
    v9 = a2;
    v18 = 4;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08218,
      (unsigned __int8 *)&word_14004E57E,
      &ActivityId,
      Flink,
      4u,
      v13);
  }
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock);
  if ( a1 == qword_140F071C0 )
  {
    if ( byte_140F071B8 )
    {
      *(_QWORD *)&v23.Size = 0LL;
      v24 = L"Reserve Configuration Update";
      v23.Ptr = 0x12C00000001LL;
      v25 = 0LL;
      v6 = Pdcv2ActivationClientRenewActivation(a1, &v23, &v8);
      if ( (unsigned int)dword_140E08218 > 5 )
      {
        v16 = 0;
        v19 = 0;
        v22 = 0;
        v9 = v6;
        v14 = (PVOID *)&v9;
        v17 = &v8;
        v10 = qword_140F071C0;
        v20 = &v10;
        v15 = 4;
        v18 = 4;
        v21 = 8;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E08218,
          (unsigned __int8 *)byte_14004E509,
          (const GUID *)KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink,
          0LL,
          5u,
          v13);
      }
    }
  }
  PopReleaseRwLock(&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08218 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08218,
      (unsigned __int8 *)&word_14004E5C6,
      &ActivityId,
      v12,
      2u,
      &v23);
  result = v12;
  KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)v12;
  return result;
}
