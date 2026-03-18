/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@QEAAPEAXXZ @ 0x140040274
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140041428 (-Allocate@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400403D0 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140040560 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<81920,160>::Allocate(__int64 a1)
{
  struct W32_PUSH_LOCK *v1; // rbx
  struct _RTL_BITMAP *v3; // r14
  ULONG ClearBits; // esi
  unsigned int v5; // eax
  unsigned int v6; // ebp
  _QWORD *v7; // r13
  __int64 v8; // r12
  __int64 v9; // rdi
  void *v11; // r15

  v1 = *(struct W32_PUSH_LOCK **)a1;
  GreEnterCriticalRegionAndAcquirePushLockExclusive(*(struct W32_PUSH_LOCK **)a1);
  v3 = (struct _RTL_BITMAP *)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24));
  ClearBits = RtlFindClearBits(v3, 1u, *(_DWORD *)(a1 + 32) < 0x1F4u ? *(_DWORD *)(a1 + 32) : 0);
  if ( ClearBits == -1 )
    goto LABEL_10;
  v5 = *(_DWORD *)(a1 + 36);
  v6 = ClearBits / 0x19;
  if ( v5 < 0x14 && v6 >= v5 )
  {
    v7 = (_QWORD *)(a1 + 8);
    v8 = v6 << 12;
    v11 = (void *)(v8 + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
    if ( (int)MmCommitSessionMappedView(v11, 4096LL) >= 0 )
    {
      memset(v11, 0, 0x1000uLL);
      ++*(_DWORD *)(a1 + 36);
      goto LABEL_4;
    }
LABEL_10:
    W32ReleasePushLockExclusive(v1);
    return 0LL;
  }
  v7 = (_QWORD *)(a1 + 8);
  LODWORD(v8) = v6 << 12;
LABEL_4:
  RtlTestBit(v3, ClearBits);
  RtlSetBit(v3, ClearBits);
  if ( ++*(_DWORD *)(a1 + 32) >= 0x1F4u )
    *(_DWORD *)(a1 + 32) = 0;
  v9 = (unsigned int)v8 + (*v7 ^ *(_QWORD *)(a1 + 16));
  W32ReleasePushLockExclusive(v1);
  return v9 + 160 * (ClearBits % 0x19);
}
