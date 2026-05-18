/*
 * XREFs of sub_18001613C @ 0x18001613C
 * Callers:
 *     sub_180017CD0 @ 0x180017CD0 (sub_180017CD0.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_180010254 @ 0x180010254 (sub_180010254.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_18001B0C4 @ 0x18001B0C4 (sub_18001B0C4.c)
 *     sub_180041928 @ 0x180041928 (sub_180041928.c)
 *     sub_18007C204 @ 0x18007C204 (sub_18007C204.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18001613C(__int64 **a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 *v5; // rax
  __int64 *v6; // rsi
  __int64 *v7; // rbx
  __int64 v8; // r8
  __int64 *v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v11; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = (__int64 *)sub_18001B0C4(32LL);
  v6 = v5;
  v10 = v5;
  if ( v5 )
  {
    *v5 = (__int64)&ISpectreMaterial::`vftable';
    *((_DWORD *)v5 + 3) = 1;
    *v5 = (__int64)off_1800EB768;
    if ( qword_1801C3430 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801C3430 + 8LL))(qword_1801C3430);
    *v6 = (__int64)off_1800EB998;
    v7 = v6 + 2;
    v6[2] = 0LL;
    v6[3] = 0LL;
    v11 = v6;
    v10 = 0LL;
    sub_18001244C(v6 + 2, a2);
    *(_WORD *)(*v7 + 112) |= 0x10u;
    *(_WORD *)(*v7 + 112) &= ~2u;
    *(_WORD *)(*v7 + 112) |= 1u;
    LOBYTE(v8) = 1;
    sub_180041928(v6[2], &unk_1801C7EA8, v8);
    sub_18007C204(*(_QWORD *)(v6[2] + 120), &unk_1801C6EE8, 1LL);
    (*(void (__fastcall **)(__int64 *))(*v6 + 8))(v6);
    *a1 = v6;
    sub_18000E854((__int64 *)&v11);
  }
  else
  {
    v4 = -2147024882;
  }
  sub_180010254((void **)&v10);
  return v4;
}
