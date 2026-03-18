/*
 * XREFs of IopAddBugcheckTriageDevice @ 0x14059F828
 * Callers:
 *     IopAddBugcheckDirectedTransitionTriageData @ 0x14059F4AC (IopAddBugcheckDirectedTransitionTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14059F61C (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14059F6DC (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14059F930 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriagePowerIrps @ 0x14059FC4C (IopAddBugcheckTriagePowerIrps.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1404ACD58 (IopIsAddressRangeValid.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14059FE08 (IopAddBugcheckTriageUnicodeString.c)
 */

__int64 __fastcall IopAddBugcheckTriageDevice(__int64 MaxDataSize)
{
  unsigned int v1; // ebx
  int v3; // ebp
  __int64 v4; // rax
  int v5; // esi
  unsigned int v6; // esi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3 = 0;
  while ( 1 )
  {
    ++v3;
    if ( !IopIsAddressRangeValid(MaxDataSize, 336LL) )
      break;
    v4 = *(unsigned __int16 *)(MaxDataSize + 2);
    if ( (unsigned __int16)v4 <= 0x3000u
      && (v5 = v4 + 7, IopIsAddressRangeValid(MaxDataSize, (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL)) )
    {
      v6 = v5 & 0xFFFFFFF8;
    }
    else
    {
      v6 = 336;
    }
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)v6);
    v7 = *(_QWORD *)(MaxDataSize + 312);
    if ( IopIsAddressRangeValid(v7, 112LL) )
      IoAddTriageDumpDataBlock(v7, (PVOID)0x70);
    v8 = *(_QWORD *)(MaxDataSize + 8);
    if ( IopIsAddressRangeValid(v8, 336LL) )
    {
      IoAddTriageDumpDataBlock(v8, (PVOID)0x150);
      v10 = *(_OWORD *)(v8 + 56);
      IopAddBugcheckTriageUnicodeString(&v10);
    }
    MaxDataSize = *(_QWORD *)(MaxDataSize + 24);
    if ( !MaxDataSize || v3 >= 10 )
      return v1;
  }
  return (unsigned int)-1073741823;
}
