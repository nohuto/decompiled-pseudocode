/*
 * XREFs of ndisGetMiniportFromObject @ 0x140166740
 * Callers:
 *     ndisReportTimeoutWaitingForExternalDriver @ 0x14014CFB0 (ndisReportTimeoutWaitingForExternalDriver.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall ndisGetMiniportFromObject(unsigned __int8 *a1)
{
  int v1; // edx
  int v3; // edx

  if ( !a1 )
    return 0LL;
  v1 = *a1;
  if ( v1 == 5 )
    return (unsigned __int8 *)*((_QWORD *)a1 + 4);
  v3 = v1 - 17;
  if ( !v3 )
    return a1;
  if ( v3 == 1 )
    return (unsigned __int8 *)*((_QWORD *)a1 + 2);
  else
    return 0LL;
}
