/*
 * XREFs of sub_180040504 @ 0x180040504
 * Callers:
 *     sub_180040570 @ 0x180040570 (sub_180040570.c)
 *     sub_1800405B0 @ 0x1800405B0 (sub_1800405B0.c)
 *     sub_1800470D0 @ 0x1800470D0 (sub_1800470D0.c)
 *     sub_180047DDC @ 0x180047DDC (sub_180047DDC.c)
 *     sub_18004DCC0 @ 0x18004DCC0 (sub_18004DCC0.c)
 *     sub_180055328 @ 0x180055328 (sub_180055328.c)
 *     sub_1800852C8 @ 0x1800852C8 (sub_1800852C8.c)
 *     sub_18008BBD0 @ 0x18008BBD0 (sub_18008BBD0.c)
 *     unknown_libname_39 @ 0x1800D7FD7 (unknown_libname_39.c)
 *     sub_1800D91C9 @ 0x1800D91C9 (sub_1800D91C9.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall sub_180040504(_QWORD *a1)
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
    sub_180010644(v3);
  sub_180011B5C((__int64)(a1 + 3));
  result = &Spectre::Engine::IVisitable::`vftable';
  *a1 = &Spectre::Engine::IVisitable::`vftable';
  v5 = (volatile signed __int32 *)a1[2];
  if ( v5 )
    return (void **)sub_180010644(v5);
  return result;
}
