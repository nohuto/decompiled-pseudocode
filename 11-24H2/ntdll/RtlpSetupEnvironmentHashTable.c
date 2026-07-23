/*
 * XREFs of RtlpSetupEnvironmentHashTable @ 0x1801192CC
 * Callers:
 *     RtlpInitEnvironmentBlock @ 0x180119204 (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     RtlpAllocateEnvironmentHashTable @ 0x180008CF8 (RtlpAllocateEnvironmentHashTable.c)
 */

__int64 RtlpSetupEnvironmentHashTable()
{
  char *EnvironmentHashTable; // rax

  RtlpEnvironmentHashTable = 0LL;
  xmmword_1801D1890 = 0LL;
  EnvironmentHashTable = (char *)RtlpAllocateEnvironmentHashTable(0x100uLL);
  if ( !EnvironmentHashTable )
    return 3221225626LL;
  *(_QWORD *)&RtlpEnvironmentHashTable = 0x40000000000LL;
  *((_QWORD *)&RtlpEnvironmentHashTable + 1) = EnvironmentHashTable;
  if ( (EnvironmentHashTable + 256 >= EnvironmentHashTable ? 0x20 : 0) != 0 )
    memset64(
      EnvironmentHashTable,
      (unsigned __int64)&RtlpEnvironmentHashTable + 1,
      EnvironmentHashTable + 256 >= EnvironmentHashTable ? 0x20 : 0);
  return 0LL;
}
