/*
 * XREFs of SepTokenFromAccessInformation @ 0x1403B64E0
 * Callers:
 *     SeQuerySecurityAttributesTokenAccessInformation @ 0x1403B5CD0 (SeQuerySecurityAttributesTokenAccessInformation.c)
 *     SeTokenFromAccessInformation @ 0x1403B5D90 (SeTokenFromAccessInformation.c)
 *     SeAccessCheckFromState @ 0x1403B6390 (SeAccessCheckFromState.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

_DWORD *__fastcall SepTokenFromAccessInformation(_DWORD **a1, __int64 a2)
{
  int v4; // eax
  unsigned int *v5; // rcx
  unsigned int v6; // ebp
  unsigned int v7; // eax
  _DWORD *v8; // rcx
  __int64 v9; // r8
  int v10; // edx
  unsigned int *v11; // r14
  __int64 v12; // rdi
  unsigned int v13; // r13d
  unsigned int v14; // r12d
  __int64 *v15; // rsi
  unsigned int *v16; // r14
  unsigned int *v17; // rax
  unsigned int v18; // r12d
  __int64 *v19; // rsi
  unsigned int *v20; // r14
  unsigned int *v21; // rax
  unsigned int v22; // r12d
  __int64 *v23; // rsi
  _DWORD *v24; // rax
  _DWORD *v25; // rax
  unsigned int v26; // edx
  _DWORD *v27; // rcx
  _DWORD *result; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  unsigned int v32; // edx
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  unsigned int v37; // edx
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // rcx
  unsigned int v41; // edx
  __int64 v42; // rax

  memset_0((void *)a2, 0, 0x4A0uLL);
  *(_QWORD *)(a2 + 24) = a1[3];
  v4 = *((_DWORD *)a1 + 8);
  *(_DWORD *)(a2 + 192) = v4;
  if ( v4 == 2 )
    *(_DWORD *)(a2 + 196) = *((_DWORD *)a1 + 9);
  v5 = a1[2];
  v6 = 0;
  v7 = *v5;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_QWORD *)(a2 + 80) = 0LL;
  if ( v7 )
  {
    v8 = v5 + 3;
    v9 = v7;
    do
    {
      v10 = *(v8 - 2);
      if ( (unsigned int)(v10 - 2) <= 0x22 )
      {
        *(_QWORD *)(a2 + 64) |= 1LL << v10;
        if ( (*v8 & 2) != 0 )
          *(_QWORD *)(a2 + 72) |= 1LL << v10;
        if ( (*v8 & 1) != 0 )
          *(_QWORD *)(a2 + 80) |= 1LL << v10;
      }
      v8 += 3;
      --v9;
    }
    while ( v9 );
  }
  v11 = (unsigned int *)(a2 + 232);
  v12 = 1LL;
  *(_DWORD *)(a2 + 124) = **a1;
  v13 = 64;
  *(_QWORD *)(a2 + 152) = *((_QWORD *)*a1 + 1);
  v14 = **a1;
  v15 = (__int64 *)*((_QWORD *)*a1 + 1);
  if ( a2 != -232 )
  {
    memset_0((void *)(a2 + 232), 0, 0x110uLL);
    if ( v15 )
    {
      if ( v14 )
      {
        *(_QWORD *)(a2 + 240) = v15;
        *v11 = v14;
        if ( v14 > 0x40 )
          v14 = 64;
        v29 = 1LL;
        v30 = v14;
        do
        {
          v31 = *v15;
          v15 += 2;
          v32 = *(unsigned __int8 *)(v31 + 4LL * *(unsigned __int8 *)(v31 + 1) + 4);
          v33 = *(_BYTE *)(v31 + 4LL * *(unsigned __int8 *)(v31 + 1) + 4) & 0xF;
          *(_QWORD *)&v11[2 * v33 + 4] |= v29;
          *(_QWORD *)&v11[2 * ((unsigned __int64)v32 >> 4) + 36] |= v29;
          v29 = __ROL8__(v29, 1);
          --v30;
        }
        while ( v30 );
      }
    }
  }
  v16 = (unsigned int *)(a2 + 504);
  *(_DWORD *)(a2 + 128) = *a1[1];
  *(_QWORD *)(a2 + 160) = *((_QWORD *)a1[1] + 1);
  v17 = a1[1];
  v18 = *v17;
  v19 = (__int64 *)*((_QWORD *)v17 + 1);
  if ( a2 != -504 )
  {
    memset_0((void *)(a2 + 504), 0, 0x110uLL);
    if ( v19 )
    {
      if ( v18 )
      {
        *(_QWORD *)(a2 + 512) = v19;
        *v16 = v18;
        if ( v18 > 0x40 )
          v18 = 64;
        v34 = 1LL;
        v35 = v18;
        do
        {
          v36 = *v19;
          v19 += 2;
          v37 = *(unsigned __int8 *)(v36 + 4LL * *(unsigned __int8 *)(v36 + 1) + 4);
          v38 = *(_BYTE *)(v36 + 4LL * *(unsigned __int8 *)(v36 + 1) + 4) & 0xF;
          *(_QWORD *)&v16[2 * v38 + 4] |= v34;
          *(_QWORD *)&v16[2 * ((unsigned __int64)v37 >> 4) + 36] |= v34;
          v34 = __ROL8__(v34, 1);
          --v35;
        }
        while ( v35 );
      }
    }
  }
  v20 = (unsigned int *)(a2 + 808);
  *(_DWORD *)(a2 + 800) = *a1[8];
  *(_QWORD *)(a2 + 792) = *((_QWORD *)a1[8] + 1);
  v21 = a1[8];
  v22 = *v21;
  v23 = (__int64 *)*((_QWORD *)v21 + 1);
  if ( a2 != -808 )
  {
    memset_0((void *)(a2 + 808), 0, 0x110uLL);
    if ( v23 )
    {
      if ( v22 )
      {
        *(_QWORD *)(a2 + 816) = v23;
        *v20 = v22;
        if ( v22 <= 0x40 )
          v13 = v22;
        v39 = v13;
        do
        {
          v40 = *v23;
          v23 += 2;
          v41 = *(unsigned __int8 *)(v40 + 4LL * *(unsigned __int8 *)(v40 + 1) + 4);
          v42 = *(_BYTE *)(v40 + 4LL * *(unsigned __int8 *)(v40 + 1) + 4) & 0xF;
          *(_QWORD *)&v20[2 * v42 + 4] |= v12;
          *(_QWORD *)&v20[2 * ((unsigned __int64)v41 >> 4) + 36] |= v12;
          v12 = __ROL8__(v12, 1);
          --v39;
        }
        while ( v39 );
      }
    }
  }
  v24 = a1[7];
  if ( v24 )
    *(_QWORD *)(a2 + 784) = v24;
  v25 = a1[9];
  if ( v25 )
    *(_QWORD *)(a2 + 1104) = v25;
  v26 = *(_DWORD *)(a2 + 124);
  *(_DWORD *)(a2 + 200) = *((_DWORD *)a1 + 11);
  *(_DWORD *)(a2 + 208) = -1;
  *(_DWORD *)(a2 + 212) = *((_DWORD *)a1 + 10);
  if ( v26 )
  {
    v27 = (_DWORD *)(*(_QWORD *)(a2 + 152) + 8LL);
    do
    {
      if ( (*v27 & 0x40) != 0 && *(_DWORD *)(a2 + 208) == -1 )
        *(_DWORD *)(a2 + 208) = v6;
      ++v6;
      v27 += 4;
    }
    while ( v6 < v26 );
  }
  result = a1[10];
  *(_QWORD *)(a2 + 776) = result;
  return result;
}
