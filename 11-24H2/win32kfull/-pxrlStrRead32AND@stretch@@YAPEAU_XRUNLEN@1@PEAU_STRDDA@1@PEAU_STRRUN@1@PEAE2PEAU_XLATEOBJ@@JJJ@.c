/*
 * XREFs of ?pxrlStrRead32AND@stretch@@YAPEAU_XRUNLEN@1@PEAU_STRDDA@1@PEAU_STRRUN@1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x14010D1F0
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x14010DD20 (XLATEOBJ_iXlate.c)
 */

struct stretch::_XRUNLEN *__fastcall stretch::pxrlStrRead32AND(
        stretch *this,
        struct stretch::_STRDDA *a2,
        struct stretch::_STRRUN *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        struct _XLATEOBJ *a6,
        int a7)
{
  int v8; // r14d
  ULONG *v9; // rdi
  __int64 v11; // rbp
  unsigned int *v12; // r12
  __int64 v13; // r15
  __int64 v14; // rsi
  ULONG v15; // eax
  __int64 v16; // r8
  unsigned int *v17; // r9
  __int64 v18; // r10
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  _DWORD *v21; // rcx

  v8 = 0;
  *((_DWORD *)a2 + 2) = *(_DWORD *)this;
  v9 = (ULONG *)((char *)a3 + 4 * (int)a6);
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 2) - *(_DWORD *)this;
  if ( (_DWORD)a6 != a7 )
  {
    if ( pxlo )
    {
      v11 = 0LL;
      v12 = (unsigned int *)((char *)this + 32);
      v13 = (unsigned int)(a7 - (_DWORD)a6);
      do
      {
        v14 = *v12++;
        v15 = XLATEOBJ_iXlate(pxlo, *v9);
        if ( (_DWORD)v14 )
        {
          v8 += v14;
          v21 = (_DWORD *)((char *)a2 + 4 * v11 + 16);
          v11 += v14;
          do
          {
            *v21++ &= v15;
            LODWORD(v14) = v14 - 1;
          }
          while ( (_DWORD)v14 );
        }
        else
        {
          *((_DWORD *)a2 + v11 + 4) &= v15;
        }
        ++v9;
        --v13;
      }
      while ( v13 );
    }
    else
    {
      v16 = 0LL;
      v17 = (unsigned int *)((char *)this + 32);
      v18 = (unsigned int)(a7 - (_DWORD)a6);
      do
      {
        v19 = *v17++;
        if ( (_DWORD)v19 )
        {
          v8 += v19;
          v20 = (_DWORD *)((char *)a2 + 4 * v16 + 16);
          v16 += v19;
          do
          {
            *v20++ &= *v9;
            LODWORD(v19) = v19 - 1;
          }
          while ( (_DWORD)v19 );
        }
        else
        {
          *((_DWORD *)a2 + v16 + 4) &= *v9;
        }
        ++v9;
        --v18;
      }
      while ( v18 );
    }
  }
  return (struct stretch::_STRDDA *)((char *)a2 + 4 * v8 + 16);
}
