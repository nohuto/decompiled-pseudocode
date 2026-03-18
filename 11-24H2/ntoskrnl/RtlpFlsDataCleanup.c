/*
 * XREFs of RtlpFlsDataCleanup @ 0x140A0B6C8
 * Callers:
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlpFlsHeapFree @ 0x140A0B8EC (RtlpFlsHeapFree.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  _QWORD *v15; // rdi
  signed __int64 v16; // r8
  __int64 v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rdi
  _QWORD *v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rcx

  v3 = a3;
  v4 = (_DWORD *)a2;
  if ( (a3 & 1) != 0 )
  {
    v5 = dword_140E280E8;
    if ( dword_140E280E8 )
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
            v15 = KeAbPreAcquire((__int64)v14, 0LL);
            if ( _InterlockedCompareExchange64(v14, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(v14, 0, v15, (__int64)v14);
            if ( v15 )
              *((_BYTE *)v15 + 10) = 1;
            v16 = v14[2];
            v17 = *(_QWORD *)(v8 + 8 * v9 + 8);
            if ( (unsigned __int64)(v14[1] - 1) <= 0xFFFFFFFFFFFFFFFDuLL && v17 )
            {
              if ( v16 )
                guard_dispatch_icall_no_overrides(v14[2], v17, v16, 0LL);
              else
                guard_dispatch_icall_no_overrides(*(_QWORD *)(v8 + 8 * v9 + 8), v17, 0LL, 0LL);
              *(_QWORD *)(v8 + 8 * v9 + 8) = 0LL;
              v4[8] &= ~1u;
            }
            if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v14);
            KeAbPostRelease((ULONG_PTR)v14);
            v18 = KeAbPreAcquire((__int64)v14, 0LL);
            v19 = v18;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v14, (__int64)v18, (__int64)v14);
            if ( v19 )
              *((_BYTE *)v19 + 10) = 1;
            *(_QWORD *)(v8 + 8 * v9 + 8) = 0LL;
            v20 = (_QWORD *)(v8 + 8 * (v9 + 2));
            v21 = *v20;
            v22 = (_QWORD *)v20[1];
            if ( *(_QWORD **)(*v20 + 8LL) != v20 || (_QWORD *)*v22 != v20 )
              __fastfail(3u);
            *v22 = v21;
            *(_QWORD *)(v21 + 8) = v22;
            v20[1] = v20;
            *v20 = v20;
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
