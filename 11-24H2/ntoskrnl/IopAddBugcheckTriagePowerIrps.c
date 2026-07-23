/*
 * XREFs of IopAddBugcheckTriagePowerIrps @ 0x14059CB70
 * Callers:
 *     IopAddBugcheckDirectedTransitionTriageData @ 0x14059C3D8 (IopAddBugcheckDirectedTransitionTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14059C600 (IopAddBugcheckPowerTriageData.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1404A6F64 (IopIsAddressRangeValid.c)
 *     IopAddBugcheckTriageDevice @ 0x14059C74C (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageIrp @ 0x14059C944 (IopAddBugcheckTriageIrp.c)
 */

__int64 __fastcall IopAddBugcheckTriagePowerIrps(_QWORD **MaxDataSize)
{
  unsigned int v2; // esi
  int v3; // ebp
  _QWORD *v4; // rbx
  _QWORD *v5; // r14

  v2 = -1073741823;
  if ( MaxDataSize )
  {
    v3 = 0;
    if ( IopIsAddressRangeValid((__int64)MaxDataSize, 16LL) )
    {
      IoAddTriageDumpDataBlock((ULONG)MaxDataSize, (PVOID)0x10);
      v4 = *MaxDataSize;
      v5 = MaxDataSize;
      while ( v4 && v4 != MaxDataSize && v3 < 10 )
      {
        ++v3;
        if ( !IopIsAddressRangeValid((__int64)v4, 32LL) )
          return v2;
        IoAddTriageDumpDataBlock((ULONG)v4, (PVOID)0x20);
        if ( (_QWORD *)v4[1] != v5 )
          return v2;
        IopAddBugcheckTriageIrp(v4[2], 1);
        IopAddBugcheckTriageDevice(v4[3]);
        v5 = v4;
        v4 = (_QWORD *)*v4;
      }
      return 0;
    }
  }
  return v2;
}
