/*
 * XREFs of MmAddRangeToCrashDump @ 0x140678B70
 * Callers:
 *     IopLiveDumpAddIptTraceBuffers @ 0x140594DB0 (IopLiveDumpAddIptTraceBuffers.c)
 *     IopLiveDumpAddTriageDumpData @ 0x140595050 (IopLiveDumpAddTriageDumpData.c)
 *     IopLiveDumpMarkDeviceNode @ 0x140598B04 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x140598CDC (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x140598E1C (IopLiveDumpMarkProcessorData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x140598F30 (IopLiveDumpMarkRequiredDumpData.c)
 *     IoAddProcessThreadsToDump @ 0x14059CFE4 (IoAddProcessThreadsToDump.c)
 *     IoAddProcessesToDump @ 0x14059D088 (IoAddProcessesToDump.c)
 *     IoAddThreadStackToDump @ 0x14059D150 (IoAddThreadStackToDump.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14059D2EC (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x14059D638 (IopAddMiniDumpPagesToPartialKernelDump.c)
 *     IopAddStackSegmentKernelShadowStackToDump @ 0x14059D7C4 (IopAddStackSegmentKernelShadowStackToDump.c)
 *     IopAddTriageDumpDataToPartialKernelDump @ 0x14059D7F8 (IopAddTriageDumpDataToPartialKernelDump.c)
 *     IopMarkPagesForDpcData @ 0x14059DBD0 (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForLoadedDriverInformation @ 0x14059E01C (IopMarkPagesForLoadedDriverInformation.c)
 *     IopMarkPagesForProcessorData @ 0x14059E108 (IopMarkPagesForProcessorData.c)
 *     IopMarkPagesForRunTimeTriageDataBlocks @ 0x14059E2D4 (IopMarkPagesForRunTimeTriageDataBlocks.c)
 *     ExAddPrivateDataToCrashDump @ 0x1406524DC (ExAddPrivateDataToCrashDump.c)
 *     MiAddPartitionDataToCrashDump @ 0x140678168 (MiAddPartitionDataToCrashDump.c)
 *     MiAddPartitionToCrashDump @ 0x140678370 (MiAddPartitionToCrashDump.c)
 *     MiAddUnicodeStringToCrashDump @ 0x140678638 (MiAddUnicodeStringToCrashDump.c)
 *     MmAddPrivateDataToCrashDump @ 0x140678A54 (MmAddPrivateDataToCrashDump.c)
 *     MmAddUnloadedDriverInformationToCrashDump @ 0x140678C98 (MmAddUnloadedDriverInformationToCrashDump.c)
 *     MmGetDumpRange @ 0x140678D28 (MmGetDumpRange.c)
 * Callees:
 *     MiLockWorkingSetSharedAtDpc @ 0x14020BF58 (MiLockWorkingSetSharedAtDpc.c)
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiSystemVaTypeToVm @ 0x1402FDE60 (MiSystemVaTypeToVm.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiSystemInSingleProcessorMode @ 0x14066FC00 (MiSystemInSingleProcessorMode.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MmAddRangeToCrashDump(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // rdi
  int SystemRegionType; // eax
  __int64 v9; // rdx
  void *p_Blink; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // [rsp+28h] [rbp-79h] BYREF
  __int64 v14; // [rsp+30h] [rbp-71h]
  int v15[2]; // [rsp+38h] [rbp-69h] BYREF
  unsigned __int8 v16; // [rsp+41h] [rbp-60h]
  void *v17; // [rsp+58h] [rbp-49h]
  unsigned __int64 v18; // [rsp+60h] [rbp-41h]
  unsigned __int64 v19; // [rsp+68h] [rbp-39h]
  __int64 (__fastcall *v20)(__int64, unsigned __int64, int); // [rsp+E0h] [rbp+3Fh]
  __int64 *v21; // [rsp+F0h] [rbp+4Fh]

  memset_0(v15, 0, 0xC0uLL);
  v14 = 0LL;
  if ( !a3 )
    return 0LL;
  v18 = a2;
  v13 = a1;
  v19 = a2 + a3 - 1;
  v20 = MiFilterCrashDumpPte;
  Process = KeGetCurrentThread()->ApcState.Process;
  v21 = &v13;
  if ( MiSystemInSingleProcessorMode() )
  {
    v15[0] = 140800;
    MiWalkPageTables(v15);
  }
  else
  {
    v15[0] = 7;
    SystemRegionType = MiGetSystemRegionType(a2);
    p_Blink = MiSystemVaTypeToVm(SystemRegionType);
    if ( !(_DWORD)v12 )
      p_Blink = &Process[2].ReadyListHead.Blink;
    if ( !p_Blink )
      p_Blink = MiGetAnyMultiplexedVm(6);
    v17 = p_Blink;
    if ( KeGetCurrentIrql() == 2 )
    {
      v16 = 17;
      MiLockWorkingSetSharedAtDpc((__int64)p_Blink);
    }
    else
    {
      v16 = MiLockWorkingSetShared((__int64)p_Blink, v9, v11, v12);
    }
    MiWalkPageTables(v15);
    MiUnlockWorkingSetShared((__int64)p_Blink, v16);
  }
  return (unsigned int)v14;
}
