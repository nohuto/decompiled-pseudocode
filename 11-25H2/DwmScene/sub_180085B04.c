/*
 * XREFs of sub_180085B04 @ 0x180085B04
 * Callers:
 *     sub_180061660 @ 0x180061660 (sub_180061660.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memcmp @ 0x18000CD55 (memcmp.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_180026088 @ 0x180026088 (sub_180026088.c)
 *     sub_18004D880 @ 0x18004D880 (sub_18004D880.c)
 *     sub_18004DDE8 @ 0x18004DDE8 (sub_18004DDE8.c)
 *     sub_1800758DC @ 0x1800758DC (sub_1800758DC.c)
 *     sub_1800854D0 @ 0x1800854D0 (sub_1800854D0.c)
 *     sub_180085CC0 @ 0x180085CC0 (sub_180085CC0.c)
 *     sub_180085F18 @ 0x180085F18 (sub_180085F18.c)
 *     sub_180086160 @ 0x180086160 (sub_180086160.c)
 *     sub_180086554 @ 0x180086554 (sub_180086554.c)
 *     sub_180086A14 @ 0x180086A14 (sub_180086A14.c)
 *     sub_180086A84 @ 0x180086A84 (sub_180086A84.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180085B04(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
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

  sub_180026088(v28, a2, &a2[a3]);
  sub_18004D880(v27, (__int64)v28);
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0;
  sub_1800137F8((__int64)&unk_1801C8868);
  v6 = (const void *)sub_1800137F8(a4);
  if ( v8 == qword_1801C8878 && !memcmp(v6, v7, v8) )
    sub_180085F18(v9, v28, &v23);
  sub_1800137F8((__int64)&unk_1801C8808);
  v10 = (const void *)sub_1800137F8(a4);
  if ( v12 == qword_1801C8818 && !memcmp(v10, v11, v12) )
    sub_180085CC0(v13, v27, &v23);
  sub_1800137F8((__int64)&unk_1801C8828);
  v14 = (const void *)sub_1800137F8(a4);
  if ( v16 == qword_1801C8838 && !memcmp(v14, v15, v16) )
    sub_180086160(v17, v27, &v23);
  sub_1800137F8((__int64)&unk_1801C8848);
  v18 = (const void *)sub_1800137F8(a4);
  if ( v20 == qword_1801C8858 && !memcmp(v18, v19, v20) )
    sub_180086554(v21, v27, &v23);
  sub_180086A84(a1, v23, &v24);
  sub_180086A14(a1);
  sub_1800854D0(a1);
  sub_1800758DC((__int64)&v24);
  sub_18004DDE8((__int64)v27);
  return sub_180011A5C((__int64)v28);
}
