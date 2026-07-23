/*
 * XREFs of MiEnumeratePartitionBadPages @ 0x1406749D0
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiEnumeratePartitionBadPages(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rsi
  ULONG_PTR v5; // rdx
  unsigned __int64 *Pool; // rbx
  KIRQL v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 *v9; // rdx
  __int64 i; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // rcx
  unsigned __int64 **v13; // rax

  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 7040);
    if ( !v4 )
      break;
    if ( v4 > 0x1FFFFFFFFFFFFFFFLL
      || (v5 = 8 * v4 + 32, v5 <= 8 * v4)
      || (Pool = (unsigned __int64 *)MiAllocatePool(0x40uLL, v5, 1631743309)) == 0LL )
    {
      *(_DWORD *)(a2 + 16) = -1073741670;
      return;
    }
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 7072));
    v8 = *(_QWORD *)(a1 + 7040);
    if ( !v8 )
    {
      MiReleaseSpinLockExclusive((_DWORD *)(a1 + 7072), v7);
      ExFreePoolWithTag(Pool, 0);
      return;
    }
    if ( v4 >= v8 )
    {
      v9 = Pool + 4;
      Pool[2] = *(_QWORD *)(a1 + 7040);
      Pool[3] = (unsigned __int64)(Pool + 4);
      for ( i = *(_QWORD *)(a1 + 7056); i != 0x3FFFFFFFFFLL; i = *(_QWORD *)v11 & 0xFFFFFFFFFFLL )
      {
        v11 = 48 * i - 0x220000000000LL;
        v12 = i ^ (*v9 ^ i) & 0xFFF0000000000000uLL;
        *v9 = v12;
        if ( *(char *)(v11 + 35) < 0 )
          *v9 = v12 | 0x8000000000000000uLL;
        ++v9;
      }
      MiReleaseSpinLockExclusive((_DWORD *)(a1 + 7072), v7);
      *(_QWORD *)(a2 + 24) += Pool[2];
      v13 = *(unsigned __int64 ***)(a2 + 8);
      if ( *v13 != (unsigned __int64 *)a2 )
        __fastfail(3u);
      *Pool = a2;
      Pool[1] = (unsigned __int64)v13;
      *v13 = Pool;
      *(_QWORD *)(a2 + 8) = Pool;
      return;
    }
    MiReleaseSpinLockExclusive((_DWORD *)(a1 + 7072), v7);
    ExFreePoolWithTag(Pool, 0);
  }
}
