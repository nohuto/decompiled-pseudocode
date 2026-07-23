/*
 * XREFs of IopAddBugcheckTriageThread @ 0x14059CC30
 * Callers:
 *     IoAddBugcheckTriageThread @ 0x14058DB40 (IoAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x14058FF74 (IopAddBugcheckTriageDataFromParameters.c)
 *     IopAddBugcheckDirectedTransitionTriageData @ 0x14059C3D8 (IopAddBugcheckDirectedTransitionTriageData.c)
 *     IopAddBugcheckPnpTriageData @ 0x14059C4C8 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14059C540 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckTriagePowerIrpWorkers @ 0x14059CABC (IopAddBugcheckTriagePowerIrpWorkers.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14059CDC0 (IopAddBugcheckTriageWorkQueue.c)
 *     KiCollectTriageDumpDataBlocks @ 0x1405B0318 (KiCollectTriageDumpDataBlocks.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1404A6F64 (IopIsAddressRangeValid.c)
 *     IopGetMaxValidMemorySize @ 0x14059166C (IopGetMaxValidMemorySize.c)
 *     IopAddBugcheckTriageIrp @ 0x14059C944 (IopAddBugcheckTriageIrp.c)
 */

__int64 __fastcall IopAddBugcheckTriageThread(__int64 MaxDataSize)
{
  unsigned int v1; // ebx
  int v3; // r15d
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // edx
  ULONG v7; // esi
  unsigned int MaxValidMemorySize; // eax
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi
  _QWORD *v11; // r14

  v1 = 0;
  v3 = 0;
  if ( IopIsAddressRangeValid(MaxDataSize, 1944LL) )
  {
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x798);
    if ( (*(_DWORD *)(MaxDataSize + 120) & 0x20000) != 0 )
    {
      v4 = *(_QWORD *)(MaxDataSize + 56);
      v5 = *(_QWORD *)(MaxDataSize + 88);
      if ( (unsigned __int64)(v4 - v5) >= 0x3FFF )
        v6 = 0x3FFF;
      else
        v6 = v4 - v5;
      v7 = (v5 + 7) & 0xFFFFFFF8;
      MaxValidMemorySize = IopGetMaxValidMemorySize((v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL, v6);
      if ( MaxValidMemorySize )
        IoAddTriageDumpDataBlock(v7, (PVOID)MaxValidMemorySize);
    }
    v9 = (_QWORD *)(MaxDataSize + 1344);
    v10 = *(_QWORD **)(MaxDataSize + 1344);
    v11 = v9;
    while ( v10 && v10 != v9 && v3 < 10 )
    {
      ++v3;
      if ( !IopIsAddressRangeValid((__int64)(v10 - 4), 208LL) || (_QWORD *)v10[1] != v11 )
        return (unsigned int)-1073741823;
      IopAddBugcheckTriageIrp((__int64)(v10 - 4), 1);
      v11 = v10;
      v10 = (_QWORD *)*v10;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
