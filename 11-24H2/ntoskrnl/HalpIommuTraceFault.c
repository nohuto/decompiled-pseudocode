/*
 * XREFs of HalpIommuTraceFault @ 0x1404B0C2C
 * Callers:
 *     HalpIommuReportIommuFault @ 0x1404B0BE0 (HalpIommuReportIommuFault.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN HalpIommuTraceFault(__int64 a1, __int64 a2, int a3, ...)
{
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  __int64 *v5; // [rsp+58h] [rbp+17h]
  int v6; // [rsp+60h] [rbp+1Fh]
  int v7; // [rsp+64h] [rbp+23h]
  int *v8; // [rsp+68h] [rbp+27h]
  int v9; // [rsp+70h] [rbp+2Fh]
  int v10; // [rsp+74h] [rbp+33h]
  va_list v11; // [rsp+78h] [rbp+37h]
  int v12; // [rsp+80h] [rbp+3Fh]
  int v13; // [rsp+84h] [rbp+43h]
  __int64 v14; // [rsp+A8h] [rbp+67h] BYREF
  __int64 v15; // [rsp+B0h] [rbp+6Fh] BYREF
  int v16; // [rsp+B8h] [rbp+77h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+7Fh] BYREF
  va_list va; // [rsp+C0h] [rbp+7Fh]
  va_list va1; // [rsp+C8h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  v16 = a3;
  v15 = a2;
  v14 = a1;
  if ( HalpDiagnosticEventsRegistered )
  {
    result = EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_IOMMU_FAULT);
    if ( result )
    {
      UserData.Reserved = 0;
      v7 = 0;
      v10 = 0;
      v13 = 0;
      UserData.Ptr = (ULONGLONG)&v14;
      v5 = &v15;
      v8 = &v16;
      UserData.Size = 8;
      va_copy(v11, va);
      v6 = 8;
      v9 = 4;
      v12 = 8;
      return EtwWriteEx(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_IOMMU_FAULT, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  else
  {
    KxAcquireSpinLock(&HalpIommuEarlyFaultRecordsLock);
    if ( (HalpIommuEarlyFaultRecords & 1) == 0 )
    {
      qword_140FC0B48 = v14;
      qword_140FC0B50 = v15;
      dword_140FC0B44 = v16;
      HalpIommuEarlyFaultRecords |= 1u;
      qword_140FC0B58 = v17;
      KeInsertQueueDpc(&HalpIommuEarlyFaultDpc, 0LL, 0LL);
    }
    return KxReleaseSpinLock((volatile signed __int64 *)&HalpIommuEarlyFaultRecordsLock);
  }
  return result;
}
