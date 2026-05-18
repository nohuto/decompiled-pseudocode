/*
 * XREFs of sub_1800504B8 @ 0x1800504B8
 * Callers:
 *     sub_18004F6E0 @ 0x18004F6E0 (sub_18004F6E0.c)
 *     sub_1800505A0 @ 0x1800505A0 (sub_1800505A0.c)
 *     sub_1800C71B0 @ 0x1800C71B0 (sub_1800C71B0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 */

__int64 __fastcall sub_1800504B8(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rcx

  *a1 = &Spectre::Engine::DeviceSampler::`vftable';
  v2 = (volatile signed __int32 *)a1[15];
  if ( v2 )
    sub_180010644(v2);
  v3 = a1[13];
  if ( v3 )
    sub_18001060C(v3);
  return sub_1800266BC((__int64)a1);
}
