/*
 * XREFs of sub_180052EDC @ 0x180052EDC
 * Callers:
 *     sub_180052BB8 @ 0x180052BB8 (sub_180052BB8.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 */

__int64 __fastcall sub_180052EDC(__int64 a1)
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
  return sub_18001C308(a1);
}
