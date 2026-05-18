/*
 * XREFs of sub_18006B6D0 @ 0x18006B6D0
 * Callers:
 *     sub_18006B7DC @ 0x18006B7DC (sub_18006B7DC.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 *     sub_18006A3F4 @ 0x18006A3F4 (sub_18006A3F4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18006B6D0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v8; // rdi
  _QWORD *v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rcx
  _BYTE v13[8]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h]
  __int128 v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+58h] [rbp-8h]

  sub_18006A3F4(&v15, a1 + 40);
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
      sub_180011010(a2, v10);
      if ( v14 )
        sub_18001050C(v14);
      v9 += 2;
    }
    while ( v9 != (_QWORD *)v8 );
    v8 = *((_QWORD *)&v15 + 1);
    v9 = (_QWORD *)v15;
  }
  if ( v9 )
  {
    sub_180012040((__int64)v9, v8);
    sub_180010134((void *)v15, (v16 - v15) & 0xFFFFFFFFFFFFFFF0uLL);
    v15 = 0LL;
    v16 = 0LL;
  }
  v11 = a5[1];
  if ( v11 )
    sub_18001050C(v11);
  return a2;
}
