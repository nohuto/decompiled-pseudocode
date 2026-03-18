/*
 * XREFs of ?pxrlStrRead01OR@stretch@@YAPEAU_XRUNLEN@1@PEAU_STRDDA@1@PEAU_STRRUN@1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x140312900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct stretch::_XRUNLEN *__fastcall stretch::pxrlStrRead01OR(
        stretch *this,
        struct stretch::_STRDDA *a2,
        struct stretch::_STRRUN *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        struct _XLATEOBJ *a6,
        int a7)
{
  int v7; // r10d
  int v9; // ebx
  _DWORD *v10; // r15
  int v11; // edi
  int v12; // esi
  int *v13; // rax
  int v14; // ecx
  int v15; // r11d
  int v16; // r12d
  unsigned int *v17; // r13
  __int64 v18; // r8
  __int64 v19; // rbp
  __int64 v20; // rcx
  _DWORD *v21; // r9
  _DWORD *v22; // r9
  int v23; // r9d
  __int64 v24; // r14
  _DWORD *v25; // rax

  v7 = (int)a6;
  v9 = (unsigned __int8)a6 & 0x1F;
  v10 = (_DWORD *)((char *)a3 + 4 * ((__int64)(int)a6 >> 5));
  if ( a5 )
  {
    v13 = (int *)*((_QWORD *)a5 + 2);
    v11 = *v13;
    v12 = v13[1];
  }
  else
  {
    v11 = 0;
    v12 = 1;
  }
  v14 = *(_DWORD *)this;
  v15 = 0;
  *((_DWORD *)a2 + 2) = v14;
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 2) - v14;
  if ( (int)a6 < a7 )
  {
    v16 = *v10;
    v17 = (unsigned int *)((char *)this + 32);
    v18 = 0LL;
    v19 = (unsigned __int8)a6 & 0x1F;
    while ( 1 )
    {
      v20 = *v17;
      if ( (v16 & dword_140352C90[v19]) != 0 )
      {
        if ( (_DWORD)v20 )
        {
          v15 += v20;
          v22 = (_DWORD *)((char *)a2 + 4 * v18 + 16);
          v18 += v20;
          do
          {
            *v22++ |= v12;
            LODWORD(v20) = v20 - 1;
          }
          while ( (_DWORD)v20 );
        }
        else
        {
          *((_DWORD *)a2 + v18 + 4) |= v12;
        }
      }
      else if ( (_DWORD)v20 )
      {
        v15 += v20;
        v21 = (_DWORD *)((char *)a2 + 4 * v18 + 16);
        v18 += v20;
        do
        {
          *v21++ |= v11;
          LODWORD(v20) = v20 - 1;
        }
        while ( (_DWORD)v20 );
      }
      else
      {
        *((_DWORD *)a2 + v18 + 4) |= v11;
      }
      ++v7;
      v23 = v9 + 1;
      v24 = v19 + 1;
      if ( v7 >= a7 )
        break;
      if ( (v23 & 0x20) != 0 )
        v16 = v10[1];
      ++v17;
      v25 = v10 + 1;
      if ( (v23 & 0x20) == 0 )
        v25 = v10;
      v9 = 0;
      v10 = v25;
      if ( (v23 & 0x20) == 0 )
        v9 = v23;
      v19 = 0LL;
      if ( (v23 & 0x20) == 0 )
        v19 = v24;
    }
  }
  return (struct stretch::_STRDDA *)((char *)a2 + 4 * v15 + 16);
}
