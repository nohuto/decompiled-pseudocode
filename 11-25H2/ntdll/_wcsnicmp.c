/*
 * XREFs of _wcsnicmp @ 0x180124890
 * Callers:
 *     LdrpGetModuleName @ 0x18006A990 (LdrpGetModuleName.c)
 *     GetOverlayFilePathUsingChecksum @ 0x18006BF80 (GetOverlayFilePathUsingChecksum.c)
 *     RtlQueryEnvironmentVariable @ 0x1800AD560 (RtlQueryEnvironmentVariable.c)
 *     _IsProgramFilesPath @ 0x1800AF20C (_IsProgramFilesPath.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800AF9C4 (RtlpHpOptIntoSegmentHeap.c)
 *     RtlpHpFindImageNameInList @ 0x1800B0508 (RtlpHpFindImageNameInList.c)
 *     punycode_decode @ 0x1800C08F0 (punycode_decode.c)
 *     punycode_encode @ 0x1800C2C08 (punycode_encode.c)
 *     LdrpGetFileDriverStoreRoot @ 0x1800EDB04 (LdrpGetFileDriverStoreRoot.c)
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
