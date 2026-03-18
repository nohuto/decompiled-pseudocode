/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAPEAXXZ @ 0x14003FD80
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x14010ACAC (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NI@Z @ 0x14003FB4C (-CommitSlot@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400403D0 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140040560 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<36864,144>::Allocate(__int64 a1)
{
  struct W32_PUSH_LOCK *v1; // rbx
  struct _RTL_BITMAP *v3; // rsi
  ULONG ClearBits; // eax
  ULONG v5; // r14d
  __int64 v6; // rdi

  v1 = *(struct W32_PUSH_LOCK **)a1;
  GreEnterCriticalRegionAndAcquirePushLockExclusive(*(struct W32_PUSH_LOCK **)a1);
  v3 = (struct _RTL_BITMAP *)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24));
  ClearBits = RtlFindClearBits(v3, 1u, *(_DWORD *)(a1 + 32) < 0xFCu ? *(_DWORD *)(a1 + 32) : 0);
  v5 = ClearBits;
  if ( ClearBits == -1 || !NSInstrumentation::CSectionBitmapAllocator<36864,144>::CommitSlot(a1, ClearBits) )
  {
    W32ReleasePushLockExclusive(v1);
    return 0LL;
  }
  else
  {
    RtlTestBit(v3, v5);
    RtlSetBit(v3, v5);
    if ( ++*(_DWORD *)(a1 + 32) >= 0xFCu )
      *(_DWORD *)(a1 + 32) = 0;
    v6 = ((v5 / 0x1C) << 12) + (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 8));
    W32ReleasePushLockExclusive(v1);
    return v6 + 144 * (v5 % 0x1C);
  }
}
