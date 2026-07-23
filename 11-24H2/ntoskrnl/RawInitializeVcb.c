/*
 * XREFs of RawInitializeVcb @ 0x1408ACE6C
 * Callers:
 *     RawMountVolume @ 0x1408ACB4C (RawMountVolume.c)
 * Callees:
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1408ACFB0 (ExAllocateCacheAwareRundownProtection.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RawInitializeVcb(_DWORD *a1, __int64 a2, __int64 a3)
{
  PVOID PoolWithTag; // rax
  PVOID v7; // rbx
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  unsigned int v9; // ebx
  char v10; // al
  __int64 result; // rax

  memset_0(a1, 0, 0x160uLL);
  *((_QWORD *)a1 + 25) = a3;
  *a1 = 23070208;
  *((_QWORD *)a1 + 24) = a2;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x60uLL, 0x20776152u);
  *((_QWORD *)a1 + 26) = PoolWithTag;
  v7 = PoolWithTag;
  CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x20776152u);
  *((_QWORD *)a1 + 29) = CacheAwareRundownProtection;
  a1[60] = 1;
  v9 = v7 == 0LL ? 0xC000009A : 0;
  if ( !CacheAwareRundownProtection )
    v9 = -1073741670;
  *((_QWORD *)a1 + 31) = 0LL;
  a1[64] = 0;
  KeInitializeEvent((PRKEVENT)a1 + 11, SynchronizationEvent, 0);
  *((_QWORD *)a1 + 38) = 0LL;
  a1[78] = 0;
  a1[74] = 1;
  KeInitializeEvent((PRKEVENT)(a1 + 80), SynchronizationEvent, 0);
  v10 = *((_BYTE *)a1 + 7);
  *((_BYTE *)a1 + 4) |= 0x40u;
  *((_BYTE *)a1 + 6) |= 2u;
  *((_BYTE *)a1 + 7) = v10 & 0xF | 0x50;
  *((_QWORD *)a1 + 8) = a1 + 14;
  *((_QWORD *)a1 + 7) = a1 + 14;
  if ( a1 != (_DWORD *)-296LL )
    *((_QWORD *)a1 + 6) = a1 + 74;
  *((_QWORD *)a1 + 9) = 0LL;
  result = v9;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 11) = 0LL;
  *((_QWORD *)a1 + 12) = 0LL;
  a1[26] = 0;
  *((_QWORD *)a1 + 14) = 0LL;
  a1[30] |= 0x10u;
  return result;
}
