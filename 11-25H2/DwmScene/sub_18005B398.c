/*
 * XREFs of sub_18005B398 @ 0x18005B398
 * Callers:
 *     sub_18005B360 @ 0x18005B360 (sub_18005B360.c)
 *     sub_18005B47C @ 0x18005B47C (sub_18005B47C.c)
 *     sub_180073F3C @ 0x180073F3C (sub_180073F3C.c)
 *     sub_180074660 @ 0x180074660 (sub_180074660.c)
 *     sub_1800759D0 @ 0x1800759D0 (sub_1800759D0.c)
 *     sub_1800764D0 @ 0x1800764D0 (sub_1800764D0.c)
 *     sub_180076860 @ 0x180076860 (sub_180076860.c)
 *     sub_180077900 @ 0x180077900 (sub_180077900.c)
 *     sub_18008DDEC @ 0x18008DDEC (sub_18008DDEC.c)
 *     sub_18008F048 @ 0x18008F048 (sub_18008F048.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_18005A070 @ 0x18005A070 (sub_18005A070.c)
 *     sub_18005A4AC @ 0x18005A4AC (sub_18005A4AC.c)
 *     sub_18005A7CC @ 0x18005A7CC (sub_18005A7CC.c)
 *     sub_18007CFE0 @ 0x18007CFE0 (sub_18007CFE0.c)
 *     sub_18007D008 @ 0x18007D008 (sub_18007D008.c)
 *     sub_18007E3A8 @ 0x18007E3A8 (sub_18007E3A8.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18005B398(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, char a5)
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
  sub_18005A7CC(a2);
  v15[0] = a3;
  v15[1] = a4;
  v9 = *a2 + 24LL;
  v10 = *(_QWORD *)(*a2 + 32LL);
  if ( v10 == *(_QWORD *)(*a2 + 40LL) )
    sub_18007D008(v9, v10, v15);
  else
    sub_18007CFE0(v9, v15);
  if ( a5 )
  {
    v11 = *a2;
    v12 = std::string::string(v15, byte_1800F6C80);
    sub_18007E3A8(v11, v12);
  }
  v16 = *(_DWORD *)(a1 + 552);
  if ( !v16 )
    sub_18001C99C(&stru_1801B8448, 2);
  v13 = sub_18005A4AC((_QWORD *)(a1 + 416), (__int64)v15, &v16);
  sub_18005A070(*(_QWORD *)v13 + 40LL, *(_QWORD *)(*(_QWORD *)v13 + 40LL), a2);
  return a2;
}
