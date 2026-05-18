/*
 * XREFs of sub_1800BF9CC @ 0x1800BF9CC
 * Callers:
 *     sub_1800C24AC @ 0x1800C24AC (sub_1800C24AC.c)
 * Callees:
 *     sub_180050EFC @ 0x180050EFC (sub_180050EFC.c)
 *     sub_180050F94 @ 0x180050F94 (sub_180050F94.c)
 *     sub_180051510 @ 0x180051510 (sub_180051510.c)
 *     sub_1800BFD24 @ 0x1800BFD24 (sub_1800BFD24.c)
 *     sub_1800C1C74 @ 0x1800C1C74 (sub_1800C1C74.c)
 */

__int64 __fastcall sub_1800BF9CC(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // rbx
  int v7; // edi
  int v8; // r9d
  int v9; // r10d
  unsigned int v10; // r9d
  unsigned int v11; // r9d
  int v12; // esi
  unsigned int v13; // r9d
  unsigned int v14; // r9d
  unsigned int v15; // r9d
  unsigned int v16; // r9d
  int v17; // eax
  int *v18; // r8
  __int64 *v19; // rax
  void *v21; // [rsp+40h] [rbp-10h] BYREF
  void *v22; // [rsp+48h] [rbp-8h] BYREF
  int v23; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v24; // [rsp+88h] [rbp+38h] BYREF
  int v25; // [rsp+90h] [rbp+40h] BYREF
  int v26; // [rsp+98h] [rbp+48h] BYREF

  v26 = a4;
  v25 = a3;
  v5 = a5;
  v7 = 1;
  v23 = 1;
  sub_1800C1C74(&a5, *(unsigned int *)(a5 + 16));
  if ( HIDWORD(a5) == 1 )
    v10 = v8 | 8;
  else
    v10 = v8 & 0xFFFFFFF7;
  if ( (*(_BYTE *)(v5 + 24) & 8) != 0 )
    v11 = v10 | 1;
  else
    v11 = v10 & 0xFFFFFFFE;
  v12 = 2;
  if ( (*(_BYTE *)(v5 + 24) & 0x20) != 0 )
    v13 = v11 | 2;
  else
    v13 = v11 & 0xFFFFFFFD;
  if ( (*(_BYTE *)(v5 + 24) & 0x40) != 0 )
    v14 = v13 | 4;
  else
    v14 = v13 & 0xFFFFFFFB;
  if ( (*(_BYTE *)(v5 + 32) & 4) != 0 )
    v15 = v14 | 0x10;
  else
    v15 = v14 & 0xFFFFFFEF;
  if ( (*(_BYTE *)(v5 + 32) & 1) != 0 )
    v16 = v15 | 0x20;
  else
    v16 = v15 & 0xFFFFFFDF;
  v17 = *(_DWORD *)(v5 + 20);
  v18 = (int *)(v5 + 4);
  v24 = v16 & 0xFFFFFFBF;
  if ( v9 )
  {
    v26 = v17;
    v19 = sub_180050EFC(&v21, (_DWORD *)v5, v18, &v25, (int *)&a5, (int *)&v24, &v26);
    v7 = 0;
  }
  else
  {
    v25 = v17;
    v19 = sub_180050F94(&v22, (_DWORD *)v5, v18, (int *)&a5, (int *)&v24, &v25);
    v12 = 0;
  }
  a5 = *v19;
  *v19 = 0LL;
  if ( v12 )
    sub_180051510(&v21);
  if ( v7 )
    sub_180051510(&v22);
  sub_1800BFD24(a1, &a5, v5 + 12, &v23);
  sub_180051510((void **)&a5);
  return a1;
}
