/*
 * XREFs of sub_180059E54 @ 0x180059E54
 * Callers:
 *     sub_18005A63C @ 0x18005A63C (sub_18005A63C.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18005A8A8 @ 0x18005A8A8 (sub_18005A8A8.c)
 */

__int64 __fastcall sub_180059E54(__int64 a1, _BYTE *a2)
{
  _QWORD *v3; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = std::string::string(v5, a2);
  return sub_18005A8A8(a1, v3);
}
