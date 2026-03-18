/*
 * XREFs of ?DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z @ 0x14038E358
 * Callers:
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x14038D54C (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkpGetBilinearLineFromSource(
        unsigned __int8 *a1,
        int a2,
        int a3,
        struct _PIXEL *a4,
        struct _UFIXPOINT_PIXEL *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // edi
  unsigned __int8 *v11; // r11
  _DWORD *v12; // r8
  __int64 v13; // r10
  unsigned int v14; // eax
  int v15; // r10d
  __int64 v16; // r15
  struct _UFIXPOINT_PIXEL *v17; // rsi
  unsigned __int8 *v18; // r14
  unsigned int v19; // ecx
  int v20; // r8d
  int v21; // eax
  int v22; // r12d
  int v23; // edx
  int v24; // eax
  unsigned int v25; // eax
  bool v26; // cc
  unsigned int v27; // ecx
  int v28; // edi
  unsigned int v29; // r8d
  int v30; // r11d
  int v31; // r10d
  int v32; // ebp
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  int v36; // ebp
  int v37; // r12d
  int v38; // r14d
  int v39; // r15d
  int v40; // esi
  unsigned int v41; // r8d
  int v42; // edx
  unsigned int v43; // eax
  struct _UFIXPOINT_PIXEL *v44; // rdi
  unsigned int v45; // ecx
  int v46; // edx
  int v47; // r8d
  int v48; // edx
  int v49; // r8d
  unsigned int v50; // ecx
  int v51; // eax
  int v52; // r10d
  int v53; // r8d
  int v54; // eax
  int v55; // edx
  __int64 v56; // [rsp+8h] [rbp-50h]
  __int64 v57; // [rsp+10h] [rbp-48h]
  int v58; // [rsp+60h] [rbp+8h]
  int v59; // [rsp+68h] [rbp+10h]
  unsigned __int8 v60; // [rsp+68h] [rbp+10h]
  int v61; // [rsp+70h] [rbp+18h]
  unsigned __int8 v62; // [rsp+70h] [rbp+18h]
  int v63; // [rsp+88h] [rbp+30h]
  int v64; // [rsp+90h] [rbp+38h]
  int v65; // [rsp+90h] [rbp+38h]

  v8 = a7;
  v11 = &a1[a7 * a2];
  if ( a6 == a3 )
  {
    if ( a7 < a8 )
    {
      v12 = (_DWORD *)((char *)a5 + 8);
      v13 = (unsigned int)(a8 - a7);
      do
      {
        v14 = *(_DWORD *)v11;
        if ( a4 )
        {
          *(_DWORD *)a4 = v14;
          a4 = (struct _PIXEL *)((char *)a4 + 4);
        }
        else
        {
          v12[1] = HIBYTE(v14) << 16;
          *v12 = BYTE2(v14) << 16;
          *(v12 - 2) = (unsigned __int8)v14 << 16;
          *(v12 - 1) = BYTE1(v14) << 16;
          v12 += 4;
        }
        v11 += a2;
        --v13;
      }
      while ( v13 );
    }
    return;
  }
  v15 = a7 * a6 % a3;
  if ( a6 > a3 )
  {
    v16 = a2;
    v17 = a5;
    if ( a7 < a8 )
    {
      v18 = &v11[-a2];
      do
      {
        if ( v15 && v15 < a3 )
        {
          v19 = *(_DWORD *)v11;
          v20 = *(_DWORD *)v18;
          v59 = HIWORD(*(_DWORD *)v11);
          v63 = HIWORD(*(_DWORD *)v18);
          v21 = (unsigned __int16)((v15 << 16) / (unsigned int)a3);
          v58 = *(_DWORD *)v11 >> 8;
          v22 = 0x10000 - v21;
          v64 = v21;
          v61 = *(_DWORD *)v18 >> 8;
          v23 = v21 * HIBYTE(*(_DWORD *)v18);
          v24 = (0x10000 - v21) * HIBYTE(*(_DWORD *)v11);
          if ( !a4 )
          {
            *((_DWORD *)v17 + 3) = v24 + v23;
            *((_DWORD *)v17 + 2) = v22 * (unsigned __int8)v59 + v64 * (unsigned __int8)v63;
            *((_DWORD *)v17 + 1) = v22 * (unsigned __int8)v58 + v64 * (unsigned __int8)v61;
            *(_DWORD *)v17 = v22 * (unsigned __int8)v19 + v64 * (unsigned __int8)v20;
LABEL_21:
            v17 = (struct _UFIXPOINT_PIXEL *)((char *)v17 + 16);
            goto LABEL_22;
          }
          *((_BYTE *)a4 + 3) = (unsigned int)(v23 + 0x8000 + v24) >> 16;
          *((_BYTE *)a4 + 2) = (v22 * (unsigned __int8)v59 + v64 * (unsigned int)(unsigned __int8)v63 + 0x8000) >> 16;
          *((_BYTE *)a4 + 1) = (v22 * (unsigned __int8)v58 + v64 * (unsigned int)(unsigned __int8)v61 + 0x8000) >> 16;
          *(_BYTE *)a4 = (v64 * (unsigned __int8)v20 + v22 * (unsigned int)(unsigned __int8)v19 + 0x8000) >> 16;
        }
        else
        {
          v25 = *(_DWORD *)v11;
          if ( !a4 )
          {
            *((_DWORD *)v17 + 3) = HIBYTE(v25) << 16;
            *((_DWORD *)v17 + 2) = BYTE2(v25) << 16;
            *(_DWORD *)v17 = (unsigned __int8)v25 << 16;
            *((_DWORD *)v17 + 1) = BYTE1(v25) << 16;
            goto LABEL_21;
          }
          *(_DWORD *)a4 = v25;
        }
        a4 = (struct _PIXEL *)((char *)a4 + 4);
LABEL_22:
        v26 = v15 < a3;
        v15 -= a3;
        if ( v26 )
          v15 += a6;
        if ( v15 < a3 )
        {
          v11 += v16;
          v18 += v16;
          ++v8;
        }
      }
      while ( v8 < a8 );
    }
    if ( !v15 )
      return;
    v27 = *(_DWORD *)v11;
    v28 = *(_DWORD *)v11 >> 8;
    v29 = *(_DWORD *)&v11[-v16];
    v30 = HIWORD(*(_DWORD *)v11);
    v31 = (unsigned __int16)((v15 << 16) / a3);
    v32 = 0x10000 - v31;
    v33 = (0x10000 - v31) * HIBYTE(v27);
    v34 = v31 * HIBYTE(v29);
    if ( !a4 )
    {
      *((_DWORD *)v17 + 3) = v33 + v34;
      *((_DWORD *)v17 + 2) = v32 * (unsigned __int8)v30 + v31 * BYTE2(v29);
      *((_DWORD *)v17 + 1) = v31 * BYTE1(v29) + v32 * (unsigned __int8)v28;
      *(_DWORD *)v17 = v32 * (unsigned __int8)v27 + v31 * (unsigned __int8)v29;
      return;
    }
    *((_BYTE *)a4 + 3) = (unsigned int)(v34 + 0x8000 + v33) >> 16;
    *((_BYTE *)a4 + 2) = (v32 * (unsigned __int8)v30 + 0x8000 + v31 * (unsigned int)BYTE2(v29)) >> 16;
    *((_BYTE *)a4 + 1) = (v31 * BYTE1(v29) + v32 * (unsigned int)(unsigned __int8)v28 + 0x8000) >> 16;
    v35 = v31 * (unsigned __int8)v29 + v32 * (unsigned __int8)v27 + 0x8000;
LABEL_47:
    *(_BYTE *)a4 = BYTE2(v35);
    return;
  }
  v56 = a2;
  v36 = 0;
  v37 = v15 << 16;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v65 = (unsigned __int16)((a6 << 16) / a3);
  if ( v15 > 0 )
  {
    v41 = *(_DWORD *)&v11[-a2];
    v42 = (unsigned __int16)(v37 / a3);
    v39 = v42 * BYTE2(v41);
    v40 = v42 * HIBYTE(v41);
    v38 = v42 * BYTE1(v41);
    v36 = v42 * (unsigned __int8)v41;
  }
  if ( v8 >= a8 )
  {
    v44 = a5;
  }
  else
  {
    v43 = a8 - v8;
    v44 = a5;
    v57 = v43;
    do
    {
      v45 = *(_DWORD *)v11;
      v15 += a6;
      v37 += a6 << 16;
      v46 = HIWORD(*(_DWORD *)v11);
      v47 = *(_DWORD *)v11 >> 8;
      v60 = v46;
      v62 = v47;
      if ( v15 >= a3 )
      {
        v37 -= a3 << 16;
        v15 -= a3;
        v48 = (unsigned __int16)(v37 / a3);
        v49 = v65 - v48;
        if ( a4 )
        {
          *((_BYTE *)a4 + 3) = (unsigned int)(v40 + HIBYTE(v45) * v49 + 0x8000) >> 16;
          *((_BYTE *)a4 + 2) = (v39 + v49 * (unsigned int)v60 + 0x8000) >> 16;
          *((_BYTE *)a4 + 1) = (v38 + v49 * (unsigned int)v62 + 0x8000) >> 16;
          *(_BYTE *)a4 = (v36 + v49 * (unsigned int)(unsigned __int8)v45 + 0x8000) >> 16;
          a4 = (struct _PIXEL *)((char *)a4 + 4);
          v48 = (unsigned __int16)(v37 / a3);
        }
        else
        {
          *((_DWORD *)v44 + 3) = v40 + HIBYTE(v45) * v49;
          *((_DWORD *)v44 + 2) = v39 + v49 * v60;
          *((_DWORD *)v44 + 1) = v38 + v49 * v62;
          *(_DWORD *)v44 = v36 + v49 * (unsigned __int8)v45;
          v44 = (struct _UFIXPOINT_PIXEL *)((char *)v44 + 16);
        }
        v38 = v48 * BYTE1(v45);
        v40 = v48 * HIBYTE(v45);
        v39 = v48 * BYTE2(v45);
        v36 = v48 * (unsigned __int8)v45;
      }
      else
      {
        v40 += v65 * HIBYTE(v45);
        v39 += v65 * (unsigned __int8)v46;
        v38 += v65 * (unsigned __int8)v47;
        v36 += v65 * (unsigned __int8)v45;
      }
      v11 += v56;
      --v57;
    }
    while ( v57 );
  }
  if ( v15 )
  {
    v50 = *(_DWORD *)v11;
    v51 = a3 - v15;
    v52 = *(_DWORD *)v11 >> 8;
    v53 = (unsigned __int16)((v51 << 16) / a3);
    v54 = v53 * HIBYTE(*(_DWORD *)v11);
    v55 = HIWORD(*(_DWORD *)v11);
    if ( !a4 )
    {
      *((_DWORD *)v44 + 3) = v40 + v54;
      *((_DWORD *)v44 + 2) = v39 + v53 * (unsigned __int8)v55;
      *((_DWORD *)v44 + 1) = v38 + v53 * (unsigned __int8)v52;
      *(_DWORD *)v44 = v36 + v53 * (unsigned __int8)v50;
      return;
    }
    *((_BYTE *)a4 + 3) = (unsigned int)(v40 + v54 + 0x8000) >> 16;
    *((_BYTE *)a4 + 2) = (v39 + v53 * (unsigned int)(unsigned __int8)v55 + 0x8000) >> 16;
    *((_BYTE *)a4 + 1) = (v38 + v53 * (unsigned int)(unsigned __int8)v52 + 0x8000) >> 16;
    v35 = v36 + v53 * (unsigned __int8)v50 + 0x8000;
    goto LABEL_47;
  }
}
