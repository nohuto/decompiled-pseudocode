/*
 * XREFs of MmAddRangeToCrashDump @ 0x14066C040
 * Callers:
 *     IopLiveDumpAddIptTraceBuffers @ 0x140594720 (IopLiveDumpAddIptTraceBuffers.c)
 *     IopLiveDumpAddTriageDumpData @ 0x1405949C0 (IopLiveDumpAddTriageDumpData.c)
 *     IopLiveDumpMarkDeviceNode @ 0x140598474 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x14059864C (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x14059878C (IopLiveDumpMarkProcessorData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1405988A0 (IopLiveDumpMarkRequiredDumpData.c)
 *     IoAddProcessThreadsToDump @ 0x14059C8DC (IoAddProcessThreadsToDump.c)
 *     IoAddProcessesToDump @ 0x14059C980 (IoAddProcessesToDump.c)
 *     IoAddThreadStackToDump @ 0x14059CA40 (IoAddThreadStackToDump.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14059CBDC (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x14059CF28 (IopAddMiniDumpPagesToPartialKernelDump.c)
 *     IopAddStackSegmentKernelShadowStackToDump @ 0x14059D0B4 (IopAddStackSegmentKernelShadowStackToDump.c)
 *     IopAddTriageDumpDataToPartialKernelDump @ 0x14059D0E8 (IopAddTriageDumpDataToPartialKernelDump.c)
 *     IopMarkPagesForDpcData @ 0x14059D4C0 (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForLoadedDriverInformation @ 0x14059D904 (IopMarkPagesForLoadedDriverInformation.c)
 *     IopMarkPagesForProcessorData @ 0x14059D9F0 (IopMarkPagesForProcessorData.c)
 *     IopMarkPagesForRunTimeTriageDataBlocks @ 0x14059DBB8 (IopMarkPagesForRunTimeTriageDataBlocks.c)
 *     ExAddPrivateDataToCrashDump @ 0x140647E7C (ExAddPrivateDataToCrashDump.c)
 *     MiAddPartitionDataToCrashDump @ 0x14066B648 (MiAddPartitionDataToCrashDump.c)
 *     MiAddPartitionToCrashDump @ 0x14066B850 (MiAddPartitionToCrashDump.c)
 *     MiAddUnicodeStringToCrashDump @ 0x14066BB18 (MiAddUnicodeStringToCrashDump.c)
 *     MmAddPrivateDataToCrashDump @ 0x14066BF24 (MmAddPrivateDataToCrashDump.c)
 *     MmAddUnloadedDriverInformationToCrashDump @ 0x14066C168 (MmAddUnloadedDriverInformationToCrashDump.c)
 *     MmGetDumpRange @ 0x14066C1F8 (MmGetDumpRange.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiSystemVaTypeToVm @ 0x140219640 (MiSystemVaTypeToVm.c)
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402FB704 (MiLockWorkingSetSharedAtDpc.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     MiSystemInSingleProcessorMode @ 0x140662EF0 (MiSystemInSingleProcessorMode.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MmAddRangeToCrashDump(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // rdi
  int SystemRegionType; // eax
  void *p_Blink; // rbx
  int v10; // r9d
  __int64 v11; // [rsp+28h] [rbp-79h] BYREF
  __int64 v12; // [rsp+30h] [rbp-71h]
  int v13[2]; // [rsp+38h] [rbp-69h] BYREF
  unsigned __int8 v14; // [rsp+41h] [rbp-60h]
  void *v15; // [rsp+58h] [rbp-49h]
  unsigned __int64 v16; // [rsp+60h] [rbp-41h]
  unsigned __int64 v17; // [rsp+68h] [rbp-39h]
  __int64 (__fastcall *v18)(__int64, unsigned __int64, int); // [rsp+E0h] [rbp+3Fh]
  __int64 *v19; // [rsp+F0h] [rbp+4Fh]

  memset_0(v13, 0, 0xC0uLL);
  v12 = 0LL;
  if ( !a3 )
    return 0LL;
  v16 = a2;
  v11 = a1;
  v17 = a2 + a3 - 1;
  v18 = MiFilterCrashDumpPte;
  Process = KeGetCurrentThread()->ApcState.Process;
  v19 = &v11;
  if ( MiSystemInSingleProcessorMode() )
  {
    v13[0] = 140800;
    MiWalkPageTables(v13);
  }
  else
  {
    v13[0] = 7;
    SystemRegionType = MiGetSystemRegionType(a2);
    p_Blink = MiSystemVaTypeToVm(SystemRegionType);
    if ( !v10 )
      p_Blink = &Process[2].ReadyListHead.Blink;
    if ( !p_Blink )
      p_Blink = MiGetAnyMultiplexedVm(6);
    v15 = p_Blink;
    if ( KeGetCurrentIrql() == 2 )
    {
      v14 = 17;
      MiLockWorkingSetSharedAtDpc((__int64)p_Blink);
    }
    else
    {
      v14 = MiLockWorkingSetShared((__int64)p_Blink);
    }
    MiWalkPageTables(v13);
    MiUnlockWorkingSetShared((__int64)p_Blink, v14);
  }
  return (unsigned int)v12;
}
