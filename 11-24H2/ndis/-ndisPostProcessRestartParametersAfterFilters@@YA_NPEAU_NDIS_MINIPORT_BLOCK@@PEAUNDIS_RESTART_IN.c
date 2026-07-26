/*
 * XREFs of ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x14005AB40
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140154AB0 (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     memmove @ 0x1400E7200 (memmove.c)
 *     ?ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z @ 0x140153F70 (-ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z.c)
 *     ?ndisEnumerateFilterInstances@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@E$00@Rtl@@@Z @ 0x140163030 (-ndisEnumerateFilterInstances@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@E$00@Rtl@@@Z.c)
 */

char __fastcall ndisPostProcessRestartParametersAfterFilters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_RESTART_INFORMATION *a2)
{
  unsigned int m_numElements; // ecx
  unsigned int MtuSize; // eax
  KIRQL v6; // al
  unsigned int SupportedOidListLength; // edx
  KIRQL v8; // bp
  unsigned int *v9; // rcx
  unsigned int *SupportedOidList; // rcx
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF
  union _NET_LUID_LH v13; // [rsp+60h] [rbp+18h] BYREF

  ndisEnumerateFilterInstances(a1, &a2->FilterInstanceBuffer);
  m_numElements = a2->FilterInstanceBuffer.m_numElements;
  if ( m_numElements )
  {
    a2->ProtocolParameters.FilterModuleNameBuffer = a2->FilterInstanceBuffer._p;
    a2->ProtocolParameters.FilterModuleNameBufferLength = m_numElements;
  }
  ndisIfQueryBindingMiniportIfIndex(
    a1,
    &a2->ProtocolParameters.BoundIfIndex,
    &a2->ProtocolParameters.BoundIfNetluid,
    &v12,
    &v13);
  if ( a2->Attributes.Oid )
  {
    a2->General.MacOptions |= a2->MiniportMacOptionsToPreserve;
    a1->TopFilterRestartAttributes.AccessType = a2->General.AccessType;
    a1->TopFilterRestartAttributes.ConnectionType = a2->General.ConnectionType;
    a1->TopFilterRestartAttributes.ContextBackFillSize = a2->General.ContextBackFillSize;
    a1->TopFilterRestartAttributes.DataBackFillSize = a2->General.DataBackFillSize;
    a1->TopFilterRestartAttributes.Header = a2->General.Header;
    a1->TopFilterRestartAttributes.LookaheadSize = a2->General.LookaheadSize;
    a1->TopFilterRestartAttributes.MacOptions = a2->General.MacOptions;
    a1->TopFilterRestartAttributes.MaxMulticastListSize = a2->General.MaxMulticastListSize;
    MtuSize = a2->General.MtuSize;
    a1->TopFilterRestartAttributes.RecvScaleCapabilities = &a1->TopRecvScaleCapabilities;
    a1->TopFilterRestartAttributes.MtuSize = MtuSize;
    *(_OWORD *)&a1->TopRecvScaleCapabilities.Header.Type = *(_OWORD *)&a2->RssCaps.Header.Type;
    *(_DWORD *)&a1->TopRecvScaleCapabilities.NumberOfIndirectionTableEntries = *(_DWORD *)&a2->RssCaps.NumberOfIndirectionTableEntries;
    a1->TopFilterRestartAttributes.SupportedPacketFilters = a2->General.SupportedPacketFilters;
    a1->TopFilterRestartAttributes.SupportedStatistics = a2->General.SupportedStatistics;
    a1->TopFilterRestartAttributes.MaxXmitLinkSpeed = a2->General.MaxXmitLinkSpeed;
    a1->TopFilterRestartAttributes.MaxRcvLinkSpeed = a2->General.MaxRcvLinkSpeed;
    v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    SupportedOidListLength = a1->TopFilterRestartAttributes.SupportedOidListLength;
    v8 = v6;
    a1->MiniportThread = KeGetCurrentThread();
    if ( a2->General.SupportedOidListLength != SupportedOidListLength )
    {
      SupportedOidList = a1->TopFilterRestartAttributes.SupportedOidList;
      if ( SupportedOidList )
      {
        ExFreePoolWithTag(SupportedOidList, 0);
        SupportedOidListLength = 0;
        a1->TopFilterRestartAttributes.SupportedOidListLength = 0;
      }
    }
    if ( a2->General.SupportedOidListLength && !SupportedOidListLength )
      a1->TopFilterRestartAttributes.SupportedOidList = (unsigned int *)ExAllocatePool2(
                                                                          66LL,
                                                                          a2->General.SupportedOidListLength,
                                                                          1835091022LL);
    v9 = a1->TopFilterRestartAttributes.SupportedOidList;
    if ( v9 )
    {
      memmove(v9, a2->General.SupportedOidList, a2->General.SupportedOidListLength);
      a1->TopFilterRestartAttributes.SupportedOidListLength = a2->General.SupportedOidListLength;
    }
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v8);
  }
  return 1;
}
