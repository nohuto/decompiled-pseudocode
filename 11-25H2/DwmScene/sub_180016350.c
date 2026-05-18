/*
 * XREFs of sub_180016350 @ 0x180016350
 * Callers:
 *     sub_180017E90 @ 0x180017E90 (sub_180017E90.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_180010254 @ 0x180010254 (sub_180010254.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_18001B0C4 @ 0x18001B0C4 (sub_18001B0C4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180016350(__int64 **a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 *v5; // rax
  __int64 *v6; // rbx
  __int64 *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = (__int64 *)sub_18001B0C4(32LL);
  v6 = v5;
  v8 = v5;
  if ( v5 )
  {
    *v5 = (__int64)&ISpectreSampler::`vftable';
    *((_DWORD *)v5 + 3) = 1;
    *v5 = (__int64)off_1800EB638;
    if ( qword_1801C3430 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801C3430 + 8LL))(qword_1801C3430);
    *v6 = (__int64)off_1800EB920;
    v6[2] = 0LL;
    v6[3] = 0LL;
    v9 = v6;
    v8 = 0LL;
    sub_18001244C(v6 + 2, a2);
    (*(void (__fastcall **)(__int64 *))(*v6 + 8))(v6);
    *a1 = v6;
    sub_18000E854((__int64 *)&v9);
  }
  else
  {
    v4 = -2147024882;
  }
  sub_180010254((void **)&v8);
  return v4;
}
