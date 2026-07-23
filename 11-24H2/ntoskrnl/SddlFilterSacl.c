/*
 * XREFs of SddlFilterSacl @ 0x140A51D80
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408673C8 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall SddlFilterSacl(__int64 *a1, __int64 a2, unsigned int *a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned __int16 *v5; // rbp
  __int64 v6; // r14
  int v9; // r10d
  unsigned __int8 *v10; // r11
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  bool v13; // zf
  unsigned int v14; // r10d
  char *v15; // rsi
  unsigned int v16; // edi
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  bool v19; // zf
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx

  result = *((unsigned __int16 *)a1 + 2);
  v5 = (unsigned __int16 *)(a1 + 1);
  v6 = a2;
  LODWORD(a2) = 0;
  v9 = 8;
  v10 = (unsigned __int8 *)(a1 + 1);
  if ( (_WORD)result )
  {
    a2 = *((unsigned __int16 *)a1 + 2);
    while ( 1 )
    {
      v11 = *v10;
      if ( v11 <= 0xF )
        break;
      v12 = v11 - 16;
      if ( !v12 )
        break;
      v20 = v12 - 1;
      if ( v20 )
      {
        v23 = v20 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( !v25 )
            {
              if ( (a4 & 0x80u) == 0 )
                goto LABEL_8;
LABEL_7:
              v9 += *((unsigned __int16 *)v10 + 1);
              goto LABEL_8;
            }
            if ( v25 != 1 )
              break;
            v13 = (a4 & 0x100) == 0;
          }
          else
          {
            v13 = (a4 & 0x40) == 0;
          }
        }
        else
        {
          v13 = (a4 & 0x20) == 0;
        }
      }
      else
      {
        v13 = (a4 & 0x10) == 0;
      }
LABEL_6:
      if ( !v13 )
        goto LABEL_7;
LABEL_8:
      result = *((unsigned __int16 *)v10 + 1);
      v10 += result;
      if ( !--a2 )
        goto LABEL_9;
    }
    v13 = (a4 & 8) == 0;
    goto LABEL_6;
  }
LABEL_9:
  v14 = (v9 + 3) & 0xFFFFFFFC;
  if ( *a3 < v14 )
  {
    *a3 = v14;
    return result;
  }
  result = *a1;
  v15 = (char *)(v6 + 8);
  *(_QWORD *)v6 = *a1;
  v16 = a2;
  *(_DWORD *)(v6 + 2) = 8;
  if ( (unsigned __int16)a2 < *((_WORD *)a1 + 2) )
  {
    do
    {
      v17 = *(unsigned __int8 *)v5;
      if ( v17 > 0xF )
      {
        v18 = v17 - 16;
        if ( v18 )
        {
          v21 = v18 - 1;
          if ( !v21 )
          {
            v22 = a4 >> 4;
LABEL_24:
            v19 = (v22 & 1) == 0;
            goto LABEL_16;
          }
          v26 = v21 - 1;
          if ( !v26 )
          {
            v22 = a4 >> 5;
            goto LABEL_24;
          }
          v27 = v26 - 1;
          if ( !v27 )
          {
            v22 = a4 >> 6;
            goto LABEL_24;
          }
          v28 = v27 - 1;
          if ( !v28 )
          {
            v22 = a4 >> 7;
            goto LABEL_24;
          }
          if ( v28 == 1 )
          {
            v22 = a4 >> 8;
            goto LABEL_24;
          }
        }
      }
      v19 = (a4 & 8) == 0;
LABEL_16:
      if ( !v19 )
      {
        memmove(v15, v5, v5[1]);
        ++*(_WORD *)(v6 + 4);
        *(_WORD *)(v6 + 2) += v5[1];
        v15 += v5[1];
      }
      ++v16;
      v5 = (unsigned __int16 *)((char *)v5 + v5[1]);
      result = *((unsigned __int16 *)a1 + 2);
    }
    while ( v16 < (unsigned int)result );
  }
  return result;
}
