/*
 * XREFs of ?pxrlStrRead01@stretch@@YAPEAU_XRUNLEN@1@PEAU_STRDDA@1@PEAU_STRRUN@1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x14011C220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct stretch::_XRUNLEN *__fastcall stretch::pxrlStrRead01(
        stretch *this,
        struct stretch::_STRDDA *a2,
        struct stretch::_STRRUN *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        struct _XLATEOBJ *a6,
        int a7,
        int a8)
{
  int v8; // r10d
  _DWORD *v9; // r12
  unsigned int v10; // r11d
  _DWORD *v12; // rsi
  int v13; // r9d
  __int64 v14; // r8
  int v15; // r13d
  int v16; // r14d
  unsigned int *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r9
  unsigned int v20; // edx
  __int64 v21; // rdi
  int v22; // eax
  _DWORD *v23; // rcx
  int v24; // eax
  int *v26; // rax
  int *v27; // rdi
  __int64 i; // rcx
  int v29; // ebx
  int v30; // ebp
  unsigned __int8 *v31; // rdx
  int v32; // edi
  _DWORD *v33; // r13
  __int64 v34; // rax
  __int64 v35; // r12
  __int64 v36; // r14
  __int64 v37; // rcx
  int *v38; // rdi
  __int64 v39; // rcx
  int *v40; // rdi
  __int64 v41; // rcx
  unsigned int v42; // eax
  __int64 v43; // r11
  int v44; // edi
  int v45; // ecx
  _DWORD *v46; // rax
  int v47; // ecx
  unsigned __int8 *v48; // rax
  unsigned __int8 *v49; // [rsp+0h] [rbp-48h]
  __int64 v50; // [rsp+8h] [rbp-40h]
  int v52; // [rsp+58h] [rbp+10h]
  __int64 v53; // [rsp+60h] [rbp+18h]
  int v54; // [rsp+60h] [rbp+18h]
  _DWORD *v55; // [rsp+68h] [rbp+20h]
  int v56; // [rsp+70h] [rbp+28h]
  int v57; // [rsp+78h] [rbp+30h]

  v8 = (int)a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v55 = (_DWORD *)((char *)a2 + 8);
  v10 = (unsigned __int8)a6 & 0x1F;
  v12 = (_DWORD *)((char *)a3 + 4 * ((__int64)(int)a6 >> 5));
  if ( a5 )
  {
    v26 = (int *)*((_QWORD *)a5 + 2);
    v57 = v26[1];
    v56 = *v26;
  }
  else
  {
    v56 = 0;
    v57 = 1;
  }
  v13 = *(_DWORD *)this;
  v14 = v10;
  if ( a4 )
  {
    v29 = 0;
    v30 = a8 & 0x1F;
    v31 = &a4[4 * ((__int64)a8 >> 5)];
    v32 = *(_DWORD *)v31;
    v54 = *(_DWORD *)v31;
    v49 = v31;
    if ( v8 < a7 )
    {
      v33 = (_DWORD *)((char *)this + 32);
      v52 = *v12;
      v34 = a8 & 0x1F;
      v35 = 0LL;
      while ( 1 )
      {
        v50 = v34;
        if ( (v32 & dword_140352C90[v34]) != 0 )
        {
          v36 = (unsigned int)*v33;
          if ( (dword_140352C90[v14] & v52) != 0 )
          {
            if ( (_DWORD)v36 )
            {
              v37 = (unsigned int)v36;
              v31 = v49;
              v29 += v36;
              v38 = &v55[v35 + 2];
              v35 += v36;
              while ( v37 )
              {
                *v38++ = v57;
                --v37;
              }
            }
          }
          else if ( (_DWORD)v36 )
          {
            v39 = (unsigned int)*v33;
            v31 = v49;
            v29 += v36;
            v40 = &v55[v35 + 2];
            v35 += v36;
            while ( v39 )
            {
              *v40++ = v56;
              --v39;
            }
          }
        }
        else
        {
          if ( v29 > 0 )
          {
            *v55 = v13;
            v13 += v29;
            v55[1] = v29;
            v41 = (__int64)&v55[v29 + 2];
            v29 = 0;
            v55 = (_DWORD *)v41;
            v35 = 0LL;
          }
          v13 += *v33;
        }
        v42 = v10 + 1;
        v43 = v14 + 1;
        ++v8;
        v44 = v30 + 1;
        ++v33;
        if ( v8 >= a7 )
          break;
        v45 = v42 & 0x20;
        if ( (v42 & 0x20) != 0 )
          v52 = v12[1];
        v14 = 0LL;
        if ( (v42 & 0x20) == 0 )
          v14 = v43;
        v10 = 0;
        if ( (v42 & 0x20) == 0 )
          v10 = v42;
        v46 = v12 + 1;
        if ( !v45 )
          v46 = v12;
        v12 = v46;
        v47 = v44 & 0x20;
        if ( (v44 & 0x20) != 0 )
          v54 = *((_DWORD *)v31 + 1);
        v48 = v31 + 4;
        if ( (v44 & 0x20) == 0 )
          v48 = v31;
        v30 = 0;
        v49 = v48;
        v31 = v48;
        if ( (v44 & 0x20) == 0 )
          v30 = v44;
        v32 = v54;
        v34 = 0LL;
        if ( !v47 )
          v34 = v50 + 1;
      }
      v9 = v55;
      if ( v29 > 0 )
      {
        *v55 = v13;
        v55[1] = v29;
        return (struct stretch::_XRUNLEN *)&v55[v29 + 2];
      }
    }
    return (struct stretch::_XRUNLEN *)v9;
  }
  v15 = 0;
  *v9 = v13;
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 2) - v13;
  if ( v8 >= a7 )
    return (struct stretch::_XRUNLEN *)&v9[v15 + 2];
  v16 = *v12;
  v17 = (unsigned int *)((char *)this + 32);
  v18 = 0LL;
  v53 = 0LL;
  while ( 1 )
  {
    v19 = *v17;
    if ( (v16 & dword_140352C90[v14]) != 0 )
    {
      if ( !(_DWORD)v19 )
        goto LABEL_8;
      v24 = v57;
    }
    else
    {
      if ( !(_DWORD)v19 )
        goto LABEL_8;
      v24 = v56;
    }
    v15 += v19;
    v53 += v19;
    v27 = (int *)((char *)a2 + 4 * v18 + 16);
    for ( i = *v17; i; --i )
      *v27++ = v24;
LABEL_8:
    ++v8;
    v20 = v10 + 1;
    v21 = v14 + 1;
    if ( v8 >= a7 )
      break;
    v22 = v20 & 0x20;
    if ( (v20 & 0x20) != 0 )
      v16 = v12[1];
    ++v17;
    v23 = v12 + 1;
    if ( (v20 & 0x20) == 0 )
      v23 = v12;
    v10 = 0;
    v12 = v23;
    if ( (v20 & 0x20) == 0 )
      v10 = v20;
    v18 = v53;
    v14 = 0LL;
    if ( !v22 )
      v14 = v21;
  }
  v9 = v55;
  return (struct stretch::_XRUNLEN *)&v9[v15 + 2];
}
