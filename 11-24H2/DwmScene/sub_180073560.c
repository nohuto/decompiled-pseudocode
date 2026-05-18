/*
 * XREFs of sub_180073560 @ 0x180073560
 * Callers:
 *     sub_180073154 @ 0x180073154 (sub_180073154.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_180073560(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 48);
    if ( v3 )
      sub_18001060C(v3);
  }
  return sub_1800734B8(a1);
}
