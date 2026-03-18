/*
 * XREFs of crc32 @ 0x140460AF8
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14027ABDC (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     RtlComputeCrc32 @ 0x140460AE0 (RtlComputeCrc32.c)
 *     SmDecompressBuffer @ 0x140481BC0 (SmDecompressBuffer.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z @ 0x14069C61C (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14069C6A4 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x14069CAB8 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14069CD88 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ExpSingleStringCheck @ 0x140C40DF8 (ExpSingleStringCheck.c)
 * Callees:
 *     crc32_z @ 0x140460B1C (crc32_z.c)
 */

__int64 __fastcall crc32(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a2 )
    return crc32_z(a1, a2, a3);
  else
    return 0LL;
}
