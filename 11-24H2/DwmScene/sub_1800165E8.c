/*
 * XREFs of sub_1800165E8 @ 0x1800165E8
 * Callers:
 *     sub_1800181E0 @ 0x1800181E0 (sub_1800181E0.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_180010354 @ 0x180010354 (sub_180010354.c)
 *     sub_18001B110 @ 0x18001B110 (sub_18001B110.c)
 *     sub_18001B224 @ 0x18001B224 (sub_18001B224.c)
 *     sub_180098628 @ 0x180098628 (sub_180098628.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800165E8(_QWORD *a1, __int64 a2)
{
  _DWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // edi
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (_DWORD *)sub_18001B224(200LL);
  v5 = v4;
  v9 = v4;
  v8 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &ISpectreWorld::`vftable';
    v4[3] = 1;
    *(_QWORD *)v4 = off_1800ECA10;
    if ( qword_1801C4440 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801C4440 + 8LL))(qword_1801C4440);
    *v5 = off_1800EC698;
    v5[2] = 0LL;
    v5[3] = 0LL;
    v5[4] = 0LL;
    v5[5] = 0LL;
    sub_180098628(v5 + 6);
    v8 = v5;
    v9 = 0LL;
    v6 = sub_18001B110(v5, a2);
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
      *a1 = v5;
      sub_18000E954((__int64 *)&v8);
      v6 = 0;
    }
    else
    {
      sub_18000E954((__int64 *)&v8);
    }
  }
  else
  {
    v6 = -2147024882;
  }
  sub_180010354(&v9);
  return (unsigned int)v6;
}
