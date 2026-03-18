/*
 * XREFs of IoUpdateThreadIoRateThrottle @ 0x1404929F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x14020E09C (KeAbProcessBaseIoPriorityChangeInternal.c)
 */

__int64 __fastcall IoUpdateThreadIoRateThrottle(__int64 a1, unsigned int a2)
{
  signed __int32 v2; // eax
  __int64 result; // rax
  int v4; // edx

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1512), a2);
  if ( v2 )
  {
    result = a2 + v2;
    if ( (_DWORD)result )
      return result;
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  return KeAbProcessBaseIoPriorityChangeInternal(a1, v4);
}
