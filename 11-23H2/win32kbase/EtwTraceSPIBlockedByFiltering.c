/*
 * XREFs of EtwTraceSPIBlockedByFiltering @ 0x1C016B7A0
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0094FF0 (xxxSystemParametersInfo.c)
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x1C013C2AC (McTemplateK0d_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceSPIBlockedByFiltering(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000000LL) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &SPIBlockedByFiltering, a3, a1);
  return result;
}
