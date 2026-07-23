/*
 * XREFs of HalpIommuLogEarlyFault @ 0x140551B40
 * Callers:
 *     HalpIommuEarlyFaultDpcRoutine @ 0x1405515E0 (HalpIommuEarlyFaultDpcRoutine.c)
 *     HalpIommuInitSystem @ 0x140B4F5A0 (HalpIommuInitSystem.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void HalpIommuLogEarlyFault()
{
  KIRQL v0; // bl
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  __int64 *v2; // [rsp+50h] [rbp+17h]
  int v3; // [rsp+58h] [rbp+1Fh]
  int v4; // [rsp+5Ch] [rbp+23h]
  int *v5; // [rsp+60h] [rbp+27h]
  int v6; // [rsp+68h] [rbp+2Fh]
  int v7; // [rsp+6Ch] [rbp+33h]
  __int64 *v8; // [rsp+70h] [rbp+37h]
  int v9; // [rsp+78h] [rbp+3Fh]
  int v10; // [rsp+7Ch] [rbp+43h]

  if ( HalpDiagnosticEventsRegistered )
  {
    if ( EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_IOMMU_FAULT_INIT) )
    {
      EtwWriteEx(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_IOMMU_FAULT_INIT, 0LL, 0, 0LL, 0LL, 0, 0LL);
      if ( EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_IOMMU_FAULT) )
      {
        v0 = KeAcquireSpinLockRaiseToDpc(&HalpIommuEarlyFaultRecordsLock);
        if ( (HalpIommuEarlyFaultRecords & 1) != 0 )
        {
          UserData.Reserved = 0;
          v4 = 0;
          v7 = 0;
          v10 = 0;
          UserData.Ptr = (ULONGLONG)&qword_140FC0B48;
          v2 = &qword_140FC0B50;
          v5 = &dword_140FC0B44;
          UserData.Size = 8;
          v8 = &qword_140FC0B58;
          v3 = 8;
          v6 = 4;
          v9 = 8;
          EtwWriteEx(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_IOMMU_FAULT, 0LL, 0, 0LL, 0LL, 4u, &UserData);
          HalpIommuEarlyFaultRecords &= ~1u;
        }
        KeReleaseSpinLock(&HalpIommuEarlyFaultRecordsLock, v0);
      }
    }
  }
}
