/*
 * XREFs of sub_18004D35C @ 0x18004D35C
 * Callers:
 *     sub_18002F328 @ 0x18002F328 (sub_18002F328.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_1800132F4 @ 0x1800132F4 (sub_1800132F4.c)
 *     sub_180041F14 @ 0x180041F14 (sub_180041F14.c)
 *     sub_180042330 @ 0x180042330 (sub_180042330.c)
 *     sub_18004C220 @ 0x18004C220 (sub_18004C220.c)
 *     sub_180079B50 @ 0x180079B50 (sub_180079B50.c)
 *     sub_180079CCC @ 0x180079CCC (sub_180079CCC.c)
 *     sub_18007BB24 @ 0x18007BB24 (sub_18007BB24.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18004D35C(__int64 a1)
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

  v2 = sub_18004C220(a1, &v9, 1u);
  v3 = (_QWORD *)(a1 + 18632);
  sub_180011010((_QWORD *)(a1 + 18632), v2);
  if ( v10 )
    sub_18001050C(v10);
  v4 = *v3;
  std::string::string(&v9, "Global");
  sub_1800132F4(v4 + 16, (__int64)&v9);
  sub_180011A5C((__int64)&v9);
  sub_180079CCC(*v3);
  v5 = (__int64 *)sub_180079B50(*v3, &v9);
  sub_180011010((_QWORD *)(a1 + 18648), v5);
  if ( v10 )
    sub_18001050C(v10);
  v6 = std::string::string(v8, "Global/RenderTargetSize");
  sub_180041F14((__int64)v11, (__int64)v6, 5);
  sub_18007BB24(*(_QWORD *)(a1 + 18648), v11);
  return sub_180042330((__int64)v11);
}
