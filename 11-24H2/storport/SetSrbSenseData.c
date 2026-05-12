/*
 * XREFs of SetSrbSenseData @ 0x140117490
 * Callers:
 *     FormInquiryStandardData @ 0x1400FA2AC (FormInquiryStandardData.c)
 *     NvmeMapStatus @ 0x1400FB1BC (NvmeMapStatus.c)
 *     NvmeNamespaceExecuteScsiSrb @ 0x140100028 (NvmeNamespaceExecuteScsiSrb.c)
 *     NvmeNamespaceExecuteScsiSrbEx @ 0x140100A80 (NvmeNamespaceExecuteScsiSrbEx.c)
 *     NvmeNamespaceProcessQueueRequests @ 0x140107114 (NvmeNamespaceProcessQueueRequests.c)
 *     NvmeNamespaceProcessRequest @ 0x140107538 (NvmeNamespaceProcessRequest.c)
 *     ScsiInquiryRequest @ 0x140115960 (ScsiInquiryRequest.c)
 *     ScsiModeSelectRequest @ 0x140115AE8 (ScsiModeSelectRequest.c)
 *     ScsiModeSenseRequest @ 0x140115C18 (ScsiModeSenseRequest.c)
 *     ScsiReadWriteRequest @ 0x140115E44 (ScsiReadWriteRequest.c)
 *     ScsiSecurityProtocolIn @ 0x14011635C (ScsiSecurityProtocolIn.c)
 *     ScsiSecurityProtocolOut @ 0x14011641C (ScsiSecurityProtocolOut.c)
 *     ScsiStartStopUnitRequest @ 0x1401164DC (ScsiStartStopUnitRequest.c)
 *     ScsiToNVMeCommand @ 0x140116554 (ScsiToNVMeCommand.c)
 *     ScsiToNVMeCommand2 @ 0x140116A7C (ScsiToNVMeCommand2.c)
 *     ScsiUnmapRequest @ 0x1401171E4 (ScsiUnmapRequest.c)
 *     NvmeNamespacePopulateInquiryBlockLimitsData @ 0x1401176B8 (NvmeNamespacePopulateInquiryBlockLimitsData.c)
 *     NvmeNamespacePopulateInquiryBlockProvisioningData @ 0x140117880 (NvmeNamespacePopulateInquiryBlockProvisioningData.c)
 *     NvmeNamespacePopulateInquiryDeviceCharacteristicsData @ 0x140117974 (NvmeNamespacePopulateInquiryDeviceCharacteristicsData.c)
 *     NvmeNamespacePopulateInquiryDeviceIdentifiersData @ 0x1401179CC (NvmeNamespacePopulateInquiryDeviceIdentifiersData.c)
 *     NvmeNamespacePopulateInquirySerialNumberData @ 0x140117AA4 (NvmeNamespacePopulateInquirySerialNumberData.c)
 *     NvmeNamespacePopulateInquiryVpdSupportedPagesData @ 0x140117C58 (NvmeNamespacePopulateInquiryVpdSupportedPagesData.c)
 *     NvmeNamespacePopulateLogSenseInformationalExceptions @ 0x140117CB4 (NvmeNamespacePopulateLogSenseInformationalExceptions.c)
 *     NvmeNamespacePopulateLogSenseTemperature @ 0x140117DAC (NvmeNamespacePopulateLogSenseTemperature.c)
 *     NvmeNamespaceScsiInquiryRequest @ 0x140117EE0 (NvmeNamespaceScsiInquiryRequest.c)
 *     NvmeNamespaceScsiLogSenseRequest @ 0x140118074 (NvmeNamespaceScsiLogSenseRequest.c)
 *     NvmeNamespaceScsiModeSelectRequest @ 0x1401181E8 (NvmeNamespaceScsiModeSelectRequest.c)
 *     NvmeNamespaceScsiModeSenseRequest @ 0x1401183C8 (NvmeNamespaceScsiModeSenseRequest.c)
 *     NvmeNamespaceScsiReadCapacityRequest @ 0x1401186DC (NvmeNamespaceScsiReadCapacityRequest.c)
 *     NvmeNamespaceScsiReadWriteRequest @ 0x1401189B0 (NvmeNamespaceScsiReadWriteRequest.c)
 *     NvmeNamespaceScsiSyncCacheRequest @ 0x140118B8C (NvmeNamespaceScsiSyncCacheRequest.c)
 *     NvmeNamespaceScsiUnmapRequest @ 0x140118CB8 (NvmeNamespaceScsiUnmapRequest.c)
 * Callees:
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

char __fastcall SetSrbSenseData(__int64 a1, char a2, char a3, char a4, char a5)
{
  bool v6; // zf
  __int64 v7; // rax
  _DWORD *v8; // r11
  char v9; // r10
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  void *v16; // rsi
  char v17; // bl
  unsigned int v18; // ebp
  unsigned int v19; // r10d
  unsigned int *v20; // r9
  unsigned __int64 v21; // r8
  char v22; // bl
  unsigned __int8 v23; // bp
  unsigned int v24; // r11d
  unsigned int v25; // r10d
  unsigned int *v26; // r9
  unsigned __int64 v27; // r8
  unsigned int v28; // ebx
  __int128 Src; // [rsp+20h] [rbp-28h] BYREF
  __int16 v31; // [rsp+30h] [rbp-18h]

  *(_BYTE *)(a1 + 3) = a2;
  v31 = 0;
  Src = 0LL;
  LOBYTE(Src) = -16;
  BYTE7(Src) = 10;
  v6 = *(_BYTE *)(a1 + 2) == 40;
  BYTE2(Src) = a3 & 0xF;
  LOBYTE(v7) = a5;
  BYTE12(Src) = a4;
  v8 = (_DWORD *)(a1 + 20);
  BYTE13(Src) = a5;
  if ( v6 )
  {
    v9 = 0;
    if ( !*v8 )
    {
      v10 = 0LL;
      if ( *(_DWORD *)(a1 + 56) )
      {
        while ( 1 )
        {
          v11 = *(unsigned int *)(a1 + 4 * v10 + 120);
          if ( (unsigned int)v11 >= 0x80 )
          {
            v12 = *(unsigned int *)(a1 + 16);
            if ( (unsigned int)v11 < (unsigned int)v12 )
              break;
          }
LABEL_11:
          v10 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 56) )
            goto LABEL_17;
        }
        v13 = (unsigned int)v11;
        v14 = *(_DWORD *)(v11 + a1) - 64;
        if ( !v14 )
          goto LABEL_9;
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
          {
LABEL_9:
            if ( v13 + 40 <= v12 )
            {
              *(_BYTE *)(v13 + a1 + 8) = 2;
              goto LABEL_17;
            }
          }
        }
        else if ( v13 + 56 <= v12 )
        {
          v9 = 1;
          *(_BYTE *)(v13 + a1 + 8) = 2;
        }
        if ( v9 )
          goto LABEL_17;
        goto LABEL_11;
      }
    }
  }
  else
  {
    *(_BYTE *)(a1 + 4) = 2;
  }
LABEL_17:
  v16 = 0LL;
  if ( *(_BYTE *)(a1 + 2) != 40 )
  {
    v16 = *(void **)(a1 + 32);
    v23 = *(_BYTE *)(a1 + 11);
    goto LABEL_51;
  }
  v17 = 0;
  if ( !*v8 )
  {
    v18 = *(_DWORD *)(a1 + 56);
    v19 = 0;
    if ( v18 )
    {
      v20 = (unsigned int *)(a1 + 120);
      do
      {
        v7 = *v20;
        if ( (unsigned int)v7 >= 0x80 )
        {
          v21 = *(unsigned int *)(a1 + 16);
          if ( (unsigned int)v7 < (unsigned int)v21 )
          {
            if ( *(_DWORD *)(v7 + a1) == 64 )
            {
              if ( v7 + 40 <= v21 )
              {
                v16 = *(void **)(v7 + a1 + 16);
                break;
              }
            }
            else if ( *(_DWORD *)(v7 + a1) == 65 )
            {
              if ( v7 + 56 <= v21 )
              {
                v16 = *(void **)(v7 + a1 + 16);
                v17 = 1;
              }
            }
            else if ( *(_DWORD *)(v7 + a1) == 66 && v7 + 40 <= v21 )
            {
              v16 = *(void **)(v7 + a1 + 24);
              break;
            }
            if ( v17 )
              break;
          }
        }
        ++v19;
        ++v20;
      }
      while ( v19 < v18 );
    }
  }
  v22 = 0;
  v23 = 0;
  if ( !*v8 )
  {
    v24 = *(_DWORD *)(a1 + 56);
    v25 = 0;
    if ( v24 )
    {
      v26 = (unsigned int *)(a1 + 120);
      while ( 1 )
      {
        v7 = *v26;
        if ( (unsigned int)v7 >= 0x80 )
        {
          v27 = *(unsigned int *)(a1 + 16);
          if ( (unsigned int)v7 < (unsigned int)v27 )
            break;
        }
LABEL_45:
        ++v25;
        ++v26;
        if ( v25 >= v24 )
          goto LABEL_51;
      }
      switch ( *(_DWORD *)(v7 + a1) )
      {
        case '@':
          goto LABEL_43;
        case 'A':
          if ( v7 + 56 <= v27 )
          {
            v23 = *(_BYTE *)(v7 + a1 + 9);
            v22 = 1;
          }
          break;
        case 'B':
LABEL_43:
          if ( v7 + 40 <= v27 )
          {
            v23 = *(_BYTE *)(v7 + a1 + 9);
            goto LABEL_51;
          }
          break;
      }
      if ( v22 )
        goto LABEL_51;
      goto LABEL_45;
    }
  }
LABEL_51:
  if ( v16 && v23 )
  {
    v28 = v23;
    memset_0(v16, 0, v23);
    if ( v23 > 0x12u )
      v28 = 18;
    LOBYTE(v7) = (unsigned __int8)memmove(v16, &Src, v28);
    *(_BYTE *)(a1 + 3) |= 0x80u;
  }
  return v7;
}
