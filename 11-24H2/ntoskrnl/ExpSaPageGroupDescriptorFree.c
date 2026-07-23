/*
 * XREFs of ExpSaPageGroupDescriptorFree @ 0x1404A6528
 * Callers:
 *     ExpSaAllocatorOptimizeList @ 0x1404A645C (ExpSaAllocatorOptimizeList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14031D920 (KeQueryMaximumProcessorCountEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExpSaBinaryArrayRemove @ 0x1404F4218 (ExpSaBinaryArrayRemove.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ExpSaPageGroupDescriptorFree(unsigned int *P)
{
  __int64 MaximumProcessorCount; // rsi
  char *v3; // rax
  signed __int8 v4; // cf
  char *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  void *v12; // rbx

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v3 = (char *)KeAbPreAcquire((__int64)&ExSaPageGroupDescriptorArrayLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&ExSaPageGroupDescriptorArrayLock, v3, (__int64)&ExSaPageGroupDescriptorArrayLock);
  if ( v5 )
    v5[10] = 1;
  if ( (_DWORD)MaximumProcessorCount )
  {
    v6 = 0LL;
    do
    {
      v7 = P[8];
      _BitScanReverse(&v8, v7);
      v9 = v7 ^ (unsigned int)(1 << v8);
      v10 = v8 - 2;
      v11 = *(_QWORD *)(v6 + ExSaPageArrays);
      v12 = *(void **)(*(_QWORD *)(v11 + 8 * v10) + 8 * v9 + 8);
      ExpSaBinaryArrayRemove(v11, v7);
      ExFreePoolWithTag(v12, 0);
      v6 += 8LL;
      --MaximumProcessorCount;
    }
    while ( MaximumProcessorCount );
  }
  ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, P[8]);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock);
  KeAbPostRelease((ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  ExFreePoolWithTag(P, 0);
}
