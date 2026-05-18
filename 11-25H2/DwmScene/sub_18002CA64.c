/*
 * XREFs of sub_18002CA64 @ 0x18002CA64
 * Callers:
 *     sub_180030BB4 @ 0x180030BB4 (sub_180030BB4.c)
 * Callees:
 *     sub_1800108F8 @ 0x1800108F8 (sub_1800108F8.c)
 *     sub_180010CC0 @ 0x180010CC0 (sub_180010CC0.c)
 *     sub_180011820 @ 0x180011820 (sub_180011820.c)
 *     sub_180013178 @ 0x180013178 (sub_180013178.c)
 *     sub_18002E2AC @ 0x18002E2AC (sub_18002E2AC.c)
 *     sub_180036124 @ 0x180036124 (sub_180036124.c)
 */

unsigned __int64 __fastcall sub_18002CA64(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    sub_180013178();
  v8 = v6 + 1;
  v18 = sub_180011820(a1, v6 + 1);
  v9 = v18;
  v11 = sub_1800108F8(v10, &v18);
  v12 = (a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL;
  v13 = v12 + v11;
  sub_180010CC0(v12, (_QWORD *)(v12 + v11), a3);
  v14 = a1[1];
  v15 = v11;
  v16 = *a1;
  if ( a2 != v14 )
  {
    sub_18002E2AC(v16, a2, v11);
    v14 = a1[1];
    v15 = v13 + 16;
    v16 = a2;
  }
  sub_18002E2AC(v16, v14, v15);
  sub_180036124(a1, v11, v8, v9);
  return v13;
}
