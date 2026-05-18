/*
 * XREFs of sub_18004099C @ 0x18004099C
 * Callers:
 *     sub_1800415B8 @ 0x1800415B8 (sub_1800415B8.c)
 *     sub_1800504A0 @ 0x1800504A0 (sub_1800504A0.c)
 *     sub_1800508F8 @ 0x1800508F8 (sub_1800508F8.c)
 *     sub_180051580 @ 0x180051580 (sub_180051580.c)
 *     sub_180051F28 @ 0x180051F28 (sub_180051F28.c)
 *     sub_1800521F8 @ 0x1800521F8 (sub_1800521F8.c)
 *     sub_180055A50 @ 0x180055A50 (sub_180055A50.c)
 *     sub_180057334 @ 0x180057334 (sub_180057334.c)
 *     sub_180068CE0 @ 0x180068CE0 (sub_180068CE0.c)
 *     sub_180069310 @ 0x180069310 (sub_180069310.c)
 *     sub_18007D894 @ 0x18007D894 (sub_18007D894.c)
 *     sub_18007ED40 @ 0x18007ED40 (sub_18007ED40.c)
 *     sub_18007F330 @ 0x18007F330 (sub_18007F330.c)
 *     sub_18007F624 @ 0x18007F624 (sub_18007F624.c)
 *     sub_180081298 @ 0x180081298 (sub_180081298.c)
 *     sub_18008138C @ 0x18008138C (sub_18008138C.c)
 *     sub_1800C2FB4 @ 0x1800C2FB4 (sub_1800C2FB4.c)
 *     sub_1800C4550 @ 0x1800C4550 (sub_1800C4550.c)
 * Callees:
 *     sub_180040A14 @ 0x180040A14 (sub_180040A14.c)
 */

__int64 __fastcall sub_18004099C(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  _DWORD *v3; // r11
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  sub_180040A14(a1, v5, a2);
  result = v6;
  if ( *(_BYTE *)(v6 + 25) || *v3 < *(_DWORD *)(v6 + 32) )
    return *(_QWORD *)v2;
  return result;
}
