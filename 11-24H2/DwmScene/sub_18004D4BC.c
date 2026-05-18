/*
 * XREFs of sub_18004D4BC @ 0x18004D4BC
 * Callers:
 *     sub_18002F488 @ 0x18002F488 (sub_18002F488.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_1800133F4 @ 0x1800133F4 (sub_1800133F4.c)
 *     sub_180042074 @ 0x180042074 (sub_180042074.c)
 *     sub_180042490 @ 0x180042490 (sub_180042490.c)
 *     sub_18004C380 @ 0x18004C380 (sub_18004C380.c)
 *     sub_180079CB0 @ 0x180079CB0 (sub_180079CB0.c)
 *     sub_180079E2C @ 0x180079E2C (sub_180079E2C.c)
 *     sub_18007BC84 @ 0x18007BC84 (sub_18007BC84.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18004D4BC(__int64 a1)
{
  __int64 *v2; // rax
  _QWORD *v3; // rsi
  __int64 v4; // rbx
  __int64 *v5; // rax
  _QWORD *v6; // rax
  _QWORD v8[4]; // [rsp+28h] [rbp-39h] BYREF
  __int64 v9; // [rsp+48h] [rbp-19h] BYREF
  __int64 v10; // [rsp+50h] [rbp-11h]
  _BYTE v11[64]; // [rsp+68h] [rbp+7h] BYREF

  v2 = sub_18004C380(a1, &v9, 1u);
  v3 = (_QWORD *)(a1 + 18632);
  sub_180011110((_QWORD *)(a1 + 18632), v2);
  if ( v10 )
    sub_18001060C(v10);
  v4 = *v3;
  std::string::string(&v9, "Global");
  sub_1800133F4(v4 + 16, (__int64)&v9);
  sub_180011B5C((__int64)&v9);
  sub_180079E2C(*v3);
  v5 = (__int64 *)sub_180079CB0(*v3, &v9);
  sub_180011110((_QWORD *)(a1 + 18648), v5);
  if ( v10 )
    sub_18001060C(v10);
  v6 = std::string::string(v8, "Global/RenderTargetSize");
  sub_180042074((__int64)v11, (__int64)v6, 5);
  sub_18007BC84(*(_QWORD *)(a1 + 18648), v11);
  return sub_180042490((__int64)v11);
}
