/*
 * XREFs of sub_18001C580 @ 0x18001C580
 * Callers:
 *     sub_18001C7D8 @ 0x18001C7D8 (sub_18001C7D8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001BDB0 @ 0x18001BDB0 (sub_18001BDB0.c)
 *     sub_18001C4F4 @ 0x18001C4F4 (sub_18001C4F4.c)
 */

_QWORD *__fastcall sub_18001C580(_QWORD *a1)
{
  _BYTE v3[256]; // [rsp+40h] [rbp-118h] BYREF

  sub_18001C4F4();
  sub_18001BDB0();
  std::string::string(a1, v3);
  return a1;
}
