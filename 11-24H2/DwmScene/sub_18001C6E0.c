/*
 * XREFs of sub_18001C6E0 @ 0x18001C6E0
 * Callers:
 *     sub_18001C938 @ 0x18001C938 (sub_18001C938.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001BF10 @ 0x18001BF10 (sub_18001BF10.c)
 *     sub_18001C654 @ 0x18001C654 (sub_18001C654.c)
 */

_QWORD *__fastcall sub_18001C6E0(_QWORD *a1)
{
  _BYTE v3[256]; // [rsp+40h] [rbp-118h] BYREF

  sub_18001C654();
  sub_18001BF10();
  std::string::string(a1, v3);
  return a1;
}
