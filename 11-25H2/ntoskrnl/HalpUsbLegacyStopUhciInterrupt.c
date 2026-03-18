/*
 * XREFs of HalpUsbLegacyStopUhciInterrupt @ 0x14055FCA4
 * Callers:
 *     HalpStopLegacyUsbInterruptsInternal @ 0x140B405F0 (HalpStopLegacyUsbInterruptsInternal.c)
 *     HalpPiix4Detect @ 0x140B5AF1C (HalpPiix4Detect.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140278EE0 (KeStallExecutionProcessor.c)
 *     HalpUsbLegacyReadPCIConfig @ 0x14055F958 (HalpUsbLegacyReadPCIConfig.c)
 *     HalpUsbLegacyWritePCIConfig @ 0x14055F994 (HalpUsbLegacyWritePCIConfig.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int16 __fastcall HalpUsbLegacyStopUhciInterrupt(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned __int16 v11; // [rsp+30h] [rbp-19h]
  _BYTE v12[32]; // [rsp+40h] [rbp-9h] BYREF
  int v13; // [rsp+60h] [rbp+17h]

  memset_0(v12, 0, 0x40uLL);
  if ( a4 )
  {
    HalpUsbLegacyWritePCIConfig(v6, a2);
    LOWORD(v8) = HalpUsbLegacyReadPCIConfig(v7, a2);
    if ( (v12[4] & 1) != 0 )
    {
      v11 = v13 & 0xFFFC;
      v8 = (v13 & 0xFFFFFFFC) - 1;
      if ( v8 <= 0xFFFD )
      {
        LOWORD(v8) = __inword(v13 & 0xFFFC);
        if ( (v8 & 8) == 0 )
        {
          __outword(v11, 4u);
          KeStallExecutionProcessor(0x2710u);
          LOWORD(v8) = 0;
          __outword(v11, 0);
        }
      }
    }
  }
  else
  {
    HalpUsbLegacyReadPCIConfig(v6, a2);
    LOWORD(v8) = HalpUsbLegacyWritePCIConfig(v9, a2);
  }
  return v8;
}
