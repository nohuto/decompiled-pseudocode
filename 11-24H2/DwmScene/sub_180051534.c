/*
 * XREFs of sub_180051534 @ 0x180051534
 * Callers:
 *     ??_G__ExceptionPtr@@QEAAPEAXI@Z_0 @ 0x18004F730 (--_G__ExceptionPtr@@QEAAPEAXI@Z_0.c)
 *     sub_1800BFD90 @ 0x1800BFD90 (sub_1800BFD90.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_1800514F0 @ 0x1800514F0 (sub_1800514F0.c)
 */

__int64 __fastcall sub_180051534(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::DeviceTexture::`vftable';
  sub_180011B5C((__int64)(a1 + 15));
  sub_1800514F0(a1 + 14);
  v2 = (volatile signed __int32 *)a1[13];
  if ( v2 )
    sub_180010644(v2);
  return sub_1800266BC((__int64)a1);
}
