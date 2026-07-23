/*
 * XREFs of CcCreatePartition @ 0x140579AF0
 * Callers:
 *     CcGetPartitionWithCreate @ 0x1404D8560 (CcGetPartitionWithCreate.c)
 *     CcInitializeCacheManager @ 0x140C17A88 (CcInitializeCacheManager.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     CcDeletePartition @ 0x140579B7C (CcDeletePartition.c)
 *     CcInitializePartition @ 0x14057A1B8 (CcInitializePartition.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 */

_BYTE *CcCreatePartition()
{
  const char *v0; // r9
  _BYTE *PoolWithTag; // rax
  _BYTE *v2; // rbx

  v0 = "ENABLED";
  if ( !CcEnablePerVolumeLazyWriter )
    v0 = "DISABLED";
  DbgPrintEx(0x7Fu, 2u, "CcCreatePartition: Per-Volume Lazywriter is: %s\n\n", v0);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x640uLL, 0x72506343u);
  v2 = PoolWithTag;
  if ( PoolWithTag && !(unsigned __int8)CcInitializePartition(PoolWithTag) )
  {
    v2[1294] = 2;
    CcDeletePartition(v2);
    return 0LL;
  }
  return v2;
}
