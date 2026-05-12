/*
 * XREFs of StorCopyNVMeFirmwareRevision @ 0x1400A1C98
 * Callers:
 *     RaidUnitGetHardwareIds @ 0x14009EB24 (RaidUnitGetHardwareIds.c)
 *     StorProcessNVMeEnumeratorFillInfo @ 0x1400C0D54 (StorProcessNVMeEnumeratorFillInfo.c)
 *     NvmeControllerFabricFirmwareGetInfoIoctl @ 0x1400ED1D8 (NvmeControllerFabricFirmwareGetInfoIoctl.c)
 *     NvmeNamespaceGetHardwareIds @ 0x140103F20 (NvmeNamespaceGetHardwareIds.c)
 *     NvmeNamespacePopulateInquiryStandardData @ 0x140117B60 (NvmeNamespacePopulateInquiryStandardData.c)
 *     StorUnitAssignNVMeIdentity @ 0x14018E3E0 (StorUnitAssignNVMeIdentity.c)
 *     NvmeNamespaceGetStorageDeviceProperty @ 0x1401A5244 (NvmeNamespaceGetStorageDeviceProperty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorCopyNVMeFirmwareRevision(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r10d
  __int64 v4; // rdi
  int v5; // ebx
  signed int v6; // r9d
  __int64 i; // r11
  __int64 result; // rax
  _BYTE *v9; // rcx

  v3 = 0;
  v4 = a2;
  v5 = 0;
  v6 = 7;
  for ( i = 7LL; i >= 0; --i )
  {
    if ( (unsigned __int8)(*(_BYTE *)(a1 + i + 64) - 33) <= 0x5Du && ++v5 == a3 )
      break;
    if ( !i )
      break;
    --v6;
  }
  result = v6;
  if ( (unsigned __int64)v6 < 8 )
  {
    v9 = (_BYTE *)(v6 + a1 + 64);
    do
    {
      LOBYTE(a2) = *v9;
      result = (unsigned int)(a2 - 33);
      if ( (unsigned __int8)(*v9 - 33) <= 0x5Du )
      {
        result = v3++;
        *(_BYTE *)(result + v4) = a2;
        if ( v3 >= a3 )
          break;
      }
      ++v6;
      ++v9;
    }
    while ( (unsigned int)v6 < 8 );
  }
  return result;
}
