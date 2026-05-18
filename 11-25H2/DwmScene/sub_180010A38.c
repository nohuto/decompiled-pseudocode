/*
 * XREFs of sub_180010A38 @ 0x180010A38
 * Callers:
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 * Callees:
 *     sub_18001197C @ 0x18001197C (sub_18001197C.c)
 */

char __fastcall sub_180010A38(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  _QWORD *v5; // r9

  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3 || !(unsigned __int8)sub_18001197C(v3, a2, a2, a1) )
    return 0;
  *v5 = *v4;
  v5[1] = v4[1];
  return 1;
}
