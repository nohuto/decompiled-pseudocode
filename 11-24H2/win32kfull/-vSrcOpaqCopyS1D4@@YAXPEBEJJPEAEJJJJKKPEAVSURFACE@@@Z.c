/*
 * XREFs of ?vSrcOpaqCopyS1D4@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x140306420
 * Callers:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x140121B88 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 * Callees:
 *     <none>
 */

void __fastcall vSrcOpaqCopyS1D4(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        unsigned int a10)
{
  char v10; // r11
  __int64 v11; // r13
  int v12; // edi
  char v14; // r10
  __int64 v15; // rsi
  int v16; // ebx
  __int64 v17; // r12
  signed int v18; // r10d
  char v19; // r11
  const unsigned __int8 *v20; // r8
  unsigned int v21; // r11d
  int v22; // edx
  int v23; // r14d
  int v24; // edi
  unsigned __int8 *v25; // rdx
  __int64 v26; // r15
  __int64 v27; // r9
  __int64 v28; // rdi
  const unsigned __int8 *v29; // r10
  unsigned int v30; // ecx
  unsigned __int8 *v31; // r8
  int v32; // r11d
  const unsigned __int8 *v33; // r10
  char v34; // si
  int v35; // ebx
  const unsigned __int8 *v36; // r15
  unsigned __int8 v37; // r9
  unsigned __int8 *v38; // rdx
  int v39; // ecx
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // rax
  __int64 v42; // r13
  const unsigned __int8 *v43; // r10
  int v44; // eax
  char v45; // bl
  __int64 v46; // r15
  const unsigned __int8 *v47; // rsi
  unsigned __int8 v48; // r9
  int v49; // edi
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  const unsigned __int8 *v52; // r8
  unsigned __int8 *v53; // rdx
  signed int v54; // r14d
  const unsigned __int8 *v55; // rbx
  unsigned __int8 v56; // cl
  unsigned __int64 v57; // r9
  int v58; // r10d
  unsigned __int64 v59; // rax
  __int64 v60; // [rsp+0h] [rbp-10h]
  const unsigned __int8 *v61; // [rsp+8h] [rbp-8h]
  const unsigned __int8 *v62; // [rsp+50h] [rbp+40h]
  unsigned __int8 *v63; // [rsp+68h] [rbp+58h]
  int v64; // [rsp+70h] [rbp+60h]
  signed int v65; // [rsp+90h] [rbp+80h]

  v63 = a4;
  v62 = a1;
  v10 = a10;
  v11 = a5;
  v12 = a6 - a5;
  v14 = a9 | (16 * a10);
  LOBYTE(a10) = a10 | (16 * a10);
  v15 = a2;
  BYTE1(a10) = v14;
  v14 *= 16;
  v16 = a2 & 7;
  v60 = a3;
  HIBYTE(a10) = a9 | v14;
  v17 = a3 * (__int64)a8;
  BYTE2(a10) = v10 | v14;
  v18 = a6 - a5 + a2;
  v19 = a6 - a5 + a2;
  v20 = &a1[(__int64)(a2 + 7) >> 3];
  v64 = 8 - v16;
  v21 = v19 & 7;
  v65 = v18;
  v61 = &v20[v17];
  v22 = v16 != 0 ? 8 - v16 : 0;
  v23 = a7;
  v24 = v12 - (v21 + v22);
  if ( v24 > 0 )
  {
    v25 = &a4[(__int64)(v22 + (int)v11) >> 1];
    v26 = a3 - (v24 >> 3);
    v27 = (__int64)v24 >> 3;
    v28 = a7 - (v24 >> 1);
    do
    {
      v29 = &v20[v27];
      do
      {
        v30 = *v20++;
        *v25 = *((_BYTE *)&a10 + ((unsigned __int64)v30 >> 6));
        v25[1] = *((_BYTE *)&a10 + ((v30 >> 4) & 3));
        v25[2] = *((_BYTE *)&a10 + ((v30 >> 2) & 3));
        v25[3] = *((_BYTE *)&a10 + (v30 & 3));
        v25 += 4;
      }
      while ( v20 != v29 );
      v25 += v28;
      v20 += v26;
    }
    while ( v20 != v61 );
    a1 = v62;
    a4 = v63;
    v18 = v65;
  }
  if ( v16 )
  {
    v31 = &a4[v11 >> 1];
    if ( (((unsigned int)v15 ^ v18) & 0xFFFFFFF8) == 0 )
    {
      v32 = v21 - v16;
      if ( v32 > 0 )
      {
        v33 = &a1[v15 >> 3];
        v34 = v16 & 0xFE;
        v35 = v16 & 1;
        v36 = &v33[v17];
        do
        {
          v37 = *v33 << v34;
          v38 = v31;
          v39 = v32;
          if ( v35 )
          {
            v38 = v31 + 1;
            *v31 ^= (*((_BYTE *)&a10 + ((unsigned __int64)v37 >> 6)) ^ *v31) & 0xF;
            v39 = v32 - 1;
            v37 *= 4;
          }
          if ( v39 >= 2 )
          {
            v40 = (unsigned __int64)(unsigned int)v39 >> 1;
            v39 -= 2 * ((unsigned int)v39 >> 1);
            do
            {
              v41 = (unsigned __int64)v37 >> 6;
              v37 *= 4;
              *v38++ = *((_BYTE *)&a10 + v41);
              --v40;
            }
            while ( v40 );
          }
          if ( v39 )
            *v38 = *((_BYTE *)&a10 + ((unsigned __int64)v37 >> 6)) ^ (*v38 ^ *((_BYTE *)&a10
                                                                             + ((unsigned __int64)v37 >> 6))) & 0xF;
          v33 += v60;
          v31 += a7;
        }
        while ( v33 != v36 );
      }
      return;
    }
    v42 = v60;
    v43 = &a1[v15 >> 3];
    v44 = (9 - v16) >> 1;
    v45 = v16 & 0xFE;
    v46 = a7 - v44;
    v47 = &v43[v17];
    do
    {
      v48 = *v43 << v45;
      v49 = v64;
      if ( (v64 & 1) != 0 )
      {
        v50 = (unsigned __int64)v48 >> 6;
        v48 *= 4;
        *v31 ^= (*((_BYTE *)&a10 + v50) ^ *v31) & 0xF;
        ++v31;
        v49 = v64 - 1;
      }
      for ( ; v49; v49 -= 2 )
      {
        v51 = (unsigned __int64)v48 >> 6;
        v48 *= 4;
        *v31++ = *((_BYTE *)&a10 + v51);
      }
      v43 += v60;
      v31 += v46;
    }
    while ( v43 != v47 );
    v23 = a7;
  }
  else
  {
    v42 = v60;
  }
  if ( v21 )
  {
    v52 = &v62[(__int64)v65 >> 3];
    v53 = &v63[(__int64)(int)(a6 - v21) >> 1];
    v54 = v23 - ((v21 + 1) >> 1);
    v55 = &v52[v17];
    do
    {
      v56 = *v52;
      if ( v21 < 2 )
        goto LABEL_34;
      v57 = (unsigned __int64)v21 >> 1;
      v58 = v21 - 2 * v57;
      do
      {
        v59 = (unsigned __int64)v56 >> 6;
        v56 *= 4;
        *v53++ = *((_BYTE *)&a10 + v59);
        --v57;
      }
      while ( v57 );
      if ( v58 )
      {
LABEL_34:
        *v53 = *((_BYTE *)&a10 + ((unsigned __int64)v56 >> 6)) ^ (*v53 ^ *((_BYTE *)&a10 + ((unsigned __int64)v56 >> 6))) & 0xF;
        ++v53;
      }
      v52 += v42;
      v53 += v54;
    }
    while ( v52 != v55 );
  }
}
