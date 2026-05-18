/*
 * XREFs of sub_1800BEAD0 @ 0x1800BEAD0
 * Callers:
 *     sub_1800BD88C @ 0x1800BD88C (sub_1800BD88C.c)
 * Callees:
 *     sub_180040A14 @ 0x180040A14 (sub_180040A14.c)
 */

_BOOL8 __fastcall sub_1800BEAD0(__int64 *a1, _DWORD *a2)
{
  _QWORD *v2; // rax
  _DWORD *v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = sub_180040A14(a1, v7, a2);
  v4 = 0LL;
  v5 = v2[2];
  if ( !*(_BYTE *)(v5 + 25) )
    return *v3 >= *(_DWORD *)(v5 + 32);
  return v4;
}
