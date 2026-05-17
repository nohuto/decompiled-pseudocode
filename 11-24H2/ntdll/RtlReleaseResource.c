/*
 * XREFs of RtlReleaseResource @ 0x1800E0880
 * Callers:
 *     RtlConvertSharedToExclusive @ 0x180106EC0 (RtlConvertSharedToExclusive.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     ZwReleaseSemaphore @ 0x180161DD0 (ZwReleaseSemaphore.c)
 */

__int64 __fastcall RtlReleaseResource(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v6; // ett
  int v7; // ett
  __int64 v8; // rdx
  int v9; // eax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 68);
  v10 = 0;
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1 )
      *(_QWORD *)(a1 + 72) = 0LL;
    if ( !_InterlockedIncrement((volatile signed __int32 *)(a1 + 68)) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v8 = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 48), 0);
        if ( (_DWORD)v8 )
        {
          v9 = ZwReleaseSemaphore(*(_QWORD *)(a1 + 40), v8, &v10, a4);
          if ( v9 < 0 )
            RtlRaiseStatus(v9);
        }
      }
      result = *(unsigned int *)(a1 + 64);
      while ( (int)result > 0 )
      {
        v6 = result;
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), result - 1, result);
        if ( v6 == (_DWORD)result )
          goto LABEL_11;
      }
      if ( !(_DWORD)result )
        return result;
LABEL_11:
      result = ZwReleaseSemaphore(*(_QWORD *)(a1 + 56), 1LL, &v10, a4);
      if ( (int)result < 0 )
        RtlRaiseStatus(result);
    }
  }
  else
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 68), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = *(unsigned int *)(a1 + 64);
      while ( (int)result > 0 )
      {
        v7 = result;
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), result - 1, result);
        if ( v7 == (_DWORD)result )
          goto LABEL_16;
      }
      if ( !(_DWORD)result )
        return result;
LABEL_16:
      result = ZwReleaseSemaphore(*(_QWORD *)(a1 + 56), 1LL, &v10, a4);
      if ( (int)result < 0 )
        RtlRaiseStatus(result);
    }
  }
  return result;
}
