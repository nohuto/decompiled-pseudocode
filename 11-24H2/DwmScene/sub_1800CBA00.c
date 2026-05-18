/*
 * XREFs of sub_1800CBA00 @ 0x1800CBA00
 * Callers:
 *     <none>
 * Callees:
 *     j_unknown_libname_81 @ 0x180012100 (j_unknown_libname_81.c)
 *     sub_18001229C @ 0x18001229C (sub_18001229C.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_1800CAFA0 @ 0x1800CAFA0 (sub_1800CAFA0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800CBA00(__int64 a1, __int64 *a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+48h] [rbp+10h]

  v9 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v4 = *(_QWORD *)(a1 + 512);
  v8 = v4;
  if ( v4 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    sub_18001229C(a2, (unsigned __int64 *)&v8);
  }
  v5 = **(_QWORD **)(a1 + 504);
  v8 = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    v6 = (_QWORD *)a2[1];
    if ( v6 == (_QWORD *)a2[2] )
    {
      sub_1800CAFA0(a2, a2[1], (_QWORD *)(v5 + 40));
    }
    else
    {
      j_unknown_libname_81(v6, (_QWORD *)(v5 + 40));
      a2[1] += 16LL;
    }
    sub_18001C420(&v8);
    v5 = v8;
  }
  return a2;
}
