/*
 * XREFs of CmpReserveRollbackPacketSpace @ 0x1406EE648
 * Callers:
 *     CmpSnapshotTxOwnerArrayToRollbackPacket @ 0x1407D0A70 (CmpSnapshotTxOwnerArrayToRollbackPacket.c)
 *     CmSnapshotRMTxArray @ 0x140863EA8 (CmSnapshotRMTxArray.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall CmpReserveRollbackPacketSpace(unsigned int *a1, unsigned int a2)
{
  __int64 v3; // rbp
  int v4; // ecx
  unsigned int v5; // edi
  unsigned int v6; // r14d
  char *Pool; // rax
  char *v8; // rsi
  struct _PRIVILEGE_SET *v9; // rcx

  v3 = a2;
  v4 = *a1;
  v5 = 0;
  if ( a1[1] - v4 < a2 )
  {
    v6 = v4 + a2;
    Pool = (char *)CmpAllocatePool(0x100uLL);
    v8 = Pool;
    if ( Pool )
    {
      memmove(Pool, *((const void **)a1 + 1), 8LL * *a1);
      memset_0(&v8[8 * *a1], 0, 8 * v3);
      v9 = (struct _PRIVILEGE_SET *)*((_QWORD *)a1 + 1);
      if ( v9 )
        CmSiFreeMemory(v9);
      *((_QWORD *)a1 + 1) = v8;
      a1[1] = v6;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v5;
}
