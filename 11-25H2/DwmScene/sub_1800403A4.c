/*
 * XREFs of sub_1800403A4 @ 0x1800403A4
 * Callers:
 *     sub_180040410 @ 0x180040410 (sub_180040410.c)
 *     sub_180040450 @ 0x180040450 (sub_180040450.c)
 *     sub_180046F70 @ 0x180046F70 (sub_180046F70.c)
 *     sub_180047C7C @ 0x180047C7C (sub_180047C7C.c)
 *     sub_18004DB60 @ 0x18004DB60 (sub_18004DB60.c)
 *     sub_1800551C8 @ 0x1800551C8 (sub_1800551C8.c)
 *     sub_180085168 @ 0x180085168 (sub_180085168.c)
 *     sub_18008BA70 @ 0x18008BA70 (sub_18008BA70.c)
 *     unknown_libname_39 @ 0x1800D7E77 (unknown_libname_39.c)
 *     sub_1800D9069 @ 0x1800D9069 (sub_1800D9069.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall sub_1800403A4(_QWORD *a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx
  void **result; // rax
  volatile signed __int32 *v5; // rcx

  *a1 = &Spectre::Engine::Component::`vftable';
  v2 = a1[10];
  if ( v2 )
  {
    a1[10] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = (volatile signed __int32 *)a1[8];
  if ( v3 )
    sub_180010544(v3);
  sub_180011A5C((__int64)(a1 + 3));
  result = &Spectre::Engine::IVisitable::`vftable';
  *a1 = &Spectre::Engine::IVisitable::`vftable';
  v5 = (volatile signed __int32 *)a1[2];
  if ( v5 )
    return (void **)sub_180010544(v5);
  return result;
}
