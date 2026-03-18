/*
 * XREFs of LogError @ 0x14000FE74
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
 *     AMLIAddNamespaceOverride @ 0x14006C0C4 (AMLIAddNamespaceOverride.c)
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
 *     RtlStringCchPrintfA @ 0x14000AE88 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_Ds @ 0x1400413A0 (WPP_RECORDER_SF_Ds.c)
 */

_UNKNOWN **__fastcall LogError(int a1)
{
  _UNKNOWN **result; // rax
  char v2; // bl
  int v3; // edi
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  int v7; // [rsp+20h] [rbp-28h]

  dword_1400890B8 = a1;
  result = (_UNKNOWN **)&unk_140088010;
  v2 = a1;
  v3 = 0;
  while ( result[1] )
  {
    if ( a1 == *(_DWORD *)result )
    {
      RtlStringCchPrintfA(&pszDest, 0x100uLL, "AMLI_ERROR(%08x): %s", a1, (const char *)result[1]);
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (_UNKNOWN **)WPP_RECORDER_SF_Ds(
                              WPP_GLOBAL_Control->DeviceExtension,
                              v4,
                              v5,
                              v6,
                              v7,
                              v2,
                              *((_QWORD *)&unk_140088010 + 2 * v3 + 1));
      return result;
    }
    ++v3;
    result += 2;
  }
  return result;
}
