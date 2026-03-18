/*
 * XREFs of HalpLoadMicrocode @ 0x140701A80
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1404677F0 (KeIpiGenericCall.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A57AC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpMcUpdateUnlock @ 0x1404AE2F8 (HalpMcUpdateUnlock.c)
 *     HalpMcUpdateLock @ 0x1404BAD8C (HalpMcUpdateLock.c)
 *     HalpMcUpdatePostUpdate @ 0x1404D9190 (HalpMcUpdatePostUpdate.c)
 *     HalpGetMicrocodePatchRecord @ 0x14055940C (HalpGetMicrocodePatchRecord.c)
 *     HalpMcGetLoadConfiguration @ 0x1405598B4 (HalpMcGetLoadConfiguration.c)
 *     HalpMcGetRollbackRequest @ 0x14055996C (HalpMcGetRollbackRequest.c)
 *     HalpMcParallelLoadSupported @ 0x140559ACC (HalpMcParallelLoadSupported.c)
 *     HalpMcPatchConfiguration @ 0x140559B04 (HalpMcPatchConfiguration.c)
 *     PrExtControlOperations @ 0x140663EEC (PrExtControlOperations.c)
 *     PrExtExportRecordData @ 0x140664014 (PrExtExportRecordData.c)
 *     PrExtGetRecordDataLength @ 0x140664210 (PrExtGetRecordDataLength.c)
 *     PrExtLogLatencyTime @ 0x140664234 (PrExtLogLatencyTime.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpLoadMicrocodeSerialized @ 0x140701CD0 (HalpLoadMicrocodeSerialized.c)
 *     HalpMcExportAndChargeNeededData @ 0x140701DA4 (HalpMcExportAndChargeNeededData.c)
 *     PoDisableSleepStates @ 0x14074CC70 (PoDisableSleepStates.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpLoadMicrocode(__int64 a1)
{
  char v1; // r12
  bool IsMicrosoftCompatibleHvLoaded; // si
  int MicrocodePatchRecord; // ebx
  char Supported; // di
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  size_t Size; // [rsp+30h] [rbp-20h] BYREF
  void *Src; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  __int64 v15; // [rsp+48h] [rbp-8h] BYREF
  PVOID P; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v17; // [rsp+90h] [rbp+40h] BYREF
  __int64 v18; // [rsp+98h] [rbp+48h] BYREF

  v14 = 0LL;
  v1 = 0;
  Src = 0LL;
  Size = 0LL;
  v17 = 0;
  v18 = 0LL;
  v15 = 0LL;
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
  if ( !IsMicrosoftCompatibleHvLoaded || !qword_140FC1090 )
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
  MicrocodePatchRecord = PrExtGetRecordDataLength((__int64)Src, Size, &v18);
  if ( MicrocodePatchRecord != -1073741762 )
  {
    P = (PVOID)ExAllocatePool2(0x40uLL);
    if ( !P )
    {
      MicrocodePatchRecord = -1073741664;
      goto LABEL_23;
    }
    MicrocodePatchRecord = PrExtExportRecordData((int *)Src, Size, v18, (__int64)&P);
    if ( MicrocodePatchRecord >= 0 )
    {
      LOBYTE(v6) = Supported;
      MicrocodePatchRecord = guard_dispatch_icall_no_overrides(P, (unsigned int)v18, v6, v7);
      if ( MicrocodePatchRecord >= 0 )
      {
        ExFreePoolWithTag(P, 0x636C6148u);
        v17 = 3;
        PrExtControlOperations(10, &v17, 4);
        if ( qword_140FC1098 )
        {
          guard_dispatch_icall_no_overrides(&v14, v8, v9, v10);
          PrExtLogLatencyTime(v14);
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
    MicrocodePatchRecord = PoDisableSleepStates(1LL, 14LL, &v15);
    if ( MicrocodePatchRecord >= 0 )
      HalMcSleepDisabled = 1;
  }
  return (unsigned int)MicrocodePatchRecord;
}
