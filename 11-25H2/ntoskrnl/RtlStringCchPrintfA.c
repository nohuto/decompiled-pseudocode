/*
 * XREFs of RtlStringCchPrintfA @ 0x140592510
 * Callers:
 *     IopCopyBootLogRegistryToFile @ 0x140705D7C (IopCopyBootLogRegistryToFile.c)
 *     IopCreateArcName @ 0x140A73568 (IopCreateArcName.c)
 *     IopCreateArcNames @ 0x140C0AB18 (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x140C0AC5C (IopCreateArcNamesCd.c)
 *     IopMarkBootPartition @ 0x140C0BBA0 (IopMarkBootPartition.c)
 *     IopGetBootDiskInformation @ 0x140C0C6AC (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140C0D000 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140C0F510 (PipCriticalDeviceWaitCallback.c)
 * Callees:
 *     _vsnprintf @ 0x1404FAC00 (_vsnprintf.c)
 */

NTSTATUS RtlStringCchPrintfA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v4; // ebx
  size_t v5; // rdi
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  if ( cchDest - 1 <= 0x7FFFFFFE )
  {
    v5 = cchDest - 1;
    v4 = 0;
    v6 = vsnprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      pszDest[v5] = 0;
      return -2147483643;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  else
  {
    v4 = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  return v4;
}
