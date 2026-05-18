/*
 * XREFs of sub_18007F934 @ 0x18007F934
 * Callers:
 *     sub_1800447EC @ 0x1800447EC (sub_1800447EC.c)
 *     sub_180044894 @ 0x180044894 (sub_180044894.c)
 *     sub_18004493C @ 0x18004493C (sub_18004493C.c)
 *     sub_1800449E4 @ 0x1800449E4 (sub_1800449E4.c)
 *     sub_180044A84 @ 0x180044A84 (sub_180044A84.c)
 *     sub_180044B2C @ 0x180044B2C (sub_180044B2C.c)
 * Callees:
 *     sub_1800100E4 @ 0x1800100E4 (sub_1800100E4.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180027D18 @ 0x180027D18 (sub_180027D18.c)
 *     sub_1800371C0 @ 0x1800371C0 (sub_1800371C0.c)
 *     sub_1800371F0 @ 0x1800371F0 (sub_1800371F0.c)
 *     sub_180045ACC @ 0x180045ACC (sub_180045ACC.c)
 *     sub_180050C60 @ 0x180050C60 (sub_180050C60.c)
 *     sub_18007F278 @ 0x18007F278 (sub_18007F278.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18007F934(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rbp
  int v9; // esi
  unsigned int v10; // ebx
  const void *v11; // r10
  size_t v12; // r11
  void *v13; // rcx
  unsigned __int64 v14; // r12
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-30h]
  __int64 v20; // [rsp+80h] [rbp+8h] BYREF

  v6 = a1[14];
  if ( v6 )
    LODWORD(v6) = *(_DWORD *)(v6 + 16);
  v9 = a6;
  if ( a6 == 23 || a6 == 24 )
    v10 = ((a3 + 1) & 0xFFFFFFFE) * sub_180045ACC(a6);
  else
    v10 = a3 * sub_180045ACC(a6);
  v13 = (void *)a1[17];
  if ( v13 )
  {
    if ( v13 == v11 )
      goto LABEL_14;
    if ( (unsigned int)v12 <= (unsigned int)v6 )
    {
      sub_1800100E4(v13, (unsigned int)v6, v11, v10);
      sub_180050C60(a1 + 15);
      goto LABEL_14;
    }
  }
  LODWORD(v6) = v12;
  v14 = v12;
  v15 = sub_18007F278(&v18, v12, v11, v10);
  sub_180011110(a1 + 17, v15);
  if ( v19 )
    sub_18001060C(v19);
  sub_180027D18((__int64)a1, v14, 15);
LABEL_14:
  v16 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD, _DWORD, int, int))(*a1 + 48))(
                     a1,
                     &v20,
                     a3,
                     v10,
                     v6,
                     a5,
                     v9);
  sub_1800371C0(a1 + 14, v16);
  sub_1800371F0(&v20);
  return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 40))(a1);
}
