/*
 * XREFs of sub_1800568DC @ 0x1800568DC
 * Callers:
 *     sub_180056950 @ 0x180056950 (sub_180056950.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180054FFC @ 0x180054FFC (sub_180054FFC.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800568DC(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 *v4; // rax
  _BYTE v6[8]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  sub_180054FFC(a2, a1);
  v4 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(v3 + 32) + 8LL))(*(_QWORD *)(v3 + 32), v6);
  sub_180011110((_QWORD *)(a2 + 32), v4);
  if ( v7 )
    sub_18001060C(v7);
  return a2;
}
