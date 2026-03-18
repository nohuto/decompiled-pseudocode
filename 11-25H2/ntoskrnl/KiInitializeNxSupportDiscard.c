/*
 * XREFs of KiInitializeNxSupportDiscard @ 0x140C185A8
 * Callers:
 *     KiInitializeBootStructures @ 0x140B48120 (KiInitializeBootStructures.c)
 * Callees:
 *     strstr @ 0x1404FB230 (strstr.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     KiIsNXSupported @ 0x140B468B4 (KiIsNXSupported.c)
 *     KiGetCpuVendor @ 0x140B5E944 (KiGetCpuVendor.c)
 */

char KiInitializeNxSupportDiscard()
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  char result; // al

  *(_BYTE *)(MmWriteableSharedUserData + 725) = *(_BYTE *)(MmWriteableSharedUserData + 725) & 0xFC | 1;
  v0 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  if ( !strstr(*(const char **)(v0 + 216), "NOEXECUTE=ALWAYSON") )
  {
    v1 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
    if ( strstr(*(const char **)(v1 + 216), "NOEXECUTE=OPTOUT") )
    {
      *(_BYTE *)(MmWriteableSharedUserData + 725) |= 3u;
    }
    else
    {
      v2 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
      if ( strstr(*(const char **)(v2 + 216), "NOEXECUTE=OPTIN")
        || (v3 = *(_QWORD *)&KeNumberProcessorsGroup0[1], !strstr(*(const char **)(v3 + 216), "NOEXECUTE=ALWAYSOFF"))
        && ((v4 = *(_QWORD *)&KeNumberProcessorsGroup0[1], strstr(*(const char **)(v4 + 216), "NOEXECUTE"))
         || (v5 = *(_QWORD *)&KeNumberProcessorsGroup0[1], !strstr(*(const char **)(v5 + 216), "EXECUTE"))) )
      {
        *(_BYTE *)(MmWriteableSharedUserData + 725) = *(_BYTE *)(MmWriteableSharedUserData + 725) & 0xFC | 2;
      }
      else
      {
        *(_BYTE *)(MmWriteableSharedUserData + 725) &= 0xFCu;
      }
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
