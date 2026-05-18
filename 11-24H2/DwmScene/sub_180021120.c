/*
 * XREFs of sub_180021120 @ 0x180021120
 * Callers:
 *     sub_1800206DC @ 0x1800206DC (sub_1800206DC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     sub_1800208A0 @ 0x1800208A0 (sub_1800208A0.c)
 *     sub_180021038 @ 0x180021038 (sub_180021038.c)
 */

__int64 *__fastcall sub_180021120(__int64 *a1)
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
    sub_18001CAFC(&stru_1801B91F8, 4);
    sub_1800208A0(a1);
  }
  else
  {
    v8 = 0LL;
    rguid = pguid;
    v6 = 0LL;
    v7 = 0LL;
    sub_180021038(&rguid);
    v2 = sub_18001B1F8(56LL);
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
