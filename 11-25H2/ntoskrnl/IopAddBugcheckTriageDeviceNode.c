/*
 * XREFs of IopAddBugcheckTriageDeviceNode @ 0x14059C14C
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x14058F720 (IopAddBugcheckTriageDataFromParameters.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14059BE38 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14059BF88 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageIrp @ 0x14059C23C (IopAddBugcheckTriageIrp.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1404AB898 (IopIsAddressRangeValid.c)
 *     IopAddBugcheckTriageDevice @ 0x14059C044 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageIrp @ 0x14059C23C (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14059C624 (IopAddBugcheckTriageUnicodeString.c)
 */

__int64 __fastcall IopAddBugcheckTriageDeviceNode(__int64 MaxDataSize)
{
  unsigned int v1; // ebx
  int v3; // ebp
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3 = 0;
  while ( 1 )
  {
    ++v3;
    if ( !IopIsAddressRangeValid(MaxDataSize, 88LL) )
      break;
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x58);
    v8 = *(_OWORD *)(MaxDataSize + 40);
    IopAddBugcheckTriageUnicodeString(&v8);
    v8 = *(_OWORD *)(MaxDataSize + 56);
    IopAddBugcheckTriageUnicodeString(&v8);
    v4 = *(_QWORD *)(MaxDataSize + 72);
    if ( v4 )
      IopAddBugcheckTriageIrp(v4);
    v5 = *(_QWORD *)(MaxDataSize + 80);
    if ( v5 )
    {
      if ( IopIsAddressRangeValid(*(_QWORD *)(MaxDataSize + 80), 56LL) )
      {
        IoAddTriageDumpDataBlock(v5, (PVOID)0x38);
        v6 = *(_QWORD *)(v5 + 16);
        if ( v6 )
          IopAddBugcheckTriageIrp(v6);
      }
    }
    IopAddBugcheckTriageDevice(*(_QWORD *)(MaxDataSize + 32));
    MaxDataSize = *(_QWORD *)(MaxDataSize + 16);
    if ( !MaxDataSize || v3 >= 10 )
      return v1;
  }
  return (unsigned int)-1073741823;
}
