/*
 * XREFs of PpmEndProfileAccumulation @ 0x140A3D2A0
 * Callers:
 *     PpmEventTraceProfiles @ 0x140A3CB8C (PpmEventTraceProfiles.c)
 *     PpmApplyProfile @ 0x140A3CDF8 (PpmApplyProfile.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmEndProfileAccumulation(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = a2 - a1[127];
  a1[131] += v2;
  if ( a1[129] < v2 )
    a1[129] = v2;
  if ( a1[130] > v2 )
    a1[130] = v2;
  ++a1[128];
  a1[127] = 0LL;
}
