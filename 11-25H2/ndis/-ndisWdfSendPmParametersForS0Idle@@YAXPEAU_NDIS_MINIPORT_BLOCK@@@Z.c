/*
 * XREFs of ?ndisWdfSendPmParametersForS0Idle@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140063560
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x14004E5A0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140064EE0 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1400653B0 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     McTemplateK0jqqqqqqqqqq_EtwWriteTransfer @ 0x14007D380 (McTemplateK0jqqqqqqqqqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisWdfSendPmParametersForS0Idle(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // edx
  int v3; // ecx
  unsigned int MediaSpecificWakeUpEvents; // edx
  int v5; // r9d
  unsigned int SupportedWakeUpEvents; // eax
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  __int128 v8; // [rsp+78h] [rbp-30h] BYREF
  unsigned int v9; // [rsp+88h] [rbp-20h]

  if ( ndisReferenceMiniportByHandle(a1, 1u, MPREF_PM_OID) )
  {
    v3 = 0;
    v8 = *(_OWORD *)&a1->PMCurrentParameters.Header.Type;
    MediaSpecificWakeUpEvents = a1->PMCurrentParameters.MediaSpecificWakeUpEvents;
    v9 = MediaSpecificWakeUpEvents;
    HIDWORD(v8) = 0;
    if ( !ndisAoAcCapable && !ndisAoAcTest || ndisIdleCondition == NdisIdleConditionAnyLowLatency )
      goto LABEL_18;
    if ( (unsigned int)(ndisIdleCondition - 1) > 2 )
      NT_ASSERT(
        "ndisIdleCondition == NdisIdleConditionAnyLowLatency || ndisIdleCondition == NdisIdleConditionAny || ndisIdleCond"
        "ition == NdisIdleConditionUnicastOnly || ndisIdleCondition == NdisIdleConditionL2ConnectedOnly");
    if ( ndisIdleCondition != NdisIdleConditionAny )
    {
      v5 = DWORD1(v8);
      if ( ndisIdleCondition == NdisIdleConditionL2ConnectedOnly )
        v5 = 0;
      DWORD1(v8) = v5;
      SupportedWakeUpEvents = a1->PMAdvertisedCapabilities.SupportedWakeUpEvents;
      if ( (SupportedWakeUpEvents & 2) != 0 )
        v3 = 2;
      HIDWORD(v8) = v3;
      if ( (SupportedWakeUpEvents & 1) != 0 )
      {
        v3 |= 1u;
        HIDWORD(v8) = v3;
      }
      if ( (a1->PMAdvertisedCapabilities.SupportedWoLPacketPatterns & 2) != 0 )
        DWORD1(v8) = v5 | 2;
    }
    else
    {
LABEL_18:
      v3 = 16;
      HIDWORD(v8) = 16;
    }
    if ( (byte_140125103 & 4) != 0 )
      McTemplateK0jqqqqqqqqqq_EtwWriteTransfer(
        v3,
        MediaSpecificWakeUpEvents,
        (_DWORD)a1 + 4008,
        (_DWORD)a1 + 4008,
        a1->PMAdvertisedCapabilities.Flags,
        a1->PMAdvertisedCapabilities.SupportedWoLPacketPatterns,
        a1->PMAdvertisedCapabilities.SupportedProtocolOffloads,
        a1->PMAdvertisedCapabilities.SupportedWakeUpEvents,
        a1->PMAdvertisedCapabilities.MediaSpecificWakeUpEvents);
    CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(a1);
    CxBlockFromMiniport->Chars.EvtCxUpdatePMParameters(a1->MiniportAdapterContext, (_NDIS_PM_PARAMETERS *)&v8);
    ndisDereferenceMiniport(a1, 0xEu);
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 3;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      14,
      12,
      (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
      (char)a1);
  }
}
