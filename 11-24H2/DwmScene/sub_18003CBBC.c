/*
 * XREFs of sub_18003CBBC @ 0x18003CBBC
 * Callers:
 *     sub_18003CBBC @ 0x18003CBBC (sub_18003CBBC.c)
 *     sub_18003E858 @ 0x18003E858 (sub_18003E858.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180024A88 @ 0x180024A88 (sub_180024A88.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 *     sub_18003CBBC @ 0x18003CBBC (sub_18003CBBC.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18003CBBC(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 i; // rbx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  unknown_libname_81(&v7, a2);
  sub_180024A88(a1);
  if ( v8 )
    sub_18001060C(v8);
  v4 = *a2;
  sub_18003BE3C(v4);
  v5 = *(_QWORD *)(v4 + 40);
  for ( i = *(_QWORD *)(v4 + 32); i != v5; i += 16LL )
    sub_18003CBBC(a1, i);
}
