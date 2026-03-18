/*
 * XREFs of HalpUsbLegacyScanBusForHandoff @ 0x14055FA2C
 * Callers:
 *     HalpErrataInitSystem @ 0x140B3D090 (HalpErrataInitSystem.c)
 * Callees:
 *     HalpUsbLegacyDeviceHandoff @ 0x14055F8B4 (HalpUsbLegacyDeviceHandoff.c)
 *     HalpUsbLegacyReadPCIConfig @ 0x14055F958 (HalpUsbLegacyReadPCIConfig.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int16 HalpUsbLegacyScanBusForHandoff()
{
  unsigned int v0; // ebx
  unsigned int i; // esi
  unsigned __int8 j; // bp
  char k; // di
  int PCIConfig; // eax
  unsigned __int16 v6[7]; // [rsp+30h] [rbp-68h] BYREF
  char v7; // [rsp+3Eh] [rbp-5Ah]

  memset_0(v6, 0, 0x40uLL);
  v0 = 0;
  for ( i = 0; i <= 0xFF; ++i )
  {
    for ( j = 0; j < 0x20u; ++j )
    {
      for ( k = 0; (unsigned __int8)k < 8u; ++k )
      {
        while ( 1 )
        {
          v0 = j & 0x1F | v0 & 0xFFFFFF00 | (32 * (k & 7));
          PCIConfig = HalpUsbLegacyReadPCIConfig(32 * (k & 7u), i);
          if ( !PCIConfig )
            break;
          LOWORD(PCIConfig) = v6[0] - 1;
          if ( (unsigned __int16)(v6[0] - 1) > 0xFFFDu )
            break;
          PCIConfig = HalpUsbLegacyReadPCIConfig(65533LL, i);
          if ( !PCIConfig )
            goto LABEL_11;
          LOWORD(PCIConfig) = HalpUsbLegacyDeviceHandoff(0LL, i, v0, v6);
          if ( k )
            goto LABEL_11;
          if ( v7 >= 0 )
            goto LABEL_12;
          k = 1;
        }
        if ( !k )
          break;
LABEL_11:
        ;
      }
LABEL_12:
      ;
    }
  }
  return PCIConfig;
}
