/*
 * XREFs of HalSetEnvironmentVariable @ 0x140541550
 * Callers:
 *     NtSetSystemEnvironmentValue @ 0x1407BEC50 (NtSetSystemEnvironmentValue.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140425E04 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140425EE8 (HalpAcquireCmosSpinLock.c)
 *     _stricmp @ 0x1404FE0B0 (_stricmp.c)
 */

__int64 __fastcall HalSetEnvironmentVariable(const char *a1, const char *a2)
{
  unsigned __int8 v4; // al
  unsigned __int8 v5; // cl
  unsigned __int8 v6; // al

  if ( HalFirmwareTypeEfi )
    return 7LL;
  if ( !stricmp(a1, "LastKnownGood") )
  {
    if ( !stricmp(a2, "TRUE") )
    {
      HalpAcquireCmosSpinLock();
      __outbyte(0x70u, 0xBu);
      v4 = __inbyte(0x71u);
      v5 = v4 | 1;
LABEL_8:
      __outbyte(0x70u, 0xBu);
      __outbyte(0x71u, v5);
      HalpReleaseCmosSpinLock();
      return 0LL;
    }
    if ( !stricmp(a2, "FALSE") )
    {
      HalpAcquireCmosSpinLock();
      __outbyte(0x70u, 0xBu);
      v6 = __inbyte(0x71u);
      v5 = v6 & 0xFE;
      goto LABEL_8;
    }
  }
  return 16LL;
}
