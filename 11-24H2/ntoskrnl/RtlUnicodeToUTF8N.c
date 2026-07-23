/*
 * XREFs of RtlUnicodeToUTF8N @ 0x140905BE0
 * Callers:
 *     UpcaseUnicodeToUTF8NHelper @ 0x140325D78 (UpcaseUnicodeToUTF8NHelper.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x14064B27C (EtwpQueryPartitionRegistryInformation.c)
 *     RtlUnicodeStringToUTF8String @ 0x140787370 (RtlUnicodeStringToUTF8String.c)
 *     RtlxUnicodeStringToOemSize @ 0x140904E70 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeToMultiByteSize @ 0x140905100 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x1409051E0 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeToMultiByteN @ 0x140905810 (RtlUnicodeToMultiByteN.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1409064C0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUnicodeToCustomCPN @ 0x1409066E0 (RtlUnicodeToCustomCPN.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x140A75568 (EtwpGetAutoLoggerEventNameFilter.c)
 * Callees:
 *     CountUnicodeToUTF8 @ 0x140445FBC (CountUnicodeToUTF8.c)
 */

NTSTATUS __stdcall RtlUnicodeToUTF8N(
        PCHAR UTF8StringDestination,
        ULONG UTF8StringMaxByteCount,
        PULONG UTF8StringActualByteCount,
        PCWCH UnicodeStringSource,
        ULONG UnicodeStringByteCount)
{
  NTSTATUS v5; // ebx
  unsigned int v6; // r10d
  int v8; // r11d
  CHAR *v9; // rbp
  const WCHAR *v10; // rsi
  int v11; // edx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  NTSTATUS result; // eax
  const WCHAR *v16; // r10
  unsigned int v17; // edx
  int v18; // r8d
  CHAR v19; // al
  CHAR v20; // al
  unsigned int v21; // eax
  int v22; // r8d
  unsigned int v23; // eax

  v5 = 0;
  v6 = 0;
  v8 = (int)UTF8StringDestination;
  if ( !UnicodeStringSource )
    return -1073741582;
  if ( !UTF8StringDestination )
  {
    if ( UTF8StringActualByteCount )
      return CountUnicodeToUTF8((unsigned int *)UnicodeStringSource, UnicodeStringByteCount, UTF8StringActualByteCount);
    else
      return -1073741811;
  }
  if ( (UnicodeStringByteCount & 1) != 0 )
    return -1073741581;
  v9 = &UTF8StringDestination[UTF8StringMaxByteCount];
  v10 = &UnicodeStringSource[(unsigned __int64)UnicodeStringByteCount >> 1];
  while ( 1 )
  {
    do
    {
      if ( UnicodeStringSource >= v10 )
      {
        if ( !v6 )
          goto LABEL_16;
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
LABEL_40:
      v12 = (v6 > 0xFFFF) + 2LL;
      goto LABEL_41;
    }
    v12 = 1LL;
    if ( v6 <= 0x7F )
      goto LABEL_11;
    if ( v6 > 0x7FF )
      goto LABEL_40;
LABEL_41:
    ++v12;
LABEL_11:
    if ( UTF8StringDestination > &v9[-v12] )
      break;
    if ( v6 > 0x7F )
    {
      if ( v6 <= 0x7FF )
      {
        v20 = (v6 >> 6) | 0xC0;
      }
      else
      {
        if ( v6 > 0xFFFF )
        {
          *UTF8StringDestination++ = (v6 >> 18) | 0xF0;
          v19 = (v6 >> 12) & 0x3F | 0x80;
        }
        else
        {
          v19 = (v6 >> 12) | 0xE0;
        }
        *UTF8StringDestination++ = v19;
        v20 = (v6 >> 6) & 0x3F | 0x80;
      }
      *UTF8StringDestination++ = v20;
      LOBYTE(v6) = v6 & 0x3F | 0x80;
    }
    *UTF8StringDestination++ = v6;
    v13 = v10 - UnicodeStringSource;
    v14 = v9 - UTF8StringDestination;
    if ( v13 > 0xD )
    {
      if ( v14 < v13 )
        v13 = v9 - UTF8StringDestination;
      v16 = &UnicodeStringSource[v13 - 5];
LABEL_26:
      while ( UnicodeStringSource < v16 )
      {
        v17 = *UnicodeStringSource++;
        if ( v17 <= 0x7F )
        {
          *UTF8StringDestination++ = v17;
          if ( ((unsigned __int8)UnicodeStringSource & 2) == 0 )
            goto LABEL_29;
          v17 = *UnicodeStringSource++;
          if ( v17 <= 0x7F )
          {
            *UTF8StringDestination++ = v17;
LABEL_29:
            while ( UnicodeStringSource < v16 )
            {
              v18 = *((_DWORD *)UnicodeStringSource + 1);
              v17 = *(_DWORD *)UnicodeStringSource;
              if ( ((*(_DWORD *)UnicodeStringSource | v18) & 0xFF80FF80) != 0 )
              {
                v17 = (unsigned __int16)v17;
                ++UnicodeStringSource;
                if ( (unsigned __int16)v17 > 0x7Fu )
                  goto LABEL_55;
                *UTF8StringDestination++ = v17;
                goto LABEL_26;
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
LABEL_55:
        if ( v17 > 0x7FF )
        {
          if ( v17 - 55296 > 0x7FF )
          {
            v23 = v17 | 0xE0000;
          }
          else
          {
            if ( v17 > 0xDBFF )
            {
              --UnicodeStringSource;
              break;
            }
            v22 = *UnicodeStringSource++;
            if ( (unsigned int)(v22 - 56320) > 0x3FF )
            {
              UnicodeStringSource -= 2;
              break;
            }
            v17 = v22 + (v17 << 10) - 56613888;
            *UTF8StringDestination++ = (v17 >> 18) | 0xF0;
            v23 = v17 & 0x3F000 | 0x80000;
          }
          --v16;
          *UTF8StringDestination++ = v23 >> 12;
          v21 = v17 & 0xFC0 | 0x2000;
        }
        else
        {
          v21 = v17 | 0x3000;
        }
        *UTF8StringDestination = v21 >> 6;
        --v16;
        UTF8StringDestination[1] = v17 & 0x3F | 0x80;
        UTF8StringDestination += 2;
      }
    }
    else if ( v14 >= v13 )
    {
      while ( UnicodeStringSource < v10 )
      {
        v6 = *UnicodeStringSource++;
        if ( v6 > 0x7F )
          goto LABEL_8;
        *UTF8StringDestination++ = v6;
      }
LABEL_16:
      result = v5;
      goto LABEL_17;
    }
    v6 = 0;
  }
  result = -1073741789;
LABEL_17:
  *UTF8StringActualByteCount = (_DWORD)UTF8StringDestination - v8;
  return result;
}
