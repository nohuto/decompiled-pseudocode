/*
 * XREFs of NvmeNamespacePopulateInquirySerialNumberData @ 0x140117AA4
 * Callers:
 *     ScsiInquiryRequest @ 0x140115960 (ScsiInquiryRequest.c)
 *     NvmeNamespaceScsiInquiryRequest @ 0x140117EE0 (NvmeNamespaceScsiInquiryRequest.c)
 * Callees:
 *     StorBuildNVMeSerialNumber @ 0x14008EC8C (StorBuildNVMeSerialNumber.c)
 *     SetSrbSenseData @ 0x140117490 (SetSrbSenseData.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeNamespacePopulateInquirySerialNumberData(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  unsigned int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  _BYTE Src[128]; // [rsp+30h] [rbp-B8h] BYREF

  memset_0(Src, 0, sizeof(Src));
  v8 = StorBuildNVMeSerialNumber(a1, 0x80u, (__int64)Src);
  v9 = 0;
  v10 = v8 + 4;
  if ( *a3 >= v8 + 4 )
  {
    *(_WORD *)a4 = 0x8000;
    *(_BYTE *)(a4 + 3) = v8;
    memmove((void *)(a4 + 4), Src, v8);
    *a3 = v10;
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    SetSrbSenseData(a2, 6, 5, 36, 0);
    return (unsigned int)-1073741811;
  }
  return v9;
}
