/*
 * XREFs of NvmeNamespacePopulateInquiryBlockProvisioningData @ 0x140117880
 * Callers:
 *     ScsiInquiryRequest @ 0x140115960 (ScsiInquiryRequest.c)
 *     NvmeNamespaceScsiInquiryRequest @ 0x140117EE0 (NvmeNamespaceScsiInquiryRequest.c)
 * Callees:
 *     NvmeNamespaceIsDeallocateSupported @ 0x1401051A0 (NvmeNamespaceIsDeallocateSupported.c)
 *     SetSrbSenseData @ 0x140117490 (SetSrbSenseData.c)
 */

__int64 __fastcall NvmeNamespacePopulateInquiryBlockProvisioningData(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v6; // r9d
  char v7; // dl
  bool IsDeallocateSupported; // al
  __int64 v9; // r10
  __int64 v10; // r11
  char v11; // r8
  char v12; // cl
  char v13; // r8
  char v14; // r8
  char v15; // r8

  if ( *a3 >= 8u )
  {
    *(_BYTE *)(a4 + 3) = 4;
    v7 = *(_BYTE *)(a4 + 5) & 0xFC;
    *(_WORD *)a4 = -19968;
    *(_BYTE *)(a4 + 5) = v7;
    *(_BYTE *)(a4 + 5) = v7 & 0x9B | ((*(_BYTE *)(*(_QWORD *)(a1 + 176) + 33LL) & 7) != 1 ? 0 : 4);
    IsDeallocateSupported = NvmeNamespaceIsDeallocateSupported(a1);
    v12 = v11 & 0x7F | (IsDeallocateSupported ? 0x80 : 0);
    v13 = *(_BYTE *)(v9 + 6);
    *(_BYTE *)(v9 + 5) = v12;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 176) + 24LL) & 1) != 0 )
    {
      v14 = v13 & 0xF8 | 2;
    }
    else if ( NvmeNamespaceIsDeallocateSupported(a1) )
    {
      v14 = v15 & 0xF8 | 1;
    }
    else
    {
      v14 = v15 & 0xF8;
    }
    *(_BYTE *)(v9 + 6) = v14;
    *a3 = 8;
    *(_BYTE *)(v10 + 3) = 1;
  }
  else
  {
    SetSrbSenseData(a2, 6, 5, 36, 0);
    return (unsigned int)-1073741811;
  }
  return v6;
}
