/*
 * XREFs of WdipSemSqmLogInflightLimitExceededDataPoints @ 0x140A47970
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x140A47800 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     WdipSemGetGuidKey @ 0x1407A2EF8 (WdipSemGetGuidKey.c)
 *     WdipSemSqmAddToStream @ 0x1407A34C4 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x1407A3628 (WdipSemSqmIncrementDword.c)
 *     WdipSemFreeFrequentScenarioTable @ 0x140A47A90 (WdipSemFreeFrequentScenarioTable.c)
 */

__int64 WdipSemSqmLogInflightLimitExceededDataPoints()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // ebx
  _QWORD *v2; // rax
  __int64 v3; // rcx
  signed __int8 v4; // cf
  _QWORD *v5; // rdi
  __int64 v6; // rdi
  signed __int64 v7; // rdx
  ULONG_PTR v8; // rtt
  int v10; // eax
  __int64 *v11; // rsi
  __int64 v12; // rbx
  unsigned int v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h] BYREF
  int v15; // [rsp+30h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  v13 = 0;
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  v2 = KeAbPreAcquire((__int64)&qword_140EFFEC8, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140EFFEC8, 0LL);
  v5 = v2;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140EFFEC8, (__int64)v2, (__int64)&qword_140EFFEC8);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  v6 = (unsigned int)dword_140EFFEC0;
  if ( dword_140EFFEC0 )
  {
    v10 = WdipSemSqmIncrementDword(v3, dword_140EFFEC0);
    if ( v10 >= 0 )
      v1 = v10;
    if ( (_DWORD)v6 )
    {
      v11 = WdipSemFrequentScenarioTable;
      do
      {
        v12 = *v11;
        if ( (int)WdipSemGetGuidKey(*v11, &v13) >= 0 )
        {
          LODWORD(v14) = v13;
          HIDWORD(v14) = *(unsigned __int16 *)(v12 + 16);
          v15 = *(_DWORD *)(v12 + 20);
          v1 = WdipSemSqmAddToStream((_DWORD *)0x426, 3u, &v14);
          if ( v1 < 0 )
            v1 = 0;
        }
        else
        {
          v1 = 0;
        }
        ++v11;
        --v6;
      }
      while ( v6 );
    }
  }
  WdipSemFreeFrequentScenarioTable();
  _m_prefetchw(&qword_140EFFEC8);
  v7 = qword_140EFFEC8 - 16;
  if ( (qword_140EFFEC8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v7 = 0LL;
  if ( (qword_140EFFEC8 & 2) != 0
    || (v8 = qword_140EFFEC8,
        v8 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140EFFEC8, v7, qword_140EFFEC8)) )
  {
    ExfReleasePushLock(&qword_140EFFEC8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140EFFEC8);
  KeLeaveCriticalRegion();
  return (unsigned int)v1;
}
