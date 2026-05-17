/*
 * XREFs of _wcsnicmp @ 0x180122DB0
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x1800851D0 (RtlQueryEnvironmentVariable.c)
 *     _IsProgramFilesPath @ 0x180086E7C (_IsProgramFilesPath.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800AC2B0 (RtlpHpOptIntoSegmentHeap.c)
 *     RtlpHpFindImageNameInList @ 0x1800ACDF8 (RtlpHpFindImageNameInList.c)
 *     LdrpGetModuleName @ 0x1800B0FD0 (LdrpGetModuleName.c)
 *     GetOverlayFilePathUsingChecksum @ 0x1800B25C0 (GetOverlayFilePathUsingChecksum.c)
 *     punycode_decode @ 0x1800BB890 (punycode_decode.c)
 *     punycode_encode @ 0x1800BDBA8 (punycode_encode.c)
 *     LdrpGetFileDriverStoreRoot @ 0x1800ED484 (LdrpGetFileDriverStoreRoot.c)
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
