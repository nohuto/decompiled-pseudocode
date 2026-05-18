/*
 * XREFs of sub_18008BA20 @ 0x18008BA20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_1800108FC @ 0x1800108FC (sub_1800108FC.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 */

char __fastcall sub_18008BA20(__int64 a1, __int64 a2, int a3, int a4, char a5, __int64 a6)
{
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+38h] [rbp-30h]

  sub_1800108FC(*(_QWORD *)(a2 + 3648), &v13);
  sub_180011110((_QWORD *)(a1 + 232), &v13);
  if ( v14 )
    sub_18001060C(v14);
  v10 = *(_QWORD *)(a1 + 232);
  v11 = std::string::string(&v13, "ImageProcessingEffectBloom");
  sub_180027D84(v10, (__int64)v11);
  return sub_1800269B8(*(_QWORD *)(a1 + 232), a3, a4, a5, a6, a2);
}
