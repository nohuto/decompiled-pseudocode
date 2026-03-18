/*
 * XREFs of PopInternalAddToDumpFile @ 0x1405CCEA0
 * Callers:
 *     PopSetRange @ 0x140264BB0 (PopSetRange.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x140592F50 (IopAddBugcheckTriageDataFromParameters.c)
 *     KiCollectTriageDumpDataBlocks @ 0x1405B33A8 (KiCollectTriageDumpDataBlocks.c)
 *     PopIrpWatchdogBugcheck @ 0x1405CD0D8 (PopIrpWatchdogBugcheck.c)
 *     PopPowerActionWatchdog @ 0x1405D3990 (PopPowerActionWatchdog.c)
 *     PopFreeHiberContext @ 0x1406FB788 (PopFreeHiberContext.c)
 *     PoShutdownBugCheck @ 0x140753440 (PoShutdownBugCheck.c)
 *     PopThermalWorker @ 0x140A40A30 (PopThermalWorker.c)
 *     PopAllocateHiberContext @ 0x140AC688C (PopAllocateHiberContext.c)
 *     PopCreateDumpMdl @ 0x140B5C7EC (PopCreateDumpMdl.c)
 *     PopDecompressHiberBlocks @ 0x140B5C904 (PopDecompressHiberBlocks.c)
 *     PopHiberReadChecksums @ 0x140B5D304 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x140B5DC4C (PopRequestRead.c)
 *     PopRequestWrite @ 0x140B5E080 (PopRequestWrite.c)
 *     PopRestoreHiberContext @ 0x140B662BC (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140B6EC80 (PopSaveHiberContext.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x1405CCF5C (PopInternalSaveStackToDumpFile.c)
 */

char __fastcall PopInternalAddToDumpFile(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v4; // rdx

  if ( a1 )
  {
    if ( a2 )
      v4 = ((a1 & 0xFFF) + (unsigned __int64)a2 + 4095) >> 12;
    else
      LODWORD(v4) = 1;
    IoAddTriageDumpDataBlock(a1 & 0xFFFFF000, (PVOID)(unsigned int)((_DWORD)v4 << 12));
  }
  if ( a3 )
    PopInternalSaveStackToDumpFile(a3);
  IoAddTriageDumpDataBlock((ULONG)&PopHiberInfo, (PVOID)0xE8);
  IoAddTriageDumpDataBlock((ULONG)&PopAction, (PVOID)0x1E0);
  if ( *(_QWORD *)&qword_140F0B148 )
    IoAddTriageDumpDataBlock(qword_140F0B148, (PVOID)0x1D8);
  if ( BugCheckParameter4 )
    IoAddTriageDumpDataBlock(BugCheckParameter4, (PVOID)0x1F0);
  return IoAddTriageDumpDataBlock((ULONG)&PopCB, (PVOID)0x2B8);
}
