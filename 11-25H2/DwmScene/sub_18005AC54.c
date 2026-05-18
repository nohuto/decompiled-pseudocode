/*
 * XREFs of sub_18005AC54 @ 0x18005AC54
 * Callers:
 *     sub_18005A4AC @ 0x18005A4AC (sub_18005A4AC.c)
 * Callees:
 *     sub_18005AE60 @ 0x18005AE60 (sub_18005AE60.c)
 */

__int64 __fastcall sub_18005AC54(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18005AE60(v2 + 40);
  return sub_18001C1A8(a1);
}
