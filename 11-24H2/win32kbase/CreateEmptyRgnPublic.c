/*
 * XREFs of CreateEmptyRgnPublic @ 0x140010E60
 * Callers:
 *     UserSetDCVisRgn @ 0x14000F460 (UserSetDCVisRgn.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     InitUserScreen @ 0x140162CD0 (InitUserScreen.c)
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x14002D480 (GreCreateRectRgnIndirect.c)
 *     HmgSetOwner @ 0x14002DC20 (HmgSetOwner.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 CreateEmptyRgnPublic()
{
  __int64 RectRgnIndirect; // rbx
  __int64 v1; // r8
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  RectRgnIndirect = GreCreateRectRgnIndirect((struct REGION_CORE *)&v3);
  if ( RectRgnIndirect )
  {
    PsGetCurrentProcessId();
    LOBYTE(v1) = 4;
    HmgSetOwner(RectRgnIndirect, 0LL, v1);
  }
  return RectRgnIndirect;
}
