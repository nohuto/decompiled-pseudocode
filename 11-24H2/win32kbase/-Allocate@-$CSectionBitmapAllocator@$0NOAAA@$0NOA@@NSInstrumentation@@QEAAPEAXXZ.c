/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1401320D8
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140088C24 (-Allocate@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400403D0 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140040560 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA_NI@Z @ 0x1401321AC (-CommitSlot@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA_NI@Z.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Allocate(__int64 a1)
{
  struct W32_PUSH_LOCK *v1; // rbx
  struct _RTL_BITMAP *v3; // rbp
  ULONG ClearBits; // eax
  ULONG v5; // esi
  __int64 v6; // rdi

  v1 = *(struct W32_PUSH_LOCK **)a1;
  GreEnterCriticalRegionAndAcquirePushLockExclusive(*(struct W32_PUSH_LOCK **)a1);
  v3 = (struct _RTL_BITMAP *)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24));
  ClearBits = RtlFindClearBits(v3, 1u, *(_DWORD *)(a1 + 32) < 0xDEu ? *(_DWORD *)(a1 + 32) : 0);
  v5 = ClearBits;
  if ( ClearBits == -1
    || !(unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<909312,3552>::CommitSlot(a1, ClearBits) )
  {
    v6 = 0LL;
  }
  else
  {
    RtlTestBit(v3, v5);
    RtlSetBit(v3, v5);
    if ( ++*(_DWORD *)(a1 + 32) >= 0xDEu )
      *(_DWORD *)(a1 + 32) = 0;
    v6 = (v5 << 12) + (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 8));
  }
  W32ReleasePushLockExclusive(v1);
  return v6;
}
