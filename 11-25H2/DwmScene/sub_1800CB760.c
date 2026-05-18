/*
 * XREFs of sub_1800CB760 @ 0x1800CB760
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_1800B9A3C @ 0x1800B9A3C (sub_1800B9A3C.c)
 *     sub_1800CB0F0 @ 0x1800CB0F0 (sub_1800CB0F0.c)
 *     sub_1800CBA48 @ 0x1800CBA48 (sub_1800CBA48.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800CB760(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+28h] [rbp-38h]
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+38h] [rbp-28h]
  __int64 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  __int64 v15; // [rsp+80h] [rbp+20h] BYREF
  __int64 v16; // [rsp+88h] [rbp+28h] BYREF

  sub_1800CBA48(a1, &v9);
  sub_1800B9A3C(v9, &v16);
  v2 = **(_QWORD **)(a1 + 504);
  v15 = v2;
  v3 = v16;
  while ( !*(_BYTE *)(v2 + 25) )
  {
    v4 = *(_QWORD *)(v2 + 40) + 144LL;
    if ( *(_QWORD *)(v2 + 40) + 48LL != v4 )
    {
      v5 = (_QWORD *)(*(_QWORD *)(v2 + 40) + 64LL);
      do
      {
        v6 = *(v5 - 2);
        v11 = v6;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        v7 = *(v5 - 1);
        v12 = v7;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        unknown_libname_81(&v13, v5);
        unknown_libname_81(&v14, v5 + 2);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 944LL))(v3, v11);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 944LL))(v3, v12);
        sub_1800CB0F0(&v11);
        v5 += 6;
      }
      while ( v5 - 2 != (_QWORD *)v4 );
    }
    sub_18001C2C0(&v15);
    v2 = v15;
  }
  result = sub_18000E854(&v16);
  if ( v10 )
    return sub_18001050C(v10);
  return result;
}
