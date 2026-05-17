/*
 * XREFs of RtlpSetupEnvironmentHashTable @ 0x1800E61A4
 * Callers:
 *     RtlpInitEnvironmentBlock @ 0x1800E587C (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     RtlpAllocateEnvironmentHashTable @ 0x1800AF1D8 (RtlpAllocateEnvironmentHashTable.c)
 *     Feature_Servicing_LoaderInitEnvironmentHashTable__private_IsEnabledDeviceUsageNoInline @ 0x18011E708 (Feature_Servicing_LoaderInitEnvironmentHashTable__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 RtlpSetupEnvironmentHashTable()
{
  char *EnvironmentHashTable; // rdi

  if ( !(unsigned int)Feature_Servicing_LoaderInitEnvironmentHashTable__private_IsEnabledDeviceUsageNoInline() )
  {
    EnvironmentHashTable = (char *)RtlpAllocateEnvironmentHashTable(0x100uLL);
    if ( !EnvironmentHashTable )
      return 0LL;
LABEL_3:
    *(_QWORD *)&RtlpEnvironmentHashTable = 0x40000000000LL;
    *((_QWORD *)&RtlpEnvironmentHashTable + 1) = EnvironmentHashTable;
    if ( (EnvironmentHashTable + 256 >= EnvironmentHashTable ? 0x20 : 0) != 0 )
      memset64(
        EnvironmentHashTable,
        (unsigned __int64)&RtlpEnvironmentHashTable + 1,
        EnvironmentHashTable + 256 >= EnvironmentHashTable ? 0x20 : 0);
    return 0LL;
  }
  RtlpEnvironmentHashTable = 0LL;
  xmmword_1801D48F0 = 0LL;
  EnvironmentHashTable = (char *)RtlpAllocateEnvironmentHashTable(0x100uLL);
  if ( EnvironmentHashTable )
    goto LABEL_3;
  return 3221225626LL;
}
