/*
 * XREFs of sub_180059FB4 @ 0x180059FB4
 * Callers:
 *     sub_18005A79C @ 0x18005A79C (sub_18005A79C.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18005AA08 @ 0x18005AA08 (sub_18005AA08.c)
 */

__int64 __fastcall sub_180059FB4(__int64 a1, _BYTE *a2)
{
  _QWORD *v3; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = std::string::string(v5, a2);
  return sub_18005AA08(a1, v3);
}
