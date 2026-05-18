/*
 * XREFs of sub_180073400 @ 0x180073400
 * Callers:
 *     sub_180072FF4 @ 0x180072FF4 (sub_180072FF4.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_180073400(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 48);
    if ( v3 )
      sub_18001050C(v3);
  }
  return sub_180073358(a1);
}
