/*
 * XREFs of UserValidateCopyRgn @ 0x140113380
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteObject @ 0x140010390 (GreDeleteObject.c)
 *     GreCombineRgn @ 0x140025D30 (GreCombineRgn.c)
 *     GreCreateRectRgnIndirect @ 0x14002D480 (GreCreateRectRgnIndirect.c)
 *     HmgValidHandle @ 0x140113410 (HmgValidHandle.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

struct HOBJ__ *__fastcall UserValidateCopyRgn(HRGN a1, __int64 a2)
{
  struct HOBJ__ *RectRgnIndirect; // rbx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  RectRgnIndirect = 0LL;
  if ( a1 )
  {
    LOBYTE(a2) = 4;
    if ( (unsigned int)HmgValidHandle(a1, a2) )
    {
      v5 = 0LL;
      RectRgnIndirect = GreCreateRectRgnIndirect((struct REGION_CORE *)&v5);
      if ( !(unsigned int)GreCombineRgn((HRGN)RectRgnIndirect, a1, 0LL, 5) )
      {
        GreDeleteObject((HRGN)RectRgnIndirect);
        return 0LL;
      }
    }
  }
  return RectRgnIndirect;
}
