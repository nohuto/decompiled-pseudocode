/*
 * XREFs of RtlpHpVaMgrCtxAlloc @ 0x1403CBC48
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x1402F9490 (RtlpHpSegMgrReserve.c)
 *     RtlpHpAllocVA @ 0x1402FA5FC (RtlpHpAllocVA.c)
 *     RtlpHpLargeAlloc @ 0x1403CAA94 (RtlpHpLargeAlloc.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 *     RtlpHpVaMgrAlloc @ 0x1403CBCE4 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x1404F6934 (RtlpHpVaMgrCtxAllocatorFind.c)
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
