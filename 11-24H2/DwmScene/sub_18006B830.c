/*
 * XREFs of sub_18006B830 @ 0x18006B830
 * Callers:
 *     sub_18006B93C @ 0x18006B93C (sub_18006B93C.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 *     sub_18006A554 @ 0x18006A554 (sub_18006A554.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18006B830(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v8; // rdi
  _QWORD *v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rcx
  _BYTE v13[8]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h]
  __int128 v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+58h] [rbp-8h]

  sub_18006A554(&v15, a1 + 40);
  unknown_libname_81(a2, a5);
  v8 = *((_QWORD *)&v15 + 1);
  v9 = (_QWORD *)v15;
  if ( (_QWORD)v15 != *((_QWORD *)&v15 + 1) )
  {
    do
    {
      v10 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, __int64, _QWORD *))(*(_QWORD *)*v9 + 16LL))(
                         *v9,
                         v13,
                         a3,
                         a4,
                         a2);
      sub_180011110(a2, v10);
      if ( v14 )
        sub_18001060C(v14);
      v9 += 2;
    }
    while ( v9 != (_QWORD *)v8 );
    v8 = *((_QWORD *)&v15 + 1);
    v9 = (_QWORD *)v15;
  }
  if ( v9 )
  {
    sub_180012140((__int64)v9, v8);
    sub_180010234((void *)v15, (v16 - v15) & 0xFFFFFFFFFFFFFFF0uLL);
    v15 = 0LL;
    v16 = 0LL;
  }
  v11 = a5[1];
  if ( v11 )
    sub_18001060C(v11);
  return a2;
}
