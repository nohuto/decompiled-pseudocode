/*
 * XREFs of sub_18001623C @ 0x18001623C
 * Callers:
 *     sub_180017D90 @ 0x180017D90 (sub_180017D90.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_180010354 @ 0x180010354 (sub_180010354.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_18001B224 @ 0x18001B224 (sub_18001B224.c)
 *     sub_180041A88 @ 0x180041A88 (sub_180041A88.c)
 *     sub_18007C364 @ 0x18007C364 (sub_18007C364.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18001623C(__int64 **a1, _QWORD *a2)
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
  v5 = (__int64 *)sub_18001B224(32LL);
  v6 = v5;
  v10 = v5;
  if ( v5 )
  {
    *v5 = (__int64)&ISpectreMaterial::`vftable';
    *((_DWORD *)v5 + 3) = 1;
    *v5 = (__int64)off_1800EC768;
    if ( qword_1801C4440 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801C4440 + 8LL))(qword_1801C4440);
    *v6 = (__int64)off_1800EC998;
    v7 = v6 + 2;
    v6[2] = 0LL;
    v6[3] = 0LL;
    v11 = v6;
    v10 = 0LL;
    sub_18001254C(v6 + 2, a2);
    *(_WORD *)(*v7 + 112) |= 0x10u;
    *(_WORD *)(*v7 + 112) &= ~2u;
    *(_WORD *)(*v7 + 112) |= 1u;
    LOBYTE(v8) = 1;
    sub_180041A88(v6[2], &unk_1801C8EB8, v8);
    sub_18007C364(*(_QWORD *)(v6[2] + 120), &unk_1801C7EF8, 1LL);
    (*(void (__fastcall **)(__int64 *))(*v6 + 8))(v6);
    *a1 = v6;
    sub_18000E954((__int64 *)&v11);
  }
  else
  {
    v4 = -2147024882;
  }
  sub_180010354((void **)&v10);
  return v4;
}
