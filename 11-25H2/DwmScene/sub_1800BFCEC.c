/*
 * XREFs of sub_1800BFCEC @ 0x1800BFCEC
 * Callers:
 *     sub_1800C223C @ 0x1800C223C (sub_1800C223C.c)
 * Callees:
 *     sub_18001EFE0 @ 0x18001EFE0 (sub_18001EFE0.c)
 */

__int64 __fastcall sub_1800BFCEC(__int64 a1, __int64 a2)
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

  v4 = sub_18001EFE0(a1, (__int64)"{");
  v5 = sub_18001EFE0(v4, (__int64)"pSysMem");
  v6 = sub_18001EFE0(v5, (__int64)"=");
  v7 = std::ostream::operator<<(v6, *(_QWORD *)a2);
  v8 = sub_18001EFE0(v7, (__int64)",SysMemPitch");
  v9 = sub_18001EFE0(v8, (__int64)"=");
  v10 = std::ostream::operator<<(v9, *(unsigned int *)(a2 + 8));
  v11 = sub_18001EFE0(v10, (__int64)",SysMemSlicePitch");
  v12 = sub_18001EFE0(v11, (__int64)"=");
  v13 = std::ostream::operator<<(v12, *(unsigned int *)(a2 + 12));
  v14 = sub_18001EFE0(v13, (__int64)",");
  sub_18001EFE0(v14, (__int64)"}");
  return a1;
}
