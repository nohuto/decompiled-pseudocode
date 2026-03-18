/*
 * XREFs of EtwpGetDisallowList @ 0x140A64BF8
 * Callers:
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1409328B0 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpGetDisallowList(__int64 a1, unsigned __int16 *a2, void *a3, unsigned int *a4)
{
  unsigned int v5; // r12d
  unsigned int v6; // ebp
  unsigned int *v8; // rsi
  __int64 *v9; // rdi
  unsigned int v10; // edi

  v5 = *a4;
  v6 = 0;
  v8 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(a1, *a2, 0);
  if ( v8 )
  {
    memset_0(a3, 0, *a4);
    v9 = KeAbPreAcquire((__int64)(v8 + 172), 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 86, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)v8 + 86, 0, v9, (unsigned __int64)(v8 + 172));
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
    v10 = 16 * *((unsigned __int16 *)v8 + 664);
    if ( v10 <= v5 )
      memmove(a3, *((const void **)v8 + 167), v10);
    else
      v6 = -1073741789;
    *a4 = v10;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 86, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v8 + 86);
    KeAbPostRelease((ULONG_PTR)(v8 + 172));
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v8 + 170) + 448LL) + 8LL * *v8),
      1u);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
