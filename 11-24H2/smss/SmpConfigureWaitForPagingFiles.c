/*
 * XREFs of SmpConfigureWaitForPagingFiles @ 0x140014390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpConfigureWaitForPagingFiles(__int64 a1, __int64 a2, int *a3, int a4)
{
  int v4; // eax

  if ( a4 == 4 )
    v4 = *a3;
  else
    v4 = 0;
  SmpWaitForPagingFiles = v4;
  return 0LL;
}
