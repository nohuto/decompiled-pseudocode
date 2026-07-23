/*
 * XREFs of PopPowerAdapterRemove @ 0x14075AD90
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x140408D50 (IoCancelIrp.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x14049F07C (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 */

void __fastcall PopPowerAdapterRemove(__int64 a1)
{
  __int64 v1; // rbx
  int Buffer; // [rsp+40h] [rbp-58h] BYREF
  __int64 v3; // [rsp+48h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+50h] [rbp-48h] BYREF
  __int64 *v5; // [rsp+70h] [rbp-28h]
  int v6; // [rsp+78h] [rbp-20h]
  int v7; // [rsp+7Ch] [rbp-1Ch]

  Buffer = 0;
  v1 = qword_140F0BF30;
  if ( qword_140F0BF30 && qword_140F0BF30 == a1 )
  {
    IoCancelIrp(*(PIRP *)(qword_140F0BF30 + 56));
    KeWaitForSingleObject((PVOID)(v1 + 104), Executive, 0, 0, 0LL);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB);
    qword_140F0BF30 = 0LL;
    ZwUpdateWnfStateData(&WNF_PO_POWER_ADAPTER_REC_CAPABILITIES, &Buffer, 4u, 0LL, 0LL, 0, 0);
    if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = 0x1000000LL;
      v6 = 8;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)byte_14004CB5D, 0LL, 0LL, 3u, &v4);
    }
    PopBatteryQueueWork(8u);
    PopReleaseRwLock((signed __int64 *)&PopCB);
  }
}
