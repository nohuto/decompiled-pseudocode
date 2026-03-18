/*
 * XREFs of NVMeSetSenseData @ 0x140002390
 * Callers:
 *     FormInquiryBlockLimitsData @ 0x140001040 (FormInquiryBlockLimitsData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1400012F0 (FormInquiryDeviceIdentifiersData.c)
 *     ScsiSanitizeRequest @ 0x140001580 (ScsiSanitizeRequest.c)
 *     ScsiInquiryRequest @ 0x140001810 (ScsiInquiryRequest.c)
 *     ScsiReadCapacityRequest @ 0x140001940 (ScsiReadCapacityRequest.c)
 *     FormInquiryStandardData @ 0x140001BA0 (FormInquiryStandardData.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x140002030 (NVMeWriteBufferFirmwareActivate.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x140002140 (NVMeWriteBufferFirmwareDownload.c)
 *     NVMeHwBuildIo @ 0x140002520 (NVMeHwBuildIo.c)
 *     ScsiToNVMe @ 0x140002940 (ScsiToNVMe.c)
 *     ScsiReadWriteRequest @ 0x140003760 (ScsiReadWriteRequest.c)
 *     ScsiUnmapRequest @ 0x140004080 (ScsiUnmapRequest.c)
 *     ScsiModeSenseRequest @ 0x1400057D0 (ScsiModeSenseRequest.c)
 *     NVMeHwStartIo @ 0x140018740 (NVMeHwStartIo.c)
 *     FormInquiryBlockProvisioningData @ 0x14001FEA0 (FormInquiryBlockProvisioningData.c)
 *     FormInquiryDeviceCharacteristicsData @ 0x14001FF88 (FormInquiryDeviceCharacteristicsData.c)
 *     FormInquirySerialNumberData @ 0x14001FFFC (FormInquirySerialNumberData.c)
 *     FormInquiryVpdSupportedPagesData @ 0x1400201FC (FormInquiryVpdSupportedPagesData.c)
 *     LogSenseInformationalExceptions @ 0x140021C84 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x140021E18 (LogSenseTemperature.c)
 *     ScsiModeSelectRequest @ 0x1400261F4 (ScsiModeSelectRequest.c)
 *     ScsiPersistentReserveOut @ 0x140026370 (ScsiPersistentReserveOut.c)
 *     ProcessCommandNvmePacket @ 0x14002C8E8 (ProcessCommandNvmePacket.c)
 * Callees:
 *     memmove @ 0x1400311C0 (memmove.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

unsigned __int64 __fastcall NVMeSetSenseData(__int64 a1, char a2, char a3, unsigned __int8 a4)
{
  _BYTE *v4; // r10
  unsigned __int8 v5; // r11
  char v6; // r9
  unsigned __int64 result; // rax
  char *v8; // rbp
  unsigned int *v10; // rdx
  __int64 v11; // r8
  char *v12; // rcx
  unsigned int v13; // esi
  unsigned int v14; // edi
  unsigned int v15; // edi
  char *v16; // rcx
  unsigned int v17; // edi
  __int128 Src; // [rsp+20h] [rbp-28h] BYREF
  __int16 v19; // [rsp+30h] [rbp-18h]

  *(_BYTE *)(a1 + 3) = a2;
  v19 = 0;
  v4 = 0LL;
  Src = 0LL;
  v5 = 0;
  WORD6(Src) = a4;
  LOBYTE(Src) = -16;
  BYTE2(Src) = a3 & 0xF;
  v6 = 0;
  result = *(unsigned __int8 *)(a1 + 2);
  v8 = 0LL;
  BYTE7(Src) = 10;
  if ( (_BYTE)result == 40 )
  {
    if ( *(_DWORD *)(a1 + 20) )
      return result;
    result = *(unsigned int *)(a1 + 56);
    if ( !(_DWORD)result )
      return result;
    v10 = (unsigned int *)(a1 + 120);
    v11 = (unsigned int)result;
    while ( 1 )
    {
      result = *v10;
      if ( (unsigned int)result < 0x80 || (unsigned int)result > *(_DWORD *)(a1 + 16) )
        goto LABEL_13;
      v12 = (char *)(a1 + result);
      result = (unsigned int)(*(_DWORD *)(a1 + result) - 64);
      if ( !(_DWORD)result )
        break;
      result = (unsigned int)(result - 1);
      if ( !(_DWORD)result )
        break;
      if ( (_DWORD)result == 1 )
      {
        v8 = (char *)*((_QWORD *)v12 + 3);
LABEL_12:
        v5 = v12[9];
        v4 = v12 + 8;
        v6 = 1;
      }
LABEL_13:
      ++v10;
      if ( !--v11 )
      {
        if ( v6 )
        {
LABEL_18:
          if ( v4 )
            *v4 = 2;
          if ( v8 && v5 )
          {
            v13 = v5 <= 0x12u ? v5 : 18;
            v14 = v5;
            result = (unsigned __int64)memmove(v8, &Src, v13);
            *(_BYTE *)(a1 + 3) |= 0x80u;
            if ( v14 > v13 )
            {
              v15 = v14 - v13;
              v16 = &v8[v13];
              if ( (v15 & 3) != 0 )
              {
                if ( v15 )
                  return (unsigned __int64)memset(v16, 0, v15);
              }
              else
              {
                v17 = v15 >> 2;
                if ( v17 )
                  return (unsigned __int64)memset(v16, 0, 4LL * v17);
              }
            }
          }
        }
        return result;
      }
    }
    v8 = (char *)*((_QWORD *)v12 + 2);
    goto LABEL_12;
  }
  if ( !(_BYTE)result )
  {
    v8 = *(char **)(a1 + 32);
    v4 = (_BYTE *)(a1 + 4);
    v5 = *(_BYTE *)(a1 + 11);
    goto LABEL_18;
  }
  return result;
}
