/*
 * XREFs of sub_1800BFDCC @ 0x1800BFDCC
 * Callers:
 *     sub_1800C2170 @ 0x1800C2170 (sub_1800C2170.c)
 * Callees:
 *     sub_18001EFE0 @ 0x18001EFE0 (sub_18001EFE0.c)
 *     sub_1800BFFBC @ 0x1800BFFBC (sub_1800BFFBC.c)
 */

__int64 __fastcall sub_1800BFDCC(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax

  v4 = sub_18001EFE0(a1, (__int64)"{");
  v5 = sub_18001EFE0(v4, (__int64)"Width");
  v6 = sub_18001EFE0(v5, (__int64)"=");
  v7 = std::ostream::operator<<(v6, *a2);
  v8 = sub_18001EFE0(v7, (__int64)",Height");
  v9 = sub_18001EFE0(v8, (__int64)"=");
  v10 = std::ostream::operator<<(v9, a2[1]);
  v11 = sub_18001EFE0(v10, (__int64)",ArraySize");
  v12 = sub_18001EFE0(v11, (__int64)"=");
  v13 = std::ostream::operator<<(v12, a2[3]);
  v14 = sub_18001EFE0(v13, (__int64)",Format");
  v15 = sub_18001EFE0(v14, (__int64)"=");
  v16 = std::ostream::operator<<(v15, a2[4]);
  v17 = sub_18001EFE0(v16, (__int64)",SampleDesc");
  v18 = sub_18001EFE0(v17, (__int64)"=");
  v19 = sub_1800BFFBC(v18, a2 + 5);
  v20 = sub_18001EFE0(v19, (__int64)",Usage");
  v21 = sub_18001EFE0(v20, (__int64)"=");
  v22 = std::ostream::operator<<(v21, a2[7]);
  v23 = sub_18001EFE0(v22, (__int64)",BindFlags");
  v24 = sub_18001EFE0(v23, (__int64)"=");
  v25 = std::ostream::operator<<(v24, a2[8]);
  v26 = sub_18001EFE0(v25, (__int64)",CPUAccessFlags");
  v27 = sub_18001EFE0(v26, (__int64)"=");
  v28 = std::ostream::operator<<(v27, a2[9]);
  v29 = sub_18001EFE0(v28, (__int64)",MiscFlags");
  v30 = sub_18001EFE0(v29, (__int64)"=");
  v31 = std::ostream::operator<<(v30, a2[10]);
  v32 = sub_18001EFE0(v31, (__int64)",");
  sub_18001EFE0(v32, (__int64)"}");
  return a1;
}
