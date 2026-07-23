/*
 * XREFs of KeIsSingleGroupAffinityEx @ 0x1404697A0
 * Callers:
 *     PpmEventParkNodeCapChangeEx @ 0x1405DAA80 (PpmEventParkNodeCapChangeEx.c)
 *     PpmEventParkNodeRecordedStatsEx @ 0x1405DB128 (PpmEventParkNodeRecordedStatsEx.c)
 *     PpmEventTraceParkNodeRundownEx @ 0x140765A0C (PpmEventTraceParkNodeRundownEx.c)
 *     NtQueryInformationJobObject @ 0x140ACACA0 (NtQueryInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsSingleGroupAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v2; // r9d
  unsigned __int16 *v3; // r8
  unsigned __int16 v4; // dx
  __int16 v6; // [rsp+0h] [rbp-18h] BYREF

  v2 = 0;
  v3 = (unsigned __int16 *)&v6;
  v6 = 0;
  if ( a2 )
    v3 = a2;
  v4 = 0;
  *v3 = 32;
  while ( 1 )
  {
    if ( v4 >= *a1 )
    {
      LOBYTE(v2) = *v3 != 32;
      return v2;
    }
    if ( *(_QWORD *)&a1[4 * v4 + 4] )
      break;
LABEL_7:
    ++v4;
  }
  if ( *v3 == 32 )
  {
    *v3 = v4;
    goto LABEL_7;
  }
  return 0LL;
}
