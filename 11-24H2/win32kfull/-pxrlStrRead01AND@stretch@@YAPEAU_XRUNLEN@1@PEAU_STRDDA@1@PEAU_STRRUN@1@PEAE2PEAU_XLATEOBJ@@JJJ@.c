/*
 * XREFs of ?pxrlStrRead01AND@stretch@@YAPEAU_XRUNLEN@1@PEAU_STRDDA@1@PEAU_STRRUN@1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x140138860
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x140136784 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     <none>
 */

struct stretch::_XRUNLEN *__fastcall stretch::pxrlStrRead01AND(
        stretch *this,
        struct stretch::_STRDDA *a2,
        struct stretch::_STRRUN *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        struct _XLATEOBJ *a6,
        int a7)
{
  int v7; // r9d
  _DWORD *v8; // r14
  int v9; // r10d
  _DWORD *v11; // rbx
  int v12; // r15d
  int v13; // r12d
  int v14; // ecx
  int v15; // r13d
  __int64 v16; // rbp
  unsigned int *v17; // r11
  int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // edx
  __int64 v22; // r8
  _DWORD *v23; // rcx
  _DWORD *v25; // r8
  _DWORD *v26; // r8
  int *v27; // rax

  v7 = (int)a6;
  v8 = (_DWORD *)((char *)a2 + 8);
  v9 = (unsigned __int8)a6 & 0x1F;
  v11 = (_DWORD *)((char *)a3 + 4 * ((__int64)(int)a6 >> 5));
  if ( a5 )
  {
    v27 = (int *)*((_QWORD *)a5 + 2);
    v12 = *v27;
    v13 = v27[1];
  }
  else
  {
    v12 = 0;
    v13 = 1;
  }
  v14 = *(_DWORD *)this;
  v15 = 0;
  *v8 = v14;
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 2) - v14;
  if ( (int)a6 < a7 )
  {
    v16 = 0LL;
    v17 = (unsigned int *)((char *)this + 32);
    v18 = *v11;
    v19 = (unsigned __int8)a6 & 0x1F;
    while ( 1 )
    {
      v20 = *v17;
      if ( (v18 & dword_140352C90[v19]) != 0 )
      {
        if ( (_DWORD)v20 )
        {
          v15 += v20;
          v25 = &v8[v16 + 2];
          v16 += v20;
          do
          {
            *v25++ &= v13;
            LODWORD(v20) = v20 - 1;
          }
          while ( (_DWORD)v20 );
        }
        else
        {
          v8[v16 + 2] &= v13;
        }
      }
      else if ( (_DWORD)v20 )
      {
        v15 += v20;
        v26 = &v8[v16 + 2];
        v16 += v20;
        do
        {
          *v26++ &= v12;
          LODWORD(v20) = v20 - 1;
        }
        while ( (_DWORD)v20 );
      }
      else
      {
        v8[v16 + 2] &= v12;
      }
      ++v7;
      v21 = v9 + 1;
      v22 = v19 + 1;
      if ( v7 >= a7 )
        break;
      if ( (v21 & 0x20) != 0 )
        v18 = v11[1];
      ++v17;
      v23 = v11 + 1;
      if ( (v21 & 0x20) == 0 )
        v23 = v11;
      v9 = 0;
      v11 = v23;
      if ( (v21 & 0x20) == 0 )
        v9 = v21;
      v19 = 0LL;
      if ( (v21 & 0x20) == 0 )
        v19 = v22;
    }
  }
  return (struct stretch::_XRUNLEN *)&v8[v15 + 2];
}
