/*
 * XREFs of sub_18005ADB4 @ 0x18005ADB4
 * Callers:
 *     sub_18005A60C @ 0x18005A60C (sub_18005A60C.c)
 * Callees:
 *     sub_18005AFC0 @ 0x18005AFC0 (sub_18005AFC0.c)
 */

__int64 __fastcall sub_18005ADB4(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18005AFC0(v2 + 40);
  return sub_18001C308(a1);
}
