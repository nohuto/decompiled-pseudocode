/*
 * XREFs of IoUpdateThreadIoRateThrottle @ 0x140491C50
 * Callers:
 *     <none>
 * Callees:
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x1402097EC (KeAbProcessBaseIoPriorityChangeInternal.c)
 */

__int64 __fastcall IoUpdateThreadIoRateThrottle(__int64 a1, unsigned int a2, __int64 a3)
{
  signed __int32 v3; // eax
  __int64 result; // rax
  int v5; // edx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1512), a2);
  if ( v3 )
  {
    result = a2 + v3;
    if ( (_DWORD)result )
      return result;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  return KeAbProcessBaseIoPriorityChangeInternal(a1, v5, a3);
}
