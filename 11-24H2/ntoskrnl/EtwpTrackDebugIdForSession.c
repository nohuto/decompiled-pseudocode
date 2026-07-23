/*
 * XREFs of EtwpTrackDebugIdForSession @ 0x1409F7A5C
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x140A3B8FC (EtwpProviderArrivalCallback.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpTrackDebugIdForSession(__int64 a1, const void *a2, unsigned int a3)
{
  unsigned __int64 *v3; // rsi
  SIZE_T v4; // r14
  char *v7; // rax
  char *v8; // rbx
  __int64 *i; // rsi
  __int64 Pool2; // rax
  __int64 v11; // rbx
  __int64 *v13; // rax
  __int64 v14; // rcx

  v3 = (unsigned __int64 *)(a1 + 688);
  v4 = a3;
  v7 = (char *)KeAbPreAcquire(a1 + 688, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (__int64)v3);
  if ( v8 )
    v8[10] = 1;
  if ( (unsigned int)v4 <= 0x8000 && (unsigned int)(v4 + *(_DWORD *)(a1 + 324)) <= *(_DWORD *)(a1 + 4) )
  {
    for ( i = *(__int64 **)(a1 + 96); i != (__int64 *)(a1 + 96); i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 5) == (_DWORD)v4 && RtlCompareMemory(i + 3, a2, v4) == v4 )
        goto LABEL_14;
    }
    Pool2 = ExAllocatePool2(0x40uLL, (unsigned int)(v4 + 24), 0x62777445u);
    v11 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(a1 + 324) += v4;
      *(_DWORD *)(Pool2 + 20) = v4;
      memmove((void *)(Pool2 + 24), a2, v4);
      v13 = (__int64 *)(a1 + 96);
      v14 = *(_QWORD *)(a1 + 96);
      if ( *(_QWORD *)(v14 + 8) != a1 + 96 )
        __fastfail(3u);
      *(_QWORD *)v11 = v14;
      *(_QWORD *)(v11 + 8) = v13;
      *(_QWORD *)(v14 + 8) = v11;
      *v13 = v11;
      *(_BYTE *)(v11 + 16) = 0;
      _InterlockedOr((volatile signed __int32 *)(a1 + 824), 0x8C0u);
    }
  }
LABEL_14:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
  return KeAbPostRelease(a1 + 688);
}
