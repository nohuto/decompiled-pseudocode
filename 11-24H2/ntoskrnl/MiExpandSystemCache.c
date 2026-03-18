/*
 * XREFs of MiExpandSystemCache @ 0x1403A7378
 * Callers:
 *     MiObtainSystemCacheView @ 0x140241D90 (MiObtainSystemCacheView.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockWorkingSetOptimal @ 0x14024231C (MiUnlockWorkingSetOptimal.c)
 *     MiSetSystemCacheReverseMap @ 0x140242480 (MiSetSystemCacheReverseMap.c)
 *     MiLockWorkingSetOptimal @ 0x1402424F0 (MiLockWorkingSetOptimal.c)
 *     MiReturnSystemVa @ 0x1402429F4 (MiReturnSystemVa.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiObtainSystemVa @ 0x1403A5804 (MiObtainSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x1403A582C (MiMakeZeroedPageTables.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall MiExpandSystemCache(volatile signed __int32 *a1)
{
  __int64 *Pool; // rdi
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  __int16 v6; // bx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 *v10; // rdx
  unsigned int v11; // r8d
  unsigned __int64 v12; // r10
  __int64 v13; // rcx
  __int16 **v14; // r9
  char v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = 0;
  if ( (unsigned __int64)qword_140E2EDC8 <= 0x4000000 )
    return 0LL;
  Pool = (__int64 *)MiAllocatePool(0x40uLL, 0x140uLL, 1666410829);
  if ( !Pool )
    return 0LL;
  v3 = MiObtainSystemVa(1LL, 7u);
  v4 = v3;
  if ( !v3 )
  {
LABEL_12:
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  v5 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiMakeZeroedPageTables(
                        (unsigned int)(v3 >> 9) & 0xFFFFFFF8,
                        ((unsigned int)(v3 >> 9) & 0xFFFFFFF8) + 4088,
                        0,
                        7) )
  {
    MiReturnSystemVa(v4, v4 + 0x200000, 7);
    goto LABEL_12;
  }
  _InterlockedIncrement(a1 + 602);
  v6 = *(_WORD *)a1;
  v7 = v4;
  v8 = MiLockWorkingSetOptimal((__int64)(a1 + 4704), v5, (unsigned __int8 *)&v16);
  MiSetSystemCacheReverseMap(v9, v4, 0LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2F2B8);
  v10 = Pool + 4;
  v11 = 0;
  v12 = (unsigned __int64)(v6 & 0x3FF) << 6;
  do
  {
    *(v10 - 2) = v7;
    v13 = v12 ^ *v10 & 0x3FFFFFFFFFFF003FLL | 0x8000000000000000uLL;
    if ( v11 )
      v13 = v12 ^ *v10 & 0x3FFFFFFFFFFF003FLL;
    *v10 = v13;
    if ( v11 )
    {
      v13 = (__int64)(a1 + 572);
      v14 = (__int16 **)*((_QWORD *)a1 + 287);
      if ( *v14 != (__int16 *)(a1 + 572) )
        __fastfail(3u);
      *(v10 - 3) = (__int64)v14;
      *(v10 - 4) = v13;
      *v14 = (__int16 *)(v10 - 4);
      *((_QWORD *)a1 + 287) = v10 - 4;
    }
    v10 += 5;
    v7 += 0x40000LL;
    ++v11;
  }
  while ( v11 < 8 );
  *((_QWORD *)a1 + 288) += 7LL;
  MiSetSystemCacheReverseMap(v13, v4, (__int64)Pool);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2F2B8);
  MiUnlockWorkingSetOptimal((__int64)(a1 + 4704), v8, v16);
  return Pool;
}
