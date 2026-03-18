/*
 * XREFs of ExfReleasePushLockSharedEx @ 0x140205E1C
 * Callers:
 *     ExReleaseAutoExpandPushLockShared @ 0x140205BC0 (ExReleaseAutoExpandPushLockShared.c)
 * Callees:
 *     ExpWakePushLock @ 0x140406240 (ExpWakePushLock.c)
 */

__int64 __fastcall ExfReleasePushLockSharedEx(signed __int64 *a1, __int64 *a2)
{
  signed __int64 v4; // rcx
  signed __int64 v5; // r8
  bool v6; // zf
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 i; // rax
  __int64 v12; // rdx
  __int128 v13; // [rsp+20h] [rbp-28h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-18h]

  CurrentThread = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    DWORD2(v13) = CurrentThread->WaitBlock[0].SpareLong;
    *a2 = 0LL;
    *(_QWORD *)&v13 = __rdtsc();
  }
  _m_prefetchw(a1);
  v4 = *a1;
  while ( (v4 & 2) == 0 )
  {
    v5 = 0LL;
    if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
      v5 = v4 - 16;
    result = _InterlockedCompareExchange64(a1, v5, v4);
    v6 = v4 == result;
    v4 = result;
    if ( v6 )
    {
      if ( a2 )
      {
        result = __rdtsc();
        if ( CurrentThread->WaitBlock[0].SpareLong == DWORD2(v13) )
        {
          result -= v13;
          *a2 = result;
        }
      }
      return result;
    }
  }
  if ( (v4 & 8) != 0 )
  {
    for ( i = v4 & 0xFFFFFFFFFFFFFFF0uLL; ; i = *(_QWORD *)(i + 24) )
    {
      v12 = *(_QWORD *)(i + 32);
      if ( v12 )
        break;
    }
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 48));
    if ( (int)result > 0 )
      return result;
    v8 = -9LL;
  }
  else
  {
    v8 = -1LL;
  }
  while ( 1 )
  {
    if ( (v4 & 4) != 0 || (v9 = v8 + 4, (v4 & 2) == 0) )
      v9 = v8;
    v10 = v9 + v4;
    result = _InterlockedCompareExchange64(a1, v9 + v4, v4);
    if ( v4 == result )
      break;
    v4 = result;
  }
  if ( (v4 & 6) == 2 )
    return ExpWakePushLock(a1, v10, v8, a2);
  return result;
}
