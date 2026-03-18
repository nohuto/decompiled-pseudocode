/*
 * XREFs of RtlStringFromGUIDEx @ 0x140965070
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1405C6094 (KsepEvntLogShimsApplied.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1406469D8 (BapdpMarshallBootDataToRegistry.c)
 *     IoGetDeviceDirectory @ 0x140712DF0 (IoGetDeviceDirectory.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14071FD10 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PpDevCfgProcessDeviceClass @ 0x140720574 (PpDevCfgProcessDeviceClass.c)
 *     RtlpConstructCrossVmObjectPath @ 0x140773E28 (RtlpConstructCrossVmObjectPath.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407AC584 (ExpCreateOutputSIGNATURE.c)
 *     CmpCloneHwProfile @ 0x1407C391C (CmpCloneHwProfile.c)
 *     CmpRecoverEnlistment @ 0x1407D096C (CmpRecoverEnlistment.c)
 *     CmpAddRemoveRMLogContainer @ 0x1407D0AF8 (CmpAddRemoveRMLogContainer.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140805C44 (BiUpdateObjectReferenceInEfiEntry.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14088E9E0 (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceReset @ 0x14088ED30 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14088F39C (PiDevCfgLogDeviceConfigured.c)
 *     RtlStringFromGUID @ 0x140964800 (RtlStringFromGUID.c)
 *     PopSetNewPolicyValue @ 0x1409648CC (PopSetNewPolicyValue.c)
 *     BcdOpenObject @ 0x1409666B4 (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x14096B820 (BcdGetElementDataWithFlags.c)
 *     IopUpdateSecureDeviceClassState @ 0x14099C75C (IopUpdateSecureDeviceClassState.c)
 *     IopCreateSecureDeviceClassSettings @ 0x14099CB48 (IopCreateSecureDeviceClassSettings.c)
 *     BiCreateObject @ 0x140A262E4 (BiCreateObject.c)
 *     BiConvertElementToRegistryData @ 0x140A5C7D8 (BiConvertElementToRegistryData.c)
 *     ExpTranslateEfiPath @ 0x140A6183C (ExpTranslateEfiPath.c)
 *     PipGenerateContainerID @ 0x140A6E420 (PipGenerateContainerID.c)
 *     VrpPreLoadKey @ 0x140A71EB8 (VrpPreLoadKey.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140A7AA64 (PiDevCfgQueryDriverConfiguration.c)
 *     ConvertDevpropcompkeyToString @ 0x140A89228 (ConvertDevpropcompkeyToString.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140A89FC0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     CmpInitCmRM @ 0x140AD3ED8 (CmpInitCmRM.c)
 *     CmpStartRMLog @ 0x140AD49C8 (CmpStartRMLog.c)
 *     PipInitComputerIds @ 0x140C52860 (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x1405006D0 (swprintf_s.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
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
