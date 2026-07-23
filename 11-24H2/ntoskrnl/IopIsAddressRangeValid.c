/*
 * XREFs of IopIsAddressRangeValid @ 0x1404A6F64
 * Callers:
 *     IopAddTriageDumpDataBlock @ 0x1403E6B5C (IopAddTriageDumpDataBlock.c)
 *     IopWriteDriverList @ 0x1404A6D78 (IopWriteDriverList.c)
 *     IoGetLoadedDriverInfo @ 0x1404A6EC8 (IoGetLoadedDriverInfo.c)
 *     IoFillTriageDumpBuffer @ 0x14058E2EC (IoFillTriageDumpBuffer.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x14058FF74 (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x140592430 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckDirectedTransitionTriageData @ 0x14059C3D8 (IopAddBugcheckDirectedTransitionTriageData.c)
 *     IopAddBugcheckPnpTriageData @ 0x14059C4C8 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14059C540 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14059C600 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14059C690 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x14059C74C (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14059C854 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x14059C944 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriagePowerIrpWorkers @ 0x14059CABC (IopAddBugcheckTriagePowerIrpWorkers.c)
 *     IopAddBugcheckTriagePowerIrps @ 0x14059CB70 (IopAddBugcheckTriagePowerIrps.c)
 *     IopAddBugcheckTriageThread @ 0x14059CC30 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14059CD2C (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14059CDC0 (IopAddBugcheckTriageWorkQueue.c)
 *     IopCalculateStackInformation @ 0x14059D894 (IopCalculateStackInformation.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 */

char __fastcall IopIsAddressRangeValid(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 i; // rdi

  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  for ( i = ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12; ; --i )
  {
    if ( !i )
      return 1;
    if ( v2 < 0x10000 || !MmIsAddressValidEx(v2) )
      break;
    v2 += 4096LL;
  }
  return 0;
}
