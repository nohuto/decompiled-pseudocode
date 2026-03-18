/*
 * XREFs of Input1BPPToAA24 @ 0x140177DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__fastcall Input1BPPToAA24(char *a1, _BYTE *a2)
{
  unsigned __int8 *v2; // rdi
  unsigned int v3; // r10d
  bool v5; // zf
  _BYTE *v6; // r9
  __int16 *v7; // rcx
  __int64 v9; // rdx
  char *v10; // rcx
  char v11; // al
  int v12; // edx
  unsigned int i; // edx
  unsigned int v14; // ecx
  int v15; // r10d
  char v16; // cl
  int v17; // eax
  int v18; // eax
  unsigned __int16 v20; // ax
  char v21; // al
  int v22; // ecx
  unsigned int v23; // esi
  _WORD *v24; // r15
  unsigned int v25; // r8d
  unsigned __int64 v26; // rdx
  char v27; // al
  __int64 v28; // rdx
  char v29; // al
  __int64 v30; // rdx
  char v31; // al
  __int64 v32; // rdx
  char v33; // al
  __int64 v34; // rdx
  char v35; // al
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // r8
  int v39; // r10d
  unsigned __int16 v40; // ax
  unsigned __int64 v41; // r8
  unsigned __int16 v42; // ax
  unsigned int v43; // ecx
  unsigned int v44; // edx
  unsigned int v45; // esi
  unsigned __int16 v46; // ax
  unsigned __int64 v47; // r8
  __int16 v48; // [rsp+20h] [rbp+20h] BYREF
  char v49; // [rsp+22h] [rbp+22h]
  __int16 v50; // [rsp+23h] [rbp+23h]
  char v51; // [rsp+25h] [rbp+25h]

  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 5);
  v3 = *((_DWORD *)a1 + 12);
  v5 = (*a1 & 4) == 0;
  v6 = a2;
  v7 = (__int16 *)*((_QWORD *)a1 + 10);
  if ( v5 )
  {
    v48 = *v7;
    v49 = *((_BYTE *)v7 + 2);
    v50 = v7[2];
    v21 = *((_BYTE *)v7 + 6);
    v22 = (unsigned __int8)a1[1];
    v51 = v21;
    if ( v22 )
    {
      v45 = v3;
      v46 = *v2++ << v22;
      if ( 8 - v22 <= v3 )
        v45 = 8 - v22;
      for ( v3 -= v45; v45; --v45 )
      {
        v46 *= 2;
        v47 = ((unsigned __int64)v46 >> 8) & 1;
        *(_WORD *)v6 = *(__int16 *)((char *)&v48 + 2 * v47 + v47);
        v6[2] = *((_BYTE *)&v48 + 2 * v47 + v47 + 2);
        v6 += 3;
      }
    }
    v23 = v3 >> 3;
    if ( v3 >> 3 )
    {
      v24 = v6 + 6;
      do
      {
        v25 = *v2;
        v26 = *v2++;
        v26 >>= 7;
        *(_WORD *)v6 = *(__int16 *)((char *)&v48 + 2 * v26 + v26);
        v27 = *((_BYTE *)&v48 + 2 * v26 + v26 + 2);
        v28 = (v25 >> 6) & 1;
        v6[2] = v27;
        v6 += 24;
        *(_WORD *)((char *)v24 - 3) = *(__int16 *)((char *)&v48 + 2 * v28 + v28);
        v29 = *((_BYTE *)&v48 + 2 * v28 + v28 + 2);
        v30 = (v25 >> 5) & 1;
        *((_BYTE *)v24 - 1) = v29;
        *v24 = *(__int16 *)((char *)&v48 + 2 * v30 + v30);
        v24 += 12;
        v31 = *((_BYTE *)&v48 + 2 * v30 + v30 + 2);
        v32 = (v25 >> 4) & 1;
        *((_BYTE *)v24 - 22) = v31;
        *(_WORD *)((char *)v24 - 21) = *(__int16 *)((char *)&v48 + 2 * v32 + v32);
        v33 = *((_BYTE *)&v48 + 2 * v32 + v32 + 2);
        v34 = (v25 >> 3) & 1;
        *((_BYTE *)v24 - 19) = v33;
        *(v24 - 9) = *(__int16 *)((char *)&v48 + 2 * v34 + v34);
        v35 = *((_BYTE *)&v48 + 2 * v34 + v34 + 2);
        v36 = (v25 >> 2) & 1;
        *((_BYTE *)v24 - 16) = v35;
        *(_WORD *)((char *)v24 - 15) = *(__int16 *)((char *)&v48 + 2 * v36 + v36);
        *((_BYTE *)v24 - 13) = *((_BYTE *)&v48 + 2 * v36 + v36 + 2);
        v37 = (v25 >> 1) & 1;
        v38 = v25 & 1;
        *(v24 - 6) = *(__int16 *)((char *)&v48 + 2 * v37 + v37);
        *((_BYTE *)v24 - 10) = *((_BYTE *)&v48 + 2 * v37 + v37 + 2);
        *(_WORD *)((char *)v24 - 9) = *(__int16 *)((char *)&v48 + 2 * v38 + v38);
        *((_BYTE *)v24 - 7) = *((_BYTE *)&v48 + 2 * v38 + v38 + 2);
        --v23;
      }
      while ( v23 );
    }
    v39 = v3 & 7;
    if ( v39 )
    {
      v40 = *v2;
      do
      {
        v40 *= 2;
        v41 = ((unsigned __int64)v40 >> 8) & 1;
        *(_WORD *)v6 = *(__int16 *)((char *)&v48 + 2 * v41 + v41);
        v6 += 3;
        *(v6 - 1) = *((_BYTE *)&v48 + 2 * v41 + v41 + 2);
        --v39;
      }
      while ( v39 );
    }
  }
  else
  {
    v9 = 0LL;
    v10 = (char *)v7 + 3;
    do
    {
      v11 = *v10;
      v10 += 4;
      *((_BYTE *)&v48 + v9++) = v11;
    }
    while ( v9 < 2 );
    v12 = (unsigned __int8)a1[1];
    if ( a1[1] )
    {
      v42 = *v2++ << v12;
      v43 = 8 - v12;
      v44 = v3;
      if ( v43 <= v3 )
        v44 = v43;
      for ( v3 -= v44; v44; --v44 )
      {
        v42 *= 2;
        *v6++ = *((_BYTE *)&v48 + (((unsigned __int64)v42 >> 8) & 1));
      }
    }
    for ( i = v3 >> 3; i; --i )
    {
      v14 = *v2++;
      *v6 = *((_BYTE *)&v48 + ((unsigned __int64)v14 >> 7));
      v6[1] = *((_BYTE *)&v48 + ((v14 >> 6) & 1));
      v6[2] = *((_BYTE *)&v48 + ((v14 >> 5) & 1));
      v6[3] = *((_BYTE *)&v48 + ((v14 >> 4) & 1));
      v6[4] = *((_BYTE *)&v48 + ((v14 >> 3) & 1));
      v6[5] = *((_BYTE *)&v48 + ((v14 >> 2) & 1));
      v6[6] = *((_BYTE *)&v48 + ((v14 >> 1) & 1));
      v6[7] = *((_BYTE *)&v48 + (v14 & 1));
      v6 += 8;
    }
    v15 = v3 & 7;
    if ( v15 )
    {
      v20 = *v2;
      do
      {
        v20 *= 2;
        *v6++ = *((_BYTE *)&v48 + (((unsigned __int64)v20 >> 8) & 1));
        --v15;
      }
      while ( v15 );
    }
  }
  v16 = *a1;
  if ( (*a1 & 2) != 0 )
  {
    v17 = *((_DWORD *)a1 + 13);
    if ( v17 && (v18 = v17 - 1, (*((_DWORD *)a1 + 13) = v18) != 0) )
    {
      *((_QWORD *)a1 + 5) += *((int *)a1 + 15);
    }
    else if ( (v16 & 1) != 0 )
    {
      *((_QWORD *)a1 + 5) = *((_QWORD *)a1 + 3);
      *((_DWORD *)a1 + 13) = *((_DWORD *)a1 + 8);
    }
    else
    {
      *a1 = v16 & 0xFD;
    }
  }
  return a2;
}
