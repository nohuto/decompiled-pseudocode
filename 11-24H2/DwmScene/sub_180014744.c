/*
 * XREFs of sub_180014744 @ 0x180014744
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 *     sub_18001ABCC @ 0x18001ABCC (sub_18001ABCC.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_180010354 @ 0x180010354 (sub_180010354.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_1800147E8 @ 0x1800147E8 (sub_1800147E8.c)
 *     sub_180014A98 @ 0x180014A98 (sub_180014A98.c)
 *     sub_18001B224 @ 0x18001B224 (sub_18001B224.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180014744(__int64 *a1, _QWORD *a2)
{
  unsigned int v4; // edi
  void *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  void *v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = (void *)sub_18001B224(48LL);
  v10 = v5;
  if ( v5 )
  {
    v6 = sub_1800147E8(v5);
    v9 = 0LL;
    sub_180014A98(&v9, v6);
    v10 = 0LL;
    v7 = v9;
    sub_18001254C((__int64 *)(v9 + 32), a2);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    *a1 = v7;
    sub_18000E954(&v9);
  }
  else
  {
    v4 = -2147024882;
  }
  sub_180010354(&v10);
  return v4;
}
