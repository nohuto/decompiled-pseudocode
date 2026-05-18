/*
 * XREFs of sub_18005AC84 @ 0x18005AC84
 * Callers:
 *     sub_18005A11C @ 0x18005A11C (sub_18005A11C.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 */

__int64 __fastcall sub_18005AC84(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(volatile signed __int32 **)(v2 + 40);
    if ( v3 )
      sub_180010544(v3);
  }
  return sub_18002FA24(a1);
}
