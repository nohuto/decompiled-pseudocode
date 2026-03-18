/*
 * XREFs of HalGetEnvironmentVariable @ 0x14053EC90
 * Callers:
 *     NtQuerySystemEnvironmentValue @ 0x1407AEDE0 (NtQuerySystemEnvironmentValue.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x14042DD34 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x14042DE18 (HalpAcquireCmosSpinLock.c)
 *     _stricmp @ 0x1404FB930 (_stricmp.c)
 *     strncpy_s @ 0x140501CF0 (strncpy_s.c)
 */

__int64 __fastcall HalGetEnvironmentVariable(const char *a1, unsigned __int16 a2, char *a3)
{
  rsize_t v4; // rdi
  char v6; // r8
  bool v7; // zf
  const char *v8; // r8

  v4 = a2;
  if ( HalFirmwareTypeEfi )
    return 7LL;
  if ( stricmp(a1, "LastKnownGood") )
    return 14LL;
  HalpAcquireCmosSpinLock();
  __outbyte(0x70u, 0xBu);
  __inbyte(0x71u);
  HalpReleaseCmosSpinLock();
  v7 = (v6 & 1) == 0;
  v8 = "TRUE";
  if ( v7 )
    v8 = "FALSE";
  strncpy_s(a3, v4, v8, v4 - 1);
  return 0LL;
}
