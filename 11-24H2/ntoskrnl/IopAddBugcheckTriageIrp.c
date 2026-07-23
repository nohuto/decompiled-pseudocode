/*
 * XREFs of IopAddBugcheckTriageIrp @ 0x14059C944
 * Callers:
 *     IopAddBugcheckPowerTriageData @ 0x14059C600 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14059C854 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriagePowerIrps @ 0x14059CB70 (IopAddBugcheckTriagePowerIrps.c)
 *     IopAddBugcheckTriageThread @ 0x14059CC30 (IopAddBugcheckTriageThread.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1404A6F64 (IopIsAddressRangeValid.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14059C854 (IopAddBugcheckTriageDeviceNode.c)
 */

__int64 __fastcall IopAddBugcheckTriageIrp(__int64 MaxDataSize, char a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  int v6; // ebp
  unsigned __int64 v7; // rsi
  __int64 v8; // r15
  int v9; // r14d
  int v10; // r13d
  __int64 v11; // rbp
  __int64 v12; // r15
  char v13; // si
  int v14; // eax
  int v16; // [rsp+70h] [rbp+18h]
  __int64 v17; // [rsp+78h] [rbp+20h]

  v16 = 0;
  v4 = 0;
  if ( !IopIsAddressRangeValid(MaxDataSize, 208LL) )
    return (unsigned int)-1073741823;
  v5 = *(unsigned __int16 *)(MaxDataSize + 2);
  if ( (unsigned __int16)v5 > 0x800u
    || (v6 = *(char *)(MaxDataSize + 66), *(char *)(MaxDataSize + 66) > 64)
    || (v17 = *(unsigned __int16 *)(MaxDataSize + 2),
        v7 = (unsigned __int64)(v5 + 7) >> 3,
        v8 = v17,
        !IopIsAddressRangeValid(MaxDataSize, 8 * v7)) )
  {
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0xD0);
    return (unsigned int)-1073741823;
  }
  IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)(unsigned int)(8 * v7));
  if ( a2 == 1 )
  {
    v9 = 0;
    v10 = v6;
    while ( v9 < v10 )
    {
      if ( MaxDataSize + 280 + 72LL * (char)v9 > (unsigned __int64)(v8 + MaxDataSize) )
        return (unsigned int)-1073741823;
      v11 = *(_QWORD *)(MaxDataSize + 72LL * (char)v9 + 248);
      v12 = 0LL;
      v13 = 0;
      if ( v11 )
      {
        v14 = v16;
        while ( 1 )
        {
          v16 = v14 + 1;
          if ( !IopIsAddressRangeValid(v11, 336LL) )
            break;
          v12 = *(_QWORD *)(v11 + 312);
          if ( !IopIsAddressRangeValid(v12, 112LL) )
            break;
          v11 = *(_QWORD *)(v12 + 48);
          if ( !v11 )
          {
            v13 = 1;
            goto LABEL_18;
          }
          v14 = v16;
          if ( v16 >= 10 )
            goto LABEL_18;
        }
        v4 = -1073741823;
LABEL_18:
        if ( v13 )
          v4 = IopAddBugcheckTriageDeviceNode(*(_QWORD *)(v12 + 40));
      }
      v8 = v17;
      ++v9;
    }
  }
  return v4;
}
