/*
 * XREFs of bGIQtoIntegerLine @ 0x140007A28
 * Callers:
 *     vDrawLine @ 0x140007688 (vDrawLine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bGIQtoIntegerLine(int *a1, int *a2, __int64 a3, _DWORD *a4)
{
  int v4; // r10d
  unsigned int v5; // r11d
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // r13
  __int64 v9; // rbx
  int v11; // esi
  int v12; // esi
  int v13; // r8d
  int v14; // r9d
  int v15; // r9d
  int v16; // r10d
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  unsigned int v20; // r10d
  int v21; // eax
  int v22; // r8d
  unsigned int v23; // ecx
  int v24; // ecx
  int v25; // eax
  signed __int64 v26; // rbp
  __int64 v27; // rbp
  int v28; // r15d
  signed __int64 v29; // r14
  int v30; // edx
  int v31; // edi
  unsigned __int64 v32; // r8
  int *v33; // rax
  int v34; // r12d
  int v35; // r13d
  int v36; // r15d
  int v37; // r10d
  int v38; // r15d
  int v39; // r10d
  int v40; // r13d
  int v41; // r12d
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // edx
  int v46; // r8d
  int v47; // ecx
  int v48; // eax
  int v50; // ecx
  int v51; // ecx
  __int64 v52; // r10
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rtt
  int v55; // [rsp+50h] [rbp+8h]
  int v56; // [rsp+58h] [rbp+10h]

  v4 = *a1;
  v5 = 0;
  v6 = *a2;
  v7 = -*a1;
  v8 = a4;
  v9 = 4LL;
  if ( *a2 >= *a1 )
    v7 = *a1;
  if ( v6 >= v4 )
    v9 = 0LL;
  v11 = -*a2;
  if ( v6 >= v4 )
    v11 = *a2;
  v12 = v11 - v7;
  if ( v12 >= 0 )
  {
    v13 = a1[1];
    v14 = a2[1];
    if ( v14 < v13 )
    {
      v13 = -v13;
      v14 = -v14;
      v9 = (unsigned int)v9 | 2;
    }
    v15 = v14 - v13;
    if ( v15 >= 0 )
    {
      v16 = v7;
      if ( v15 >= (unsigned int)v12 )
      {
        if ( v15 == v12 )
        {
          v9 = (unsigned int)v9 | 8;
        }
        else
        {
          v17 = v12;
          v16 = v13;
          v12 = v15;
          v13 = v7;
          v15 = v17;
          v9 = (unsigned int)v9 | 1;
        }
      }
      v18 = v16;
      v19 = dword_14034EA40[v9] | v9;
      v20 = v16 & 0xF;
      v55 = v18 >> 4;
      v21 = v13;
      v22 = v13 & 0xF;
      v56 = v21 >> 4;
      v23 = v22 + 8;
      if ( (unsigned int)v12 > 0x1FFFFFF )
      {
        v26 = v12 * (unsigned __int64)v23 - v15 * (unsigned __int64)v20 - 1;
        if ( (v19 & 0x8000) == 0 )
          v26 = v12 * (unsigned __int64)v23 - v15 * (unsigned __int64)v20;
      }
      else
      {
        v24 = v12 * v23 - v20 * v15;
        v25 = v24 - 1;
        if ( (v19 & 0x200) == 0 )
          v25 = v24;
        v26 = v25;
      }
      v27 = v26 >> 4;
      v28 = ((_BYTE)v15 + (_BYTE)v22) & 0xF;
      LODWORD(v29) = ((v12 + v20) >> 4) - 1;
      v30 = ((_BYTE)v12 + (_BYTE)v20) & 0xF;
      if ( (((_BYTE)v12 + (_BYTE)v20) & 0xF) != 0 )
      {
        if ( (((_BYTE)v15 + (_BYTE)v22) & 0xF) != 0 )
        {
          v50 = 8 - v28;
          if ( 8 - v28 < 0 )
            v50 = v28 - 8;
          if ( v50 <= v30 )
            LODWORD(v29) = (v12 + v20) >> 4;
        }
        else if ( v30 - (unsigned int)((v19 & 0x100) != 0) + 8 >= 0x10 )
        {
          LODWORD(v29) = (v12 + v20) >> 4;
        }
      }
      if ( (v19 & 0x108) != 0x108 )
        goto LABEL_20;
      if ( (((_BYTE)v12 + (_BYTE)v20) & 0xF) != 0 && v28 == v30 + 8 )
        LODWORD(v29) = v29 - 1;
      if ( v20 && v22 == v20 + 8 )
      {
        v31 = 0;
      }
      else
      {
LABEL_20:
        v31 = 0;
        if ( v20 )
        {
          if ( v22 )
          {
            v51 = 8 - v22;
            if ( 8 - v22 < 0 )
              v51 = v22 - 8;
            if ( v51 <= (int)v20 )
              v31 = 1;
          }
          else
          {
            LOBYTE(v31) = v20 - ((v19 & 0x100) != 0) + 8 >= 0x10;
          }
        }
      }
      LODWORD(v32) = 0;
      if ( v27 >= 0 )
        LODWORD(v32) = v27 >= v12 - (v15 & (unsigned int)-v31);
      if ( (int)v29 < v31 )
      {
        v8[3] = 0;
        return 1;
      }
      if ( !a3 )
      {
        v27 += (v15 & (unsigned int)-v31) - (unsigned __int64)(unsigned int)v12;
        if ( v27 >= 0 )
          LODWORD(v27) = v27 - v12;
LABEL_43:
        v45 = v32 + v56;
        *v8 = v19;
        v8[4] = v12;
        v46 = v31 + v55;
        v8[5] = v15;
        if ( (v19 & 1) == 0 )
          v46 = v45;
        v8[6] = v27;
        if ( (v19 & 1) == 0 )
          v45 = v31 + v55;
        v8[7] = 1;
        v47 = -v45;
        v5 = 1;
        if ( (v19 & 4) == 0 )
          v47 = v45;
        v48 = -v46;
        v8[1] = v47;
        if ( (v19 & 2) == 0 )
          v48 = v46;
        v8[2] = v48;
        v8[3] = v29 - v31 + 1;
        return v5;
      }
      v33 = (int *)(a3 + 16LL * (v19 & 3));
      if ( (v19 & 4) != 0 )
      {
        if ( (v19 & 1) == 0 )
        {
          v34 = v33[1];
          v37 = 1 - v33[2];
          v36 = 1 - *v33;
          v35 = v33[3];
          goto LABEL_28;
        }
        v34 = 1 - v33[3];
        v35 = 1 - v33[1];
      }
      else
      {
        v34 = v33[1];
        v35 = v33[3];
      }
      v36 = v33[2];
      v37 = *v33;
LABEL_28:
      v38 = v36 - v55;
      v39 = v37 - v55;
      v40 = v35 - v56;
      v41 = v34 - v56;
      if ( v40 <= (int)v32 || v38 <= v31 || v39 > (int)v29 )
        goto LABEL_77;
      if ( (int)v29 >= v38 )
        LODWORD(v29) = v38 - 1;
      v42 = ~v27;
      v43 = v27 + v15 * (__int64)(int)v29;
      if ( v43 >= 0xFFFFFFFFLL )
        v43 /= (unsigned __int64)(unsigned int)v12;
      else
        LODWORD(v43) = (unsigned int)v43 / v12;
      if ( v41 > (int)v43 )
        goto LABEL_77;
      if ( v40 <= (int)v43 )
      {
        v29 = v42 + v12 * (__int64)v40;
        if ( v29 >= 0xFFFFFFFFLL )
        {
          v54 = v42 + v12 * (__int64)v40;
          v42 = ~v27;
          v29 = v54 / (unsigned int)v15;
        }
        else
        {
          LODWORD(v29) = (unsigned int)v29 / v15;
        }
      }
      if ( v39 > v31
        && ((v31 = v39, v44 = v27 + v15 * (__int64)v39, v44 >= 0xFFFFFFFFLL)
          ? (v32 = (v27 + v15 * (__int64)v39) / (unsigned __int64)(unsigned int)v12)
          : (LODWORD(v32) = (unsigned int)v44 / v12),
            v40 <= (int)v32)
        || v41 > (int)v32
        && ((LODWORD(v32) = v41, v52 = v42 + v12 * (__int64)v41, v52 >= 0xFFFFFFFFLL)
          ? (v53 = v52 / (unsigned __int64)(unsigned int)v15)
          : (LODWORD(v53) = (unsigned int)v52 / v15),
            v31 = v53 + 1,
            v38 <= (int)v53 + 1) )
      {
LABEL_77:
        a4[3] = 0;
        return 1;
      }
      v8 = a4;
      LODWORD(v27) = v15 * v31 - v12 * v32 - v12 + v27;
      goto LABEL_43;
    }
  }
  return v5;
}
