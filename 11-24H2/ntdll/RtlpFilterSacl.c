/*
 * XREFs of RtlpFilterSacl @ 0x180138A94
 * Callers:
 *     RtlQuerySecurityObject @ 0x180108760 (RtlQuerySecurityObject.c)
 * Callees:
 *     memmove @ 0x1801657C0 (memmove.c)
 */

void __fastcall RtlpFilterSacl(__int64 a1, __int64 a2, unsigned int *a3, unsigned int a4)
{
  unsigned __int16 *v4; // rbp
  __int64 v5; // r14
  int v8; // r10d
  unsigned __int8 *v9; // r11
  unsigned int v10; // ecx
  bool v11; // zf
  unsigned int v12; // r10d
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  char *v18; // rsi
  unsigned int v19; // edi
  unsigned int v20; // ecx
  bool v21; // zf
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // eax

  v4 = (unsigned __int16 *)(a1 + 8);
  v5 = a2;
  LODWORD(a2) = 0;
  v8 = 8;
  v9 = (unsigned __int8 *)(a1 + 8);
  if ( *(_WORD *)(a1 + 4) )
  {
    a2 = *(unsigned __int16 *)(a1 + 4);
    while ( 1 )
    {
      v10 = *v9;
      if ( v10 <= 0xF )
        break;
      v13 = v10 - 16;
      if ( !v13 )
        break;
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( !v17 )
            {
              if ( (a4 & 0x80u) == 0 )
                goto LABEL_7;
LABEL_6:
              v8 += *((unsigned __int16 *)v9 + 1);
              goto LABEL_7;
            }
            if ( v17 != 1 )
              break;
            v11 = (a4 & 0x100) == 0;
          }
          else
          {
            v11 = (a4 & 0x40) == 0;
          }
        }
        else
        {
          v11 = (a4 & 0x20) == 0;
        }
      }
      else
      {
        v11 = (a4 & 0x10) == 0;
      }
LABEL_5:
      if ( !v11 )
        goto LABEL_6;
LABEL_7:
      v9 += *((unsigned __int16 *)v9 + 1);
      if ( !--a2 )
        goto LABEL_8;
    }
    v11 = (a4 & 8) == 0;
    goto LABEL_5;
  }
LABEL_8:
  v12 = (v8 + 3) & 0xFFFFFFFC;
  if ( *a3 < v12 )
  {
    *a3 = v12;
    return;
  }
  v18 = (char *)(v5 + 8);
  *(_QWORD *)v5 = *(_QWORD *)a1;
  v19 = a2;
  for ( *(_DWORD *)(v5 + 2) = 8; v19 < *(unsigned __int16 *)(a1 + 4); v4 = (unsigned __int16 *)((char *)v4 + v4[1]) )
  {
    v20 = *(unsigned __int8 *)v4;
    if ( v20 > 0xF )
    {
      v22 = v20 - 16;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( !v23 )
        {
          v27 = a4 >> 4;
          goto LABEL_40;
        }
        v24 = v23 - 1;
        if ( !v24 )
        {
          v27 = a4 >> 5;
          goto LABEL_40;
        }
        v25 = v24 - 1;
        if ( !v25 )
        {
          v27 = a4 >> 6;
          goto LABEL_40;
        }
        v26 = v25 - 1;
        if ( !v26 )
        {
          v27 = a4 >> 7;
          goto LABEL_40;
        }
        if ( v26 == 1 )
        {
          v27 = a4 >> 8;
LABEL_40:
          v21 = (v27 & 1) == 0;
          goto LABEL_25;
        }
      }
    }
    v21 = (a4 & 8) == 0;
LABEL_25:
    if ( !v21 )
    {
      memmove(v18, v4, v4[1]);
      ++*(_WORD *)(v5 + 4);
      *(_WORD *)(v5 + 2) += v4[1];
      v18 += v4[1];
    }
    ++v19;
  }
}
