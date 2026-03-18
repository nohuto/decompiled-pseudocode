/*
 * XREFs of RtlUnicodeStringInitWorker @ 0x140061CE8
 * Callers:
 *     ACPIInternalSetDeviceInterface @ 0x1400507B8 (ACPIInternalSetDeviceInterface.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringInitWorker(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        const size_t cchMax,
        ULONG dwFlags)
{
  NTSTATUS v4; // r8d
  __int64 v5; // r10
  NTSTRSAFE_PCWSTR v6; // rax
  unsigned __int16 v7; // r9

  v4 = 0;
  *DestinationString = 0LL;
  if ( pszSrc )
  {
    v5 = 0x7FFFLL;
    v6 = pszSrc;
    do
    {
      if ( !*v6 )
        break;
      ++v6;
      --v5;
    }
    while ( v5 );
    if ( v5 )
    {
      if ( !DestinationString )
        return -1073741811;
      v7 = 2 * (0x7FFF - v5);
      DestinationString->Buffer = (wchar_t *)pszSrc;
      DestinationString->Length = v7;
      DestinationString->MaximumLength = v7 + 2;
    }
    return v5 == 0 ? 0xC000000D : 0;
  }
  return v4;
}
