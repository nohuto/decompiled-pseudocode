/*
 * XREFs of sub_18005B4F8 @ 0x18005B4F8
 * Callers:
 *     sub_18005B4C0 @ 0x18005B4C0 (sub_18005B4C0.c)
 *     sub_18005B5DC @ 0x18005B5DC (sub_18005B5DC.c)
 *     sub_18007409C @ 0x18007409C (sub_18007409C.c)
 *     sub_1800747C0 @ 0x1800747C0 (sub_1800747C0.c)
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 *     sub_180076630 @ 0x180076630 (sub_180076630.c)
 *     sub_1800769C0 @ 0x1800769C0 (sub_1800769C0.c)
 *     sub_180077A60 @ 0x180077A60 (sub_180077A60.c)
 *     sub_18008DF4C @ 0x18008DF4C (sub_18008DF4C.c)
 *     sub_18008F1A8 @ 0x18008F1A8 (sub_18008F1A8.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     sub_18005A1D0 @ 0x18005A1D0 (sub_18005A1D0.c)
 *     sub_18005A60C @ 0x18005A60C (sub_18005A60C.c)
 *     sub_18005A92C @ 0x18005A92C (sub_18005A92C.c)
 *     sub_18007D140 @ 0x18007D140 (sub_18007D140.c)
 *     sub_18007D168 @ 0x18007D168 (sub_18007D168.c)
 *     sub_18007E508 @ 0x18007E508 (sub_18007E508.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18005B4F8(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rax
  _QWORD v15[4]; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+80h] [rbp+30h] BYREF
  _QWORD *v17; // [rsp+88h] [rbp+38h]

  v17 = a2;
  sub_18005A92C(a2);
  v15[0] = a3;
  v15[1] = a4;
  v9 = *a2 + 24LL;
  v10 = *(_QWORD *)(*a2 + 32LL);
  if ( v10 == *(_QWORD *)(*a2 + 40LL) )
    sub_18007D168(v9, v10, v15);
  else
    sub_18007D140(v9, v15);
  if ( a5 )
  {
    v11 = *a2;
    v12 = std::string::string(v15, byte_1800F7C80);
    sub_18007E508(v11, v12);
  }
  v16 = *(_DWORD *)(a1 + 552);
  if ( !v16 )
    sub_18001CAFC(&stru_1801B9448, 2);
  v13 = sub_18005A60C((_QWORD *)(a1 + 416), (__int64)v15, &v16);
  sub_18005A1D0(*(_QWORD *)v13 + 40LL, *(_QWORD *)(*(_QWORD *)v13 + 40LL), a2);
  return a2;
}
