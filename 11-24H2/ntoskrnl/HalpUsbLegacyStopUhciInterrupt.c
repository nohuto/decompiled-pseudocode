/*
 * XREFs of HalpUsbLegacyStopUhciInterrupt @ 0x1405625A4
 * Callers:
 *     HalpStopLegacyUsbInterruptsInternal @ 0x140B505F0 (HalpStopLegacyUsbInterruptsInternal.c)
 *     HalpPiix4Detect @ 0x140B6AA1C (HalpPiix4Detect.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14033A030 (KeStallExecutionProcessor.c)
 *     HalpUsbLegacyReadPCIConfig @ 0x140562258 (HalpUsbLegacyReadPCIConfig.c)
 *     HalpUsbLegacyWritePCIConfig @ 0x140562294 (HalpUsbLegacyWritePCIConfig.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int16 __fastcall HalpUsbLegacyStopUhciInterrupt(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rcx
  unsigned __int16 v12[8]; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v13[32]; // [rsp+40h] [rbp-9h] BYREF
  int v14; // [rsp+60h] [rbp+17h]

  memset_0(v13, 0, 0x40uLL);
  *(_DWORD *)v12 = 0;
  if ( a4 )
  {
    HalpUsbLegacyWritePCIConfig(v7, a2, a3, (__int64)v12);
    LOWORD(v9) = HalpUsbLegacyReadPCIConfig(v8, a2, a3, (__int64)v13, 0);
    if ( (v13[4] & 1) != 0 )
    {
      *(_DWORD *)v12 = v14 & 0xFFFFFFFC;
      v9 = (v14 & 0xFFFFFFFC) - 1;
      if ( v9 <= 0xFFFD )
      {
        LOWORD(v9) = __inword(v14 & 0xFFFC);
        if ( (v9 & 8) == 0 )
        {
          __outword(v12[0], 4u);
          KeStallExecutionProcessor(0x2710u);
          LOWORD(v9) = 0;
          __outword(v12[0], 0);
        }
      }
    }
  }
  else
  {
    HalpUsbLegacyReadPCIConfig(v7, a2, a3, (__int64)v12, 0xC0u);
    *(_DWORD *)v12 &= 0xFFFF40FF;
    LOWORD(v9) = HalpUsbLegacyWritePCIConfig(v10, a2, a3, (__int64)v12);
  }
  return v9;
}
