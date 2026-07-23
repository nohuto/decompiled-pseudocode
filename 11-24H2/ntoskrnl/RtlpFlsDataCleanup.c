/*
 * XREFs of RtlpFlsDataCleanup @ 0x140A0A908
 * Callers:
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     RtlpFlsHeapFree @ 0x140A0AB2C (RtlpFlsHeapFree.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFlsDataCleanup(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  char v3; // r13
  _DWORD *v4; // rsi
  unsigned int v5; // r12d
  unsigned int v6; // ebp
  unsigned int v7; // ecx
  __int64 v8; // r14
  __int64 v9; // r15
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  int v12; // ecx
  __int64 v13; // r8
  signed __int64 *v14; // rbx
  char *v15; // rdi
  __int64 v16; // rdx
  char *v17; // rax
  char *v18; // rdi
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx

  v3 = a3;
  v4 = (_DWORD *)a2;
  if ( (a3 & 1) != 0 )
  {
    v5 = dword_140E28228;
    if ( dword_140E28228 )
    {
      v6 = 17;
      do
      {
        _BitScanReverse(&v7, v6);
        a2 = v6 ^ (1 << v7);
        v8 = *(_QWORD *)&v4[2 * v7 - 8];
        if ( v8 )
        {
          v9 = 3 * a2;
          if ( *(_QWORD *)(v8 + 24 * a2 + 8) )
          {
            _BitScanReverse((unsigned int *)&v12, v6);
            v13 = *(&PspTlsContext + (unsigned int)(v12 - 4) + 1);
            if ( v13 )
              v14 = (signed __int64 *)(v13 + 8 * ((v6 ^ (1 << v12)) + 4LL * (v6 ^ (1 << v12)) + 1));
            else
              v14 = 0LL;
            v15 = (char *)KeAbPreAcquire((__int64)v14, 0LL);
            if ( _InterlockedCompareExchange64(v14, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(v14, 0, v15, (__int64)v14);
            if ( v15 )
              v15[10] = 1;
            v16 = *(_QWORD *)(v8 + 8 * v9 + 8);
            if ( (unsigned __int64)(v14[1] - 1) <= 0xFFFFFFFFFFFFFFFDuLL && v16 )
            {
              if ( v14[2] )
                guard_dispatch_icall_no_overrides(v14[2], v16);
              else
                guard_dispatch_icall_no_overrides(*(_QWORD *)(v8 + 8 * v9 + 8), v16);
              *(_QWORD *)(v8 + 8 * v9 + 8) = 0LL;
              v4[8] &= ~1u;
            }
            if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v14);
            KeAbPostRelease((ULONG_PTR)v14);
            v17 = (char *)KeAbPreAcquire((__int64)v14, 0LL);
            v18 = v17;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v14, v17, (__int64)v14);
            if ( v18 )
              v18[10] = 1;
            *(_QWORD *)(v8 + 8 * v9 + 8) = 0LL;
            v19 = (_QWORD *)(v8 + 8 * (v9 + 2));
            v20 = *v19;
            v21 = (_QWORD *)v19[1];
            if ( *(_QWORD **)(*v19 + 8LL) != v19 || (_QWORD *)*v21 != v19 )
              __fastfail(3u);
            *v21 = v20;
            *(_QWORD *)(v20 + 8) = v21;
            v19[1] = v19;
            *v19 = v19;
            if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v14);
            KeAbPostRelease((ULONG_PTR)v14);
          }
        }
        ++v6;
      }
      while ( v6 - 16 <= v5 );
    }
  }
  if ( (v3 & 2) != 0 )
  {
    v10 = v4;
    v11 = 4LL;
    do
    {
      if ( *v10 )
        RtlpFlsHeapFree(*v10, a2, a3, 0LL);
      ++v10;
      --v11;
    }
    while ( v11 );
    ExFreePoolWithTag(v4, 0x6B534C46u);
  }
}
