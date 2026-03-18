/*
 * XREFs of ?pxrlStrRead04AND@stretch@@YAPEAU_XRUNLEN@1@PEAU_STRDDA@1@PEAU_STRRUN@1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1401E90B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct stretch::_XRUNLEN *__fastcall stretch::pxrlStrRead04AND(
        stretch *this,
        struct stretch::_STRDDA *a2,
        struct stretch::_STRRUN *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        struct _XLATEOBJ *a6,
        int a7)
{
  int v7; // r10d
  int v11; // ecx
  int v12; // esi
  int v13; // ebp
  _DWORD *v14; // r11
  int v15; // r14d
  __int64 v16; // r8
  __int64 v17; // rbx
  int v18; // edi
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  __int64 v21; // rdx
  int v22; // esi
  int v23; // ecx
  _DWORD *v24; // rax
  int v25; // eax
  __int64 v27; // rdi
  unsigned int *v28; // r15
  unsigned int v29; // ebx
  __int64 v30; // rcx
  _DWORD *v31; // rdx
  __int64 v32; // rdx
  int v33; // esi
  int v34; // ecx
  _DWORD *v35; // rax
  int v36; // eax
  unsigned __int8 *v37; // [rsp+40h] [rbp+28h]

  v7 = (int)a6;
  v11 = *(_DWORD *)this;
  *((_DWORD *)a2 + 2) = v11;
  v12 = (unsigned __int8)a6 & 7;
  v13 = 0;
  v14 = (_DWORD *)((char *)a3 + 4 * ((__int64)(int)a6 >> 3));
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 2) - v11;
  if ( (int)a6 < a7 )
  {
    v15 = *v14;
    v16 = 0LL;
    if ( a5 )
    {
      v17 = (unsigned __int8)a6 & 7;
      v37 = (unsigned __int8 *)this + 32;
      while ( 1 )
      {
        v18 = *(_DWORD *)(*((_QWORD *)a5 + 2)
                        + 4 * ((unsigned __int64)(v15 & (unsigned int)dword_140361A58[v17]) >> dword_140361A38[v17]));
        v19 = *(unsigned int *)v37;
        v37 += 4;
        if ( (_DWORD)v19 )
        {
          v13 += v19;
          v20 = (_DWORD *)((char *)a2 + 4 * v16 + 16);
          v16 += v19;
          do
          {
            *v20++ &= v18;
            LODWORD(v19) = v19 - 1;
          }
          while ( (_DWORD)v19 );
        }
        else
        {
          *((_DWORD *)a2 + v16 + 4) &= v18;
        }
        ++v7;
        v21 = v17 + 1;
        v22 = v12 + 1;
        if ( v7 >= a7 )
          break;
        v23 = v22 & 8;
        if ( (v22 & 8) != 0 )
          v15 = v14[1];
        v24 = v14 + 1;
        if ( (v22 & 8) == 0 )
          v24 = v14;
        v14 = v24;
        v25 = 0;
        if ( (v22 & 8) == 0 )
          v25 = v22;
        v17 = 0LL;
        v12 = v25;
        if ( !v23 )
          v17 = v21;
      }
    }
    else
    {
      v27 = (unsigned __int8)a6 & 7;
      v28 = (unsigned int *)((char *)this + 32);
      while ( 1 )
      {
        v29 = (v15 & (unsigned int)dword_140361A58[v27]) >> dword_140361A38[v27];
        v30 = *v28++;
        if ( (_DWORD)v30 )
        {
          v13 += v30;
          v31 = (_DWORD *)((char *)a2 + 4 * v16 + 16);
          v16 += v30;
          do
          {
            *v31++ &= v29;
            LODWORD(v30) = v30 - 1;
          }
          while ( (_DWORD)v30 );
        }
        else
        {
          *((_DWORD *)a2 + v16 + 4) &= v29;
        }
        ++v7;
        v32 = v27 + 1;
        v33 = v12 + 1;
        if ( v7 >= a7 )
          break;
        v34 = v33 & 8;
        if ( (v33 & 8) != 0 )
          v15 = v14[1];
        v35 = v14 + 1;
        if ( (v33 & 8) == 0 )
          v35 = v14;
        v14 = v35;
        v36 = 0;
        if ( (v33 & 8) == 0 )
          v36 = v33;
        v27 = 0LL;
        v12 = v36;
        if ( !v34 )
          v27 = v32;
      }
    }
  }
  return (struct stretch::_STRDDA *)((char *)a2 + 4 * v13 + 16);
}
