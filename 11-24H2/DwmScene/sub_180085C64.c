/*
 * XREFs of sub_180085C64 @ 0x180085C64
 * Callers:
 *     sub_1800617C0 @ 0x1800617C0 (sub_1800617C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memcmp @ 0x18000CE3D (memcmp.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_1800261E8 @ 0x1800261E8 (sub_1800261E8.c)
 *     sub_18004D9E0 @ 0x18004D9E0 (sub_18004D9E0.c)
 *     sub_18004DF48 @ 0x18004DF48 (sub_18004DF48.c)
 *     sub_180075A3C @ 0x180075A3C (sub_180075A3C.c)
 *     sub_180085630 @ 0x180085630 (sub_180085630.c)
 *     sub_180085E20 @ 0x180085E20 (sub_180085E20.c)
 *     sub_180086078 @ 0x180086078 (sub_180086078.c)
 *     sub_1800862C0 @ 0x1800862C0 (sub_1800862C0.c)
 *     sub_1800866B4 @ 0x1800866B4 (sub_1800866B4.c)
 *     sub_180086B74 @ 0x180086B74 (sub_180086B74.c)
 *     sub_180086BE4 @ 0x180086BE4 (sub_180086BE4.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180085C64(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  const void *v6; // rax
  const void *v7; // rdx
  size_t v8; // r8
  __int64 v9; // rcx
  const void *v10; // rax
  const void *v11; // rdx
  size_t v12; // r8
  __int64 v13; // rcx
  const void *v14; // rax
  const void *v15; // rdx
  size_t v16; // r8
  __int64 v17; // rcx
  const void *v18; // rax
  const void *v19; // rdx
  size_t v20; // r8
  __int64 v21; // rcx
  __int64 v23; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v24; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h]
  int v26; // [rsp+40h] [rbp-C0h]
  _QWORD v27[30]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v28[4]; // [rsp+140h] [rbp+40h] BYREF

  sub_1800261E8(v28, a2, &a2[a3]);
  sub_18004D9E0(v27, (__int64)v28);
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0;
  sub_1800138F8((__int64)&unk_1801C9878);
  v6 = (const void *)sub_1800138F8(a4);
  if ( v8 == qword_1801C9888 && !memcmp(v6, v7, v8) )
    sub_180086078(v9, v28, &v23);
  sub_1800138F8((__int64)&unk_1801C9818);
  v10 = (const void *)sub_1800138F8(a4);
  if ( v12 == qword_1801C9828 && !memcmp(v10, v11, v12) )
    sub_180085E20(v13, v27, &v23);
  sub_1800138F8((__int64)&unk_1801C9838);
  v14 = (const void *)sub_1800138F8(a4);
  if ( v16 == qword_1801C9848 && !memcmp(v14, v15, v16) )
    sub_1800862C0(v17, v27, &v23);
  sub_1800138F8((__int64)&unk_1801C9858);
  v18 = (const void *)sub_1800138F8(a4);
  if ( v20 == qword_1801C9868 && !memcmp(v18, v19, v20) )
    sub_1800866B4(v21, v27, &v23);
  sub_180086BE4(a1, v23, &v24);
  sub_180086B74(a1);
  sub_180085630(a1);
  sub_180075A3C((__int64)&v24);
  sub_18004DF48((__int64)v27);
  return sub_180011B5C((__int64)v28);
}
