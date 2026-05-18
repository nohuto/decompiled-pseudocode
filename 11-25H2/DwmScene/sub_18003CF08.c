/*
 * XREFs of sub_18003CF08 @ 0x18003CF08
 * Callers:
 *     sub_18003CC20 @ 0x18003CC20 (sub_18003CC20.c)
 *     sub_18003CED4 @ 0x18003CED4 (sub_18003CED4.c)
 *     sub_18003FE2C @ 0x18003FE2C (sub_18003FE2C.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 */

__int64 __fastcall sub_18003CF08(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v2; // rcx

  v2 = (volatile signed __int32 *)a2[4];
  if ( v2 )
    sub_180010544(v2);
  return sub_180010134(a2, 0x28uLL);
}
