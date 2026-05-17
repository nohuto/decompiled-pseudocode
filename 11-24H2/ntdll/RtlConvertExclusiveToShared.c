/*
 * XREFs of RtlConvertExclusiveToShared @ 0x18010FDC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     ZwReleaseSemaphore @ 0x180161DD0 (ZwReleaseSemaphore.c)
 */

__int64 __fastcall RtlConvertExclusiveToShared(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)(a1 + 72) = 0LL;
  v6 = 0;
  _InterlockedExchange((volatile __int32 *)(a1 + 68), 1);
  result = *(unsigned int *)(a1 + 48);
  if ( (_DWORD)result )
  {
    v5 = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 48), 0);
    if ( (_DWORD)v5 )
    {
      result = ZwReleaseSemaphore(*(_QWORD *)(a1 + 40), v5, &v6, a4);
      if ( (int)result < 0 )
        RtlRaiseStatus(result);
    }
  }
  return result;
}
