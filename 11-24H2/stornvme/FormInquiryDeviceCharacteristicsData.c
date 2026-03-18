/*
 * XREFs of FormInquiryDeviceCharacteristicsData @ 0x14001FF88
 * Callers:
 *     ScsiInquiryRequest @ 0x140001810 (ScsiInquiryRequest.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002390 (NVMeSetSenseData.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 */

__int64 __fastcall FormInquiryDeviceCharacteristicsData(__int64 a1, __int64 a2)
{
  __int64 SrbDataBuffer; // r8
  unsigned int v3; // r9d
  __int64 v4; // r10
  _DWORD *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v6);
  if ( *v6 >= 8u )
  {
    *(_BYTE *)(SrbDataBuffer + 7) &= 0xF0u;
    *(_WORD *)SrbDataBuffer = -20224;
    *(_WORD *)(SrbDataBuffer + 3) = 60;
    *(_BYTE *)(SrbDataBuffer + 5) = 1;
    *(_BYTE *)(v4 + 3) = 1;
  }
  else
  {
    NVMeSetSenseData(v4, 6, 5, 0x24u);
    return (unsigned int)-1056964602;
  }
  return v3;
}
