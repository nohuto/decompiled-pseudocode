/*
 * XREFs of MiExpandSystemCache @ 0x1403903C8
 * Callers:
 *     MiObtainSystemCacheView @ 0x1402C0010 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiUnlockWorkingSetOptimal @ 0x1402C04C8 (MiUnlockWorkingSetOptimal.c)
 *     MiSetSystemCacheReverseMap @ 0x1402C0620 (MiSetSystemCacheReverseMap.c)
 *     MiLockWorkingSetOptimal @ 0x1402C0690 (MiLockWorkingSetOptimal.c)
 *     MiReturnSystemVa @ 0x1402C0B88 (MiReturnSystemVa.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiObtainSystemVa @ 0x14038EAA4 (MiObtainSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x14038EACC (MiMakeZeroedPageTables.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall MiExpandSystemCache(volatile signed __int32 *a1)
{
  __int64 *Pool; // rdi
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  __int64 v6; // r9
  __int16 v8; // bx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 *v12; // rdx
  unsigned int v13; // r8d
  unsigned __int64 v14; // r10
  __int64 v15; // rcx
  __int16 **v16; // r9
  unsigned __int8 v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = 0;
  if ( (unsigned __int64)qword_140E2EB88 <= 0x4000000 )
    return 0LL;
  Pool = (__int64 *)MiAllocatePool(0x40uLL, 0x140uLL, 1666410829);
  if ( !Pool )
    return 0LL;
  v3 = MiObtainSystemVa(1LL, 7u);
  v4 = v3;
  if ( !v3 )
  {
LABEL_6:
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
    MiReturnSystemVa(v4, v4 + 0x200000);
    goto LABEL_6;
  }
  _InterlockedIncrement(a1 + 602);
  v8 = *(_WORD *)a1;
  v9 = v4;
  v10 = MiLockWorkingSetOptimal((__int64)(a1 + 4704), v5, &v17, v6);
  MiSetSystemCacheReverseMap(v11, v4, 0LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2F078);
  v12 = Pool + 4;
  v13 = 0;
  v14 = (unsigned __int64)(v8 & 0x3FF) << 6;
  do
  {
    *(v12 - 2) = v9;
    v15 = v14 ^ *v12 & 0x3FFFFFFFFFFF003FLL | 0x8000000000000000uLL;
    if ( v13 )
      v15 = v14 ^ *v12 & 0x3FFFFFFFFFFF003FLL;
    *v12 = v15;
    if ( v13 )
    {
      v15 = (__int64)(a1 + 572);
      v16 = (__int16 **)*((_QWORD *)a1 + 287);
      if ( *v16 != (__int16 *)(a1 + 572) )
        __fastfail(3u);
      *(v12 - 3) = (__int64)v16;
      *(v12 - 4) = v15;
      *v16 = (__int16 *)(v12 - 4);
      *((_QWORD *)a1 + 287) = v12 - 4;
    }
    v12 += 5;
    v9 += 0x40000LL;
    ++v13;
  }
  while ( v13 < 8 );
  *((_QWORD *)a1 + 288) += 7LL;
  MiSetSystemCacheReverseMap(v15, v4, (__int64)Pool);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2F078);
  MiUnlockWorkingSetOptimal((__int64)(a1 + 4704), v10, v17);
  return Pool;
}
