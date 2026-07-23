/*
 * XREFs of ObpFastReplenishReference @ 0x140415410
 * Callers:
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ObpFastReplenishReference(signed __int64 *a1, ULONG_PTR a2)
{
  __int64 v2; // rax
  signed __int64 result; // rax
  signed __int64 v4; // rtt

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 - 48), 0xFuLL);
  if ( v2 <= 0 )
    KeBugCheckEx(0x18u, 0LL, a2, 0x10uLL, v2 + 15);
  _m_prefetchw(a1);
  result = *a1;
  while ( (result & 0xF) == 0 && a2 == (result & 0xFFFFFFFFFFFFFFF0uLL) )
  {
    v4 = result;
    result = _InterlockedCompareExchange64(a1, result + 15, result);
    if ( v4 == result )
      return result;
  }
  _InterlockedAdd64((volatile signed __int64 *)(a2 - 48), 0xFFFFFFFFFFFFFFF1uLL);
  return result;
}
