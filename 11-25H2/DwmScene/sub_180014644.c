/*
 * XREFs of sub_180014644 @ 0x180014644
 * Callers:
 *     sub_180014880 @ 0x180014880 (sub_180014880.c)
 *     sub_18001AB0C @ 0x18001AB0C (sub_18001AB0C.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_180010254 @ 0x180010254 (sub_180010254.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_1800146E8 @ 0x1800146E8 (sub_1800146E8.c)
 *     sub_180014998 @ 0x180014998 (sub_180014998.c)
 *     sub_18001B0C4 @ 0x18001B0C4 (sub_18001B0C4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180014644(__int64 *a1, _QWORD *a2)
{
  unsigned int v4; // edi
  void *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  void *v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = (void *)sub_18001B0C4(48LL);
  v10 = v5;
  if ( v5 )
  {
    v6 = sub_1800146E8(v5);
    v9 = 0LL;
    sub_180014998(&v9, v6);
    v10 = 0LL;
    v7 = v9;
    sub_18001244C((__int64 *)(v9 + 32), a2);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    *a1 = v7;
    sub_18000E854(&v9);
  }
  else
  {
    v4 = -2147024882;
  }
  sub_180010254(&v10);
  return v4;
}
