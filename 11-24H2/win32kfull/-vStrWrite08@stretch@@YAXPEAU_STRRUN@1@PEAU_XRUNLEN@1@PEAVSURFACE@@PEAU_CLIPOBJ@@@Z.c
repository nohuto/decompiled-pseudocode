/*
 * XREFs of ?vStrWrite08@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x140313450
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1400A2850 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A315C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x140154410 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

void __fastcall stretch::vStrWrite08(
        LONG *this,
        struct stretch::_STRRUN *a2,
        struct stretch::_XRUNLEN *a3,
        struct SURFACE *a4)
{
  struct stretch::_STRRUN *v4; // rbx
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r8
  char *v12; // rdi
  _BYTE *v13; // rdx
  char *v14; // rcx
  char v15; // al
  int v16; // r14d
  __int64 v17; // rax
  bool v18; // zf
  __int64 v19; // r10
  LONG top; // ecx
  LONG v21; // r14d
  int v22; // r14d
  __int64 v23; // r11
  LONG v24; // edx
  __int64 v25; // rax
  LONG v26; // r9d
  LONG left; // r8d
  LONG v28; // ecx
  _BYTE *v29; // rdi
  _BYTE *v30; // r9
  int v31; // eax
  size_t v32; // rsi
  int v33; // r8d
  __int64 v34; // rdx
  int *v35; // rcx
  char v36; // al
  __int64 v37; // rcx
  __int64 v38; // r12
  LONG v39; // edi
  LONG v40; // esi
  __int64 v41; // rcx
  struct stretch::_STRRUN *v42; // rsi
  __int64 v43; // r10
  int v44; // edx
  _BYTE *v45; // r12
  int *v46; // rcx
  LONG v47; // [rsp+30h] [rbp-30h]
  __int64 v48; // [rsp+38h] [rbp-28h]
  int *v49; // [rsp+38h] [rbp-28h]
  __int64 v50; // [rsp+40h] [rbp-20h]
  struct _RECTL si128; // [rsp+48h] [rbp-18h] BYREF
  int v52; // [rsp+98h] [rbp+38h]
  int v53; // [rsp+98h] [rbp+38h]

  if ( a2 )
  {
    v4 = (struct stretch::_STRRUN *)(this + 2);
    if ( a4 )
    {
      v18 = *((_BYTE *)a4 + 20) == 1;
      si128 = 0LL;
      if ( v18 )
      {
        v19 = *(_QWORD *)((char *)a4 + 12);
        top = *this;
        v52 = v19;
        si128 = *(struct _RECTL *)((char *)a4 + 4);
        if ( top < SHIDWORD(v19) )
        {
          v21 = top + this[1];
          if ( v21 > si128.top )
          {
            if ( top < si128.top )
              top = si128.top;
            if ( v21 >= SHIDWORD(v19) )
              v21 = HIDWORD(v19);
            v22 = v21 - top;
            v23 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * top;
            v48 = v23;
            while ( v4 != a2 )
            {
              v24 = *(_DWORD *)v4;
              v25 = *((int *)v4 + 1);
              v26 = v25 + *(_DWORD *)v4;
              if ( v26 >= si128.left )
              {
                if ( v24 >= (int)v19 )
                  return;
                left = si128.left;
                v28 = v19;
                if ( v24 >= si128.left )
                  left = *(_DWORD *)v4;
                if ( v26 < (int)v19 )
                  v28 = v25 + *(_DWORD *)v4;
                v29 = (_BYTE *)(v23 + left);
                v30 = v29;
                v31 = v28 - left;
                v32 = v28 - left;
                if ( left < v28 )
                {
                  v33 = left - v24;
                  v34 = v31;
                  v35 = (int *)((char *)v4 + 4 * v33 + 8);
                  do
                  {
                    v36 = *(_BYTE *)v35++;
                    *v30++ = v36;
                    --v34;
                  }
                  while ( v34 );
                }
                if ( v22 > 1 )
                {
                  v37 = *((int *)a3 + 22);
                  v38 = (unsigned int)(v22 - 1);
                  do
                  {
                    memmove(&v29[v37], v29, v32);
                    v37 = *((int *)a3 + 22);
                    v29 += v37;
                    --v38;
                  }
                  while ( v38 );
                  LODWORD(v19) = v52;
                  v23 = v48;
                }
                v25 = *((int *)v4 + 1);
              }
              v4 = (struct stretch::_STRRUN *)((char *)v4 + 4 * v25 + 8);
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart(a4, 0, 0, 4u, 0x64u);
        v39 = *this;
        v40 = this[1];
        si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
LABEL_56:
        XCLIPOBJ::vFindScan(a4, &si128, v39);
        while ( v40 )
        {
          v47 = --v40;
          if ( v39 >= si128.top && v39 < si128.bottom )
          {
            v41 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * v39;
            v50 = v41;
            if ( v4 != a2 )
            {
              v42 = v4;
              do
              {
                v43 = *(int *)v42;
                v44 = v43 + *((_DWORD *)v42 + 1);
                v53 = v44;
                v45 = (_BYTE *)(v41 + v43);
                if ( (int)v43 < v44 )
                {
                  v46 = (int *)((char *)v42 + 8);
                  v49 = (int *)((char *)v42 + 8);
                  do
                  {
                    if ( (int)v43 < si128.left || (int)v43 >= si128.right )
                    {
                      XCLIPOBJ::vFindSegment(a4, &si128, v43);
                      v46 = v49;
                      v44 = v53;
                    }
                    if ( (int)v43 >= si128.left && (int)v43 < si128.right )
                      *v45 = *(_BYTE *)v46;
                    ++v46;
                    ++v45;
                    LODWORD(v43) = v43 + 1;
                    v49 = v46;
                  }
                  while ( (int)v43 < v44 );
                  v41 = v50;
                }
                v42 = (struct stretch::_STRRUN *)((char *)v42 + 4 * *((int *)v42 + 1) + 8);
              }
              while ( v42 != a2 );
              v40 = v47;
            }
          }
          if ( ++v39 < si128.top || v39 >= si128.bottom )
            goto LABEL_56;
        }
      }
    }
    else
    {
      v9 = *((_QWORD *)a3 + 10) + *this * *((_DWORD *)a3 + 22);
      while ( v4 != a2 )
      {
        v10 = *(int *)v4;
        v11 = *((unsigned int *)v4 + 1);
        v12 = (char *)(v9 + v10);
        v13 = (_BYTE *)(v9 + v10);
        if ( (int)v10 < (int)v11 + (int)v10 )
        {
          v14 = (char *)v4 + 8;
          do
          {
            v15 = *v14;
            v14 += 4;
            *v13++ = v15;
            --v11;
          }
          while ( v11 );
        }
        v16 = 1;
        if ( this[1] > 1 )
        {
          v17 = *((int *)a3 + 22);
          do
          {
            memmove(&v12[v17], v12, *((int *)v4 + 1));
            v17 = *((int *)a3 + 22);
            ++v16;
            v12 += v17;
          }
          while ( v16 < this[1] );
        }
        v4 = (struct stretch::_STRRUN *)((char *)v4 + 4 * *((int *)v4 + 1) + 8);
      }
    }
  }
}
