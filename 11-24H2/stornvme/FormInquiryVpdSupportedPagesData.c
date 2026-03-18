/*
 * XREFs of FormInquiryVpdSupportedPagesData @ 0x1400201FC
 * Callers:
 *     ScsiInquiryRequest @ 0x140001810 (ScsiInquiryRequest.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002390 (NVMeSetSenseData.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 */

__int64 __fastcall FormInquiryVpdSupportedPagesData(__int64 a1, __int64 a2)
{
  __int64 SrbDataBuffer; // rax
  unsigned int v3; // r8d
  __int64 v4; // r10
  _DWORD *v5; // rcx
  _DWORD *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v7);
  v5 = v7;
  if ( *v7 >= 0xBu )
  {
    *(_WORD *)SrbDataBuffer = v3;
    *(_DWORD *)(SrbDataBuffer + 3) = -2088763386;
    *(_WORD *)(SrbDataBuffer + 7) = -20048;
    *(_BYTE *)(SrbDataBuffer + 9) = -78;
    *v5 = 11;
    *(_BYTE *)(v4 + 3) = 1;
  }
  else
  {
    NVMeSetSenseData(v4, 6, 5, 0x24u);
    return (unsigned int)-1056964602;
  }
  return v3;
}
