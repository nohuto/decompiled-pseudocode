/*
 * XREFs of sub_180010B10 @ 0x180010B10
 * Callers:
 *     sub_1800107FC @ 0x1800107FC (sub_1800107FC.c)
 *     sub_180015BC8 @ 0x180015BC8 (sub_180015BC8.c)
 *     sub_180015CB8 @ 0x180015CB8 (sub_180015CB8.c)
 *     sub_180015DA8 @ 0x180015DA8 (sub_180015DA8.c)
 *     sub_180023340 @ 0x180023340 (sub_180023340.c)
 *     sub_18002359C @ 0x18002359C (sub_18002359C.c)
 *     sub_180040838 @ 0x180040838 (sub_180040838.c)
 *     sub_180044400 @ 0x180044400 (sub_180044400.c)
 *     sub_180044514 @ 0x180044514 (sub_180044514.c)
 *     sub_180049C3C @ 0x180049C3C (sub_180049C3C.c)
 *     sub_180049D0C @ 0x180049D0C (sub_180049D0C.c)
 *     sub_180049DDC @ 0x180049DDC (sub_180049DDC.c)
 *     sub_180049EAC @ 0x180049EAC (sub_180049EAC.c)
 *     sub_180049F7C @ 0x180049F7C (sub_180049F7C.c)
 *     sub_180059D50 @ 0x180059D50 (sub_180059D50.c)
 *     sub_18007A970 @ 0x18007A970 (sub_18007A970.c)
 *     sub_18007CDE8 @ 0x18007CDE8 (sub_18007CDE8.c)
 * Callees:
 *     sub_1800108F8 @ 0x1800108F8 (sub_1800108F8.c)
 *     sub_180010C7C @ 0x180010C7C (sub_180010C7C.c)
 *     sub_180010CC0 @ 0x180010CC0 (sub_180010CC0.c)
 *     sub_180011820 @ 0x180011820 (sub_180011820.c)
 *     sub_18001185C @ 0x18001185C (sub_18001185C.c)
 */

unsigned __int64 __fastcall sub_180010B10(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v17 = sub_180011820(a1, v6 + 1);
  v10 = sub_1800108F8(v9, &v17);
  v11 = (a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL;
  v12 = v11 + v10;
  sub_180010CC0(v11, v11 + v10, a3);
  v13 = a1[1];
  v14 = v10;
  v15 = *a1;
  if ( a2 != v13 )
  {
    sub_180010C7C(v15, a2, v10);
    v13 = a1[1];
    v14 = v12 + 16;
    v15 = a2;
  }
  sub_180010C7C(v15, v13, v14);
  sub_18001185C(a1, v10, v8, v17);
  return v12;
}
