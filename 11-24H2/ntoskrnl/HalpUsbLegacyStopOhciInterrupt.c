/*
 * XREFs of HalpUsbLegacyStopOhciInterrupt @ 0x1405600A0
 * Callers:
 *     HalpStopLegacyUsbInterruptsInternal @ 0x140B52640 (HalpStopLegacyUsbInterruptsInternal.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140319510 (KeStallExecutionProcessor.c)
 *     HalpMap @ 0x140460358 (HalpMap.c)
 *     HalpUnmapVirtualAddress @ 0x1404605A0 (HalpUnmapVirtualAddress.c)
 *     HalpUsbLegacyReadPCIConfig @ 0x14055FE88 (HalpUsbLegacyReadPCIConfig.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall HalpUsbLegacyStopOhciInterrupt(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // esi
  __int64 v6; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rbx
  _BYTE v9[16]; // [rsp+40h] [rbp-58h] BYREF
  int v10; // [rsp+50h] [rbp-48h]

  memset_0(v9, 0, 0x40uLL);
  v5 = 0;
  result = HalpUsbLegacyReadPCIConfig(v6, a2, a3);
  if ( (v9[4] & 2) != 0 )
  {
    result = v10 & 0xFFFFFFF0;
    if ( (v10 & 0xFFFFFFF0) != 0 )
    {
      result = HalpMap(v10 & 0xFFFFFFF0, 1LL, 1uLL, 0, 4u, 0LL);
      v8 = result;
      if ( result )
      {
        if ( (*(_DWORD *)(result + 4) & 0x100) != 0 )
        {
          if ( *(_DWORD *)(result + 4) != 256 || *(_DWORD *)(result + 16) )
          {
            *(_DWORD *)(result + 20) = 64;
            *(_DWORD *)(result + 16) = -1073741824;
            *(_DWORD *)(result + 8) = 8;
            do
            {
              KeStallExecutionProcessor(0x3E8u);
              if ( (*(_DWORD *)(v8 + 4) & 0x100) == 0 )
                break;
              ++v5;
            }
            while ( v5 < 0x1F4 );
          }
          else
          {
            *(_DWORD *)(result + 4) = 0;
          }
        }
        *(_DWORD *)(v8 + 20) = 0x80000000;
        return (unsigned __int64)HalpUnmapVirtualAddress(v8, 1LL, 0LL);
      }
    }
  }
  return result;
}
