/*
 * XREFs of HalpUsbLegacyStopOhciInterrupt @ 0x14055FB70
 * Callers:
 *     HalpStopLegacyUsbInterruptsInternal @ 0x140B405F0 (HalpStopLegacyUsbInterruptsInternal.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140278EE0 (KeStallExecutionProcessor.c)
 *     HalpUnmapVirtualAddress @ 0x140411990 (HalpUnmapVirtualAddress.c)
 *     HalpMap @ 0x140412738 (HalpMap.c)
 *     HalpUsbLegacyReadPCIConfig @ 0x14055F958 (HalpUsbLegacyReadPCIConfig.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

unsigned __int64 __fastcall HalpUsbLegacyStopOhciInterrupt(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rbx
  _BYTE v7[16]; // [rsp+40h] [rbp-58h] BYREF
  int v8; // [rsp+50h] [rbp-48h]

  memset_0(v7, 0, 0x40uLL);
  v3 = 0;
  result = HalpUsbLegacyReadPCIConfig(v4, a2);
  if ( (v7[4] & 2) != 0 )
  {
    result = v8 & 0xFFFFFFF0;
    if ( (v8 & 0xFFFFFFF0) != 0 )
    {
      result = HalpMap(v8 & 0xFFFFFFF0, 1u, 1u, 0, 4u, 0LL);
      v6 = result;
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
              if ( (*(_DWORD *)(v6 + 4) & 0x100) == 0 )
                break;
              ++v3;
            }
            while ( v3 < 0x1F4 );
          }
          else
          {
            *(_DWORD *)(result + 4) = 0;
          }
        }
        *(_DWORD *)(v6 + 20) = 0x80000000;
        return (unsigned __int64)HalpUnmapVirtualAddress(v6, 1u, 0);
      }
    }
  }
  return result;
}
