/*
 * XREFs of IopIsAddressRangeValid @ 0x1404AB898
 * Callers:
 *     IopAddTriageDumpDataBlock @ 0x14041F878 (IopAddTriageDumpDataBlock.c)
 *     IopWriteDriverList @ 0x1404AB6AC (IopWriteDriverList.c)
 *     IoGetLoadedDriverInfo @ 0x1404AB7FC (IoGetLoadedDriverInfo.c)
 *     IoFillTriageDumpBuffer @ 0x14058DA9C (IoFillTriageDumpBuffer.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x14058F720 (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x140591C0C (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckDirectedTransitionTriageData @ 0x14059BD48 (IopAddBugcheckDirectedTransitionTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14059BE38 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14059BEF8 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14059BF88 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x14059C044 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14059C14C (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x14059C23C (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriagePowerIrpWorkers @ 0x14059C3B4 (IopAddBugcheckTriagePowerIrpWorkers.c)
 *     IopAddBugcheckTriagePowerIrps @ 0x14059C468 (IopAddBugcheckTriagePowerIrps.c)
 *     IopAddBugcheckTriageThread @ 0x14059C528 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14059C624 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14059C6B8 (IopAddBugcheckTriageWorkQueue.c)
 *     IopCalculateStackInformation @ 0x14059D184 (IopCalculateStackInformation.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402AA5A0 (MmIsAddressValidEx.c)
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
