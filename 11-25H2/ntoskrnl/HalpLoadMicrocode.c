/*
 * XREFs of HalpLoadMicrocode @ 0x1406F5C90
 * Callers:
 *     <none>
 * Callees:
 *     HalpMcUpdateUnlock @ 0x14036D0B0 (HalpMcUpdateUnlock.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1404690A0 (KeIpiGenericCall.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14049BFDC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpMcUpdateLock @ 0x1404BB93C (HalpMcUpdateLock.c)
 *     HalpMcUpdatePostUpdate @ 0x1404DA1E0 (HalpMcUpdatePostUpdate.c)
 *     HalpGetMicrocodePatchRecord @ 0x140556B0C (HalpGetMicrocodePatchRecord.c)
 *     HalpMcGetLoadConfiguration @ 0x140556FB4 (HalpMcGetLoadConfiguration.c)
 *     HalpMcGetRollbackRequest @ 0x14055706C (HalpMcGetRollbackRequest.c)
 *     HalpMcParallelLoadSupported @ 0x1405571CC (HalpMcParallelLoadSupported.c)
 *     HalpMcPatchConfiguration @ 0x140557204 (HalpMcPatchConfiguration.c)
 *     PrExtControlOperations @ 0x140657C2C (PrExtControlOperations.c)
 *     PrExtExportRecordData @ 0x140657D54 (PrExtExportRecordData.c)
 *     PrExtGetRecordDataLength @ 0x140657F50 (PrExtGetRecordDataLength.c)
 *     PrExtLogLatencyTime @ 0x140657F74 (PrExtLogLatencyTime.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     HalpLoadMicrocodeSerialized @ 0x1406F5EE0 (HalpLoadMicrocodeSerialized.c)
 *     HalpMcExportAndChargeNeededData @ 0x1406F5FB4 (HalpMcExportAndChargeNeededData.c)
 *     PoDisableSleepStates @ 0x140740BA0 (PoDisableSleepStates.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpLoadMicrocode(__int64 a1)
{
  char v1; // r12
  bool IsMicrosoftCompatibleHvLoaded; // si
  int MicrocodePatchRecord; // ebx
  char Supported; // di
  size_t Size; // [rsp+30h] [rbp-20h] BYREF
  void *Src; // [rsp+38h] [rbp-18h] BYREF
  __int64 v9; // [rsp+40h] [rbp-10h] BYREF
  __int64 v10; // [rsp+48h] [rbp-8h] BYREF
  PVOID P; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v12; // [rsp+90h] [rbp+40h] BYREF
  __int64 v13; // [rsp+98h] [rbp+48h] BYREF

  v9 = 0LL;
  v1 = 0;
  Src = 0LL;
  Size = 0LL;
  v12 = 0;
  v13 = 0LL;
  v10 = 0LL;
  LOBYTE(P) = 0;
  IsMicrosoftCompatibleHvLoaded = HalpIsMicrosoftCompatibleHvLoaded();
  MicrocodePatchRecord = HalpMcPatchConfiguration();
  if ( MicrocodePatchRecord < 0 )
    goto LABEL_22;
  HalpMcGetLoadConfiguration(&P);
  Supported = (char)P;
  if ( (_BYTE)P )
  {
    Supported = HalpMcParallelLoadSupported();
    LOBYTE(P) = Supported;
  }
  HalpMcGetRollbackRequest();
  MicrocodePatchRecord = PrExtControlOperations(8, *(unsigned int **)(a1 + 48), 8);
  if ( MicrocodePatchRecord < 0
    || (MicrocodePatchRecord = HalpGetMicrocodePatchRecord(a1, &Src, &Size), MicrocodePatchRecord < 0) )
  {
LABEL_22:
    if ( !IsMicrosoftCompatibleHvLoaded )
      return (unsigned int)MicrocodePatchRecord;
    goto LABEL_23;
  }
  if ( !IsMicrosoftCompatibleHvLoaded || !qword_140FC08F0 )
  {
    MicrocodePatchRecord = HalpMcExportAndChargeNeededData(Src, (unsigned int)Size);
    if ( MicrocodePatchRecord < 0 )
      goto LABEL_22;
    MicrocodePatchRecord = HalpMcUpdateLock();
    if ( MicrocodePatchRecord < 0 )
      goto LABEL_22;
    v1 = 1;
    if ( Supported )
    {
      HalpMcLoadSyncBarrier = KeQueryActiveProcessorCountEx(0xFFFFu);
      HalpMcSyncBarrier = HalpMcLoadSyncBarrier;
      KeIpiGenericCall((PKIPI_BROADCAST_WORKER)HalpMcLoadMicrocodeWorker, 0LL);
    }
    else
    {
      HalpLoadMicrocodeSerialized();
    }
    goto LABEL_20;
  }
  MicrocodePatchRecord = PrExtGetRecordDataLength((__int64)Src, Size, &v13);
  if ( MicrocodePatchRecord != -1073741762 )
  {
    P = (PVOID)ExAllocatePool2(0x40uLL);
    if ( !P )
    {
      MicrocodePatchRecord = -1073741664;
      goto LABEL_23;
    }
    MicrocodePatchRecord = PrExtExportRecordData((int *)Src, Size, v13, (__int64)&P);
    if ( MicrocodePatchRecord >= 0 )
    {
      MicrocodePatchRecord = guard_dispatch_icall_no_overrides(P);
      if ( MicrocodePatchRecord >= 0 )
      {
        ExFreePoolWithTag(P, 0x636C6148u);
        v12 = 3;
        PrExtControlOperations(10, &v12, 4);
        if ( qword_140FC08F8 )
        {
          guard_dispatch_icall_no_overrides(&v9);
          PrExtLogLatencyTime(v9);
        }
LABEL_20:
        HalpMcUpdatePostUpdate();
        MicrocodePatchRecord = PrExtControlOperations(9, *(unsigned int **)(a1 + 48), 8);
        if ( v1 )
          HalpMcUpdateUnlock();
        goto LABEL_22;
      }
    }
  }
LABEL_23:
  if ( !HalMcSleepDisabled )
  {
    MicrocodePatchRecord = PoDisableSleepStates(1LL, 14LL, &v10);
    if ( MicrocodePatchRecord >= 0 )
      HalMcSleepDisabled = 1;
  }
  return (unsigned int)MicrocodePatchRecord;
}
