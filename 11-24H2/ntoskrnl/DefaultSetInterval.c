/*
 * XREFs of DefaultSetInterval @ 0x14054C4E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerSetTimerBackedProfileInterval @ 0x14054A044 (HalpTimerSetTimerBackedProfileInterval.c)
 */

__int64 __fastcall DefaultSetInterval(int a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  int v10; // eax

  if ( a1 )
    return 3221225659LL;
  v6 = (unsigned __int8)byte_140E03B5C;
  v7 = *a2;
  v8 = HIDWORD(DefaultProfileIntervalLimits[(unsigned __int8)byte_140E03B5C]);
  if ( *a2 < v8 )
  {
    *a2 = v8;
    v7 = v8;
  }
  v9 = DefaultProfileIntervalLimits[v6];
  if ( v7 > v9 )
  {
    *a2 = v9;
    v7 = v9;
  }
  v10 = HalpTimerSetTimerBackedProfileInterval(v7, v6, (__int64)DefaultProfileIntervalLimits, a4);
  *a2 = v10;
  dword_140E03B58 = v10;
  return 0LL;
}
