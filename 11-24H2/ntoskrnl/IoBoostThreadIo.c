/*
 * XREFs of IoBoostThreadIo @ 0x1404AE920
 * Callers:
 *     <none>
 * Callees:
 *     IoBoostThreadIoPriority @ 0x14022E320 (IoBoostThreadIoPriority.c)
 *     PsBoostThreadIoEx @ 0x14027E3A0 (PsBoostThreadIoEx.c)
 */

__int64 __fastcall IoBoostThreadIo(KSPIN_LOCK *a1, int a2, char a3, int a4)
{
  if ( a4 )
    return 3221225485LL;
  if ( a3 == 1 )
  {
    PsBoostThreadIoEx((__int64)a1, 1, 1, 0LL);
  }
  else
  {
    PsBoostThreadIoEx((__int64)a1, 0, 1, 0LL);
    IoBoostThreadIoPriority(a1, a2, 0x80000000);
  }
  return 0LL;
}
