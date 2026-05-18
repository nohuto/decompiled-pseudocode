/*
 * XREFs of sub_18007E770 @ 0x18007E770
 * Callers:
 *     sub_18008DDEC @ 0x18008DDEC (sub_18008DDEC.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18007E444 @ 0x18007E444 (sub_18007E444.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18007E770(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD v7[4]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v8[5]; // [rsp+40h] [rbp-28h] BYREF

  v4 = std::string::string(v7, byte_1800F6C80);
  v5 = std::string::string(v8, byte_1800F6C80);
  return sub_18007E444(a1, v5, a2, v4);
}
