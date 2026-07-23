/*
 * XREFs of IopAddBugcheckPnpTriageData @ 0x14059C4C8
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x14058FF74 (IopAddBugcheckTriageDataFromParameters.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1404A6F64 (IopIsAddressRangeValid.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14059C690 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14059C854 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageThread @ 0x14059CC30 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14059CDC0 (IopAddBugcheckTriageWorkQueue.c)
 */

__int64 __fastcall IopAddBugcheckPnpTriageData(ULONG a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx

  v3 = 0;
  IopAddBugcheckTriageThread(a1);
  if ( IopIsAddressRangeValid(a2, 40LL) && *(_WORD *)a2 == 0x8001 )
  {
    IoAddTriageDumpDataBlock(a2, (PVOID)0x28);
    IopAddBugcheckTriageCompletionQueue(*(_QWORD *)(a2 + 8));
    IopAddBugcheckTriageWorkQueue(*(_QWORD *)(a2 + 16));
    v4 = *(_QWORD *)(a2 + 32);
    if ( v4 )
      IopAddBugcheckTriageDeviceNode(v4);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
