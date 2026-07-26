/*
 * XREFs of WPP_RECORDER_SF_qLL @ 0x1400575D0
 * Callers:
 *     ?ndisUpdateMiniportFakeStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055680 (-ndisUpdateMiniportFakeStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140056330 (-ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIP.c)
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140057300 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     NdisMSetMiniportAttributes @ 0x140057C10 (NdisMSetMiniportAttributes.c)
 *     ?ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400580A0 (-ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x14005CF30 (-ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID.c)
 *     NdisAllocateGenericObject @ 0x14007AD40 (NdisAllocateGenericObject.c)
 *     NdisWriteEventLogEntry @ 0x14008D510 (NdisWriteEventLogEntry.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x140093540 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisSetOpenAddWakeUpPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400BD588 (-ndisSetOpenAddWakeUpPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     NdisMRegisterInterrupt @ 0x1400DEC60 (NdisMRegisterInterrupt.c)
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@Z @ 0x1400E1BA0 (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@.c)
 *     ?NdisPDPIQueueControl@@YAJPEAU_NDIS_PD_QUEUE@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_QUEUE_CONTROL_CODE@@PEAXK3KPEAK@Z @ 0x140146770 (-NdisPDPIQueueControl@@YAJPEAU_NDIS_PD_QUEUE@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_QUEUE_CONTROL_CO.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x14017E5D0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14017FF00 (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1401812C0 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qLL(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        ...)
{
  unsigned __int64 v9; // r11
  int v11; // eax
  int v13; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va, a7);
  v9 = (unsigned __int64)a3 >> 16;
  v11 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v9 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v11, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v9 + 41) >= 4u )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 4LL, va, 4LL, 0LL);
  LOWORD(v13) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v13, &a6, 8LL, &a7);
}
