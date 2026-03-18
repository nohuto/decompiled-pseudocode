/*
 * XREFs of ZwDeleteKey @ 0x1406A7F90
 * Callers:
 *     BiZwDeleteKey @ 0x1404C0234 (BiZwDeleteKey.c)
 *     DifZwDeleteKeyWrapper @ 0x14063ED50 (DifZwDeleteKeyWrapper.c)
 *     IopCopyBootLogRegistryToFile @ 0x140711E7C (IopCopyBootLogRegistryToFile.c)
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1407A8F64 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     CmDeleteKeyRecursive @ 0x1407D2418 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x1407D4598 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x1407E6CC4 (CmpDoReDoRecord.c)
 *     NtEnableLastKnownGood @ 0x14082A820 (NtEnableLastKnownGood.c)
 *     VrpDestroyNamespaceNode @ 0x140929080 (VrpDestroyNamespaceNode.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140A6AF3C (_RegRtlDeleteKeyTransacted.c)
 *     ExpSetPendingUILanguage @ 0x140A70D00 (ExpSetPendingUILanguage.c)
 *     MfgInitSystem @ 0x140C0BCB0 (MfgInitSystem.c)
 *     PiLastGoodCopyKeyContents @ 0x140C234D4 (PiLastGoodCopyKeyContents.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140C23770 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, v1);
}
