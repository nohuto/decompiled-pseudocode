/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x140906050
 * Callers:
 *     RtlUTF8StringToUnicodeString @ 0x140787260 (RtlUTF8StringToUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
 *     RtlMultiByteToUnicodeSize @ 0x140904BB0 (RtlMultiByteToUnicodeSize.c)
 *     RtlMultiByteToUnicodeN @ 0x140905510 (RtlMultiByteToUnicodeN.c)
 *     RtlAnsiCharToUnicodeChar @ 0x140905970 (RtlAnsiCharToUnicodeChar.c)
 *     RtlCustomCPToUnicodeN @ 0x140905ED0 (RtlCustomCPToUnicodeN.c)
 *     EtwpApplyContainerFilter @ 0x140A78118 (EtwpApplyContainerFilter.c)
 * Callees:
 *     CountUTF8ToUnicode @ 0x1404766C4 (CountUTF8ToUnicode.c)
 */

NTSTATUS __stdcall RtlUTF8ToUnicodeN(
        PWSTR UnicodeStringDestination,
        ULONG UnicodeStringMaxByteCount,
        PULONG UnicodeStringActualByteCount,
        PCCH UTF8StringSource,
        ULONG UTF8StringByteCount)
{
  PWSTR v5; // rax
  NTSTATUS v8; // r8d
  WCHAR *v9; // rdi
  unsigned int v10; // edx
  const CHAR *v11; // r11
  const CHAR *v12; // rbp
  unsigned int v13; // esi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  WCHAR *i; // rbp
  unsigned int v18; // edx
  unsigned int v19; // esi
  unsigned int v20; // ecx
  char v21; // si
  int v22; // esi
  CHAR v23; // r14
  unsigned int v24; // esi
  WCHAR v25; // si
  unsigned int v26; // edx
  unsigned int v27; // edx
  CHAR v28; // dl
  int v29; // esi

  v5 = UnicodeStringDestination;
  v8 = 0;
  v9 = &UnicodeStringDestination[(unsigned __int64)UnicodeStringMaxByteCount >> 1];
  v10 = 0;
  v11 = &UTF8StringSource[UTF8StringByteCount];
  if ( !UTF8StringSource )
    return -1073741582;
  if ( !UnicodeStringDestination )
  {
    if ( UnicodeStringActualByteCount )
      return CountUTF8ToUnicode((char *)UTF8StringSource, UTF8StringByteCount, UnicodeStringActualByteCount);
    else
      return -1073741811;
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_3:
      v12 = UTF8StringSource;
      if ( UTF8StringSource >= v11 )
      {
        if ( v10 )
        {
          v8 = 263;
          if ( v5 < v9 )
            *v5++ = -3;
          else
            v8 = -1073741789;
        }
LABEL_13:
        if ( UnicodeStringActualByteCount )
          *UnicodeStringActualByteCount = 2 * (v5 - UnicodeStringDestination);
        return v8;
      }
      v13 = *UTF8StringSource++;
      if ( v10 )
        break;
      LOWORD(v10) = v13;
      if ( v13 <= 0x7F )
        goto LABEL_6;
LABEL_36:
      if ( (v10 & 0x40) == 0 )
        goto LABEL_68;
      if ( (v10 & 0x20) != 0 )
      {
        v20 = v10 & 0xF;
        if ( (v10 & 0x10) != 0 )
        {
          if ( v20 > 4 )
            goto LABEL_68;
          v10 = v20 | 0x504D0C00;
        }
        else
        {
          v10 = v20 | 0x48228000;
        }
      }
      else
      {
        v26 = v10 & 0x1F;
        if ( v26 <= 1 )
        {
LABEL_68:
          v8 = 263;
          LOWORD(v10) = -3;
LABEL_6:
          if ( v5 >= v9 )
            goto LABEL_40;
          *v5++ = v10;
          v14 = v11 - UTF8StringSource;
          v15 = v9 - v5;
          if ( (unsigned __int64)(v11 - UTF8StringSource) > 0xD )
          {
            if ( v14 < v15 )
              v15 = v11 - UTF8StringSource;
            for ( i = &v5[v15 - 7]; ; --i )
            {
              while ( 2 )
              {
                if ( v5 >= i )
                {
LABEL_30:
                  v10 = 0;
                  goto LABEL_3;
                }
                v18 = *UTF8StringSource++;
                if ( v18 <= 0x7F )
                {
                  *v5++ = v18;
                  if ( ((unsigned __int8)UTF8StringSource & 1) != 0 )
                  {
                    v18 = *UTF8StringSource++;
                    if ( v18 > 0x7F )
                      break;
                    *v5++ = v18;
                  }
                  if ( ((unsigned __int8)UTF8StringSource & 2) == 0 )
                    goto LABEL_26;
                  v18 = *(unsigned __int16 *)UTF8StringSource;
                  if ( (v18 & 0x8080) == 0 )
                  {
                    UTF8StringSource += 2;
                    *v5 = v18 & 0x7F;
                    v5[1] = (v18 >> 8) & 0x7F;
                    v5 += 2;
LABEL_26:
                    while ( v5 < i )
                    {
                      v19 = *((_DWORD *)UTF8StringSource + 1);
                      v18 = *(_DWORD *)UTF8StringSource;
                      if ( ((*(_DWORD *)UTF8StringSource | v19) & 0x80808080) != 0 )
                        goto LABEL_43;
                      UTF8StringSource += 8;
                      *v5 = v18 & 0x7F;
                      v5[1] = (v18 >> 8) & 0x7F;
                      v5[2] = BYTE2(v18) & 0x7F;
                      v5[3] = HIBYTE(v18) & 0x7F;
                      v5[4] = v19 & 0x7F;
                      v5[5] = (v19 >> 8) & 0x7F;
                      v5[6] = BYTE2(v19) & 0x7F;
                      v5[7] = HIBYTE(v19) & 0x7F;
                      v5 += 8;
                    }
                    goto LABEL_30;
                  }
LABEL_43:
                  ++UTF8StringSource;
                  if ( (unsigned __int8)v18 <= 0x7Fu )
                  {
                    *v5++ = (unsigned __int8)v18;
                    continue;
                  }
                }
                break;
              }
              v21 = *UTF8StringSource++;
              if ( (v18 & 0x40) == 0 || (v21 & 0xC0) != 0x80 )
              {
LABEL_29:
                UTF8StringSource -= 2;
                goto LABEL_30;
              }
              v22 = v21 & 0x3F;
              if ( (v18 & 0x20) != 0 )
              {
                v23 = *UTF8StringSource;
                v24 = ((v18 & 0xF) << 6) | v22;
                if ( (v18 & 0x10) != 0 )
                {
                  if ( (v24 >> 4) - 1 > 0xF )
                    goto LABEL_29;
                  if ( (v23 & 0xC0) != 0x80 )
                    goto LABEL_29;
                  v28 = UTF8StringSource[1];
                  v29 = v23 & 0x3F | (v24 << 6);
                  if ( (v28 & 0xC0) != 0x80 )
                    goto LABEL_29;
                  UTF8StringSource += 2;
                  *v5++ = (((v28 & 0x3F | (unsigned int)(v29 << 6)) >> 10) & 0x7FF) - 10304;
                  v25 = (v28 & 0x3F | ((_WORD)v29 << 6) & 0x3FF) - 9216;
                }
                else
                {
                  if ( (v24 & 0x3E0) == 0 || (v24 & 0x3E0) == 0x360 || (v23 & 0xC0) != 0x80 )
                    goto LABEL_29;
                  ++UTF8StringSource;
                  v25 = v23 & 0x3F | ((_WORD)v24 << 6);
                }
                --i;
              }
              else
              {
                v27 = v18 & 0x1F;
                if ( v27 <= 1 )
                  goto LABEL_29;
                v25 = ((_WORD)v27 << 6) | v22;
              }
              *v5++ = v25;
            }
          }
          if ( v15 >= v14 )
          {
            while ( UTF8StringSource < v11 )
            {
              v10 = *UTF8StringSource++;
              if ( v10 > 0x7F )
                goto LABEL_36;
              *v5++ = v10;
            }
            goto LABEL_13;
          }
          v10 = 0;
        }
        else
        {
          v10 = v26 | 0x800000;
        }
      }
    }
    if ( (v13 & 0xC0) != 0x80 )
    {
      UTF8StringSource = v12;
      goto LABEL_68;
    }
    v10 = (v10 << 6) | v13 & 0x3F;
    if ( (v10 & 0x20000000) != 0 )
      break;
    if ( (v10 & 0x10000000) != 0 )
    {
      if ( (v10 & 0x800000) == 0 && (v10 & 0x1F0) - 16 > 0xF0 )
        goto LABEL_68;
    }
    else if ( (v10 & 0x3E0) == 0 || (v10 & 0x3E0) == 0x360 )
    {
      goto LABEL_68;
    }
  }
  if ( (v10 & 0x101F0000) <= 0x10000000 )
    goto LABEL_6;
  if ( v5 < v9 )
  {
    *v5++ = ((v10 >> 10) & 0x7FF) - 10304;
    LOWORD(v10) = (v10 & 0x3FF) - 9216;
    goto LABEL_6;
  }
LABEL_40:
  if ( UnicodeStringActualByteCount )
    *UnicodeStringActualByteCount = 2 * (v5 - UnicodeStringDestination);
  return -1073741789;
}
