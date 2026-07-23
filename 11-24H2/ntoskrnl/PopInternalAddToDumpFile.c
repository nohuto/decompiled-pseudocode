/*
 * XREFs of PopInternalAddToDumpFile @ 0x1405CA610
 * Callers:
 *     PopSetRange @ 0x14046AEE0 (PopSetRange.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x14058FF74 (IopAddBugcheckTriageDataFromParameters.c)
 *     KiCollectTriageDumpDataBlocks @ 0x1405B0318 (KiCollectTriageDumpDataBlocks.c)
 *     PopIrpWatchdogBugcheck @ 0x1405CA848 (PopIrpWatchdogBugcheck.c)
 *     PopPowerActionWatchdog @ 0x1405D10B0 (PopPowerActionWatchdog.c)
 *     PopFreeHiberContext @ 0x1406F93C8 (PopFreeHiberContext.c)
 *     PoShutdownBugCheck @ 0x140751760 (PoShutdownBugCheck.c)
 *     PopThermalWorker @ 0x140A36310 (PopThermalWorker.c)
 *     PopAllocateHiberContext @ 0x140AC4284 (PopAllocateHiberContext.c)
 *     PopCreateDumpMdl @ 0x140B5E85C (PopCreateDumpMdl.c)
 *     PopDecompressHiberBlocks @ 0x140B5E974 (PopDecompressHiberBlocks.c)
 *     PopHiberReadChecksums @ 0x140B5F384 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x140B5FCCC (PopRequestRead.c)
 *     PopRequestWrite @ 0x140B60100 (PopRequestWrite.c)
 *     PopRestoreHiberContext @ 0x140B683FC (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x1405CA6CC (PopInternalSaveStackToDumpFile.c)
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
  if ( *(_QWORD *)&qword_140F0B9C8 )
    IoAddTriageDumpDataBlock(qword_140F0B9C8, (PVOID)0x1D8);
  if ( BugCheckParameter4 )
    IoAddTriageDumpDataBlock(BugCheckParameter4, (PVOID)0x1F0);
  return IoAddTriageDumpDataBlock((ULONG)&PopCB, (PVOID)0x2B8);
}
