/*
 * XREFs of HalSetEnvironmentVariable @ 0x14053EE50
 * Callers:
 *     NtSetSystemEnvironmentValue @ 0x1407BF0A0 (NtSetSystemEnvironmentValue.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140419CB4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140419D98 (HalpAcquireCmosSpinLock.c)
 *     _stricmp @ 0x1404FB970 (_stricmp.c)
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
