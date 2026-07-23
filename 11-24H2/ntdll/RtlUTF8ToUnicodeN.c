/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x180038DF0
 * Callers:
 *     LdrpLoadForwardedDll @ 0x180038380 (LdrpLoadForwardedDll.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180038910 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     RtlMultiByteToUnicodeN @ 0x180038AD0 (RtlMultiByteToUnicodeN.c)
 *     RtlCustomCPToUnicodeN @ 0x180038C80 (RtlCustomCPToUnicodeN.c)
 *     LdrpMapAndSnapDependency @ 0x1800392D0 (LdrpMapAndSnapDependency.c)
 *     RtlAnsiStringToUnicodeString @ 0x180039960 (RtlAnsiStringToUnicodeString.c)
 *     LdrpGenerateSnapsUnicodeStrings @ 0x180040400 (LdrpGenerateSnapsUnicodeStrings.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18008D200 (LdrpSnapKernelBaseExtensions.c)
 *     RtlAnsiCharToUnicodeChar @ 0x1800BD8A0 (RtlAnsiCharToUnicodeChar.c)
 *     RtlMultiByteToUnicodeSize @ 0x1800CF540 (RtlMultiByteToUnicodeSize.c)
 *     RtlUTF8StringToUnicodeString @ 0x1800D03C0 (RtlUTF8StringToUnicodeString.c)
 *     RtlxOemStringToUnicodeSize @ 0x1800D39C0 (RtlxOemStringToUnicodeSize.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUTF8ToUnicodeN(
        PWSTR UnicodeStringDestination,
        ULONG UnicodeStringMaxByteCount,
        PULONG UnicodeStringActualByteCount,
        PCCH UTF8StringSource,
        ULONG UTF8StringByteCount)
{
  PWSTR v5; // rax
  NTSTATUS v8; // r8d
  WCHAR *v9; // r14
  unsigned int v10; // edx
  const CHAR *v11; // r10
  const CHAR *v12; // rsi
  unsigned int v13; // edi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  WCHAR *i; // rsi
  unsigned int v18; // edx
  unsigned int v19; // edi
  char v20; // di
  int v21; // edi
  CHAR v22; // bp
  unsigned int v23; // edi
  WCHAR v24; // di
  unsigned int v25; // edx
  unsigned int v26; // ecx
  unsigned int v27; // edx
  CHAR v28; // dl
  int v29; // edi

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
      return CountUTF8ToUnicode(
               (PWSTR)UTF8StringSource,
               UTF8StringByteCount,
               UnicodeStringActualByteCount,
               UTF8StringSource,
               UTF8StringByteCount);
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
          if ( v5 >= v9 )
            v8 = -1073741789;
          else
            *v5++ = -3;
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
LABEL_55:
      if ( (v10 & 0x40) == 0 )
        goto LABEL_64;
      if ( (v10 & 0x20) != 0 )
      {
        v26 = v10 & 0xF;
        if ( (v10 & 0x10) != 0 )
        {
          if ( v26 > 4 )
            goto LABEL_64;
          v10 = v26 | 0x504D0C00;
        }
        else
        {
          v10 = v26 | 0x48228000;
        }
      }
      else
      {
        v27 = v10 & 0x1F;
        if ( v27 <= 1 )
          goto LABEL_64;
        v10 = v27 | 0x800000;
      }
    }
    if ( (v13 & 0xC0) != 0x80 )
    {
      UTF8StringSource = v12;
      goto LABEL_64;
    }
    v10 = (v10 << 6) | v13 & 0x3F;
    if ( (v10 & 0x20000000) != 0 )
      break;
    if ( (v10 & 0x10000000) != 0 )
    {
      if ( (v10 & 0x800000) == 0 && (v10 & 0x1F0) - 16 > 0xF0 )
        goto LABEL_64;
    }
    else if ( (v10 & 0x3E0) != 0 )
    {
      if ( (v10 & 0x3E0) == 0x360 )
      {
        v8 = 263;
        LOWORD(v10) = -3;
        goto LABEL_6;
      }
    }
    else
    {
LABEL_64:
      v8 = 263;
      LOWORD(v10) = -3;
LABEL_6:
      if ( v5 >= v9 )
        goto LABEL_76;
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
LABEL_32:
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
                goto LABEL_28;
              v18 = *(unsigned __int16 *)UTF8StringSource;
              if ( (v18 & 0x8080) == 0 )
              {
                UTF8StringSource += 2;
                *v5 = v18 & 0x7F;
                v5[1] = (v18 >> 8) & 0x7F;
                v5 += 2;
LABEL_28:
                while ( v5 < i )
                {
                  v19 = *((_DWORD *)UTF8StringSource + 1);
                  v18 = *(_DWORD *)UTF8StringSource;
                  if ( ((*(_DWORD *)UTF8StringSource | v19) & 0x80808080) != 0 )
                    goto LABEL_44;
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
                goto LABEL_32;
              }
LABEL_44:
              ++UTF8StringSource;
              if ( (unsigned __int8)v18 <= 0x7Fu )
              {
                *v5++ = (unsigned __int8)v18;
                continue;
              }
            }
            break;
          }
          v20 = *UTF8StringSource++;
          if ( (v18 & 0x40) == 0 || (v20 & 0xC0) != 0x80 )
          {
LABEL_31:
            UTF8StringSource -= 2;
            goto LABEL_32;
          }
          v21 = v20 & 0x3F;
          if ( (v18 & 0x20) != 0 )
          {
            v22 = *UTF8StringSource;
            v23 = ((v18 & 0xF) << 6) | v21;
            if ( (v18 & 0x10) != 0 )
            {
              if ( (v23 >> 4) - 1 > 0xF )
                goto LABEL_31;
              if ( (v22 & 0xC0) != 0x80 )
                goto LABEL_31;
              v28 = UTF8StringSource[1];
              v29 = v22 & 0x3F | (v23 << 6);
              if ( (v28 & 0xC0) != 0x80 )
                goto LABEL_31;
              UTF8StringSource += 2;
              *v5++ = (((v28 & 0x3F | (unsigned int)(v29 << 6)) >> 10) & 0x7FF) - 10304;
              v24 = (v28 & 0x3F | ((_WORD)v29 << 6) & 0x3FF) - 9216;
            }
            else
            {
              if ( (v23 & 0x3E0) == 0 || (v23 & 0x3E0) == 0x360 || (v22 & 0xC0) != 0x80 )
                goto LABEL_31;
              ++UTF8StringSource;
              v24 = v22 & 0x3F | ((_WORD)v23 << 6);
            }
            --i;
          }
          else
          {
            v25 = v18 & 0x1F;
            if ( v25 <= 1 )
              goto LABEL_31;
            v24 = ((_WORD)v25 << 6) | v21;
          }
          *v5++ = v24;
        }
      }
      if ( v15 >= v14 )
      {
        while ( UTF8StringSource < v11 )
        {
          v10 = *UTF8StringSource++;
          if ( v10 > 0x7F )
            goto LABEL_55;
          *v5++ = v10;
        }
        goto LABEL_13;
      }
      v10 = 0;
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
LABEL_76:
  if ( UnicodeStringActualByteCount )
    *UnicodeStringActualByteCount = 2 * (v5 - UnicodeStringDestination);
  return -1073741789;
}
