/*
 * XREFs of ScsiInquiryRequest @ 0x140115960
 * Callers:
 *     ScsiToNVMeCommand @ 0x140116554 (ScsiToNVMeCommand.c)
 *     ScsiToNVMeCommand2 @ 0x140116A7C (ScsiToNVMeCommand2.c)
 * Callees:
 *     FormInquiryStandardData @ 0x1400FA2AC (FormInquiryStandardData.c)
 *     SetSrbSenseData @ 0x140117490 (SetSrbSenseData.c)
 *     NvmeNamespacePopulateInquiryBlockLimitsData @ 0x1401176B8 (NvmeNamespacePopulateInquiryBlockLimitsData.c)
 *     NvmeNamespacePopulateInquiryBlockProvisioningData @ 0x140117880 (NvmeNamespacePopulateInquiryBlockProvisioningData.c)
 *     NvmeNamespacePopulateInquiryDeviceCharacteristicsData @ 0x140117974 (NvmeNamespacePopulateInquiryDeviceCharacteristicsData.c)
 *     NvmeNamespacePopulateInquiryDeviceIdentifiersData @ 0x1401179CC (NvmeNamespacePopulateInquiryDeviceIdentifiersData.c)
 *     NvmeNamespacePopulateInquirySerialNumberData @ 0x140117AA4 (NvmeNamespacePopulateInquirySerialNumberData.c)
 *     NvmeNamespacePopulateInquiryVpdSupportedPagesData @ 0x140117C58 (NvmeNamespacePopulateInquiryVpdSupportedPagesData.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 ScsiInquiryRequest(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v3; // r9d
  __int64 v4; // rbp
  __int64 v5; // rbx
  void *v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  v3 = v17;
  v4 = a3;
  v5 = a2;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = *(void **)(a2 + 64);
    v8 = *(_DWORD *)(a2 + 60);
  }
  else
  {
    v7 = *(void **)(a2 + 24);
    v8 = *(_DWORD *)(a2 + 16);
  }
  LODWORD(v17) = v8;
  if ( !v7 || !v8 )
    goto LABEL_27;
  memset_0(v7, 0, v8);
  v9 = *(unsigned __int8 *)(v4 + 2);
  if ( (*(_BYTE *)(v4 + 1) & 1) != 0 )
  {
    if ( !*(_BYTE *)(v4 + 2) )
    {
      v10 = NvmeNamespacePopulateInquiryVpdSupportedPagesData(v9, v5, (__int64 *)va, v7);
      goto LABEL_22;
    }
    v12 = v9 - 128;
    if ( !v12 )
    {
      v10 = NvmeNamespacePopulateInquirySerialNumberData(a1, v5, (__int64 *)va, v7);
      goto LABEL_22;
    }
    v13 = v12 - 3;
    if ( !v13 )
    {
      v10 = NvmeNamespacePopulateInquiryDeviceIdentifiersData(a1, v5, (__int64 *)va, v7);
      goto LABEL_22;
    }
    v14 = v13 - 45;
    if ( !v14 )
    {
      v10 = NvmeNamespacePopulateInquiryBlockLimitsData(a1, v5, (__int64 *)va, v7);
      goto LABEL_22;
    }
    v15 = (unsigned int)(v14 - 1);
    if ( !(_DWORD)v15 )
    {
      v10 = NvmeNamespacePopulateInquiryDeviceCharacteristicsData(v15, v5, (__int64 *)va, v7);
      goto LABEL_22;
    }
    if ( (_DWORD)v15 == 1 )
    {
      v10 = NvmeNamespacePopulateInquiryBlockProvisioningData(a1, v5, (__int64 *)va, v7);
      goto LABEL_22;
    }
LABEL_27:
    LOBYTE(v3) = 36;
    LOBYTE(a3) = 5;
    LOBYTE(a2) = 6;
    SetSrbSenseData(v5, a2, a3, v3, 0);
    return (unsigned int)-1073741811;
  }
  if ( (_BYTE)v9 )
  {
    LOBYTE(v3) = 36;
    LOBYTE(a3) = 5;
    LOBYTE(a2) = 6;
    SetSrbSenseData(v5, a2, a3, v3, 0);
    v11 = -1073741811;
    goto LABEL_23;
  }
  v10 = FormInquiryStandardData(a1, v5);
LABEL_22:
  v11 = v10;
LABEL_23:
  if ( !v11 )
  {
    if ( *(_BYTE *)(v5 + 2) == 40 )
      *(_DWORD *)(v5 + 60) = v17;
    else
      *(_DWORD *)(v5 + 16) = v17;
  }
  return v11;
}
