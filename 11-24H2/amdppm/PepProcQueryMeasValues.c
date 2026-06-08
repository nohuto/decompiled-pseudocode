/*
 * XREFs of PepProcQueryMeasValues @ 0x14003D450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PepProcQueryMeasValues(int a1, __int64 a2)
{
  if ( !a2 || !a1 )
    return 3221225485LL;
  if ( qword_1400158D8 )
    return qword_1400158D8();
  return 3221225474LL;
}
