/*
 * XREFs of ?vStrWrite32@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1400A1210
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1400A2850 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A315C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x140154410 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

void __fastcall stretch::vStrWrite32(
        LONG *this,
        struct stretch::_STRRUN *a2,
        struct stretch::_XRUNLEN *a3,
        struct SURFACE *a4)
{
  struct stretch::_STRRUN *v5; // r14
  struct stretch::_STRRUN *v6; // r15
  bool v8; // zf
  unsigned __int64 v9; // r13
  LONG v10; // ecx
  unsigned __int64 v11; // rbp
  LONG left; // r12d
  __int64 v13; // rax
  LONG v14; // edx
  int v15; // ebp
  __int64 v16; // rdx
  int v17; // r8d
  __int64 v18; // rcx
  int v19; // eax
  LONG v20; // r9d
  int v21; // ecx
  int v22; // r10d
  _DWORD *v23; // r11
  _DWORD *v24; // rdx
  int v25; // r9d
  __int64 v26; // r8
  int *v27; // rax
  int v28; // ecx
  size_t v29; // rsi
  __int64 v30; // rdi
  char *v31; // rbx
  __int64 v32; // rsi
  __int64 v33; // rdx
  unsigned int v34; // r9d
  _DWORD *v35; // r10
  _DWORD *v36; // r8
  int *v37; // rcx
  __int64 v38; // rdx
  int v39; // eax
  int v40; // ebp
  LONG v41; // esi
  int v42; // r8d
  LONG v43; // edi
  int v44; // r9d
  LONG right; // ecx
  LONG v46; // edx
  char *v47; // rbx
  __int64 v48; // r12
  __int64 v49; // r10
  int v50; // r13d
  _DWORD *v51; // rbp
  _DWORD *v52; // r15
  struct stretch::_STRRUN *v53; // [rsp+30h] [rbp-58h]
  __int64 v54; // [rsp+30h] [rbp-58h]
  struct _RECTL si128; // [rsp+38h] [rbp-50h] BYREF

  if ( a2 )
  {
    v5 = (struct stretch::_STRRUN *)(this + 2);
    v53 = (struct stretch::_STRRUN *)(this + 2);
    v6 = a2;
    if ( a4 )
    {
      v8 = *((_BYTE *)a4 + 20) == 1;
      si128 = 0LL;
      if ( v8 )
      {
        v9 = *(_QWORD *)((char *)a4 + 12);
        v10 = *this;
        v11 = HIDWORD(v9);
        si128 = *(struct _RECTL *)((char *)a4 + 4);
        if ( v10 < SHIDWORD(v9) )
        {
          left = si128.left;
          v13 = HIDWORD(*(_QWORD *)&si128.left);
          v14 = v10 + this[1];
          if ( v14 > si128.top )
          {
            if ( v10 >= si128.top )
              LODWORD(v13) = v10;
            if ( v14 < SHIDWORD(v9) )
              LODWORD(v11) = v10 + this[1];
            v15 = v11 - v13;
            v16 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * (int)v13;
            v54 = v16;
            while ( v5 != v6 )
            {
              v17 = *(_DWORD *)v5;
              v18 = *((int *)v5 + 1);
              v19 = v18 + *(_DWORD *)v5;
              if ( v19 < left )
              {
                v5 = (struct stretch::_STRRUN *)((char *)v5 + 4 * v18 + 8);
              }
              else
              {
                if ( v17 >= (int)v9 )
                  return;
                v20 = left;
                v21 = v9;
                if ( v17 >= left )
                  v20 = *(_DWORD *)v5;
                if ( v19 < (int)v9 )
                  v21 = v19;
                v22 = v21 - v20;
                v23 = (_DWORD *)(v16 + 4LL * v20);
                v24 = v23;
                if ( v20 < v21 )
                {
                  v25 = v20 - v17;
                  v26 = v22;
                  v27 = (int *)((char *)v5 + 4 * v25 + 8);
                  do
                  {
                    v28 = *v27++;
                    *v24++ = v28;
                    --v26;
                  }
                  while ( v26 );
                }
                if ( v15 > 1 )
                {
                  v29 = 4 * v22;
                  v30 = (unsigned int)(v15 - 1);
                  do
                  {
                    v31 = (char *)v23 + *((int *)a3 + 22);
                    memmove(v31, v23, v29);
                    v23 = v31;
                    --v30;
                  }
                  while ( v30 );
                  v6 = a2;
                }
                v16 = v54;
                v5 = (struct stretch::_STRRUN *)((char *)v5 + 4 * *((int *)v5 + 1) + 8);
              }
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart(a4, 0, 0, 4u, 0x64u);
        v41 = *this;
        v42 = *this;
        v43 = this[1];
        si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
        XCLIPOBJ::vFindScan(a4, &si128, v42);
        if ( v43 )
        {
          right = si128.right;
          v46 = si128.left;
          do
          {
            --v43;
            if ( v41 >= si128.top && v41 < si128.bottom )
            {
              v48 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * v41;
              if ( v5 != v6 )
              {
                do
                {
                  v49 = *(int *)v5;
                  v50 = v49 + *((_DWORD *)v5 + 1);
                  v51 = (_DWORD *)(v48 + 4 * v49);
                  if ( (int)v49 < v50 )
                  {
                    v52 = (_DWORD *)((char *)v5 + 8);
                    do
                    {
                      if ( (int)v49 < v46 || (int)v49 >= right )
                      {
                        XCLIPOBJ::vFindSegment(a4, &si128, v49, v44);
                        right = si128.right;
                        v46 = si128.left;
                      }
                      if ( (int)v49 >= v46 && (int)v49 < right )
                        *v51 = *v52;
                      ++v51;
                      ++v52;
                      LODWORD(v49) = v49 + 1;
                    }
                    while ( (int)v49 < v50 );
                    v6 = a2;
                  }
                  v5 = (struct stretch::_STRRUN *)((char *)v5 + 4 * *((int *)v5 + 1) + 8);
                }
                while ( v5 != v6 );
                v5 = v53;
              }
            }
            if ( ++v41 < si128.top || v41 >= si128.bottom )
            {
              XCLIPOBJ::vFindScan(a4, &si128, v41);
              right = si128.right;
              v46 = si128.left;
            }
          }
          while ( v43 );
        }
      }
    }
    else
    {
      v32 = *((_QWORD *)a3 + 10) + *this * *((_DWORD *)a3 + 22);
      if ( v5 != a2 )
      {
        do
        {
          v33 = *(int *)v5;
          v34 = *((_DWORD *)v5 + 1);
          v35 = (_DWORD *)(v32 + 4 * v33);
          v36 = v35;
          if ( (int)v33 < (int)(v34 + v33) )
          {
            v37 = (int *)((char *)v5 + 8);
            v38 = v34;
            do
            {
              v39 = *v37++;
              *v36++ = v39;
              --v38;
            }
            while ( v38 );
          }
          v40 = 1;
          if ( this[1] > 1 )
          {
            do
            {
              v47 = (char *)v35 + *((int *)a3 + 22);
              memmove(v47, v35, 4 * *((_DWORD *)v5 + 1));
              ++v40;
              v35 = v47;
            }
            while ( v40 < this[1] );
            v6 = a2;
          }
          v5 = (struct stretch::_STRRUN *)((char *)v5 + 4 * *((int *)v5 + 1) + 8);
        }
        while ( v5 != v6 );
      }
    }
  }
}
