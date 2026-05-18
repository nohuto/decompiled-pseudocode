/*
 * XREFs of sub_18007E7DC @ 0x18007E7DC
 * Callers:
 *     sub_180073F3C @ 0x180073F3C (sub_180073F3C.c)
 *     sub_180074660 @ 0x180074660 (sub_180074660.c)
 *     sub_1800759D0 @ 0x1800759D0 (sub_1800759D0.c)
 *     sub_1800764D0 @ 0x1800764D0 (sub_1800764D0.c)
 *     sub_180076860 @ 0x180076860 (sub_180076860.c)
 *     sub_180077900 @ 0x180077900 (sub_180077900.c)
 *     sub_18008DDEC @ 0x18008DDEC (sub_18008DDEC.c)
 *     sub_18008F048 @ 0x18008F048 (sub_18008F048.c)
 * Callees:
 *     sub_180075918 @ 0x180075918 (sub_180075918.c)
 */

__int64 __fastcall sub_18007E7DC(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r14

  v2 = (_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)a2;
  v3 = (_QWORD *)(a1 + 144);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 8);
  if ( a1 + 144 != a2 + 16 )
  {
    sub_180075918(a1 + 144);
    *v3 = *v2;
    v3[1] = v2[1];
    v3[2] = v2[2];
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
  }
  *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 40);
  return sub_180075918((__int64)v2);
}
