/*
 * XREFs of sub_1800164E8 @ 0x1800164E8
 * Callers:
 *     sub_180018120 @ 0x180018120 (sub_180018120.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_180010254 @ 0x180010254 (sub_180010254.c)
 *     sub_18001AFB0 @ 0x18001AFB0 (sub_18001AFB0.c)
 *     sub_18001B0C4 @ 0x18001B0C4 (sub_18001B0C4.c)
 *     sub_1800984C8 @ 0x1800984C8 (sub_1800984C8.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800164E8(_QWORD *a1, __int64 a2)
{
  _DWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // edi
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (_DWORD *)sub_18001B0C4(200LL);
  v5 = v4;
  v9 = v4;
  v8 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &ISpectreWorld::`vftable';
    v4[3] = 1;
    *(_QWORD *)v4 = off_1800EBA10;
    if ( qword_1801C3430 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801C3430 + 8LL))(qword_1801C3430);
    *v5 = off_1800EB698;
    v5[2] = 0LL;
    v5[3] = 0LL;
    v5[4] = 0LL;
    v5[5] = 0LL;
    sub_1800984C8(v5 + 6);
    v8 = v5;
    v9 = 0LL;
    v6 = sub_18001AFB0(v5, a2);
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
      *a1 = v5;
      sub_18000E854((__int64 *)&v8);
      v6 = 0;
    }
    else
    {
      sub_18000E854((__int64 *)&v8);
    }
  }
  else
  {
    v6 = -2147024882;
  }
  sub_180010254(&v9);
  return (unsigned int)v6;
}
