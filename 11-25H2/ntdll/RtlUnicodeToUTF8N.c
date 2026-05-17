/*
 * XREFs of RtlUnicodeToUTF8N @ 0x18006B850
 * Callers:
 *     RtlxUnicodeStringToOemSize @ 0x18006A020 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x18006AF30 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeToMultiByteSize @ 0x18006B270 (RtlUnicodeToMultiByteSize.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x18006B330 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUnicodeToCustomCPN @ 0x18006B6F0 (RtlUnicodeToCustomCPN.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x18006BC00 (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlUnicodeToMultiByteN @ 0x18006BDF0 (RtlUnicodeToMultiByteN.c)
 *     RtlUnicodeStringToUTF8String @ 0x180149D80 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeToUTF8N(_BYTE *a1, int a2, _DWORD *a3, unsigned int *a4, unsigned int a5)
{
  unsigned int v5; // edi
  unsigned int v6; // r10d
  int v8; // r11d
  unsigned int *v9; // rbx
  _BYTE *v10; // rbp
  int v11; // edx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 result; // rax
  unsigned int *v16; // r10
  unsigned int v17; // edx
  unsigned int v18; // r8d
  unsigned int v19; // eax
  unsigned int v20; // eax
  char v21; // al
  _BYTE *v22; // rcx
  int v23; // r8d

  v5 = 0;
  v6 = 0;
  v8 = (int)a1;
  if ( !a4 )
    return 3221225714LL;
  if ( !a1 )
  {
    if ( a3 )
      return CountUnicodeToUTF8(a4, a5);
    else
      return 3221225485LL;
  }
  if ( (a5 & 1) != 0 )
    return 3221225715LL;
  v9 = (unsigned int *)((char *)a4 + 2 * ((unsigned __int64)a5 >> 1));
  v10 = &a1[a2];
  while ( 1 )
  {
    do
    {
LABEL_5:
      if ( a4 >= v9 )
      {
        if ( !v6 )
          goto LABEL_18;
        break;
      }
      v11 = *(unsigned __int16 *)a4;
      if ( v6 )
      {
        if ( (unsigned int)(v11 - 56320) <= 0x3FF )
        {
          v6 = v11 + (v6 << 10) - 56613888;
          a4 = (unsigned int *)((char *)a4 + 2);
        }
        break;
      }
      v6 = *(unsigned __int16 *)a4;
      a4 = (unsigned int *)((char *)a4 + 2);
LABEL_8:
      ;
    }
    while ( v6 - 55296 <= 0x3FF );
    if ( v6 - 55296 <= 0x7FF )
    {
      v5 = 263;
      v6 = 65533;
LABEL_35:
      v12 = (v6 > 0xFFFF) + 2LL;
      goto LABEL_36;
    }
    v12 = 1LL;
    if ( v6 <= 0x7F )
      goto LABEL_11;
    if ( v6 > 0x7FF )
      goto LABEL_35;
LABEL_36:
    ++v12;
LABEL_11:
    if ( a1 > &v10[-v12] )
      break;
    if ( v6 > 0x7F )
    {
      if ( v6 <= 0x7FF )
      {
        *a1++ = (v6 >> 6) | 0xC0;
        LOBYTE(v6) = v6 & 0x3F | 0x80;
      }
      else
      {
        if ( v6 > 0xFFFF )
        {
          *a1++ = (v6 >> 18) | 0xF0;
          v21 = (v6 >> 12) & 0x3F | 0x80;
        }
        else
        {
          v21 = (v6 >> 12) | 0xE0;
        }
        *a1 = v21;
        v22 = a1 + 1;
        *v22 = (v6 >> 6) & 0x3F | 0x80;
        a1 = v22 + 1;
        LOBYTE(v6) = v6 & 0x3F | 0x80;
      }
    }
    *a1++ = v6;
    v13 = ((char *)v9 - (char *)a4) >> 1;
    v14 = v10 - a1;
    if ( v13 > 0xD )
    {
      if ( v14 < v13 )
        v13 = v10 - a1;
      v16 = (unsigned int *)((char *)a4 + 2 * v13 - 10);
LABEL_23:
      while ( a4 < v16 )
      {
        v17 = *(unsigned __int16 *)a4;
        a4 = (unsigned int *)((char *)a4 + 2);
        if ( v17 <= 0x7F )
        {
          *a1++ = v17;
          if ( ((unsigned __int8)a4 & 2) == 0 )
            goto LABEL_26;
          v17 = *(unsigned __int16 *)a4;
          a4 = (unsigned int *)((char *)a4 + 2);
          if ( v17 <= 0x7F )
          {
            *a1++ = v17;
LABEL_26:
            while ( a4 < v16 )
            {
              v18 = a4[1];
              v17 = *a4;
              if ( ((*a4 | v18) & 0xFF80FF80) != 0 )
              {
                v17 = (unsigned __int16)v17;
                a4 = (unsigned int *)((char *)a4 + 2);
                if ( (unsigned __int16)v17 > 0x7Fu )
                  goto LABEL_41;
                *a1++ = v17;
                goto LABEL_23;
              }
              *a1 = v17;
              a4 += 2;
              a1[2] = v18;
              a1[1] = BYTE2(v17);
              a1[3] = BYTE2(v18);
              a1 += 4;
            }
            break;
          }
        }
LABEL_41:
        if ( v17 > 0x7FF )
        {
          if ( v17 - 55296 <= 0x7FF )
          {
            if ( v17 > 0xDBFF )
            {
              a4 = (unsigned int *)((char *)a4 - 2);
              break;
            }
            v23 = *(unsigned __int16 *)a4;
            a4 = (unsigned int *)((char *)a4 + 2);
            if ( (unsigned int)(v23 - 56320) > 0x3FF )
            {
              --a4;
              v6 = 0;
              goto LABEL_5;
            }
            v17 = v23 + (v17 << 10) - 56613888;
            *a1++ = (v17 >> 18) | 0xF0;
            v20 = v17 & 0x3F000 | 0x80000;
          }
          else
          {
            v20 = v17 | 0xE0000;
          }
          v16 = (unsigned int *)((char *)v16 - 2);
          *a1++ = v20 >> 12;
          v19 = v17 & 0xFC0 | 0x2000;
        }
        else
        {
          v19 = v17 | 0x3000;
        }
        *a1 = v19 >> 6;
        v16 = (unsigned int *)((char *)v16 - 2);
        a1[1] = v17 & 0x3F | 0x80;
        a1 += 2;
      }
    }
    else if ( v14 >= v13 )
    {
      while ( a4 < v9 )
      {
        v6 = *(unsigned __int16 *)a4;
        a4 = (unsigned int *)((char *)a4 + 2);
        if ( v6 > 0x7F )
          goto LABEL_8;
        *a1++ = v6;
      }
LABEL_18:
      result = v5;
      goto LABEL_19;
    }
    v6 = 0;
  }
  result = 3221225507LL;
LABEL_19:
  *a3 = (_DWORD)a1 - v8;
  return result;
}
