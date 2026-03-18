/*
 * XREFs of ?vStrWrite24@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x14018A9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1400A2850 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A315C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x140154410 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

void __fastcall stretch::vStrWrite24(
        LONG *this,
        struct stretch::_STRRUN *a2,
        struct stretch::_XRUNLEN *a3,
        struct SURFACE *a4)
{
  LONG *v4; // rdi
  struct stretch::_STRRUN *v7; // r12
  bool v9; // zf
  unsigned __int64 v10; // r10
  LONG v11; // ecx
  unsigned __int64 v12; // r14
  LONG v13; // edx
  __int64 v14; // rax
  int v15; // r14d
  __int64 v16; // r11
  LONG v17; // edx
  __int64 v18; // rax
  LONG v19; // r9d
  LONG left; // r8d
  LONG v21; // ecx
  int v22; // r9d
  char *v23; // r10
  char *v24; // r11
  __int64 v25; // rdx
  __int64 v26; // r8
  int *v27; // rdx
  __int16 v28; // ax
  char v29; // cl
  __int64 v30; // r14
  __int64 v31; // rdx
  unsigned int v32; // r10d
  char *v33; // r9
  char *v34; // r8
  int *v35; // rdx
  __int64 v36; // r11
  __int16 v37; // ax
  char v38; // cl
  int i; // r15d
  size_t v40; // r15
  __int64 v41; // rsi
  char *v42; // rbx
  char *v43; // rbx
  LONG v44; // ebx
  LONG v45; // esi
  __int64 v46; // rcx
  struct stretch::_STRRUN *v47; // rsi
  __int64 v48; // r10
  int v49; // edx
  __int64 v50; // r15
  int *v51; // r12
  int v52; // [rsp+30h] [rbp-30h]
  __int64 v53; // [rsp+38h] [rbp-28h]
  LONG v54; // [rsp+38h] [rbp-28h]
  __int64 v55; // [rsp+40h] [rbp-20h]
  struct _RECTL si128; // [rsp+48h] [rbp-18h] BYREF
  int v58; // [rsp+98h] [rbp+38h]

  if ( a2 )
  {
    v4 = this + 2;
    v7 = a2;
    if ( a4 )
    {
      v9 = *((_BYTE *)a4 + 20) == 1;
      si128 = 0LL;
      if ( v9 )
      {
        v10 = *(_QWORD *)((char *)a4 + 12);
        v11 = *this;
        v12 = HIDWORD(v10);
        v58 = v10;
        si128 = *(struct _RECTL *)((char *)a4 + 4);
        if ( v11 < SHIDWORD(v10) )
        {
          v13 = v11 + this[1];
          v14 = HIDWORD(*(_QWORD *)&si128.left);
          if ( v13 > si128.top )
          {
            if ( v11 >= si128.top )
              LODWORD(v14) = v11;
            if ( v13 < SHIDWORD(v10) )
              LODWORD(v12) = v11 + this[1];
            v15 = v12 - v14;
            v16 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * (int)v14;
            v53 = v16;
            while ( v4 != (LONG *)v7 )
            {
              v17 = *v4;
              v18 = v4[1];
              v19 = v18 + *v4;
              if ( v19 < si128.left )
              {
                v4 += v18 + 2;
              }
              else
              {
                if ( v17 >= (int)v10 )
                  return;
                left = si128.left;
                v21 = v10;
                if ( v17 >= si128.left )
                  left = *v4;
                if ( v19 < (int)v10 )
                  v21 = v18 + *v4;
                v22 = v21 - left;
                v23 = (char *)(v16 + 2LL * left + left);
                v24 = v23;
                if ( left < v21 )
                {
                  v25 = left - v17;
                  v26 = v22;
                  v27 = &v4[v25 + 2];
                  do
                  {
                    v28 = *(_WORD *)v27;
                    v29 = *((_BYTE *)v27++ + 2);
                    *(_WORD *)v24 = v28;
                    v24[2] = v29;
                    v24 += 3;
                    --v26;
                  }
                  while ( v26 );
                }
                if ( v15 > 1 )
                {
                  v40 = 3 * v22;
                  v41 = (unsigned int)(v15 - 1);
                  do
                  {
                    v42 = &v23[*((int *)a3 + 22)];
                    memmove(v42, v23, v40);
                    v23 = v42;
                    --v41;
                  }
                  while ( v41 );
                }
                LODWORD(v10) = v58;
                v16 = v53;
                v4 += v4[1] + 2;
              }
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart(a4, 0, 0, 4u, 0x64u);
        v44 = *this;
        v45 = this[1];
        si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
LABEL_57:
        XCLIPOBJ::vFindScan(a4, &si128, v44);
        while ( v45 )
        {
          v54 = --v45;
          if ( v44 >= si128.top && v44 < si128.bottom )
          {
            v46 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * v44;
            v55 = v46;
            if ( v4 != (LONG *)v7 )
            {
              v47 = (struct stretch::_STRRUN *)v4;
              do
              {
                v48 = *(int *)v47;
                v49 = v48 + *((_DWORD *)v47 + 1);
                v52 = v49;
                v50 = v48 + v46 + 2 * v48;
                if ( (int)v48 < v49 )
                {
                  v51 = (int *)((char *)v47 + 8);
                  do
                  {
                    if ( (int)v48 < si128.left || (int)v48 >= si128.right )
                    {
                      XCLIPOBJ::vFindSegment(a4, &si128, v48);
                      v49 = v52;
                    }
                    if ( (int)v48 >= si128.left && (int)v48 < si128.right )
                    {
                      *(_WORD *)v50 = *(_WORD *)v51;
                      *(_BYTE *)(v50 + 2) = *((_BYTE *)v51 + 2);
                    }
                    v50 += 3LL;
                    ++v51;
                    LODWORD(v48) = v48 + 1;
                  }
                  while ( (int)v48 < v49 );
                  v7 = a2;
                  v46 = v55;
                }
                v47 = (struct stretch::_STRRUN *)((char *)v47 + 4 * *((int *)v47 + 1) + 8);
              }
              while ( v47 != v7 );
              v45 = v54;
            }
          }
          if ( ++v44 < si128.top || v44 >= si128.bottom )
            goto LABEL_57;
        }
      }
    }
    else
    {
      v30 = *((_QWORD *)a3 + 10) + *this * *((_DWORD *)a3 + 22);
      while ( v4 != (LONG *)v7 )
      {
        v31 = *v4;
        v32 = v4[1];
        v33 = (char *)(v31 + v30 + 2 * v31);
        v34 = v33;
        if ( (int)v31 < (int)(v32 + v31) )
        {
          v35 = v4 + 2;
          v36 = v32;
          do
          {
            v37 = *(_WORD *)v35;
            v38 = *((_BYTE *)v35++ + 2);
            *(_WORD *)v34 = v37;
            v34[2] = v38;
            v34 += 3;
            --v36;
          }
          while ( v36 );
        }
        for ( i = 1; i < this[1]; v33 = v43 )
        {
          v43 = &v33[*((int *)a3 + 22)];
          memmove(v43, v33, 3 * v4[1]);
          ++i;
        }
        v4 += v4[1] + 2;
      }
    }
  }
}
