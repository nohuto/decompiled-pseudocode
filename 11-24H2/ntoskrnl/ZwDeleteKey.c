/*
 * XREFs of ZwDeleteKey @ 0x1406A8F30
 * Callers:
 *     BiZwDeleteKey @ 0x1404BB970 (BiZwDeleteKey.c)
 *     DifZwDeleteKeyWrapper @ 0x14063D310 (DifZwDeleteKeyWrapper.c)
 *     IopCopyBootLogRegistryToFile @ 0x14070FA0C (IopCopyBootLogRegistryToFile.c)
 *     IoReportDetectedDevice @ 0x14071A3E0 (IoReportDetectedDevice.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1407A90A4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     CmDeleteKeyRecursive @ 0x1407D2908 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x1407D4A88 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x1407E7294 (CmpDoReDoRecord.c)
 *     NtEnableLastKnownGood @ 0x14082B050 (NtEnableLastKnownGood.c)
 *     VrpDestroyNamespaceNode @ 0x14092B1C0 (VrpDestroyNamespaceNode.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140A6464C (_RegRtlDeleteKeyTransacted.c)
 *     ExpSetPendingUILanguage @ 0x140A6A190 (ExpSetPendingUILanguage.c)
 *     MfgInitSystem @ 0x140C0DCB0 (MfgInitSystem.c)
 *     PiLastGoodCopyKeyContents @ 0x140C25504 (PiLastGoodCopyKeyContents.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140C257A0 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
