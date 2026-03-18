/*
 * XREFs of PfpPrefetchSharedStart @ 0x1409527B4
 * Callers:
 *     PfpQueryFileExtentsRequest @ 0x140745C48 (PfpQueryFileExtentsRequest.c)
 *     PfpPrefetchRequestPerform @ 0x140951A08 (PfpPrefetchRequestPerform.c)
 *     PfSnAsyncPrefetchWorker @ 0x140951F40 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1403C5B9C (FsRtlAcquirePushLockExclusive.c)
 *     VmpReleasePushLockExclusive @ 0x1404860F0 (VmpReleasePushLockExclusive.c)
 *     PsSetCurrentThreadPrefetching @ 0x14096B530 (PsSetCurrentThreadPrefetching.c)
 */

__int64 __fastcall PfpPrefetchSharedStart(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  __int64 v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  *(_DWORD *)(a1 + 68) |= 8u;
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 68) ^= ((unsigned __int8)*(_DWORD *)(a1 + 68) ^ (unsigned __int8)(2
                                                                                   * PsSetCurrentThreadPrefetching(1u))) & 2;
  v3 = 0;
  if ( !ExAcquireRundownProtection(&RunRef) )
    return (unsigned int)-1073741127;
  *(_DWORD *)(a1 + 68) |= 1u;
  FsRtlAcquirePushLockExclusive(&qword_140E66FB0);
  if ( (dword_140E66FC8 & 1) == 0 )
  {
    v4 = qword_140E66FB8;
    if ( *(__int64 **)(qword_140E66FB8 + 8) != &qword_140E66FB8 )
      __fastfail(3u);
    *(_QWORD *)a1 = qword_140E66FB8;
    *(_QWORD *)(a1 + 8) = &qword_140E66FB8;
    *(_QWORD *)(v4 + 8) = a1;
    qword_140E66FB8 = a1;
  }
  VmpReleasePushLockExclusive((volatile signed __int64 *)&qword_140E66FB0);
  if ( *(_QWORD *)a1 )
  {
    v5 = KeAbPreAcquire(a1, 0LL);
    *(_QWORD *)(a1 + 128) = v5;
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    v6 = KeAbPreAcquire((__int64)&PfGlobals, 0LL);
    *(_QWORD *)(a1 + 136) = v6;
    if ( v6 )
      *((_BYTE *)v6 + 10) = 1;
  }
  else
  {
    return (unsigned int)-1073741127;
  }
  return v3;
}
