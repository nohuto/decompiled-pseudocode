/*
 * XREFs of PspIumFreePartitionPages @ 0x14043310C
 * Callers:
 *     PspIumFreePhysicalPages @ 0x140432FA8 (PspIumFreePhysicalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     MmFreeNonChargedSecurePages @ 0x140433BCC (MmFreeNonChargedSecurePages.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

void __fastcall PspIumFreePartitionPages(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v6; // rbx
  KIRQL v7; // r15
  __int64 v8; // rax
  unsigned int v9; // edi

  v3 = *(_QWORD *)(a1 + 160);
  LODWORD(v6) = a2;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v8 = *(unsigned int *)(a1 + 156);
  v9 = *(_DWORD *)(a1 + 152) - v8 - *(_DWORD *)(a1 + 4);
  if ( v9 > (unsigned int)v6 )
    v9 = v6;
  if ( v9 )
  {
    v6 = (unsigned int)v6 - v9;
    memmove((void *)(v3 + 8 * v8), (const void *)(a3 + 8 * v6), 8LL * v9);
    *(_DWORD *)(a1 + 156) += v9;
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88), v7);
  if ( (_DWORD)v6 )
    MmFreeNonChargedSecurePages(*(_QWORD *)(a1 + 8));
}
