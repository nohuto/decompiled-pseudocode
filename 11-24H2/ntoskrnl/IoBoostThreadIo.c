/*
 * XREFs of IoBoostThreadIo @ 0x1404B4100
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x14024DD90 (PsBoostThreadIoEx.c)
 *     IoBoostThreadIoPriority @ 0x140278D90 (IoBoostThreadIoPriority.c)
 */

__int64 __fastcall IoBoostThreadIo(KSPIN_LOCK *a1, int a2, __int64 a3, int a4)
{
  bool v6; // zf

  if ( a4 )
    return 3221225485LL;
  v6 = (_BYTE)a3 == 1;
  LOBYTE(a3) = 1;
  if ( v6 )
  {
    PsBoostThreadIoEx((__int64)a1, 1, a3, 0LL);
  }
  else
  {
    PsBoostThreadIoEx((__int64)a1, 0, a3, 0LL);
    IoBoostThreadIoPriority(a1, a2, 0x80000000);
  }
  return 0LL;
}
