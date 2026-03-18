/*
 * XREFs of SmcGetCacheStats @ 0x14078E27C
 * Callers:
 *     SmcProcessStatsRequest @ 0x14078A05C (SmcProcessStatsRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SmKmFileInfoGetPath @ 0x14078A818 (SmKmFileInfoGetPath.c)
 *     SmcCacheDereference @ 0x14078DD18 (SmcCacheDereference.c)
 *     SmcCacheReference @ 0x14078DF68 (SmcCacheReference.c)
 */

__int64 __fastcall SmcGetCacheStats(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  int Path; // edi
  unsigned int v7; // ecx
  signed __int64 *v8; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v10; // ebp
  __int64 *v11; // r14
  _DWORD *v12; // rsi
  __int64 v13; // r8

  memset_0(a2 + 2, 0, 0x460uLL);
  v4 = SmcCacheReference(a1, a2[1]);
  v5 = v4;
  if ( v4 )
  {
    v7 = a2[7] & 0xFFFFFFC0 | 1;
    a2[7] = v7;
    *((_QWORD *)a2 + 1) = *(_QWORD *)(v4 + 16);
    a2[5] = *(_DWORD *)(v4 + 8);
    a2[6] = *(_DWORD *)(v4 + 24);
    a2[25] = *(_DWORD *)(v4 + 32);
    a2[7] = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v4 + 28) << 6)) & 0x40;
    if ( (*a2 & 0x100) != 0 || (Path = SmKmFileInfoGetPath(v4 + 40, a2 + 26, 0x400u), Path >= 0) )
    {
      a2[24] = 0;
      v8 = (signed __int64 *)(v5 + 160);
      CurrentThread = KeGetCurrentThread();
      v10 = 0;
      --CurrentThread->KernelApcDisable;
      v11 = KeAbPreAcquire(v5 + 160, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 160), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v5 + 160), 0, v11, v5 + 160);
      if ( v11 )
        *((_BYTE *)v11 + 10) = 1;
      v12 = (_DWORD *)(v5 + 168);
      v13 = 16LL;
      do
      {
        if ( *v12 != -1 )
        {
          a2[v10 + 8] = *v12;
          if ( (v12[1] & 3) == 0 )
            a2[24] |= 1 << v10;
          ++v10;
        }
        v12 += 6;
        --v13;
      }
      while ( v13 );
      if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8);
      KeAbPostRelease((ULONG_PTR)v8);
      KeLeaveCriticalRegion();
      a2[4] = v10;
      Path = 0;
    }
    SmcCacheDereference(a1, a2[1]);
  }
  else
  {
    return (unsigned int)-1073741672;
  }
  return (unsigned int)Path;
}
