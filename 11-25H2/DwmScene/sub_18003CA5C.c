/*
 * XREFs of sub_18003CA5C @ 0x18003CA5C
 * Callers:
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 *     sub_18003E6F8 @ 0x18003E6F8 (sub_18003E6F8.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180024928 @ 0x180024928 (sub_180024928.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18003CA5C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 i; // rbx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  unknown_libname_81(&v7, a2);
  sub_180024928(a1);
  if ( v8 )
    sub_18001050C(v8);
  v4 = *a2;
  sub_18003BCDC(v4);
  v5 = *(_QWORD *)(v4 + 40);
  for ( i = *(_QWORD *)(v4 + 32); i != v5; i += 16LL )
    sub_18003CA5C(a1, i);
}
