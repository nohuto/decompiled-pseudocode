/*
 * XREFs of AcpiDiagTraceAmlError @ 0x14000FF1C
 * Callers:
 *     RegRSAccess @ 0x1400010AC (RegRSAccess.c)
 *     ParsePackage @ 0x140001230 (ParsePackage.c)
 *     ParseString @ 0x1400014BC (ParseString.c)
 *     WriteCookAccess @ 0x1400015F0 (WriteCookAccess.c)
 *     RawFieldAccess @ 0x140001978 (RawFieldAccess.c)
 *     ParseObjName @ 0x140001F40 (ParseObjName.c)
 *     WriteField @ 0x14000229C (WriteField.c)
 *     ReadObject @ 0x1400026A0 (ReadObject.c)
 *     ParseAcquire @ 0x140002BC0 (ParseAcquire.c)
 *     AccFieldUnit @ 0x140003430 (AccFieldUnit.c)
 *     ParseCall @ 0x140004010 (ParseCall.c)
 *     ParseRelease @ 0x140004C30 (ParseRelease.c)
 *     PushScope @ 0x1400050C0 (PushScope.c)
 *     AcquireGL @ 0x1400057E4 (AcquireGL.c)
 *     WriteFieldLoop @ 0x140005880 (WriteFieldLoop.c)
 *     ProcessIncDec @ 0x140005D80 (ProcessIncDec.c)
 *     ParseIntObj @ 0x140006630 (ParseIntObj.c)
 *     Store @ 0x140006870 (Store.c)
 *     WriteObject @ 0x140006BD0 (WriteObject.c)
 *     DupObjData @ 0x140006F90 (DupObjData.c)
 *     ExprOp2_64 @ 0x1400072C0 (ExprOp2_64.c)
 *     LogOp2_32 @ 0x140007938 (LogOp2_32.c)
 *     IfElse @ 0x140007D60 (IfElse.c)
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
 *     Notify @ 0x1400085C0 (Notify.c)
 *     Index @ 0x140008710 (Index.c)
 *     NewLocalHeap @ 0x140008FA0 (NewLocalHeap.c)
 *     CreateNameSpaceObject @ 0x140009050 (CreateNameSpaceObject.c)
 *     PushTerm @ 0x14000A040 (PushTerm.c)
 *     GetNameSpaceObjectNoLock @ 0x14000AA30 (GetNameSpaceObjectNoLock.c)
 *     AccessFieldData @ 0x14000BEC0 (AccessFieldData.c)
 *     GetFieldUnitRegionObj @ 0x14000C4A0 (GetFieldUnitRegionObj.c)
 *     AccessBaseField @ 0x14000C680 (AccessBaseField.c)
 *     ParseTerm @ 0x14000D430 (ParseTerm.c)
 *     ParseArg @ 0x14000DB50 (ParseArg.c)
 *     ParseName @ 0x14000E040 (ParseName.c)
 *     ParseOpcode @ 0x14000E5F0 (ParseOpcode.c)
 *     PushAccFieldObj @ 0x140011520 (PushAccFieldObj.c)
 *     ReadField @ 0x140011880 (ReadField.c)
 *     AsyncEvalObject @ 0x1400120D0 (AsyncEvalObject.c)
 *     PushCall @ 0x140013020 (PushCall.c)
 *     SyncEvalObject @ 0x1400143C8 (SyncEvalObject.c)
 *     ParseSuperName @ 0x140024820 (ParseSuperName.c)
 *     ObjTypeSizeOf @ 0x140025380 (ObjTypeSizeOf.c)
 *     ParseNameTail @ 0x1400254A0 (ParseNameTail.c)
 *     AMLIEvalPkgDataElement @ 0x14002CC08 (AMLIEvalPkgDataElement.c)
 *     ToDecStr @ 0x14002DC70 (ToDecStr.c)
 *     CopyObject @ 0x14002E220 (CopyObject.c)
 *     FreeObjData @ 0x14002E368 (FreeObjData.c)
 *     PerformMutexDriverCallbacks @ 0x14002E494 (PerformMutexDriverCallbacks.c)
 *     MidString @ 0x14002EA20 (MidString.c)
 *     ToHexStr @ 0x14002EEC0 (ToHexStr.c)
 *     Concat @ 0x14002F1F0 (Concat.c)
 *     ValidateTarget @ 0x14002F550 (ValidateTarget.c)
 *     ToString @ 0x14002F8D0 (ToString.c)
 *     NewObjOwner @ 0x14002FE10 (NewObjOwner.c)
 *     ResetSignal @ 0x140030AC0 (ResetSignal.c)
 *     Wait @ 0x140030C40 (Wait.c)
 *     OpRegion @ 0x140030DC0 (OpRegion.c)
 *     MapUnmapPhysMem @ 0x140030F40 (MapUnmapPhysMem.c)
 *     MapPhysMem @ 0x140031068 (MapPhysMem.c)
 *     AmlpValidateFirmwareMemoryAddress @ 0x140034730 (AmlpValidateFirmwareMemoryAddress.c)
 *     IndexField @ 0x140035220 (IndexField.c)
 *     BankField @ 0x140035420 (BankField.c)
 *     Field @ 0x140035640 (Field.c)
 *     ParseFieldList @ 0x1400358A8 (ParseFieldList.c)
 *     ParseField @ 0x140035A2C (ParseField.c)
 *     NewObjData @ 0x14003620C (NewObjData.c)
 *     CopyObjBuffer @ 0x14003AC48 (CopyObjBuffer.c)
 *     CreateField @ 0x14003B1B0 (CreateField.c)
 *     CreateXField @ 0x14003B324 (CreateXField.c)
 *     SleepStall @ 0x14003B4C0 (SleepStall.c)
 *     Release @ 0x14003B700 (Release.c)
 *     Acquire @ 0x14003E2D0 (Acquire.c)
 *     Buffer @ 0x14003E650 (Buffer.c)
 *     Package @ 0x1400400A0 (Package.c)
 *     Method @ 0x140041060 (Method.c)
 *     InitMutex @ 0x14004E58C (InitMutex.c)
 *     AMLIRegEventHandler @ 0x140051D40 (AMLIRegEventHandler.c)
 *     ConcatenateResTemplate @ 0x140052C10 (ConcatenateResTemplate.c)
 *     ParseFieldConnection @ 0x140054520 (ParseFieldConnection.c)
 *     AMLIEvalPackageElement @ 0x14006AB98 (AMLIEvalPackageElement.c)
 *     LoadDDB @ 0x14006B644 (LoadDDB.c)
 *     LoadFieldUnitDDB @ 0x14006B76C (LoadFieldUnitDDB.c)
 *     LoadMemDDB @ 0x14006B950 (LoadMemDDB.c)
 *     RegEventHandler @ 0x14006D210 (RegEventHandler.c)
 *     RegOpcodeHandler @ 0x14006D26C (RegOpcodeHandler.c)
 *     NestAsyncEvalObject @ 0x14006D32C (NestAsyncEvalObject.c)
 *     NewGlobalHeap @ 0x14006E9E8 (NewGlobalHeap.c)
 *     InitEvent @ 0x14006EB00 (InitEvent.c)
 *     PowerRes @ 0x14006EC70 (PowerRes.c)
 *     Processor @ 0x14006EDE0 (Processor.c)
 *     Load @ 0x14006F3B0 (Load.c)
 *     LoadTable @ 0x14006F600 (LoadTable.c)
 *     ProcessLoadTable @ 0x14006FA50 (ProcessLoadTable.c)
 *     AMLIInitialize @ 0x1400C4F80 (AMLIInitialize.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1400C8494 (InitIllegalIOAddressListFromHAL.c)
 *     SyncLoadDDB @ 0x1400C90F8 (SyncLoadDDB.c)
 * Callees:
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

NTSTATUS __fastcall AcpiDiagTraceAmlError(__int64 a1, int a2)
{
  int v2; // r10d
  int v3; // r9d
  __int64 v4; // rax
  char *v5; // rdx
  __int64 *v6; // r8
  __int64 v7; // r9
  __int16 v8; // ax
  __int64 v9; // rax
  char *v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // r8
  __int16 v13; // ax
  int v15; // [rsp+30h] [rbp-19h] BYREF
  char v16; // [rsp+34h] [rbp-15h]
  int v17; // [rsp+38h] [rbp-11h] BYREF
  char v18; // [rsp+3Ch] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v20; // [rsp+50h] [rbp+7h]
  int v21; // [rsp+58h] [rbp+Fh]
  int v22; // [rsp+5Ch] [rbp+13h]
  int *v23; // [rsp+60h] [rbp+17h]
  __int64 v24; // [rsp+68h] [rbp+1Fh]
  __int64 v25; // [rsp+70h] [rbp+27h] BYREF
  __int16 v26; // [rsp+78h] [rbp+2Fh]
  __int64 v27; // [rsp+80h] [rbp+37h] BYREF
  __int16 v28; // [rsp+88h] [rbp+3Fh]
  int v29; // [rsp+B8h] [rbp+6Fh] BYREF

  v29 = a2;
  v28 = 0;
  v27 = 0x41002F004ELL;
  v25 = 0x41002F004ELL;
  v26 = 0;
  v2 = 3;
  v18 = 0;
  v3 = 3;
  v16 = 0;
  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 80);
    if ( v4 )
    {
      v5 = (char *)&v15;
      v15 = *(_DWORD *)(v4 + 40);
      v6 = &v25;
      v7 = 4LL;
      do
      {
        v8 = *v5++;
        *(_WORD *)v6 = v8;
        v6 = (__int64 *)((char *)v6 + 2);
        --v7;
      }
      while ( v7 );
      v26 = 0;
      v3 = 5;
    }
    v9 = *(_QWORD *)(a1 + 72);
    if ( v9 )
    {
      v10 = (char *)&v17;
      v17 = *(_DWORD *)(v9 + 40);
      v11 = &v27;
      v12 = 4LL;
      do
      {
        v13 = *v10++;
        *(_WORD *)v11 = v13;
        v11 = (__int64 *)((char *)v11 + 2);
        --v12;
      }
      while ( v12 );
      v28 = 0;
      v2 = 5;
    }
  }
  UserData.Ptr = (unsigned __int64)&v25;
  UserData.Reserved = 0;
  UserData.Size = 2 * v3;
  v22 = 0;
  v20 = &v27;
  v24 = 4LL;
  v21 = 2 * v2;
  v23 = &v29;
  return EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_AMLI_ERROR, 0LL, 3u, &UserData);
}
