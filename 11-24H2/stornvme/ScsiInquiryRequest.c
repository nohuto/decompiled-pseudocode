/*
 * XREFs of ScsiInquiryRequest @ 0x140001810
 * Callers:
 *     <none>
 * Callees:
 *     FormInquiryBlockLimitsData @ 0x140001040 (FormInquiryBlockLimitsData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1400012F0 (FormInquiryDeviceIdentifiersData.c)
 *     FormInquiryStandardData @ 0x140001BA0 (FormInquiryStandardData.c)
 *     NVMeSetSenseData @ 0x140002390 (NVMeSetSenseData.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 *     FormInquiryBlockProvisioningData @ 0x14001FEA0 (FormInquiryBlockProvisioningData.c)
 *     FormInquiryDeviceCharacteristicsData @ 0x14001FF88 (FormInquiryDeviceCharacteristicsData.c)
 *     FormInquirySerialNumberData @ 0x14001FFFC (FormInquirySerialNumberData.c)
 *     FormInquiryVpdSupportedPagesData @ 0x1400201FC (FormInquiryVpdSupportedPagesData.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall ScsiInquiryRequest(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax
  void *SrbDataBuffer; // rax
  unsigned int *v9; // rcx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int *v12; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  v5 = a2;
  if ( (*(_BYTE *)(a3 + 1) & 1) != 0 )
  {
    v12 = 0LL;
    SrbDataBuffer = (void *)GetSrbDataBuffer(a2, &v12);
    if ( SrbDataBuffer )
    {
      v9 = v12;
      v10 = *v12;
      if ( *v12 )
      {
        if ( (v10 & 3) != 0 )
        {
          memset(SrbDataBuffer, 0, *v12);
        }
        else
        {
          v11 = v10 >> 2;
          if ( v11 )
            memset(SrbDataBuffer, 0, 4LL * v11);
        }
      }
    }
    a2 = 0x140000000uLL;
    switch ( *(_BYTE *)(v4 + 2) )
    {
      case 0:
        result = FormInquiryVpdSupportedPagesData(v9, v5);
        break;
      case 0x80:
        result = FormInquirySerialNumberData(a1, v5);
        break;
      case 0x83:
        result = FormInquiryDeviceIdentifiersData(a1, v5);
        break;
      case 0xB0:
        result = FormInquiryBlockLimitsData(a1, v5);
        break;
      case 0xB1:
        result = FormInquiryDeviceCharacteristicsData(v9, v5);
        break;
      case 0xB2:
        result = FormInquiryBlockProvisioningData(a1, v5);
        break;
      default:
        goto LABEL_17;
    }
  }
  else if ( *(_BYTE *)(a3 + 2) )
  {
LABEL_17:
    LOBYTE(a4) = 36;
    LOBYTE(a3) = 5;
    LOBYTE(a2) = 6;
    NVMeSetSenseData(v5, a2, a3, a4);
    return 3238002694LL;
  }
  else
  {
    return FormInquiryStandardData();
  }
  return result;
}
