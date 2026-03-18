/*
 * XREFs of ?pxrlStrRead04OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02E0F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead04OR(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7)
{
  int v7; // r11d
  int v10; // ecx
  int v11; // edi
  int v12; // ebp
  unsigned __int8 *v13; // r9
  __int64 v14; // r8
  __int64 v15; // rbx
  int v16; // r14d
  unsigned int *v17; // r15
  unsigned int v18; // esi
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  char v21; // dl
  __int64 v22; // rsi
  unsigned __int8 *v23; // rax
  int v24; // eax
  int v25; // r15d
  unsigned int *v26; // r13
  __int64 v27; // rcx
  ULONG v28; // esi
  _DWORD *v29; // rdx
  char v30; // dl
  __int64 v31; // rsi
  unsigned __int8 *v32; // rax
  int v33; // eax

  v7 = a6;
  v10 = *(_DWORD *)a1;
  *((_DWORD *)a2 + 2) = v10;
  v11 = a6 & 7;
  v12 = 0;
  v13 = &a3[4 * ((__int64)a6 >> 3)];
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v10;
  if ( a6 < a7 )
  {
    v14 = 0LL;
    v15 = a6 & 7;
    if ( a5 )
    {
      v25 = *(_DWORD *)v13;
      v26 = (unsigned int *)((char *)a1 + 32);
      while ( 1 )
      {
        v27 = *v26++;
        v28 = a5->pulXlate[(unsigned __int64)(v25 & (unsigned int)dword_1C0319840[v15]) >> dword_1C0319820[v15]];
        if ( (_DWORD)v27 )
        {
          v12 += v27;
          v29 = (_DWORD *)((char *)a2 + 4 * v14 + 16);
          v14 += v27;
          do
          {
            *v29++ |= v28;
            LODWORD(v27) = v27 - 1;
          }
          while ( (_DWORD)v27 );
        }
        else
        {
          *((_DWORD *)a2 + v14 + 4) |= v28;
        }
        ++v7;
        v30 = v11 + 1;
        v31 = v15 + 1;
        if ( v7 >= a7 )
          break;
        v32 = v13 + 4;
        if ( (v30 & 8) != 0 )
          v25 = *(_DWORD *)v32;
        else
          v32 = v13;
        v13 = v32;
        v33 = 0;
        if ( (v30 & 8) == 0 )
          v33 = v11 + 1;
        v15 = 0LL;
        v11 = v33;
        if ( (v30 & 8) == 0 )
          v15 = v31;
      }
    }
    else
    {
      v16 = *(_DWORD *)v13;
      v17 = (unsigned int *)((char *)a1 + 32);
      while ( 1 )
      {
        v18 = (v16 & (unsigned int)dword_1C0319840[v15]) >> dword_1C0319820[v15];
        v19 = *v17++;
        if ( (_DWORD)v19 )
        {
          v12 += v19;
          v20 = (_DWORD *)((char *)a2 + 4 * v14 + 16);
          v14 += v19;
          do
          {
            *v20++ |= v18;
            LODWORD(v19) = v19 - 1;
          }
          while ( (_DWORD)v19 );
        }
        else
        {
          *((_DWORD *)a2 + v14 + 4) |= v18;
        }
        ++v7;
        v21 = v11 + 1;
        v22 = v15 + 1;
        if ( v7 >= a7 )
          break;
        v23 = v13 + 4;
        if ( (v21 & 8) != 0 )
          v16 = *(_DWORD *)v23;
        else
          v23 = v13;
        v13 = v23;
        v24 = 0;
        if ( (v21 & 8) == 0 )
          v24 = v11 + 1;
        v15 = 0LL;
        v11 = v24;
        if ( (v21 & 8) == 0 )
          v15 = v22;
      }
    }
  }
  return (struct _STRRUN *)((char *)a2 + 4 * v12 + 16);
}
