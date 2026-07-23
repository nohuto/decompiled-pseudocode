/*
 * XREFs of RtlUnicodeStringCopyStringEx @ 0x1405A0F00
 * Callers:
 *     PiDevCfgBuildDriverConfigurationId @ 0x140A9F360 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140ABF650 (PiDevCfgLogDeviceConfigured.c)
 *     PipInitComputerIds @ 0x140C65CF0 (PipInitComputerIds.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopyStringEx(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        PUNICODE_STRING RemainingString,
        ULONG dwFlags)
{
  __int16 v4; // r13
  unsigned __int16 Length; // cx
  unsigned __int16 MaximumLength; // ax
  wchar_t *Buffer; // r12
  unsigned __int64 v9; // r14
  wchar_t *v10; // r11
  __int16 v11; // r10
  wchar_t *v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rsi
  const wchar_t *v15; // rax
  NTSTATUS v16; // ebx
  __int16 v17; // r8
  __int16 v18; // dx
  wchar_t *v19; // rcx
  __int64 v20; // rax
  signed __int64 v21; // r8
  unsigned __int64 v22; // rcx

  v4 = dwFlags;
  if ( !DestinationString && (dwFlags & 0x100) != 0 )
    goto LABEL_12;
  Length = DestinationString->Length;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !DestinationString->Buffer && (Length || MaximumLength) )
  {
    return -1073741811;
  }
  if ( DestinationString )
  {
    Buffer = DestinationString->Buffer;
    v9 = (unsigned __int64)DestinationString->MaximumLength >> 1;
    v10 = Buffer;
    v11 = v9;
  }
  else
  {
LABEL_12:
    v11 = 0;
    v10 = 0LL;
    Buffer = 0LL;
    v9 = 0LL;
  }
  v12 = Buffer;
  LOWORD(v13) = v9;
  v14 = 0LL;
  if ( (dwFlags & 0x100) != 0 )
  {
    v15 = &SourceString;
    if ( pszSrc )
      v15 = pszSrc;
    pszSrc = v15;
  }
  v16 = 0;
  if ( (dwFlags & 0xFFFFE000) != 0 )
    goto LABEL_18;
  if ( v9 )
  {
    v20 = 0x7FFFLL;
    v21 = (char *)Buffer - (char *)pszSrc;
    v22 = v9;
    while ( v20 )
    {
      if ( *pszSrc )
      {
        *(NTSTRSAFE_PCWSTR)((char *)pszSrc + v21) = *pszSrc;
        --v20;
        ++pszSrc;
        ++v14;
        if ( --v22 )
          continue;
      }
      if ( !v22 && v20 && *pszSrc )
        v16 = -2147483643;
      break;
    }
    v12 = &Buffer[v14];
    v13 = v9 - v14;
    if ( v16 >= 0 && (dwFlags & 0x200) != 0 && v13 )
    {
      memset_0(&Buffer[v14], (unsigned __int8)dwFlags, 2 * v13);
      goto LABEL_32;
    }
  }
  else if ( *pszSrc )
  {
    if ( !Buffer )
    {
LABEL_18:
      v16 = -1073741811;
      v17 = 0;
      v18 = v9;
      v19 = Buffer;
LABEL_24:
      if ( (dwFlags & 0x1C00) != 0 && v9 )
      {
        v12 = v10;
        LOWORD(v13) = v11;
        LOWORD(v14) = 0;
        if ( (dwFlags & 0x1000) == 0 )
        {
          v12 = v19;
          LOWORD(v13) = v18;
          LOWORD(v14) = v17;
        }
        if ( (dwFlags & 0x400) != 0 )
        {
          memset_0(Buffer, (unsigned __int8)dwFlags, 2 * v9);
          v12 = Buffer;
          LOWORD(v14) = 0;
          LOWORD(v13) = v9;
        }
        if ( (v4 & 0x800) != 0 )
        {
          v12 = Buffer;
          LOWORD(v13) = v9;
          LOWORD(v14) = 0;
        }
      }
      goto LABEL_32;
    }
    v16 = -2147483643;
  }
  v17 = v14;
  v18 = v13;
  v19 = v12;
  if ( v16 < 0 )
    goto LABEL_24;
LABEL_32:
  if ( DestinationString )
    DestinationString->Length = 2 * v14;
  if ( (int)(v16 + 0x80000000) < 0 || v16 == -2147483643 )
  {
    if ( RemainingString )
    {
      RemainingString->Length = 0;
      RemainingString->MaximumLength = 2 * v13;
      RemainingString->Buffer = v12;
    }
  }
  return v16;
}
