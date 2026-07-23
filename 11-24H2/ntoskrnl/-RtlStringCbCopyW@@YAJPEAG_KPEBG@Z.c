/*
 * XREFs of ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x14069DAF0
 * Callers:
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14069D824 (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14069DE14 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14069EF2C (-SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCopyW(char *a1, __int64 a2, char *a3)
{
  signed __int64 v3; // r8
  __int64 v4; // rdx
  unsigned __int16 v5; // ax
  unsigned __int16 *v6; // rax

  v3 = a3 - a1;
  v4 = 36LL;
  do
  {
    if ( v4 == -2147483610 )
      break;
    v5 = *(_WORD *)&a1[v3];
    if ( !v5 )
      break;
    *(_WORD *)a1 = v5;
    a1 += 2;
    --v4;
  }
  while ( v4 );
  v6 = (unsigned __int16 *)(a1 - 2);
  if ( v4 )
    v6 = (unsigned __int16 *)a1;
  *v6 = 0;
  return v4 == 0 ? 0x80000005 : 0;
}
