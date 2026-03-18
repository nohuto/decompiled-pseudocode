/*
 * XREFs of FindBitmapResource @ 0x140C0942C
 * Callers:
 *     BvgaDriverInitialize @ 0x140C09230 (BvgaDriverInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     LdrAccessResource @ 0x14076F100 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x14076F440 (LdrFindResource_U.c)
 */

__int64 __fastcall FindBitmapResource(__int64 a1)
{
  __int64 v2; // [rsp+20h] [rbp-38h] BYREF
  __int64 v3; // [rsp+28h] [rbp-30h]
  _QWORD v4[3]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v4[2] = 0LL;
  v4[1] = a1;
  v4[0] = 2LL;
  if ( (int)LdrFindResource_U(0x40000000, (int)v4, 3, (__int64)&v2) < 0 || (int)LdrAccessResource() < 0 )
    return 0LL;
  else
    return v3;
}
