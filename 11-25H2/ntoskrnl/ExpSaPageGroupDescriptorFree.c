/*
 * XREFs of ExpSaPageGroupDescriptorFree @ 0x1404AAB30
 * Callers:
 *     ExpSaAllocatorOptimizeList @ 0x1404AAA64 (ExpSaAllocatorOptimizeList.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402BD630 (KeQueryMaximumProcessorCountEx.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExpSaBinaryArrayRemove @ 0x1404F4114 (ExpSaBinaryArrayRemove.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpSaPageGroupDescriptorFree(unsigned int *P)
{
  __int64 MaximumProcessorCount; // rsi
  __int64 *v3; // rax
  signed __int8 v4; // cf
  __int64 *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  void *v12; // rbx

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v3 = KeAbPreAcquire((__int64)&ExSaPageGroupDescriptorArrayLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&ExSaPageGroupDescriptorArrayLock, v3, (__int64)&ExSaPageGroupDescriptorArrayLock);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
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
