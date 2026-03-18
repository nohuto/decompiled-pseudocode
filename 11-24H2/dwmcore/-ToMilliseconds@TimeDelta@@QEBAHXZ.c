/*
 * XREFs of ?ToMilliseconds@TimeDelta@@QEBAHXZ @ 0x1801BB5B0
 * Callers:
 *     ?IsPastDelay@CNaturalAnimation@@AEAA_NXZ @ 0x1801BB1E8 (-IsPastDelay@CNaturalAnimation@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TimeDelta::ToMilliseconds(TimeDelta *this)
{
  if ( *(_QWORD *)this == 0x7FFFFFFFFFFFFFFFLL )
    return 0x7FFFFFFFLL;
  else
    return (__int64)(1000000LL * *(_QWORD *)this / Time::s_luFreq.QuadPart
                   + 500
                   + (((1000000LL * *(_QWORD *)this / Time::s_luFreq.QuadPart) >> 63) & 0xFFFFFFFFFFFFFC18uLL))
         / 1000;
}
