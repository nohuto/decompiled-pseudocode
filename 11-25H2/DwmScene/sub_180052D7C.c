/*
 * XREFs of sub_180052D7C @ 0x180052D7C
 * Callers:
 *     sub_180052A58 @ 0x180052A58 (sub_180052A58.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 */

__int64 __fastcall sub_180052D7C(__int64 a1)
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
  return sub_18001C1A8(a1);
}
