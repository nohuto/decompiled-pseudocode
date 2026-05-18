/*
 * XREFs of sub_18005ABAC @ 0x18005ABAC
 * Callers:
 *     sub_18005A070 @ 0x18005A070 (sub_18005A070.c)
 * Callees:
 *     sub_180030AA0 @ 0x180030AA0 (sub_180030AA0.c)
 */

__int64 __fastcall sub_18005ABAC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180030AA0(v2 + 16);
  return sub_18002F9DC(a1);
}
