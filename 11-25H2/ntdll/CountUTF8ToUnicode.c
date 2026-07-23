/*
 * XREFs of CountUTF8ToUnicode @ 0x1800CEBC0
 * Callers:
 *     RtlUTF8ToUnicodeN @ 0x18004B290 (RtlUTF8ToUnicodeN.c)
 *     RtlUTF8StringToUnicodeString @ 0x1800CEAB0 (RtlUTF8StringToUnicodeString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CountUTF8ToUnicode(
        WCHAR *UnicodeStringDestination,
        ULONG UnicodeStringMaxByteCount,
        PULONG UnicodeStringActualByteCount)
{
  int v3; // r9d
  char *v4; // r11
  ULONG v5; // r10d
  unsigned int v6; // ebx
  WCHAR *v8; // r8
  unsigned int v9; // edx
  unsigned int v10; // r9d
  unsigned int v11; // eax
  __int64 result; // rax
  unsigned __int64 v13; // r8
  unsigned int v14; // edx
  char v15; // r9
  int v16; // eax
  unsigned int v17; // r9d
  char v18; // dl

  v3 = 0;
  v4 = (char *)UnicodeStringDestination + UnicodeStringMaxByteCount;
  v5 = UnicodeStringMaxByteCount;
  v6 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_2:
      v8 = UnicodeStringDestination;
      if ( UnicodeStringDestination >= (WCHAR *)v4 )
      {
        if ( v3 )
        {
          v5 += (v3 >> 30) + 1;
          v6 = 263;
        }
        goto LABEL_14;
      }
      v9 = *(char *)UnicodeStringDestination;
      UnicodeStringDestination = (WCHAR *)((char *)UnicodeStringDestination + 1);
      if ( v3 )
        break;
      LOBYTE(v10) = v9;
      if ( v9 <= 0x7F )
        goto LABEL_5;
LABEL_8:
      --v5;
      if ( (v10 & 0x40) != 0 )
      {
        if ( (v10 & 0x20) != 0 )
        {
          v11 = v10 & 0xF;
          if ( (v10 & 0x10) != 0 )
          {
            if ( v11 > 4 )
              goto LABEL_28;
            v3 = v11 | 0x504D0C00;
            --v5;
          }
          else
          {
            v3 = v11 | 0x48228000;
            --v5;
          }
        }
        else
        {
          v17 = v10 & 0x1F;
          if ( v17 <= 1 )
            goto LABEL_28;
          v3 = v17 | 0x800000;
        }
      }
      else
      {
LABEL_28:
        v6 = 263;
        ++v5;
LABEL_29:
        v3 = 0;
      }
    }
    if ( (v9 & 0xC0) != 0x80 )
    {
      UnicodeStringDestination = v8;
      v5 += v3 >> 30;
      goto LABEL_28;
    }
    v3 = (v3 << 6) | v9 & 0x3F;
    if ( (v3 & 0x20000000) != 0 )
      break;
    if ( (v3 & 0x10000000) != 0 )
    {
      if ( (v3 & 0x800000) == 0 && (v3 & 0x1F0u) - 16 > 0xF0 )
        goto LABEL_28;
    }
    else
    {
      if ( (v3 & 0x3E0) == 0 )
        goto LABEL_28;
      if ( (v3 & 0x3E0) == 0x360 )
      {
        ++v5;
        v6 = 263;
        v3 = 0;
      }
    }
  }
LABEL_5:
  if ( (unsigned __int64)(v4 - (char *)UnicodeStringDestination) > 0xD )
  {
    v13 = (unsigned __int64)(v4 - 7);
    while ( 1 )
    {
      do
      {
        if ( (unsigned __int64)UnicodeStringDestination >= v13 )
          goto LABEL_29;
        v14 = *(char *)UnicodeStringDestination;
        UnicodeStringDestination = (WCHAR *)((char *)UnicodeStringDestination + 1);
        if ( v14 > 0x7F )
          break;
        if ( ((unsigned __int8)UnicodeStringDestination & 1) != 0 )
        {
          v14 = *(char *)UnicodeStringDestination;
          UnicodeStringDestination = (WCHAR *)((char *)UnicodeStringDestination + 1);
          if ( v14 > 0x7F )
            break;
        }
        if ( ((unsigned __int8)UnicodeStringDestination & 2) == 0 )
          goto LABEL_22;
        LOWORD(v14) = *UnicodeStringDestination;
        if ( (*UnicodeStringDestination & 0x8080) == 0 )
        {
          ++UnicodeStringDestination;
LABEL_22:
          while ( (unsigned __int64)UnicodeStringDestination < v13 )
          {
            v14 = *(_DWORD *)UnicodeStringDestination;
            if ( ((*((_DWORD *)UnicodeStringDestination + 1) | *(_DWORD *)UnicodeStringDestination) & 0x80808080) != 0 )
              goto LABEL_30;
            UnicodeStringDestination += 4;
            if ( (unsigned __int64)UnicodeStringDestination >= v13 )
              break;
            v14 = *(_DWORD *)UnicodeStringDestination;
            if ( ((*((_DWORD *)UnicodeStringDestination + 1) | *(_DWORD *)UnicodeStringDestination) & 0x80808080) != 0 )
              goto LABEL_30;
            UnicodeStringDestination += 4;
          }
          goto LABEL_29;
        }
LABEL_30:
        UnicodeStringDestination = (WCHAR *)((char *)UnicodeStringDestination + 1);
      }
      while ( (unsigned __int8)v14 <= 0x7Fu );
      v15 = *(_BYTE *)UnicodeStringDestination;
      UnicodeStringDestination = (WCHAR *)((char *)UnicodeStringDestination + 1);
      if ( (v14 & 0x40) == 0 || (v15 & 0xC0) != 0x80 )
      {
LABEL_41:
        --UnicodeStringDestination;
        v3 = 0;
        goto LABEL_2;
      }
      if ( (v14 & 0x20) == 0 )
        break;
      if ( (v14 & 0x10) != 0 )
      {
        if ( ((v15 & 0x3F | ((v14 & 0xF) << 6)) >> 4) - 1 > 0xF )
          goto LABEL_41;
        v18 = *(_BYTE *)UnicodeStringDestination & 0xC0;
        if ( v18 != (char)0x80 || (*((_BYTE *)UnicodeStringDestination + 1) & 0xC0) != v18 )
          goto LABEL_41;
        ++UnicodeStringDestination;
        v5 -= 2;
      }
      else
      {
        v16 = v15 & 0x20 | ((v14 & 0xF) << 6) & 0x3E0;
        if ( !v16 || v16 == 864 || (*(_BYTE *)UnicodeStringDestination & 0xC0) != 0x80 )
          goto LABEL_41;
        UnicodeStringDestination = (WCHAR *)((char *)UnicodeStringDestination + 1);
        --v5;
LABEL_39:
        --v5;
      }
    }
    if ( (v14 & 0x1E) == 0 )
      goto LABEL_41;
    goto LABEL_39;
  }
  while ( UnicodeStringDestination < (WCHAR *)v4 )
  {
    v10 = *(char *)UnicodeStringDestination;
    UnicodeStringDestination = (WCHAR *)((char *)UnicodeStringDestination + 1);
    if ( v10 > 0x7F )
      goto LABEL_8;
  }
LABEL_14:
  result = v6;
  *UnicodeStringActualByteCount = 2 * v5;
  return result;
}
