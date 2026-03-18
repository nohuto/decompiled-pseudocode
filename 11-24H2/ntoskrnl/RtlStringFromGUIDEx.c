/*
 * XREFs of RtlStringFromGUIDEx @ 0x1409BCE20
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1405CA6B4 (KsepEvntLogShimsApplied.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1406528D8 (BapdpMarshallBootDataToRegistry.c)
 *     IoGetDeviceDirectory @ 0x14071EEF0 (IoGetDeviceDirectory.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14072BC90 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PpDevCfgProcessDeviceClass @ 0x14072C4F4 (PpDevCfgProcessDeviceClass.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1407830D8 (RtlpConstructCrossVmObjectPath.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407BBA04 (ExpCreateOutputSIGNATURE.c)
 *     CmpCloneHwProfile @ 0x1407D305C (CmpCloneHwProfile.c)
 *     CmpRecoverEnlistment @ 0x1407E0244 (CmpRecoverEnlistment.c)
 *     CmpAddRemoveRMLogContainer @ 0x1407E03D0 (CmpAddRemoveRMLogContainer.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140815B48 (BiUpdateObjectReferenceInEfiEntry.c)
 *     BiCreateObject @ 0x14085E04C (BiCreateObject.c)
 *     IopUpdateSecureDeviceClassState @ 0x1409A1648 (IopUpdateSecureDeviceClassState.c)
 *     IopCreateSecureDeviceClassSettings @ 0x1409A1A38 (IopCreateSecureDeviceClassSettings.c)
 *     RtlStringFromGUID @ 0x1409BC5B0 (RtlStringFromGUID.c)
 *     PopSetNewPolicyValue @ 0x1409BC67C (PopSetNewPolicyValue.c)
 *     BcdOpenObject @ 0x1409BE0D4 (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x1409BE80C (BcdGetElementDataWithFlags.c)
 *     BiConvertElementToRegistryData @ 0x1409C00C4 (BiConvertElementToRegistryData.c)
 *     ExpTranslateEfiPath @ 0x140A6389C (ExpTranslateEfiPath.c)
 *     PipGenerateContainerID @ 0x140A7063C (PipGenerateContainerID.c)
 *     VrpPreLoadKey @ 0x140A73F7C (VrpPreLoadKey.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140A7DF0C (PiDevCfgQueryDriverConfiguration.c)
 *     PpDevCfgProcessDeviceReset @ 0x140A84170 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140A847DC (PiDevCfgResetDeviceDriverSettings.c)
 *     ConvertDevpropcompkeyToString @ 0x140A8E188 (ConvertDevpropcompkeyToString.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140A8EF90 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140A98C04 (PiDevCfgLogDeviceConfigured.c)
 *     CmpInitCmRM @ 0x140AE4D94 (CmpInitCmRM.c)
 *     CmpStartRMLog @ 0x140AE5884 (CmpStartRMLog.c)
 *     PipInitComputerIds @ 0x140C63B74 (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x140502E50 (swprintf_s.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlStringFromGUIDEx(unsigned int *a1, __int64 a2, char a3)
{
  __int64 Pool2; // rax
  unsigned __int64 v6; // rdx

  if ( a3 )
  {
    *(_WORD *)(a2 + 2) = 78;
    Pool2 = ExAllocatePool2(0x100uLL);
    *(_QWORD *)(a2 + 8) = Pool2;
    if ( Pool2 )
    {
LABEL_3:
      v6 = *(unsigned __int16 *)(a2 + 2);
      *(_WORD *)a2 = 76;
      swprintf_s(
        *(wchar_t **)(a2 + 8),
        v6 >> 1,
        L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        *a1,
        *((unsigned __int16 *)a1 + 2),
        *((unsigned __int16 *)a1 + 3),
        *((unsigned __int8 *)a1 + 8),
        *((unsigned __int8 *)a1 + 9),
        *((unsigned __int8 *)a1 + 10),
        *((unsigned __int8 *)a1 + 11),
        *((unsigned __int8 *)a1 + 12),
        *((unsigned __int8 *)a1 + 13),
        *((unsigned __int8 *)a1 + 14),
        *((unsigned __int8 *)a1 + 15));
      return 0LL;
    }
    return 3221225495LL;
  }
  else
  {
    if ( *(_WORD *)(a2 + 2) >= 0x4Eu )
      goto LABEL_3;
    return 3221225507LL;
  }
}
