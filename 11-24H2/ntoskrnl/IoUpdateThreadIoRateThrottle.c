/*
 * XREFs of IoUpdateThreadIoRateThrottle @ 0x14048CAF0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x140330DCC (KeAbProcessBaseIoPriorityChangeInternal.c)
 */

__int64 __fastcall IoUpdateThreadIoRateThrottle(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  signed __int32 v4; // eax
  __int64 result; // rax
  int v6; // edx

  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1512), a2);
  if ( v4 )
  {
    result = a2 + v4;
    if ( (_DWORD)result )
      return result;
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  return KeAbProcessBaseIoPriorityChangeInternal(a1, v6, a3, a4);
}
