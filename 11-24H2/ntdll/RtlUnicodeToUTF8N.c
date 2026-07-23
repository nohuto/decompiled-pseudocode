/*
 * XREFs of RtlUnicodeToUTF8N @ 0x18007E730
 * Callers:
 *     RtlxUnicodeStringToOemSize @ 0x18007CF00 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x18007DE10 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeToMultiByteSize @ 0x18007E150 (RtlUnicodeToMultiByteSize.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x18007E210 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUnicodeToCustomCPN @ 0x18007E5D0 (RtlUnicodeToCustomCPN.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x18007EAE0 (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlUnicodeToMultiByteN @ 0x18007ECD0 (RtlUnicodeToMultiByteN.c)
 *     RtlUnicodeStringToUTF8String @ 0x180146B80 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUnicodeToUTF8N(
        PCHAR UTF8StringDestination,
        ULONG UTF8StringMaxByteCount,
        PULONG UTF8StringActualByteCount,
        PCWCH UnicodeStringSource,
        ULONG UnicodeStringByteCount)
{
  NTSTATUS v5; // edi
  unsigned int v6; // r10d
  int v8; // r11d
  const WCHAR *v9; // rbx
  CHAR *v10; // rbp
  int v11; // edx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  NTSTATUS result; // eax
  const WCHAR *v16; // r10
  unsigned int v17; // edx
  int v18; // r8d
  unsigned int v19; // eax
  unsigned int v20; // eax
  CHAR v21; // al
  PCHAR v22; // rcx
  int v23; // r8d

  v5 = 0;
  v6 = 0;
  v8 = (int)UTF8StringDestination;
  if ( !UnicodeStringSource )
    return -1073741582;
  if ( !UTF8StringDestination )
  {
    if ( UTF8StringActualByteCount )
      return CountUnicodeToUTF8(
               (PCHAR)UnicodeStringSource,
               UnicodeStringByteCount,
               UTF8StringActualByteCount,
               UnicodeStringSource,
               UnicodeStringByteCount);
    else
      return -1073741811;
  }
  if ( (UnicodeStringByteCount & 1) != 0 )
    return -1073741581;
  v9 = &UnicodeStringSource[(unsigned __int64)UnicodeStringByteCount >> 1];
  v10 = &UTF8StringDestination[UTF8StringMaxByteCount];
  while ( 1 )
  {
    do
    {
LABEL_5:
      if ( UnicodeStringSource >= v9 )
      {
        if ( !v6 )
          goto LABEL_18;
        break;
      }
      v11 = *UnicodeStringSource;
      if ( v6 )
      {
        if ( (unsigned int)(v11 - 56320) <= 0x3FF )
        {
          v6 = v11 + (v6 << 10) - 56613888;
          ++UnicodeStringSource;
        }
        break;
      }
      v6 = *UnicodeStringSource++;
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
    if ( UTF8StringDestination > &v10[-v12] )
      break;
    if ( v6 > 0x7F )
    {
      if ( v6 <= 0x7FF )
      {
        *UTF8StringDestination++ = (v6 >> 6) | 0xC0;
        LOBYTE(v6) = v6 & 0x3F | 0x80;
      }
      else
      {
        if ( v6 > 0xFFFF )
        {
          *UTF8StringDestination++ = (v6 >> 18) | 0xF0;
          v21 = (v6 >> 12) & 0x3F | 0x80;
        }
        else
        {
          v21 = (v6 >> 12) | 0xE0;
        }
        *UTF8StringDestination = v21;
        v22 = UTF8StringDestination + 1;
        *v22 = (v6 >> 6) & 0x3F | 0x80;
        UTF8StringDestination = v22 + 1;
        LOBYTE(v6) = v6 & 0x3F | 0x80;
      }
    }
    *UTF8StringDestination++ = v6;
    v13 = v9 - UnicodeStringSource;
    v14 = v10 - UTF8StringDestination;
    if ( v13 > 0xD )
    {
      if ( v14 < v13 )
        v13 = v10 - UTF8StringDestination;
      v16 = &UnicodeStringSource[v13 - 5];
LABEL_23:
      while ( UnicodeStringSource < v16 )
      {
        v17 = *UnicodeStringSource++;
        if ( v17 <= 0x7F )
        {
          *UTF8StringDestination++ = v17;
          if ( ((unsigned __int8)UnicodeStringSource & 2) == 0 )
            goto LABEL_26;
          v17 = *UnicodeStringSource++;
          if ( v17 <= 0x7F )
          {
            *UTF8StringDestination++ = v17;
LABEL_26:
            while ( UnicodeStringSource < v16 )
            {
              v18 = *((_DWORD *)UnicodeStringSource + 1);
              v17 = *(_DWORD *)UnicodeStringSource;
              if ( ((*(_DWORD *)UnicodeStringSource | v18) & 0xFF80FF80) != 0 )
              {
                v17 = (unsigned __int16)v17;
                ++UnicodeStringSource;
                if ( (unsigned __int16)v17 > 0x7Fu )
                  goto LABEL_41;
                *UTF8StringDestination++ = v17;
                goto LABEL_23;
              }
              *UTF8StringDestination = v17;
              UnicodeStringSource += 4;
              UTF8StringDestination[2] = v18;
              UTF8StringDestination[1] = BYTE2(v17);
              UTF8StringDestination[3] = BYTE2(v18);
              UTF8StringDestination += 4;
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
              --UnicodeStringSource;
              break;
            }
            v23 = *UnicodeStringSource++;
            if ( (unsigned int)(v23 - 56320) > 0x3FF )
            {
              UnicodeStringSource -= 2;
              v6 = 0;
              goto LABEL_5;
            }
            v17 = v23 + (v17 << 10) - 56613888;
            *UTF8StringDestination++ = (v17 >> 18) | 0xF0;
            v20 = v17 & 0x3F000 | 0x80000;
          }
          else
          {
            v20 = v17 | 0xE0000;
          }
          --v16;
          *UTF8StringDestination++ = v20 >> 12;
          v19 = v17 & 0xFC0 | 0x2000;
        }
        else
        {
          v19 = v17 | 0x3000;
        }
        *UTF8StringDestination = v19 >> 6;
        --v16;
        UTF8StringDestination[1] = v17 & 0x3F | 0x80;
        UTF8StringDestination += 2;
      }
    }
    else if ( v14 >= v13 )
    {
      while ( UnicodeStringSource < v9 )
      {
        v6 = *UnicodeStringSource++;
        if ( v6 > 0x7F )
          goto LABEL_8;
        *UTF8StringDestination++ = v6;
      }
LABEL_18:
      result = v5;
      goto LABEL_19;
    }
    v6 = 0;
  }
  result = -1073741789;
LABEL_19:
  *UTF8StringActualByteCount = (_DWORD)UTF8StringDestination - v8;
  return result;
}
