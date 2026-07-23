/*
 * XREFs of WdipSemSqmLogInflightLimitExceededDataPoints @ 0x140A3D790
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x140A3D620 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     WdipSemGetGuidKey @ 0x1407A3008 (WdipSemGetGuidKey.c)
 *     WdipSemSqmAddToStream @ 0x1407A35D4 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x1407A3738 (WdipSemSqmIncrementDword.c)
 *     WdipSemFreeFrequentScenarioTable @ 0x140A3D8B0 (WdipSemFreeFrequentScenarioTable.c)
 */

__int64 WdipSemSqmLogInflightLimitExceededDataPoints()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // ebx
  char *v2; // rax
  __int64 v3; // rcx
  signed __int8 v4; // cf
  char *v5; // rdi
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
  v2 = (char *)KeAbPreAcquire((__int64)&qword_140F00188, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F00188, 0LL);
  v5 = v2;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140F00188, v2, (__int64)&qword_140F00188);
  if ( v5 )
    v5[10] = 1;
  v6 = (unsigned int)dword_140F00180;
  if ( dword_140F00180 )
  {
    v10 = WdipSemSqmIncrementDword(v3, dword_140F00180);
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
  _m_prefetchw(&qword_140F00188);
  v7 = qword_140F00188 - 16;
  if ( (qword_140F00188 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v7 = 0LL;
  if ( (qword_140F00188 & 2) != 0
    || (v8 = qword_140F00188,
        v8 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F00188, v7, qword_140F00188)) )
  {
    ExfReleasePushLock(&qword_140F00188);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140F00188);
  KeLeaveCriticalRegion();
  return (unsigned int)v1;
}
