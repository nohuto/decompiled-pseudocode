/*
 * XREFs of MiExpandSystemCache @ 0x14026B918
 * Callers:
 *     MiObtainSystemCacheView @ 0x140209EE0 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiUnlockWorkingSetOptimal @ 0x14020A46C (MiUnlockWorkingSetOptimal.c)
 *     MiSetSystemCacheReverseMap @ 0x14020A5D0 (MiSetSystemCacheReverseMap.c)
 *     MiLockWorkingSetOptimal @ 0x14020A640 (MiLockWorkingSetOptimal.c)
 *     MiReturnSystemVa @ 0x14020AB44 (MiReturnSystemVa.c)
 *     MiObtainSystemVa @ 0x14026CAF4 (MiObtainSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x14026CB1C (MiMakeZeroedPageTables.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall MiExpandSystemCache(volatile signed __int32 *a1)
{
  __int64 *Pool; // rdi
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  __int64 v6; // r9
  __int16 v7; // bx
  unsigned __int64 v8; // r15
  ULONG_PTR v9; // rbp
  __int64 v10; // rcx
  __int64 *v11; // rdx
  unsigned int v12; // r8d
  unsigned __int64 v13; // r10
  __int64 v14; // rcx
  __int16 **v15; // r9
  char v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = 0;
  if ( (unsigned __int64)qword_140E2EF08 <= 0x4000000 )
    return 0LL;
  Pool = (__int64 *)MiAllocatePool(0x40uLL, 0x140uLL);
  if ( !Pool )
    return 0LL;
  v3 = MiObtainSystemVa(1LL);
  v4 = v3;
  if ( !v3 )
  {
LABEL_12:
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  v5 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiMakeZeroedPageTables(v5, v5 + 4088, 0LL, 7LL) )
  {
    MiReturnSystemVa(v4, v4 + 0x200000);
    goto LABEL_12;
  }
  _InterlockedIncrement(a1 + 602);
  v7 = *(_WORD *)a1;
  v8 = v4;
  v9 = MiLockWorkingSetOptimal((__int64)(a1 + 4704), v5, (unsigned __int8 *)&v17, v6);
  MiSetSystemCacheReverseMap(v10, v4, 0LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2F3F8);
  v11 = Pool + 4;
  v12 = 0;
  v13 = (unsigned __int64)(v7 & 0x3FF) << 6;
  do
  {
    *(v11 - 2) = v8;
    v14 = v13 ^ *v11 & 0x3FFFFFFFFFFF003FLL | 0x8000000000000000uLL;
    if ( v12 )
      v14 = v13 ^ *v11 & 0x3FFFFFFFFFFF003FLL;
    *v11 = v14;
    if ( v12 )
    {
      v14 = (__int64)(a1 + 572);
      v15 = (__int16 **)*((_QWORD *)a1 + 287);
      if ( *v15 != (__int16 *)(a1 + 572) )
        __fastfail(3u);
      *(v11 - 3) = (__int64)v15;
      *(v11 - 4) = v14;
      *v15 = (__int16 *)(v11 - 4);
      *((_QWORD *)a1 + 287) = v11 - 4;
    }
    v11 += 5;
    v8 += 0x40000LL;
    ++v12;
  }
  while ( v12 < 8 );
  *((_QWORD *)a1 + 288) += 7LL;
  MiSetSystemCacheReverseMap(v14, v4, (__int64)Pool);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2F3F8);
  MiUnlockWorkingSetOptimal((__int64)(a1 + 4704), v9, v17);
  return Pool;
}
