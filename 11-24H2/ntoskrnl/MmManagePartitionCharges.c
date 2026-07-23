/*
 * XREFs of MmManagePartitionCharges @ 0x1407FD1EC
 * Callers:
 *     NtManagePartition @ 0x1408F6B10 (NtManagePartition.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiManagePartitionCharges @ 0x14068BE28 (MiManagePartitionCharges.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmManagePartitionCharges(__int64 *a1, int *a2, __int64 a3, KPROCESSOR_MODE a4)
{
  __int64 v7; // rbx
  int v8; // r10d
  __int64 v10; // rcx
  _DWORD *v11; // rdi
  _DWORD *Pool; // rsi
  size_t v13; // r14
  int v14; // r9d
  unsigned int v15; // eax
  unsigned int v16; // r8d
  int *v17; // rdx
  int v18; // ecx
  int v19; // ebx

  v7 = *a1;
  v8 = *a2;
  if ( !*a2 || ((v8 - 1) & v8) != 0 || (v8 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  if ( (v8 & 2) != 0 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a4) )
    return 3221225569LL;
  v10 = (unsigned int)a2[1];
  if ( (unsigned int)(v10 - 1) > 0x1E )
    return 3221225485LL;
  v11 = (_DWORD *)(a3 + 8);
  if ( a4 )
  {
    v13 = 40 * v10;
    Pool = (_DWORD *)MiAllocatePool(0x40uLL, 40 * v10, 1632135501);
    if ( !Pool )
      return 3221225626LL;
    if ( v13 && ((unsigned __int8)v11 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    memmove(Pool, v11, v13);
  }
  else
  {
    Pool = v11;
    v13 = 0LL;
  }
  v14 = 0;
  v15 = 0;
  v16 = a2[1];
  if ( v16 )
  {
    v17 = Pool;
    do
    {
      v18 = *v17;
      if ( *v17 >= 2 )
        break;
      if ( ((1 << v18) & v14) != 0 )
        break;
      v14 |= 1 << v18;
      ++v15;
      v17 += 10;
    }
    while ( v15 < v16 );
  }
  if ( v15 >= v16 )
  {
    v19 = MiManagePartitionCharges(v7, *a2, v16, Pool);
    if ( v19 >= 0 && a4 && *a2 == 1 )
    {
      ProbeForWrite(v11, v13, 8u);
      memmove(v11, Pool, v13);
    }
  }
  else
  {
    v19 = -1073741811;
  }
  if ( Pool != v11 )
    ExFreePoolWithTag(Pool, 0);
  return (unsigned int)v19;
}
