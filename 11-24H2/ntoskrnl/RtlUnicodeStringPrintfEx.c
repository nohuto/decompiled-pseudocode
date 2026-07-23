/*
 * XREFs of RtlUnicodeStringPrintfEx @ 0x140499DB0
 * Callers:
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x14071CE34 (PiBuildAndOpenDeviceDirectoryPath.c)
 *     PiCreateServiceKeyUnderPath @ 0x14071D4FC (PiCreateServiceKeyUnderPath.c)
 *     PiGetDriverMutableStateDirectory @ 0x14071D748 (PiGetDriverMutableStateDirectory.c)
 *     PiDevCfgBuildIndirectString @ 0x140A5E534 (PiDevCfgBuildIndirectString.c)
 *     PiOpenDriverRedirectedStateKey @ 0x140A7F158 (PiOpenDriverRedirectedStateKey.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140A9F360 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140ABF650 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     _vsnwprintf @ 0x1404FAB20 (_vsnwprintf.c)
 *     RtlUnicodeStringExHandleOtherFlags @ 0x1405A16BC (RtlUnicodeStringExHandleOtherFlags.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

NTSTATUS RtlUnicodeStringPrintfEx(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING RemainingString,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  const wchar_t *v5; // r10
  size_t v6; // r8
  wchar_t *Buffer; // r13
  size_t v9; // rsi
  NTSTATUS v10; // ebx
  int v11; // eax
  size_t v12; // rdi
  size_t v13; // r14
  wchar_t *v15; // rax
  unsigned __int16 Length; // cx
  unsigned __int16 MaximumLength; // ax
  size_t pcchNewDestLength; // [rsp+40h] [rbp-28h] BYREF
  size_t pcchRemaining; // [rsp+48h] [rbp-20h] BYREF
  wchar_t *ppszDestEnd; // [rsp+50h] [rbp-18h] BYREF
  va_list Args; // [rsp+D0h] [rbp+68h] BYREF

  va_start(Args, pszFormat);
  v5 = pszFormat;
  v6 = 0LL;
  if ( !DestinationString && (dwFlags & 0x100) != 0 )
    goto LABEL_3;
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
  }
  else
  {
LABEL_3:
    Buffer = 0LL;
    v9 = 0LL;
  }
  ppszDestEnd = Buffer;
  LOWORD(v13) = v9;
  pcchRemaining = v9;
  LOWORD(v12) = 0;
  pcchNewDestLength = 0LL;
  if ( (dwFlags & 0x100) != 0 && !pszFormat )
    v5 = &SourceString;
  v10 = 0;
  if ( (dwFlags & 0xFFFFE000) != 0 )
  {
    v10 = -1073741811;
    goto LABEL_33;
  }
  if ( v9 )
  {
    ppszDestEnd = 0LL;
    v11 = vsnwprintf(Buffer, v9, v5, Args);
    if ( v11 < 0 || (v12 = v11, v11 > v9) )
    {
      v12 = v9;
      pcchNewDestLength = v9;
      v10 = -2147483643;
    }
    else
    {
      pcchNewDestLength = v11;
    }
    v13 = v9 - v12;
    pcchRemaining = v9 - v12;
    ppszDestEnd = &Buffer[v12];
    if ( v10 >= 0 )
    {
      if ( (dwFlags & 0x200) != 0 && v13 )
        memset_0(&Buffer[v12], (unsigned __int8)dwFlags, 2 * v13);
      goto LABEL_11;
    }
LABEL_33:
    if ( (dwFlags & 0x1C00) != 0 && v9 )
    {
      RtlUnicodeStringExHandleOtherFlags(Buffer, v9, v6, &pcchNewDestLength, &ppszDestEnd, &pcchRemaining, dwFlags);
      LOWORD(v13) = pcchRemaining;
      LOWORD(v12) = pcchNewDestLength;
    }
    goto LABEL_11;
  }
  if ( *v5 )
  {
    v10 = Buffer != 0LL ? -2147483643 : -1073741811;
    goto LABEL_33;
  }
LABEL_11:
  if ( DestinationString )
    DestinationString->Length = 2 * v12;
  if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
  {
    if ( RemainingString )
    {
      v15 = ppszDestEnd;
      RemainingString->MaximumLength = 2 * v13;
      RemainingString->Buffer = v15;
      RemainingString->Length = 0;
    }
  }
  return v10;
}
