/*
 * XREFs of MmAddRangeToCrashDump @ 0x140677990
 * Callers:
 *     IopLiveDumpAddIptTraceBuffers @ 0x140597E30 (IopLiveDumpAddIptTraceBuffers.c)
 *     IopLiveDumpAddTriageDumpData @ 0x1405980D0 (IopLiveDumpAddTriageDumpData.c)
 *     IopLiveDumpMarkDeviceNode @ 0x14059BB84 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x14059BD5C (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x14059BE9C (IopLiveDumpMarkProcessorData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x14059BFB0 (IopLiveDumpMarkRequiredDumpData.c)
 *     IoAddProcessThreadsToDump @ 0x1405A00C0 (IoAddProcessThreadsToDump.c)
 *     IoAddProcessesToDump @ 0x1405A0164 (IoAddProcessesToDump.c)
 *     IoAddThreadStackToDump @ 0x1405A0220 (IoAddThreadStackToDump.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405A03BC (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x1405A0708 (IopAddMiniDumpPagesToPartialKernelDump.c)
 *     IopAddStackSegmentKernelShadowStackToDump @ 0x1405A0894 (IopAddStackSegmentKernelShadowStackToDump.c)
 *     IopAddTriageDumpDataToPartialKernelDump @ 0x1405A08C8 (IopAddTriageDumpDataToPartialKernelDump.c)
 *     IopMarkPagesForDpcData @ 0x1405A0CA0 (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForLoadedDriverInformation @ 0x1405A10E4 (IopMarkPagesForLoadedDriverInformation.c)
 *     IopMarkPagesForProcessorData @ 0x1405A11D0 (IopMarkPagesForProcessorData.c)
 *     IopMarkPagesForRunTimeTriageDataBlocks @ 0x1405A1398 (IopMarkPagesForRunTimeTriageDataBlocks.c)
 *     ExAddPrivateDataToCrashDump @ 0x140653D7C (ExAddPrivateDataToCrashDump.c)
 *     MiAddPartitionDataToCrashDump @ 0x140676F98 (MiAddPartitionDataToCrashDump.c)
 *     MiAddPartitionToCrashDump @ 0x1406771A0 (MiAddPartitionToCrashDump.c)
 *     MiAddUnicodeStringToCrashDump @ 0x140677468 (MiAddUnicodeStringToCrashDump.c)
 *     MmAddPrivateDataToCrashDump @ 0x140677874 (MmAddPrivateDataToCrashDump.c)
 *     MmAddUnloadedDriverInformationToCrashDump @ 0x140677AB8 (MmAddUnloadedDriverInformationToCrashDump.c)
 *     MmGetDumpRange @ 0x140677B48 (MmGetDumpRange.c)
 * Callees:
 *     MiSystemVaTypeToVm @ 0x14022ABF0 (MiSystemVaTypeToVm.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiWalkPageTables @ 0x140235640 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402E3A1C (MiLockWorkingSetSharedAtDpc.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     MiSystemInSingleProcessorMode @ 0x14066EA30 (MiSystemInSingleProcessorMode.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MmAddRangeToCrashDump(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // rdi
  int SystemRegionType; // eax
  void *p_Blink; // rbx
  int v10; // r9d
  __int64 v11; // [rsp+28h] [rbp-79h] BYREF
  __int64 v12; // [rsp+30h] [rbp-71h]
  _DWORD v13[2]; // [rsp+38h] [rbp-69h] BYREF
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
    MiWalkPageTables((__int64)v13);
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
    MiWalkPageTables((__int64)v13);
    MiUnlockWorkingSetShared((__int64)p_Blink, v14);
  }
  return (unsigned int)v12;
}
