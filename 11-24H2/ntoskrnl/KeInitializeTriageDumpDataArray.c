/*
 * XREFs of KeInitializeTriageDumpDataArray @ 0x1404AA2A0
 * Callers:
 *     PopWatchdogDumpControlRoutine @ 0x1405DE7D0 (PopWatchdogDumpControlRoutine.c)
 *     IopInitializeTriageDumpData @ 0x14070EFB0 (IopInitializeTriageDumpData.c)
 *     PopWatchdogInit @ 0x140C34FB8 (PopWatchdogInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeInitializeTriageDumpDataArray(PKTRIAGE_DUMP_DATA_ARRAY KtriageDumpDataArray, ULONG Size)
{
  NTSTATUS result; // eax

  if ( !KtriageDumpDataArray )
    return -1073741811;
  if ( Size < 0x40 )
    return -1073741789;
  KtriageDumpDataArray->List.Blink = &KtriageDumpDataArray->List;
  KtriageDumpDataArray->List.Flink = &KtriageDumpDataArray->List;
  KtriageDumpDataArray->NumBlocksTotal = (Size - 48) >> 4;
  result = 0;
  KtriageDumpDataArray->NumBlocksUsed = 0;
  KtriageDumpDataArray->VirtMemSize = 0;
  *(_QWORD *)&KtriageDumpDataArray->ComponentNameBufferLength = 0x2000000LL;
  KtriageDumpDataArray->Blocks[0].Address = 0LL;
  return result;
}
