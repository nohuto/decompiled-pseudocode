/*
 * XREFs of sub_1800BF75C @ 0x1800BF75C
 * Callers:
 *     sub_1800C234C @ 0x1800C234C (sub_1800C234C.c)
 * Callees:
 *     sub_180050E34 @ 0x180050E34 (sub_180050E34.c)
 *     sub_1800513B0 @ 0x1800513B0 (sub_1800513B0.c)
 *     sub_1800BFBC4 @ 0x1800BFBC4 (sub_1800BFBC4.c)
 *     sub_1800C1B14 @ 0x1800C1B14 (sub_1800C1B14.c)
 */

__int64 __fastcall sub_1800BF75C(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // rbx
  unsigned int v7; // r9d
  int v8; // r10d
  unsigned int v9; // r10d
  unsigned int v10; // r10d
  unsigned int v11; // r10d
  unsigned int v12; // r10d
  unsigned int v13; // r10d
  unsigned int v14; // r10d
  int v15; // r10d
  __int64 *v16; // rax
  __int64 v17; // rcx
  void *v19; // [rsp+50h] [rbp+20h] BYREF
  int v20; // [rsp+58h] [rbp+28h] BYREF
  int v21; // [rsp+60h] [rbp+30h] BYREF
  int v22; // [rsp+68h] [rbp+38h] BYREF

  v22 = a4;
  v21 = a3;
  v5 = a5;
  sub_1800C1B14(&a5, *(unsigned int *)(a5 + 16));
  if ( HIDWORD(a5) == 1 )
    v9 = v8 | 8;
  else
    v9 = v8 & 0xFFFFFFF7;
  if ( (*(_BYTE *)(v5 + 32) & 8) != 0 )
    v10 = v9 | 1;
  else
    v10 = v9 & 0xFFFFFFFE;
  if ( (*(_BYTE *)(v5 + 32) & 0x20) != 0 )
    v11 = v10 | 2;
  else
    v11 = v10 & 0xFFFFFFFD;
  if ( (*(_BYTE *)(v5 + 32) & 0x40) != 0 )
    v12 = v11 | 4;
  else
    v12 = v11 & 0xFFFFFFFB;
  if ( (*(_BYTE *)(v5 + 40) & 4) != 0 )
    v13 = v12 | 0x10;
  else
    v13 = v12 & 0xFFFFFFEF;
  if ( (*(_BYTE *)(v5 + 40) & 1) != 0 )
    v14 = v13 | 0x20;
  else
    v14 = v13 & 0xFFFFFFDF;
  if ( v7 <= 1 )
    v15 = v14 & 0xFFFFFFBF;
  else
    v15 = v14 | 0x40;
  v21 = *(_DWORD *)(v5 + 28);
  v20 = v15;
  v16 = sub_180050E34(&v19, (_DWORD *)v5, (int *)(v5 + 4), (int *)&a5, &v20, &v21);
  v17 = *v16;
  *v16 = 0LL;
  a5 = v17;
  sub_1800513B0(&v19);
  sub_1800BFBC4(a1, &a5, v5 + 8, &v22);
  sub_1800513B0((void **)&a5);
  return a1;
}
