/*
 * XREFs of ?vDetermineDrawVertex@WIDEPENOBJ@pathwide@@QEAAXAEAVEVECTORFX@@AEAVLINEDATA@2@@Z @ 0x1400EB56C
 * Callers:
 *     ?vVecDrawCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x1400EB4FC (-vVecDrawCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall pathwide::WIDEPENOBJ::vDetermineDrawVertex(
        pathwide::WIDEPENOBJ *this,
        struct EVECTORFX *a2,
        struct pathwide::LINEDATA *a3)
{
  _DWORD *v4; // r9
  int *v5; // r15
  unsigned __int64 *v6; // rsi
  __int64 *v7; // rdi
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // r11
  char *v10; // r14
  unsigned int v11; // ecx
  char *i; // rbx
  char *v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  _DWORD *v18; // rbx
  unsigned __int64 *v19; // r12
  int *v20; // r14
  unsigned __int64 *v21; // r13
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // r8
  _DWORD *v24; // rax

  v4 = *(_DWORD **)(*((_QWORD *)this + 1) + 32LL);
  *((_QWORD *)a3 + 1) = v4;
  if ( *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) == *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) )
  {
    v5 = (int *)((char *)a2 + 4);
    v6 = (unsigned __int64 *)((char *)a3 + 24);
    v7 = (__int64 *)((char *)a3 + 32);
    v8 = *(int *)a2 * (__int64)(v4[9] - v4[7]) - *((int *)a2 + 1) * (__int64)(v4[8] - v4[6]);
    *((_QWORD *)a3 + 3) = v8;
    *((_QWORD *)a3 + 4) = -(__int64)v8;
    v9 = v8 >> 63;
  }
  else
  {
    v18 = v4;
    v19 = (unsigned __int64 *)((char *)a3 + 24);
    v20 = (int *)((char *)a2 + 4);
    v21 = (unsigned __int64 *)((char *)a3 + 32);
    while ( 1 )
    {
      v5 = (int *)((char *)a2 + 4);
      v7 = (__int64 *)v21;
      v6 = v19;
      v22 = *(int *)a2 * (__int64)(v18[9] - v18[7]) - *v20 * (__int64)(v18[8] - v18[6]);
      *v19 = v22;
      v9 = v22 >> 63;
      v23 = *(int *)a2 * (__int64)(v18[2 * (v18[5] - 2) + 9] - v18[2 * (v18[5] - 2) + 7])
          - *v20 * (__int64)(v18[2 * (v18[5] - 2) + 8] - v18[2 * (v18[5] - 2) + 6]);
      *v21 = v23;
      if ( (unsigned int)v9 != v23 >> 63 )
        break;
      v24 = *(_DWORD **)v18;
      v18 = v24;
      if ( !v24 )
        break;
      *((_QWORD *)a3 + 1) = v24;
      v4 = v24;
    }
  }
  v10 = (char *)(v4 + 6);
  v11 = *(_DWORD *)a3 | 1;
  if ( !(_DWORD)v9 )
    v11 = *(_DWORD *)a3 & 0xFFFFFFFE;
  *(_DWORD *)a3 = v11;
  for ( i = (char *)&v4[2 * (v4[5] - 2) + 6]; ; v10 += 8 * ((i - v10) >> 4) )
  {
    while ( 1 )
    {
      v13 = &v10[8 * ((i - v10) >> 4)];
      v14 = *(int *)a2 * (__int64)(*((_DWORD *)v13 + 3) - *((_DWORD *)v13 + 1))
          - *v5 * (__int64)(*((_DWORD *)v13 + 2) - *(_DWORD *)v13);
      if ( v14 >> 63 == (_DWORD)v9 )
        break;
      *v7 = v14;
      if ( v13 == v10 + 8 )
        goto LABEL_8;
      i = &v10[8 * ((i - v10) >> 4)];
    }
    *v6 = v14;
    if ( i == v13 + 8 )
      break;
  }
  v13 = i;
LABEL_8:
  *((_QWORD *)a3 + 2) = v13;
  v15 = -(__int64)*v6;
  if ( (__int64)*v6 > 0 )
    v15 = *v6;
  v16 = *v7;
  *v6 = v15;
  v17 = -v16;
  if ( v16 > 0 )
    v17 = v16;
  *v7 = v17;
}
