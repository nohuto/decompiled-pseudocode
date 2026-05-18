/*
 * XREFs of sub_18002C33C @ 0x18002C33C
 * Callers:
 *     sub_18002EC28 @ 0x18002EC28 (sub_18002EC28.c)
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18008DB2C @ 0x18008DB2C (sub_18008DB2C.c)
 */

void **__fastcall sub_18002C33C(_QWORD *a1)
{
  __int64 v2; // rax
  void **result; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = sub_180016F54((__int64)v4, (__int64)&unk_1801C8448);
  sub_18008DB2C(a1, v2);
  result = &Spectre::Engine::UnlitShaderExtension::`vftable';
  *a1 = &Spectre::Engine::UnlitShaderExtension::`vftable';
  return result;
}
