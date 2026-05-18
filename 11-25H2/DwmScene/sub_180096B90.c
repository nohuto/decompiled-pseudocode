/*
 * XREFs of sub_180096B90 @ 0x180096B90
 * Callers:
 *     sub_1800966C0 @ 0x1800966C0 (sub_1800966C0.c)
 *     sub_18009671C @ 0x18009671C (sub_18009671C.c)
 *     sub_1800969CC @ 0x1800969CC (sub_1800969CC.c)
 *     sub_180096A64 @ 0x180096A64 (sub_180096A64.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001197C @ 0x18001197C (sub_18001197C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180096B90(__int128 *a1)
{
  __int128 *v2; // r8
  __int64 v3; // rcx
  __int128 v4; // rcx

  v2 = a1 + 1;
  if ( *((_QWORD *)a1 + 2) )
  {
    v3 = *((_QWORD *)a1 + 1);
    if ( v3 && sub_18001197C(v3) )
      v4 = *a1;
    else
      v4 = 0LL;
    if ( (_QWORD)v4 )
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v4 + 8LL))(v4, v2);
    if ( *((_QWORD *)&v4 + 1) )
      sub_18001050C(*((__int64 *)&v4 + 1));
  }
}
