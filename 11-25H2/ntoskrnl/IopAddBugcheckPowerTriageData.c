/*
 * XREFs of IopAddBugcheckPowerTriageData @ 0x14059BEF8
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x14058F720 (IopAddBugcheckTriageDataFromParameters.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1404AB898 (IopIsAddressRangeValid.c)
 *     IopAddBugcheckTriageDevice @ 0x14059C044 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageIrp @ 0x14059C23C (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriagePowerIrpWorkers @ 0x14059C3B4 (IopAddBugcheckTriagePowerIrpWorkers.c)
 *     IopAddBugcheckTriagePowerIrps @ 0x14059C468 (IopAddBugcheckTriagePowerIrps.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14059C6B8 (IopAddBugcheckTriageWorkQueue.c)
 */

__int64 __fastcall IopAddBugcheckPowerTriageData(ULONG a1, __int64 a2, ULONG a3)
{
  unsigned int v5; // edi

  v5 = 0;
  IopAddBugcheckTriageDevice(a1);
  IopAddBugcheckTriageIrp(a3);
  if ( IopIsAddressRangeValid(a2, 40LL) && *(_WORD *)a2 == 0x8000 )
  {
    IoAddTriageDumpDataBlock(a2, (PVOID)0x28);
    IopAddBugcheckTriagePowerIrps(*(_QWORD *)(a2 + 8));
    IopAddBugcheckTriagePowerIrpWorkers(*(_QWORD *)(a2 + 16));
    IopAddBugcheckTriageWorkQueue(*(_QWORD *)(a2 + 24));
    IopAddBugcheckTriageWorkQueue(*(_QWORD *)(a2 + 32));
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v5;
}
