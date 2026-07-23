/*
 * XREFs of KiInitializeNxSupportDiscard @ 0x140C2B758
 * Callers:
 *     KiInitializeBootStructures @ 0x140B5A140 (KiInitializeBootStructures.c)
 * Callees:
 *     strstr @ 0x1404FB270 (strstr.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KiIsNXSupported @ 0x140B588A8 (KiIsNXSupported.c)
 *     KiGetCpuVendor @ 0x140B6F294 (KiGetCpuVendor.c)
 */

char KiInitializeNxSupportDiscard()
{
  char result; // al

  *(_BYTE *)(MmWriteableSharedUserData + 725) = *(_BYTE *)(MmWriteableSharedUserData + 725) & 0xFC | 1;
  if ( !strstr(*(const char **)(KeLoaderBlock_0 + 216), "NOEXECUTE=ALWAYSON") )
  {
    if ( strstr(*(const char **)(KeLoaderBlock_0 + 216), "NOEXECUTE=OPTOUT") )
    {
      *(_BYTE *)(MmWriteableSharedUserData + 725) |= 3u;
    }
    else if ( strstr(*(const char **)(KeLoaderBlock_0 + 216), "NOEXECUTE=OPTIN")
           || !strstr(*(const char **)(KeLoaderBlock_0 + 216), "NOEXECUTE=ALWAYSOFF")
           && (strstr(*(const char **)(KeLoaderBlock_0 + 216), "NOEXECUTE")
            || !strstr(*(const char **)(KeLoaderBlock_0 + 216), "EXECUTE")) )
    {
      *(_BYTE *)(MmWriteableSharedUserData + 725) = *(_BYTE *)(MmWriteableSharedUserData + 725) & 0xFC | 2;
    }
    else
    {
      *(_BYTE *)(MmWriteableSharedUserData + 725) &= 0xFCu;
    }
  }
  _RAX = 1LL;
  __asm { cpuid }
  if ( (_RDX & 0x4000000) != 0 && (unsigned int)KiGetCpuVendor() == 2 )
    KiNxForceEnable = 1;
  result = KiIsNXSupported();
  if ( result )
  {
    __writemsr(0xC0000080, __readmsr(0xC0000080) | 0x800);
    result = MmWriteableSharedUserData;
    *(_BYTE *)(MmWriteableSharedUserData + 640) = 1;
  }
  return result;
}
