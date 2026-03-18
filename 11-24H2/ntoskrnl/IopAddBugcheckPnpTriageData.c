/*
 * XREFs of IopAddBugcheckPnpTriageData @ 0x14059F59C
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x140592F50 (IopAddBugcheckTriageDataFromParameters.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1404ACD58 (IopIsAddressRangeValid.c)
 *     Feature_9F_PnpDumpFixes__private_IsEnabledDeviceUsageNoInline @ 0x14059F458 (Feature_9F_PnpDumpFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14059F76C (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14059F930 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageThread @ 0x14059FD0C (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14059FE9C (IopAddBugcheckTriageWorkQueue.c)
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
    if ( (unsigned int)Feature_9F_PnpDumpFixes__private_IsEnabledDeviceUsageNoInline() )
    {
      v4 = *(_QWORD *)(a2 + 32);
      if ( v4 )
        IopAddBugcheckTriageDeviceNode(v4);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
