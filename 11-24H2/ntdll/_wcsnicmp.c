/*
 * XREFs of _wcsnicmp @ 0x180120FE0
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x180007080 (RtlQueryEnvironmentVariable.c)
 *     _IsProgramFilesPath @ 0x180008D2C (_IsProgramFilesPath.c)
 *     RtlpHpFindImageNameInList @ 0x1800094E4 (RtlpHpFindImageNameInList.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x180009E48 (RtlpHpOptIntoSegmentHeap.c)
 *     LdrpGetModuleName @ 0x18007D870 (LdrpGetModuleName.c)
 *     GetOverlayFilePathUsingChecksum @ 0x18007EE60 (GetOverlayFilePathUsingChecksum.c)
 *     punycode_decode @ 0x1800B3650 (punycode_decode.c)
 *     punycode_encode @ 0x1800B5968 (punycode_encode.c)
 *     LdrpGetFileDriverStoreRoot @ 0x1800E8774 (LdrpGetFileDriverStoreRoot.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsnicmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  size_t v4; // r11
  int v5; // ecx
  const wchar_t *v6; // r10
  signed __int64 v7; // r9
  unsigned __int16 v8; // dx
  wchar_t v9; // r8

  v4 = MaxCount;
  v5 = 0;
  v6 = String2;
  if ( MaxCount )
  {
    v7 = (char *)String1 - (char *)String2;
    do
    {
      v8 = *(const wchar_t *)((char *)v6 + v7) + 32;
      if ( (unsigned __int16)(*(const wchar_t *)((char *)v6 + v7) - 65) > 0x19u )
        v8 = *(const wchar_t *)((char *)v6 + v7);
      v9 = *v6 + 32;
      if ( (unsigned __int16)(*v6 - 65) > 0x19u )
        v9 = *v6;
      ++v6;
      --v4;
    }
    while ( v4 && v8 && v8 == v9 );
    return v8 - v9;
  }
  return v5;
}
