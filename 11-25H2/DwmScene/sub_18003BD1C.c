/*
 * XREFs of sub_18003BD1C @ 0x18003BD1C
 * Callers:
 *     sub_180011CE0 @ 0x180011CE0 (sub_180011CE0.c)
 *     sub_180012D60 @ 0x180012D60 (sub_180012D60.c)
 *     sub_180013ACC @ 0x180013ACC (sub_180013ACC.c)
 *     sub_180013BEC @ 0x180013BEC (sub_180013BEC.c)
 *     sub_18002B9F4 @ 0x18002B9F4 (sub_18002B9F4.c)
 *     sub_18003931C @ 0x18003931C (sub_18003931C.c)
 *     sub_1800393B8 @ 0x1800393B8 (sub_1800393B8.c)
 *     sub_180039C3C @ 0x180039C3C (sub_180039C3C.c)
 *     sub_18003A4E8 @ 0x18003A4E8 (sub_18003A4E8.c)
 *     sub_18003AB54 @ 0x18003AB54 (sub_18003AB54.c)
 *     sub_18003AC70 @ 0x18003AC70 (sub_18003AC70.c)
 *     sub_18003AE74 @ 0x18003AE74 (sub_18003AE74.c)
 *     GsDriverEntry @ 0x18003AED0 (GsDriverEntry.c)
 *     sub_18003AF00 @ 0x18003AF00 (sub_18003AF00.c)
 *     sub_18003AF34 @ 0x18003AF34 (sub_18003AF34.c)
 *     sub_18003B29C @ 0x18003B29C (sub_18003B29C.c)
 *     sub_18003B2D0 @ 0x18003B2D0 (sub_18003B2D0.c)
 *     sub_18003B348 @ 0x18003B348 (sub_18003B348.c)
 *     sub_18003B3B8 @ 0x18003B3B8 (sub_18003B3B8.c)
 *     sub_18003B44C @ 0x18003B44C (sub_18003B44C.c)
 *     sub_18003B66C @ 0x18003B66C (sub_18003B66C.c)
 *     sub_18003B78C @ 0x18003B78C (sub_18003B78C.c)
 *     sub_18003BA44 @ 0x18003BA44 (sub_18003BA44.c)
 *     sub_18003BAF0 @ 0x18003BAF0 (sub_18003BAF0.c)
 *     sub_18003E14C @ 0x18003E14C (sub_18003E14C.c)
 *     sub_18003F038 @ 0x18003F038 (sub_18003F038.c)
 *     sub_18003F924 @ 0x18003F924 (sub_18003F924.c)
 *     sub_18005C584 @ 0x18005C584 (sub_18005C584.c)
 *     sub_18005C6A4 @ 0x18005C6A4 (sub_18005C6A4.c)
 *     sub_18005C7C4 @ 0x18005C7C4 (sub_18005C7C4.c)
 *     sub_18005C8E4 @ 0x18005C8E4 (sub_18005C8E4.c)
 *     sub_18005CA04 @ 0x18005CA04 (sub_18005CA04.c)
 *     sub_18006A24C @ 0x18006A24C (sub_18006A24C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 */

void __fastcall sub_18003BD1C(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+28h] [rbp-10h]

  sub_18001258C(a1, &v2);
  if ( v2 )
    sub_1800287EC(v2 + 16, v1);
  if ( v3 )
    sub_18001050C(v3);
}
