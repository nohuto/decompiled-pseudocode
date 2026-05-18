/*
 * XREFs of sub_18002C164 @ 0x18002C164
 * Callers:
 *     sub_18002E730 @ 0x18002E730 (sub_18002E730.c)
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18005A8A8 @ 0x18005A8A8 (sub_18005A8A8.c)
 */

void **__fastcall sub_18002C164(_QWORD *a1)
{
  __int64 v2; // rax
  void **result; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = sub_180016F54((__int64)v4, (__int64)&unk_1801C83E8);
  sub_18005A8A8(a1, v2);
  result = &Spectre::Engine::FontShaderExtension::`vftable';
  *a1 = &Spectre::Engine::FontShaderExtension::`vftable';
  return result;
}
