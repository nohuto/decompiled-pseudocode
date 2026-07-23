/*
 * XREFs of ExfReleasePushLockSharedEx @ 0x140405F2C
 * Callers:
 *     ExReleaseAutoExpandPushLockShared @ 0x14028E600 (ExReleaseAutoExpandPushLockShared.c)
 * Callees:
 *     ExpWakePushLock @ 0x1404060A0 (ExpWakePushLock.c)
 */

signed __int64 __fastcall ExfReleasePushLockSharedEx(signed __int64 *a1, signed __int64 *a2)
{
  signed __int64 result; // rax
  signed __int64 v4; // r8
  signed __int64 v5; // rtt
  __int64 v6; // r8
  __int64 v7; // rdx
  signed __int64 v8; // rcx
  signed __int64 v9; // rtt
  unsigned __int64 i; // rcx
  __int64 v11; // rdx
  __int128 v12; // [rsp+20h] [rbp-28h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-18h]

  CurrentThread = 0LL;
  v12 = 0LL;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    DWORD2(v12) = CurrentThread->WaitBlock[0].SpareLong;
    *a2 = 0LL;
    *(_QWORD *)&v12 = __rdtsc();
  }
  _m_prefetchw(a1);
  result = *a1;
  while ( (result & 2) == 0 )
  {
    v4 = 0LL;
    if ( (result & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
      v4 = result - 16;
    v5 = result;
    result = _InterlockedCompareExchange64(a1, v4, result);
    if ( v5 == result )
    {
      if ( a2 )
      {
        result = __rdtsc();
        if ( CurrentThread->WaitBlock[0].SpareLong == DWORD2(v12) )
        {
          result -= v12;
          *a2 = result;
        }
      }
      return result;
    }
  }
  if ( (result & 8) != 0 )
  {
    for ( i = result & 0xFFFFFFFFFFFFFFF0uLL; ; i = *(_QWORD *)(i + 24) )
    {
      v11 = *(_QWORD *)(i + 32);
      if ( v11 )
        break;
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)(v11 + 48)) > 0 )
      return result;
    v6 = -9LL;
  }
  else
  {
    v6 = -1LL;
  }
  do
  {
    v7 = v6 + 4;
    v8 = result & 6;
    if ( v8 != 2 )
      v7 = v6;
    v9 = result;
    result = _InterlockedCompareExchange64(a1, result + v7, result);
  }
  while ( v9 != result );
  if ( v8 == 2 )
    return ExpWakePushLock(a1);
  return result;
}
