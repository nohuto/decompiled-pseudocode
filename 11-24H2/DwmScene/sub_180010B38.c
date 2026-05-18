/*
 * XREFs of sub_180010B38 @ 0x180010B38
 * Callers:
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 * Callees:
 *     sub_180011A7C @ 0x180011A7C (sub_180011A7C.c)
 */

char __fastcall sub_180010B38(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  _QWORD *v5; // r9

  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3 || !(unsigned __int8)sub_180011A7C(v3, a2, a2, a1) )
    return 0;
  *v5 = *v4;
  v5[1] = v4[1];
  return 1;
}
