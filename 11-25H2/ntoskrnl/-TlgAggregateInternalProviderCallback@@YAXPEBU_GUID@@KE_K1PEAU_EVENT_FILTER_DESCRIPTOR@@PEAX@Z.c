/*
 * XREFs of ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140AA4400
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     LookUpTableFlushComplete @ 0x140A4E94C (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(const struct _GUID *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rax
  __int64 i; // rbx

  if ( a2 == 2 && a4 == 32 )
  {
    v4 = KeAbPreAcquire((__int64)&qword_140EEF938, 0LL);
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140EEF938, 0LL) )
    {
      if ( v4 )
        KeAbPostReleaseEx((ULONG_PTR)&qword_140EEF938, (ULONG_PTR)v4);
    }
    else
    {
      if ( v4 )
        *((_BYTE *)v4 + 10) = 1;
      for ( i = qword_140EEF940; i; i = *(_QWORD *)(i + 352) )
        LookUpTableFlushComplete(i);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140EEF938, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140EEF938);
      KeAbPostRelease((ULONG_PTR)&qword_140EEF938);
    }
  }
}
