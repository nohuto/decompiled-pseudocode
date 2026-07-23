/*
 * XREFs of RtlpHpVaMgrCtxAlloc @ 0x140459658
 * Callers:
 *     RtlpHpAllocVA @ 0x14034AEE8 (RtlpHpAllocVA.c)
 *     RtlpHpSegMgrReserve @ 0x14035D608 (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeAlloc @ 0x1404585E4 (RtlpHpLargeAlloc.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     RtlpHpVaMgrAlloc @ 0x1404596F4 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x1404F68D8 (RtlpHpVaMgrCtxAllocatorFind.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAlloc(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v4; // rax
  ULONG_PTR v7; // rsi
  volatile LONG *v9; // rdi
  KIRQL v10; // bl

  v4 = *a4;
  if ( (_DWORD)v4 == -1 )
  {
    v9 = (volatile LONG *)(a1 + 2144);
    v10 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 2144));
    v7 = RtlpHpVaMgrCtxAllocatorFind(a1, a4, 0LL, 0LL);
    ExReleaseSpinLockShared(v9, v10);
  }
  else
  {
    v7 = a1 + 48 * (v4 + 45);
  }
  return RtlpHpVaMgrAlloc(v7);
}
