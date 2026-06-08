/*
 * XREFs of sub_140048008 @ 0x140048008
 * Callers:
 *     sub_140005938 @ 0x140005938 (sub_140005938.c)
 *     sub_1400074BC @ 0x1400074BC (sub_1400074BC.c)
 *     sub_140007538 @ 0x140007538 (sub_140007538.c)
 *     sub_14002B14C @ 0x14002B14C (sub_14002B14C.c)
 *     sub_14002B380 @ 0x14002B380 (sub_14002B380.c)
 *     sub_140046B48 @ 0x140046B48 (sub_140046B48.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010270 @ 0x140010270 (sub_140010270.c)
 */

char __fastcall sub_140048008(_WORD *a1, _BYTE *a2)
{
  unsigned int v4; // r8d
  unsigned int v5; // r9d
  __int16 v6; // dx
  char result; // al
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  v8 = 0LL;
  sub_140010270(1u, &v8);
  v4 = v8;
  v5 = ((unsigned int)v8 >> 8) & 0xF;
  v6 = ((unsigned int)v8 >> 8) & 0xF;
  *a1 = v6;
  if ( v5 == 15 )
    *a1 = v6 + (unsigned __int8)(v4 >> 20);
  result = (v4 >> 4) & 0xF;
  *a2 = result;
  if ( v5 == 15 || v5 == 6 )
    *a2 = result + 16 * BYTE2(v4);
  return result;
}
