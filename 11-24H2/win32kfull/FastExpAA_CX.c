/*
 * XREFs of FastExpAA_CX @ 0x14011BAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FastExpAA_CX(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4, int a5)
{
  unsigned __int64 v5; // rbx
  _BYTE *v6; // rbp
  unsigned __int16 *v7; // r8
  _BYTE *v8; // r10
  __int64 v9; // rcx
  __int64 v10; // r13
  __int16 v11; // r11
  __int64 v12; // rdx
  __int16 v13; // r12
  int v14; // edi
  __int64 v15; // rdx
  __int64 result; // rax
  unsigned int v17; // ecx
  int v18; // r10d
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // edx
  int v24; // ecx
  int v25; // r9d
  int v26; // ebx
  int v27; // r13d
  int v28; // r11d
  int v29; // eax
  _BYTE *v30; // rdx
  int v31; // ecx
  _BYTE *v32; // rdx
  int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  int v36; // r9d
  int v37; // r8d
  int v38; // edx
  int v39; // ebx
  int v40; // r11d
  _BYTE *v41; // rbp
  int v42; // eax
  unsigned int v43; // ecx
  int v44; // eax
  unsigned int v45; // ecx
  int v46; // r15d
  int v47; // r13d
  unsigned int v48; // ecx
  int v49; // r10d
  int v50; // r8d
  _BYTE *v51; // rax
  int v52; // ecx
  _BYTE *v53; // r10
  __int16 v54; // [rsp+0h] [rbp-98h]
  unsigned __int8 v55; // [rsp+4h] [rbp-94h]
  __int16 v56; // [rsp+12h] [rbp-86h]
  __int64 v57; // [rsp+18h] [rbp-80h]
  unsigned __int16 *v58; // [rsp+28h] [rbp-70h]
  int v59; // [rsp+30h] [rbp-68h]
  unsigned __int64 v60; // [rsp+38h] [rbp-60h]
  __int64 v61; // [rsp+40h] [rbp-58h]
  unsigned __int8 v62; // [rsp+A0h] [rbp+8h]
  unsigned __int8 v63; // [rsp+A8h] [rbp+10h]
  _BYTE *v64; // [rsp+B0h] [rbp+18h]
  _BYTE *v65; // [rsp+B0h] [rbp+18h]
  _BYTE *v66; // [rsp+B0h] [rbp+18h]
  _BYTE *v67; // [rsp+B8h] [rbp+20h]

  v67 = a4;
  v64 = a3;
  v5 = *(_QWORD *)(a1 + 96);
  v6 = a3;
  v7 = *(unsigned __int16 **)(a1 + 88);
  v8 = a4;
  v9 = *(unsigned __int8 *)(a1 + 80);
  v10 = a5;
  v60 = v5;
  v11 = *(_WORD *)(a2 + v9 + 2 * v9 - 3);
  v12 = a2 + v9 + 2 * v9;
  LOBYTE(a4) = *(_BYTE *)(v12 - 1);
  v13 = *(_WORD *)v12;
  LOBYTE(v14) = *(_BYTE *)(v12 + 2);
  v15 = v12 + 3;
  result = v8 - v6;
  v57 = v8 - v6;
  while ( (unsigned __int64)v7 < v5 )
  {
    v17 = *v7++;
    v54 = v11;
    v11 = v13;
    v13 = *(_WORD *)v15;
    v18 = (unsigned __int8)a4;
    LODWORD(a4) = (unsigned __int8)v14;
    v14 = *(unsigned __int8 *)(v15 + 2);
    v61 = v15 + 3;
    v19 = result / v10;
    v58 = v7;
    v56 = v11;
    v55 = HIBYTE(v11);
    if ( v17 <= (unsigned int)v19 )
      LODWORD(v19) = v17;
    v62 = (unsigned __int8)a4;
    v63 = *(_BYTE *)(v15 + 2);
    if ( (_DWORD)v19 == 1 )
    {
      v6[2] = (unsigned int)(v18 + v14 + 2 * ((_DWORD)a4 + 2 * (v18 + (_DWORD)a4 + v14 + 4 * ((_DWORD)a4 + 1)))) >> 5;
      v6[1] = (HIBYTE(v54)
             + HIBYTE(v13)
             + 2 * (HIBYTE(v11) + 8 + 2 * (HIBYTE(v54) + HIBYTE(v11) + HIBYTE(v13) + 4 * (unsigned int)HIBYTE(v11)))) >> 5;
      v34 = (unsigned __int8)v54
          + (unsigned __int8)v13
          + 2
          * ((unsigned __int8)v11
           + 2 * ((unsigned __int8)v54 + (unsigned __int8)v11 + (unsigned __int8)v13 + 4 * ((unsigned __int8)v11 + 1)));
LABEL_12:
      v35 = v34 >> 5;
LABEL_13:
      LOBYTE(a4) = v62;
LABEL_14:
      v7 = v58;
      *v6 = v35;
      goto LABEL_15;
    }
    v20 = v19 - 2;
    if ( !v20 )
    {
      v36 = 3 * (_DWORD)a4;
      v6[2] = (unsigned int)(v36 + v18 + 2) >> 2;
      v37 = 3 * HIBYTE(v11);
      v6[1] = (v37 + (unsigned int)HIBYTE(v54) + 2) >> 2;
      v38 = 3 * (unsigned __int8)v11;
      v57 -= a5;
      *v6 = (v38 + (unsigned int)(unsigned __int8)v54 + 2) >> 2;
      v6 += v10;
      v6[2] = (unsigned int)(v36 + v14 + 2) >> 2;
      v6[1] = (v37 + (unsigned int)HIBYTE(v13) + 2) >> 2;
      v35 = ((unsigned int)(unsigned __int8)v13 + v38 + 2) >> 2;
      goto LABEL_13;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
      v39 = (unsigned __int8)v11;
      v14 = 2 * HIBYTE(v11);
      v40 = 2 * (unsigned __int8)v11;
      v6[2] = (unsigned int)(v18 + (_DWORD)a4 + 2 * (2 * (_DWORD)a4 + v18 + 2)) >> 3;
      v6[1] = (HIBYTE(v54) + v55 + 2 * (v14 + (unsigned int)HIBYTE(v54) + 2)) >> 3;
      *v6 = ((unsigned __int8)v54 + v39 + 2 * (v40 + (unsigned int)(unsigned __int8)v54 + 2)) >> 3;
      v41 = &v6[v10];
      v41[2] = (v18 + 8 + v63 + 14 * (int)a4) >> 4;
      v41[1] = (HIBYTE(v54) + 8 + HIBYTE(v13) + 14 * v55) >> 4;
      *v41 = ((unsigned __int8)v54 + (unsigned __int8)v13 + 16 * v39 - v40 + 8) >> 4;
      v6 = &v41[v10];
      v57 -= 2LL * a5;
      v42 = v14 + HIBYTE(v13) + 2;
      LOBYTE(v14) = v63;
      v6[2] = ((unsigned int)a4 + v63 + 2 * (2 * (_DWORD)a4 + v63) + 4) >> 3;
      v43 = v55 + HIBYTE(v13) + 2 * v42;
      v44 = v40 + (unsigned __int8)v13;
      v11 = v56;
      v6[1] = v43 >> 3;
      v45 = v39 + 4 + (unsigned __int8)v13 + 2 * v44;
      v5 = v60;
      v35 = v45 >> 3;
      goto LABEL_13;
    }
    v22 = v21 - 1;
    if ( !v22 )
    {
      v46 = v18;
      v47 = 2 * HIBYTE(v11);
      v48 = (unsigned int)(v18 + (_DWORD)a4 + 2 * (v18 + 2 * (_DWORD)a4 + 2)) >> 3;
      v49 = 4 * (_DWORD)a4;
      v6[2] = v48;
      LODWORD(a4) = 4 * HIBYTE(v11);
      v6[1] = (HIBYTE(v54) + HIBYTE(v11) + 2 * (v47 + (unsigned int)HIBYTE(v54) + 2)) >> 3;
      v50 = 4 * (unsigned __int8)v11;
      *v64 = ((unsigned __int8)v54
            + (unsigned __int8)v11
            + 2 * (2 * (unsigned __int8)v11 + (unsigned int)(unsigned __int8)v54 + 2)) >> 3;
      v51 = &v64[a5];
      v51[2] = (unsigned int)(v49 + v46 + 8 + v14 + 2 * (v49 + v46)) >> 4;
      v51[1] = ((_DWORD)a4 + HIBYTE(v54) + 8 + HIBYTE(v13) + 2 * ((unsigned int)a4 + HIBYTE(v54))) >> 4;
      *v51 = (v50 + (unsigned __int8)v54 + 8 + (unsigned __int8)v13 + 2 * (v50 + (unsigned int)(unsigned __int8)v54)) >> 4;
      v52 = v49 + v14;
      v53 = &v51[a5];
      v53[2] = (unsigned int)(v52 + 8 + v46 + 2 * v52) >> 4;
      v53[1] = ((_DWORD)a4 + HIBYTE(v13) + 8 + HIBYTE(v54) + 2 * ((unsigned int)a4 + HIBYTE(v13))) >> 4;
      *v53 = (v50 + (unsigned __int8)v13 + 8 + (unsigned __int8)v54 + 2 * (v50 + (unsigned int)(unsigned __int8)v13)) >> 4;
      LOBYTE(a4) = v62;
      v57 = v57 - 2LL * a5 - a5;
      v66 = &v53[a5];
      LODWORD(v51) = v47 + HIBYTE(v13) + 2;
      v10 = a5;
      v66[2] = (v62 + v14 + 2 * (v14 + 2 * (unsigned int)v62 + 2)) >> 3;
      v5 = v60;
      v66[1] = (HIBYTE(v11) + (unsigned int)HIBYTE(v13) + 2 * (_DWORD)v51) >> 3;
      v35 = ((unsigned __int8)v11
           + 4
           + (unsigned __int8)v13
           + 2 * (2 * (unsigned __int8)v11 + (unsigned int)(unsigned __int8)v13)) >> 3;
      v6 = v66;
      goto LABEL_14;
    }
    if ( v22 == 1 )
    {
      v23 = (int)a4;
      v24 = 19 * (_DWORD)a4;
      v25 = (unsigned __int8)v11;
      v26 = 25 * v23;
      v27 = 19 * (unsigned __int8)v11;
      v28 = 25 * HIBYTE(v11);
      v59 = v24;
      v64[2] = (unsigned int)(13 * v18 + 16 + v24) >> 5;
      v64[1] = (13 * HIBYTE(v54) + 16 + 19 * (unsigned int)v55) >> 5;
      *v64 = (v27 + 13 * (unsigned int)(unsigned __int8)v54 + 16) >> 5;
      v65 = &v64[a5];
      v65[2] = (unsigned int)(v14 + 25 * v23 + 2 * (v18 + 2 * v18 + 8)) >> 5;
      v65[1] = (v28 + 6 * HIBYTE(v54) + (unsigned int)HIBYTE(v13) + 16) >> 5;
      *v65 = (25 * v25 + (unsigned __int8)v13
                       + 2 * ((unsigned __int8)v54 + 2 * ((unsigned int)(unsigned __int8)v54 + 4))) >> 5;
      v29 = 13 * v23;
      v30 = &v65[a5];
      v30[2] = (unsigned int)(v18 + v14 + 2 * (v18 + v14 + v29 + 8)) >> 5;
      v30[1] = (HIBYTE(v54) + HIBYTE(v13) + 2 * (HIBYTE(v54) + HIBYTE(v13) + 13 * (unsigned int)v55 + 8)) >> 5;
      *v30 = ((unsigned __int8)v54
            + (unsigned __int8)v13
            + 2 * ((unsigned __int8)v54 + (unsigned int)(unsigned __int8)v13 + 13 * v25 + 8)) >> 5;
      v31 = v26 + 6 * v14;
      v5 = v60;
      v32 = &v30[a5];
      v6 = &v32[a5];
      v32[2] = (unsigned int)(v31 + v18 + 16) >> 5;
      v33 = v28 + 6 * HIBYTE(v13);
      v11 = v56;
      v32[1] = (v33 + (unsigned int)HIBYTE(v54) + 16) >> 5;
      *v32 = (25 * v25 + (unsigned __int8)v54
                       + 2 * ((unsigned __int8)v13 + 2 * ((unsigned int)(unsigned __int8)v13 + 4))) >> 5;
      v57 -= 4LL * a5;
      v6[2] = (unsigned int)(13 * v14 + v59 + 16) >> 5;
      v6[1] = (13 * HIBYTE(v13) + 19 * (unsigned int)v55 + 16) >> 5;
      v34 = v27 + 13 * (unsigned __int8)v13 + 16;
      v10 = a5;
      goto LABEL_12;
    }
LABEL_15:
    v6 += v10;
    result = v57 - a5;
    v15 = v61;
    v64 = v6;
    v57 = result;
    if ( v6 == v67 )
      return result;
  }
  return result;
}
