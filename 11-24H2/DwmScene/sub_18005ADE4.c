/*
 * XREFs of sub_18005ADE4 @ 0x18005ADE4
 * Callers:
 *     sub_18005A27C @ 0x18005A27C (sub_18005A27C.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 */

__int64 __fastcall sub_18005ADE4(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(volatile signed __int32 **)(v2 + 40);
    if ( v3 )
      sub_180010644(v3);
  }
  return sub_18002FB84(a1);
}
