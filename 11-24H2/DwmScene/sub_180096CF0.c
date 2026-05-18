/*
 * XREFs of sub_180096CF0 @ 0x180096CF0
 * Callers:
 *     sub_180096820 @ 0x180096820 (sub_180096820.c)
 *     sub_18009687C @ 0x18009687C (sub_18009687C.c)
 *     sub_180096B2C @ 0x180096B2C (sub_180096B2C.c)
 *     sub_180096BC4 @ 0x180096BC4 (sub_180096BC4.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011A7C @ 0x180011A7C (sub_180011A7C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180096CF0(__int128 *a1)
{
  __int128 *v2; // r8
  __int64 v3; // rcx
  __int128 v4; // rcx

  v2 = a1 + 1;
  if ( *((_QWORD *)a1 + 2) )
  {
    v3 = *((_QWORD *)a1 + 1);
    if ( v3 && sub_180011A7C(v3) )
      v4 = *a1;
    else
      v4 = 0LL;
    if ( (_QWORD)v4 )
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v4 + 8LL))(v4, v2);
    if ( *((_QWORD *)&v4 + 1) )
      sub_18001060C(*((__int64 *)&v4 + 1));
  }
}
