/*
 * XREFs of sub_18002B5D4 @ 0x18002B5D4
 * Callers:
 *     sub_1800348C0 @ 0x1800348C0 (sub_1800348C0.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

__int64 __fastcall sub_18002B5D4(__int64 a1, __int64 a2, __int64 a3)
{
  std::string::string((_QWORD *)a1, "Integer Result Code");
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 15LL;
  *(_BYTE *)a3 = 0;
  return a1;
}
