/*
 * XREFs of NdisWriteErrorLogEntry @ 0x14005BCE0
 * Callers:
 *     ?ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400670C0 (-ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z @ 0x1400A4048 (-ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z.c)
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@Z @ 0x1400DA9BC (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@.c)
 *     NdisMAllocateMapRegisters @ 0x1401708C0 (NdisMAllocateMapRegisters.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     McTemplateK0jqxzqqQR5_EtwWriteTransfer @ 0x1400376C0 (McTemplateK0jqxzqqQR5_EtwWriteTransfer.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

void NdisWriteErrorLogEntry(NDIS_HANDLE NdisAdapterHandle, ULONG ErrorCode, ULONG NumberOfErrorValues, ...)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  const void *v7; // r14
  __int64 v8; // rcx
  unsigned int v9; // edx
  _WORD *ErrorLogEntry; // rax
  _WORD *v11; // rbx
  __int64 v12; // rdx
  unsigned int *v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rcx
  char v16[8]; // [rsp+30h] [rbp-78h]
  unsigned int v17; // [rsp+C0h] [rbp+18h] BYREF

  v17 = NumberOfErrorValues;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
      (char)NdisAdapterHandle,
      ErrorCode);
    NumberOfErrorValues = v17;
  }
  if ( NdisAdapterHandle )
  {
    v5 = *((_QWORD *)NdisAdapterHandle + 482);
    v6 = *(unsigned __int16 *)(v5 + 2);
    v7 = *(const void **)(v5 + 8);
    v8 = 4LL * NumberOfErrorValues + 48;
    v9 = v8 + v6;
    if ( (unsigned __int64)(v8 + v6) <= 0xFFFFFFFF )
    {
      if ( v9 <= 0xF0
        || (v6 = *((unsigned __int16 *)NdisAdapterHandle + 1905),
            v7 = (const void *)*((_QWORD *)NdisAdapterHandle + 477),
            v9 = v8 + v6,
            (unsigned __int64)(v8 + v6) <= 0xFFFFFFFF)
        && v9 <= 0xF0 )
      {
        ErrorLogEntry = IoAllocateErrorLogEntry(*((PVOID *)NdisAdapterHandle + 478), v9);
        v11 = ErrorLogEntry;
        if ( ErrorLogEntry )
        {
          *((_DWORD *)ErrorLogEntry + 3) = ErrorCode;
          *ErrorLogEntry = 0;
          v12 = 0LL;
          *((_QWORD *)ErrorLogEntry + 2) = 0LL;
          *((_QWORD *)ErrorLogEntry + 3) = 0LL;
          ErrorLogEntry[1] = 4 * v17;
          if ( v17 )
          {
            v13 = &v17;
            do
            {
              v14 = v13[2];
              v13 += 2;
              v15 = (unsigned int)v12;
              v12 = (unsigned int)(v12 + 1);
              *(_DWORD *)&v11[2 * v15 + 20] = v14;
            }
            while ( (unsigned int)v12 < v17 );
          }
          if ( (_DWORD)v6 )
          {
            v11[2] = 1;
            v11[3] = 4 * (v17 + 12);
            memmove(&v11[2 * v17 + 24], v7, (unsigned int)v6);
          }
          else
          {
            v11[2] = 0;
          }
          if ( (byte_14011B104 & 0x20) != 0 )
            McTemplateK0jqxzqqQR5_EtwWriteTransfer(
              *((_QWORD *)NdisAdapterHandle + 482),
              v12,
              (__int64)NdisAdapterHandle + 4008,
              (__int64)NdisAdapterHandle + 4008,
              *((_DWORD *)NdisAdapterHandle + 1014),
              *((_QWORD *)NdisAdapterHandle + 503),
              *(const wchar_t **)(*((_QWORD *)NdisAdapterHandle + 482) + 8LL),
              ErrorCode,
              v17,
              (__int64)(v11 + 20));
          IoWriteErrorLogEntry(v11);
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v16 = ErrorCode;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
      (char)NdisAdapterHandle,
      *(_QWORD *)v16);
  }
}
