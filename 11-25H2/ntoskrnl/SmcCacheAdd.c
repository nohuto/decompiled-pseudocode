/*
 * XREFs of SmcCacheAdd @ 0x14078DAE0
 * Callers:
 *     SmcProcessCreateRequest @ 0x140789AAC (SmcProcessCreateRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall SmcCacheAdd(__int64 a1, int *a2, int *a3)
{
  unsigned int v3; // edi
  unsigned int i; // esi
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v10; // rax
  __int64 *v11; // rbp
  int v12; // ecx
  int v13; // edx

  v3 = 0;
  for ( i = 0; i < 0x10; ++i )
  {
    v8 = a1 + 32LL * i;
    if ( !*(_QWORD *)v8 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v10 = KeAbPreAcquire(v8 + 16, 0LL);
      v11 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 16), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 16), v10, v8 + 16);
      if ( v11 )
        *((_BYTE *)v11 + 10) = 1;
      if ( !*(_QWORD *)v8 )
      {
        *(_QWORD *)v8 = a2;
        do
        {
          v12 = *(_DWORD *)(v8 + 24);
          v13 = i | (16 * ((v12 + 1) & 0xFFF));
          *(_DWORD *)(v8 + 24) = v12 ^ (v12 ^ (v12 + 1)) & 0xFFF;
          *a2 = v13;
        }
        while ( v13 == -1 );
        *a3 = v13;
        a2 = 0LL;
        _InterlockedExchange64((volatile __int64 *)(v8 + 8), 0LL);
        ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v8 + 8));
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 16));
      KeAbPostRelease(v8 + 16);
      KeLeaveCriticalRegion();
      if ( !a2 )
      {
        KeSetEvent(*(PRKEVENT *)(a1 + 552), 0, 0);
        return v3;
      }
    }
  }
  return (unsigned int)-1073741671;
}
