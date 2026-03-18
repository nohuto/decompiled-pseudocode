/*
 * XREFs of IopAddBugcheckTriageWorkQueue @ 0x14059C6B8
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x14058F720 (IopAddBugcheckTriageDataFromParameters.c)
 *     IopAddBugcheckDirectedTransitionTriageData @ 0x14059BD48 (IopAddBugcheckDirectedTransitionTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14059BE38 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14059BEF8 (IopAddBugcheckPowerTriageData.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1404AB898 (IopIsAddressRangeValid.c)
 *     IopAddBugcheckTriageThread @ 0x14059C528 (IopAddBugcheckTriageThread.c)
 */

__int64 __fastcall IopAddBugcheckTriageWorkQueue(__int64 MaxDataSize)
{
  unsigned int v1; // ebx
  int v3; // r14d
  _QWORD **v4; // rsi
  _QWORD *v5; // rdi
  _QWORD *v6; // rbp

  v1 = 0;
  v3 = 0;
  if ( IopIsAddressRangeValid(MaxDataSize, 688LL) )
  {
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x2B0);
    v4 = (_QWORD **)(MaxDataSize + 672);
    v5 = *v4;
    if ( *v4 )
    {
      v6 = v4;
      while ( v5 && v5 != v4 && v3 < 10 )
      {
        ++v3;
        if ( !IopIsAddressRangeValid((__int64)v5, 16LL) || (_QWORD *)v5[1] != v6 )
          return (unsigned int)-1073741823;
        IopAddBugcheckTriageThread((__int64)(v5 - 65));
        v6 = v5;
        v5 = (_QWORD *)*v5;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
