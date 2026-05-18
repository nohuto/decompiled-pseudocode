/*
 * XREFs of sub_18005187C @ 0x18005187C
 * Callers:
 *     sub_180051658 @ 0x180051658 (sub_180051658.c)
 *     sub_180051F28 @ 0x180051F28 (sub_180051F28.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     sub_1800151A0 @ 0x1800151A0 (sub_1800151A0.c)
 *     sub_180050140 @ 0x180050140 (sub_180050140.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005187C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  int v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v12; // [rsp+48h] [rbp+10h]

  v12 = a2;
  v4 = *a2;
  v11 = *(_DWORD *)(*a2 + 88);
  v5 = sub_180050140((__int64 *)(a1 + 112), (__int64)&v9, &v11);
  sub_180011010((_QWORD *)(*(_QWORD *)v5 + 40LL), a2);
  v6 = (__int64 *)sub_180011C64(a1 + 96, &v9);
  result = (__int64)sub_1800151A0((_QWORD *)(v4 + 96), v6);
  if ( v10 )
    result = sub_18001050C(v10);
  v8 = a2[1];
  if ( v8 )
    return sub_18001050C(v8);
  return result;
}
