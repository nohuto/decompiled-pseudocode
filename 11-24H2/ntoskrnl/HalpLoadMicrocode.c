/*
 * XREFs of HalpLoadMicrocode @ 0x1406FF6C0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x14045F290 (KeIpiGenericCall.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A053C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpMcUpdateUnlock @ 0x1404A8C08 (HalpMcUpdateUnlock.c)
 *     HalpMcUpdateLock @ 0x1404B5C2C (HalpMcUpdateLock.c)
 *     HalpMcUpdatePostUpdate @ 0x1404D25E0 (HalpMcUpdatePostUpdate.c)
 *     HalpGetMicrocodePatchRecord @ 0x14055703C (HalpGetMicrocodePatchRecord.c)
 *     HalpMcGetLoadConfiguration @ 0x1405574E4 (HalpMcGetLoadConfiguration.c)
 *     HalpMcGetRollbackRequest @ 0x14055759C (HalpMcGetRollbackRequest.c)
 *     HalpMcParallelLoadSupported @ 0x1405576FC (HalpMcParallelLoadSupported.c)
 *     HalpMcPatchConfiguration @ 0x140557734 (HalpMcPatchConfiguration.c)
 *     PrExtControlOperations @ 0x1406627DC (PrExtControlOperations.c)
 *     PrExtExportRecordData @ 0x140662904 (PrExtExportRecordData.c)
 *     PrExtGetRecordDataLength @ 0x140662B00 (PrExtGetRecordDataLength.c)
 *     PrExtLogLatencyTime @ 0x140662B24 (PrExtLogLatencyTime.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     HalpLoadMicrocodeSerialized @ 0x1406FF910 (HalpLoadMicrocodeSerialized.c)
 *     HalpMcExportAndChargeNeededData @ 0x1406FF9E4 (HalpMcExportAndChargeNeededData.c)
 *     PoDisableSleepStates @ 0x14074AFA0 (PoDisableSleepStates.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpLoadMicrocode(__int64 a1)
{
  char v1; // r12
  bool IsMicrosoftCompatibleHvLoaded; // si
  int MicrocodePatchRecord; // ebx
  char Supported; // di
  __int64 v6; // rdx
  size_t Size; // [rsp+30h] [rbp-20h] BYREF
  void *Src; // [rsp+38h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h] BYREF
  __int64 v11; // [rsp+48h] [rbp-8h] BYREF
  PVOID P; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v13; // [rsp+90h] [rbp+40h] BYREF
  ULONG_PTR v14; // [rsp+98h] [rbp+48h] BYREF

  v10 = 0LL;
  v1 = 0;
  Src = 0LL;
  Size = 0LL;
  v13 = 0;
  v14 = 0LL;
  v11 = 0LL;
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
  if ( !IsMicrosoftCompatibleHvLoaded || !qword_140FC12F0 )
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
  MicrocodePatchRecord = PrExtGetRecordDataLength((__int64)Src, Size, &v14);
  if ( MicrocodePatchRecord != -1073741762 )
  {
    P = (PVOID)ExAllocatePool2(0x40uLL, v14, 0x636C6148u);
    if ( !P )
    {
      MicrocodePatchRecord = -1073741664;
      goto LABEL_23;
    }
    MicrocodePatchRecord = PrExtExportRecordData((int *)Src, Size, v14, (__int64)&P);
    if ( MicrocodePatchRecord >= 0 )
    {
      MicrocodePatchRecord = guard_dispatch_icall_no_overrides(P, (unsigned int)v14);
      if ( MicrocodePatchRecord >= 0 )
      {
        ExFreePoolWithTag(P, 0x636C6148u);
        v13 = 3;
        PrExtControlOperations(10, &v13, 4);
        if ( qword_140FC12F8 )
        {
          guard_dispatch_icall_no_overrides(&v10, v6);
          PrExtLogLatencyTime(v10);
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
    MicrocodePatchRecord = PoDisableSleepStates(1LL, 14LL, &v11);
    if ( MicrocodePatchRecord >= 0 )
      HalMcSleepDisabled = 1;
  }
  return (unsigned int)MicrocodePatchRecord;
}
