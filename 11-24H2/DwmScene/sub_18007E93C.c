/*
 * XREFs of sub_18007E93C @ 0x18007E93C
 * Callers:
 *     sub_18007409C @ 0x18007409C (sub_18007409C.c)
 *     sub_1800747C0 @ 0x1800747C0 (sub_1800747C0.c)
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 *     sub_180076630 @ 0x180076630 (sub_180076630.c)
 *     sub_1800769C0 @ 0x1800769C0 (sub_1800769C0.c)
 *     sub_180077A60 @ 0x180077A60 (sub_180077A60.c)
 *     sub_18008DF4C @ 0x18008DF4C (sub_18008DF4C.c)
 *     sub_18008F1A8 @ 0x18008F1A8 (sub_18008F1A8.c)
 * Callees:
 *     sub_180075A78 @ 0x180075A78 (sub_180075A78.c)
 */

__int64 __fastcall sub_18007E93C(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r14

  v2 = (_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)a2;
  v3 = (_QWORD *)(a1 + 144);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 8);
  if ( a1 + 144 != a2 + 16 )
  {
    sub_180075A78(a1 + 144);
    *v3 = *v2;
    v3[1] = v2[1];
    v3[2] = v2[2];
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
  }
  *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 40);
  return sub_180075A78((__int64)v2);
}
