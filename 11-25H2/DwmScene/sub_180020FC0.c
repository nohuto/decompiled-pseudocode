/*
 * XREFs of sub_180020FC0 @ 0x180020FC0
 * Callers:
 *     sub_18002057C @ 0x18002057C (sub_18002057C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_180020740 @ 0x180020740 (sub_180020740.c)
 *     sub_180020ED8 @ 0x180020ED8 (sub_180020ED8.c)
 */

__int64 *__fastcall sub_180020FC0(__int64 *a1)
{
  __int64 v2; // rax
  GUID pguid; // [rsp+28h] [rbp-58h] BYREF
  GUID rguid; // [rsp+38h] [rbp-48h] BYREF
  __int128 v6; // [rsp+48h] [rbp-38h]
  __int128 v7; // [rsp+58h] [rbp-28h]
  __int64 v8; // [rsp+68h] [rbp-18h]

  pguid = 0LL;
  if ( CoCreateGuid(&pguid) )
  {
    sub_18001C99C(&stru_1801B81F8, 4);
    sub_180020740(a1);
  }
  else
  {
    v8 = 0LL;
    rguid = pguid;
    v6 = 0LL;
    v7 = 0LL;
    sub_180020ED8(&rguid);
    v2 = sub_18001B098(56LL);
    if ( v2 )
    {
      *(GUID *)v2 = rguid;
      *(_OWORD *)(v2 + 16) = v6;
      *(_OWORD *)(v2 + 32) = v7;
      *(_QWORD *)(v2 + 48) = v8;
    }
    *a1 = v2;
  }
  return a1;
}
