/*
 * XREFs of PopPowerAdapterRemove @ 0x14075BD60
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     IoCancelIrp @ 0x140418FA0 (IoCancelIrp.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x1404A42EC (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 */

void __fastcall PopPowerAdapterRemove(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // [rsp+40h] [rbp-58h] BYREF
  __int64 v3; // [rsp+48h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+50h] [rbp-48h] BYREF
  __int64 *v5; // [rsp+70h] [rbp-28h]
  int v6; // [rsp+78h] [rbp-20h]
  int v7; // [rsp+7Ch] [rbp-1Ch]

  v2 = 0;
  v1 = qword_140F0B0F0;
  if ( qword_140F0B0F0 && qword_140F0B0F0 == a1 )
  {
    IoCancelIrp(*(PIRP *)(qword_140F0B0F0 + 56));
    KeWaitForSingleObject((PVOID)(v1 + 104), Executive, 0, 0, 0LL);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB);
    qword_140F0B0F0 = 0LL;
    ZwUpdateWnfStateData((__int64)&WNF_PO_POWER_ADAPTER_REC_CAPABILITIES, (__int64)&v2);
    if ( (unsigned int)dword_140E076F0 > 5 && tlgKeywordOn((__int64)&dword_140E076F0, 0x400000000000LL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = 0x1000000LL;
      v6 = 8;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E076F0,
        (unsigned __int8 *)&byte_14004CC0F,
        0LL,
        0LL,
        3u,
        &v4);
    }
    PopBatteryQueueWork(8u);
    PopReleaseRwLock((signed __int64 *)&PopCB);
  }
}
