/*
 * XREFs of PopInternalAddToDumpFile @ 0x1405C8990
 * Callers:
 *     PopSetRange @ 0x140472430 (PopSetRange.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x14058F720 (IopAddBugcheckTriageDataFromParameters.c)
 *     KiCollectTriageDumpDataBlocks @ 0x1405AFA18 (KiCollectTriageDumpDataBlocks.c)
 *     PopIrpWatchdogBugcheck @ 0x1405C8BC8 (PopIrpWatchdogBugcheck.c)
 *     PopPowerActionWatchdog @ 0x1405CEF30 (PopPowerActionWatchdog.c)
 *     PopFreeHiberContext @ 0x1406EF918 (PopFreeHiberContext.c)
 *     PoShutdownBugCheck @ 0x140747350 (PoShutdownBugCheck.c)
 *     PopThermalWorker @ 0x140A3C300 (PopThermalWorker.c)
 *     PopAllocateHiberContext @ 0x140ABEFAC (PopAllocateHiberContext.c)
 *     PopCreateDumpMdl @ 0x140B4C7EC (PopCreateDumpMdl.c)
 *     PopDecompressHiberBlocks @ 0x140B4C904 (PopDecompressHiberBlocks.c)
 *     PopHiberReadChecksums @ 0x140B4D274 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x140B4DB88 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140B4DFC0 (PopRequestWrite.c)
 *     PopRestoreHiberContext @ 0x140B561BC (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140B5BF00 (PopSaveHiberContext.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x1405C8A4C (PopInternalSaveStackToDumpFile.c)
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
  if ( *(_QWORD *)&qword_140F0AEA8 )
    IoAddTriageDumpDataBlock(qword_140F0AEA8, (PVOID)0x1D8);
  if ( BugCheckParameter4 )
    IoAddTriageDumpDataBlock(BugCheckParameter4, (PVOID)0x1F0);
  return IoAddTriageDumpDataBlock((ULONG)&PopCB, (PVOID)0x2B8);
}
