/*
 * XREFs of CountUTF8ToUnicode @ 0x1404766C4
 * Callers:
 *     RtlUTF8StringToUnicodeString @ 0x140787260 (RtlUTF8StringToUnicodeString.c)
 *     RtlUTF8ToUnicodeN @ 0x140906050 (RtlUTF8ToUnicodeN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CountUTF8ToUnicode(char *a1, int a2, _DWORD *a3)
{
  int v3; // r9d
  char *v4; // rbx
  unsigned int v5; // r11d
  char *v7; // r10
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  __int64 result; // rax
  unsigned __int64 v11; // r10
  unsigned int v12; // r8d
  char v13; // r9
  int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // eax
  char v17; // r8
  unsigned int v18; // r9d

  v3 = 0;
  v4 = &a1[a2];
  v5 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = a1;
        if ( a1 >= v4 )
        {
          if ( v3 )
          {
            a2 += (v3 >> 30) + 1;
            v5 = 263;
          }
          goto LABEL_12;
        }
        v8 = *a1++;
        if ( v3 )
          break;
        v9 = v8;
LABEL_5:
        if ( v9 <= 0x7F )
          goto LABEL_6;
        --a2;
        if ( (v9 & 0x40) == 0 )
          goto LABEL_60;
        if ( (v9 & 0x20) != 0 )
        {
          v16 = v9 & 0xF;
          if ( (v9 & 0x10) != 0 )
          {
            if ( v16 > 4 )
              goto LABEL_60;
            v3 = v16 | 0x504D0C00;
          }
          else
          {
            v3 = v16 | 0x48228000;
          }
          --a2;
        }
        else
        {
          v18 = v9 & 0x1F;
          if ( v18 <= 1 )
            goto LABEL_60;
          v3 = v18 | 0x800000;
        }
      }
      if ( (v8 & 0xC0) != 0x80 )
      {
        a1 = v7;
        a2 += v3 >> 30;
LABEL_60:
        v5 = 263;
        ++a2;
        goto LABEL_26;
      }
      v3 = (v3 << 6) | v8 & 0x3F;
      if ( (v3 & 0x20000000) != 0 )
        break;
      if ( (v3 & 0x10000000) != 0 )
      {
        if ( (v3 & 0x800000) == 0 && (v3 & 0x1F0u) - 16 > 0xF0 )
          goto LABEL_60;
      }
      else if ( (v3 & 0x3E0) == 0 || (v3 & 0x3E0) == 0x360 )
      {
        goto LABEL_60;
      }
    }
LABEL_6:
    if ( (unsigned __int64)(v4 - a1) <= 0xD )
      break;
    v11 = (unsigned __int64)(v4 - 7);
    while ( (unsigned __int64)a1 < v11 )
    {
      v12 = *a1++;
      if ( v12 <= 0x7F )
      {
        if ( ((unsigned __int8)a1 & 1) == 0 || (v12 = *a1, ++a1, v12 <= 0x7F) )
        {
          if ( ((unsigned __int8)a1 & 2) == 0 )
            goto LABEL_20;
          LOWORD(v12) = *(_WORD *)a1;
          if ( (*(_WORD *)a1 & 0x8080) == 0 )
          {
            a1 += 2;
LABEL_20:
            while ( (unsigned __int64)a1 < v11 )
            {
              v12 = *(_DWORD *)a1;
              if ( ((*((_DWORD *)a1 + 1) | *(_DWORD *)a1) & 0x80808080) != 0 )
                goto LABEL_27;
              a1 += 8;
              if ( (unsigned __int64)a1 >= v11 )
                break;
              v12 = *(_DWORD *)a1;
              if ( ((*((_DWORD *)a1 + 1) | *(_DWORD *)a1) & 0x80808080) != 0 )
                goto LABEL_27;
              a1 += 8;
            }
            break;
          }
LABEL_27:
          ++a1;
          if ( (unsigned __int8)v12 <= 0x7Fu )
            continue;
        }
      }
      v13 = *a1++;
      if ( (v12 & 0x40) == 0 || (v13 & 0xC0) != 0x80 )
      {
LABEL_25:
        a1 -= 2;
        break;
      }
      if ( (v12 & 0x20) != 0 )
      {
        if ( (v12 & 0x10) != 0 )
        {
          if ( ((v13 & 0x3F | ((v12 & 0xF) << 6)) >> 4) - 1 > 0xF )
            goto LABEL_25;
          v17 = *a1 & 0xC0;
          if ( v17 != (char)0x80 || (a1[1] & 0xC0) != v17 )
            goto LABEL_25;
          v15 = 2LL;
        }
        else
        {
          v14 = v13 & 0x20 | ((v12 & 0xF) << 6) & 0x3E0;
          if ( !v14 || v14 == 864 || (*a1 & 0xC0) != 0x80 )
            goto LABEL_25;
          v15 = 1LL;
        }
        --a2;
        a1 += v15;
      }
      else if ( (v12 & 0x1E) == 0 )
      {
        goto LABEL_25;
      }
      --a2;
    }
LABEL_26:
    v3 = 0;
  }
  while ( a1 < v4 )
  {
    v9 = *a1++;
    if ( v9 > 0x7F )
      goto LABEL_5;
  }
LABEL_12:
  result = v5;
  *a3 = 2 * a2;
  return result;
}
