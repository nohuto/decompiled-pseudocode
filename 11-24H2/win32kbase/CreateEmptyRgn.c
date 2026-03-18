/*
 * XREFs of CreateEmptyRgn @ 0x1400EBFD0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x14002D480 (GreCreateRectRgnIndirect.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

struct HOBJ__ *CreateEmptyRgn()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  return GreCreateRectRgnIndirect((struct REGION_CORE *)&v1);
}
