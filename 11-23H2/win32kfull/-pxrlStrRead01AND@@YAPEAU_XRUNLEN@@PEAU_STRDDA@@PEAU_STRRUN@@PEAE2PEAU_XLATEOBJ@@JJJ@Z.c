/*
 * XREFs of ?pxrlStrRead01AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C00659B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead01AND(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7)
{
  int v7; // esi
  _DWORD *v8; // rbx
  int v9; // r14d
  unsigned __int8 *v11; // r15
  ULONG v12; // r8d
  int v13; // r9d
  ULONG *pulXlate; // rax
  int v15; // ecx
  int v16; // ebp
  __int64 v17; // r11
  int v18; // r12d
  unsigned int *v19; // r13
  __int64 v20; // rdi
  __int64 v21; // rax
  _DWORD *v22; // rdx
  _DWORD *v23; // rdx
  int v24; // edx
  __int64 v25; // r10
  unsigned __int8 *v26; // rax

  v7 = a6;
  v8 = (_DWORD *)((char *)a2 + 8);
  v9 = a6 & 0x1F;
  v11 = &a3[4 * ((__int64)a6 >> 5)];
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v12 = *pulXlate;
    v13 = pulXlate[1];
  }
  else
  {
    v12 = 0;
    v13 = 1;
  }
  v15 = *(_DWORD *)a1;
  v16 = 0;
  *v8 = v15;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v15;
  if ( a6 < a7 )
  {
    v17 = 0LL;
    v18 = *(_DWORD *)v11;
    v19 = (unsigned int *)((char *)a1 + 32);
    v20 = a6 & 0x1F;
    while ( 1 )
    {
      v21 = *v19;
      if ( (v18 & dword_1C03197A0[v20]) != 0 )
      {
        if ( (_DWORD)v21 )
        {
          v16 += v21;
          v23 = &v8[v17 + 2];
          v17 += v21;
          do
          {
            *v23++ &= v13;
            LODWORD(v21) = v21 - 1;
          }
          while ( (_DWORD)v21 );
        }
        else
        {
          v8[v17 + 2] &= v13;
        }
      }
      else if ( (_DWORD)v21 )
      {
        v16 += v21;
        v22 = &v8[v17 + 2];
        v17 += v21;
        do
        {
          *v22++ &= v12;
          LODWORD(v21) = v21 - 1;
        }
        while ( (_DWORD)v21 );
      }
      else
      {
        v8[v17 + 2] &= v12;
      }
      ++v7;
      v24 = v9 + 1;
      v25 = v20 + 1;
      if ( v7 >= a7 )
        break;
      v26 = v11 + 4;
      if ( (v24 & 0x20) != 0 )
        v18 = *(_DWORD *)v26;
      ++v19;
      if ( (v24 & 0x20) == 0 )
        v26 = v11;
      v9 = 0;
      v11 = v26;
      if ( (v24 & 0x20) == 0 )
        v9 = v24;
      v20 = 0LL;
      if ( (v24 & 0x20) == 0 )
        v20 = v25;
    }
  }
  return (struct _XRUNLEN *)&v8[v16 + 2];
}
