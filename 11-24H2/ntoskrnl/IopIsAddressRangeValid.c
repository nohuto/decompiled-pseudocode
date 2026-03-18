/*
 * XREFs of IopIsAddressRangeValid @ 0x1404ACD58
 * Callers:
 *     IopAddTriageDumpDataBlock @ 0x1403F2E3C (IopAddTriageDumpDataBlock.c)
 *     IopWriteDriverList @ 0x1404ACB6C (IopWriteDriverList.c)
 *     IoGetLoadedDriverInfo @ 0x1404ACCBC (IoGetLoadedDriverInfo.c)
 *     IoFillTriageDumpBuffer @ 0x1405912CC (IoFillTriageDumpBuffer.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x140592F50 (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x14059540C (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckDirectedTransitionTriageData @ 0x14059F4AC (IopAddBugcheckDirectedTransitionTriageData.c)
 *     IopAddBugcheckPnpTriageData @ 0x14059F59C (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14059F61C (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14059F6DC (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14059F76C (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x14059F828 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14059F930 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x14059FA20 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriagePowerIrpWorkers @ 0x14059FB98 (IopAddBugcheckTriagePowerIrpWorkers.c)
 *     IopAddBugcheckTriagePowerIrps @ 0x14059FC4C (IopAddBugcheckTriagePowerIrps.c)
 *     IopAddBugcheckTriageThread @ 0x14059FD0C (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14059FE08 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14059FE9C (IopAddBugcheckTriageWorkQueue.c)
 *     IopCalculateStackInformation @ 0x1405A0964 (IopCalculateStackInformation.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140262FC0 (MmIsAddressValidEx.c)
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
