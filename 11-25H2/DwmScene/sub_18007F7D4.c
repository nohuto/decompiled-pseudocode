/*
 * XREFs of sub_18007F7D4 @ 0x18007F7D4
 * Callers:
 *     sub_18004468C @ 0x18004468C (sub_18004468C.c)
 *     sub_180044734 @ 0x180044734 (sub_180044734.c)
 *     sub_1800447DC @ 0x1800447DC (sub_1800447DC.c)
 *     sub_180044884 @ 0x180044884 (sub_180044884.c)
 *     sub_180044924 @ 0x180044924 (sub_180044924.c)
 *     sub_1800449CC @ 0x1800449CC (sub_1800449CC.c)
 * Callees:
 *     sub_18000FFE4 @ 0x18000FFE4 (sub_18000FFE4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180027BB8 @ 0x180027BB8 (sub_180027BB8.c)
 *     sub_180037060 @ 0x180037060 (sub_180037060.c)
 *     sub_180037090 @ 0x180037090 (sub_180037090.c)
 *     sub_18004596C @ 0x18004596C (sub_18004596C.c)
 *     sub_180050B00 @ 0x180050B00 (sub_180050B00.c)
 *     sub_18007F118 @ 0x18007F118 (sub_18007F118.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18007F7D4(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6)
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
    v10 = ((a3 + 1) & 0xFFFFFFFE) * sub_18004596C(a6);
  else
    v10 = a3 * sub_18004596C(a6);
  v13 = (void *)a1[17];
  if ( v13 )
  {
    if ( v13 == v11 )
      goto LABEL_14;
    if ( (unsigned int)v12 <= (unsigned int)v6 )
    {
      sub_18000FFE4(v13, (unsigned int)v6, v11, v10);
      sub_180050B00(a1 + 15);
      goto LABEL_14;
    }
  }
  LODWORD(v6) = v12;
  v14 = v12;
  v15 = sub_18007F118(&v18, v12, v11, v10);
  sub_180011010(a1 + 17, v15);
  if ( v19 )
    sub_18001050C(v19);
  sub_180027BB8((__int64)a1, v14, 15);
LABEL_14:
  v16 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD, _DWORD, int, int))(*a1 + 48))(
                     a1,
                     &v20,
                     a3,
                     v10,
                     v6,
                     a5,
                     v9);
  sub_180037060(a1 + 14, v16);
  sub_180037090(&v20);
  return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 40))(a1);
}
