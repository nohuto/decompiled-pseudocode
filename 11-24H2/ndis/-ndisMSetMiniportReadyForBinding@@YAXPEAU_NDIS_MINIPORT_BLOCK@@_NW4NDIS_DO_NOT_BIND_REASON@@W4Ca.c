/*
 * XREFs of ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x140161630
 * Callers:
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x14002A7C0 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14005F1F0 (-ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140065F90 (-ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     NdisLWMStartNetworkInterface @ 0x1400773B0 (NdisLWMStartNetworkInterface.c)
 *     ?ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140080880 (-ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     NdisWdfMiniportStarted @ 0x140094CD0 (NdisWdfMiniportStarted.c)
 *     ?ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x140098EC4 (-ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     ndisMiniportDeviceReadyNotification @ 0x14016B220 (ndisMiniportDeviceReadyNotification.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140176710 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x140180E40 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181C30 (-ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Ld @ 0x140058010 (WPP_RECORDER_SF_Ld.c)
 *     ?ndisInitialBindCompleted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140071B40 (-ndisInitialBindCompleted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_LZq @ 0x1400A084C (WPP_RECORDER_SF_LZq.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x140143E34 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140155F00 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140161800 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

void __fastcall ndisMSetMiniportReadyForBinding(
        struct _NDIS_MINIPORT_BLOCK *a1,
        char a2,
        enum NDIS_DO_NOT_BIND_REASON a3,
        enum CallRunMode a4)
{
  unsigned int m_unbindReasons; // r8d
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // edx
  int v12; // edx
  int v13; // r8d
  int v14; // edx
  int v15; // r8d
  char v16[160]; // [rsp+40h] [rbp-A8h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  m_unbindReasons = a1->Bindings.Miniport.m_unbindReasons;
  v9 = 0;
  v10 = 0;
  if ( a2 )
  {
    v11 = m_unbindReasons & ~a3;
    a1->Bindings.Miniport.m_unbindReasons = v11;
    LOBYTE(v10) = v11 != 0;
    LOBYTE(v9) = m_unbindReasons != 0;
    if ( v9 != v10 || !a1->Bindings.Miniport.Miniport )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_Ld(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xEu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          m_unbindReasons,
          m_unbindReasons & ~a3);
      a1->Bindings.Miniport.Miniport->BindEngine.m_isDirty = 1;
      memset(v16, 0, sizeof(v16));
      if ( (unsigned __int8)byte_14011CBA3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v16);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_LZq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v12,
            v13,
            0x102u,
            (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
            a3,
            *(unsigned __int16 **)&v16[8],
            *(_QWORD *)v16);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
    Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, a4, 0);
    if ( (a3 & 2) != 0 )
      ndisInitialBindCompleted(a1);
  }
  else
  {
    a1->Bindings.Miniport.m_unbindReasons = a3 | m_unbindReasons;
    LOBYTE(v10) = (a3 | m_unbindReasons) != 0;
    LOBYTE(v9) = m_unbindReasons != 0;
    if ( v9 != v10 || !a1->Bindings.Miniport.Miniport )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_Ld(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xEu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          m_unbindReasons,
          a3 | m_unbindReasons);
      a1->Bindings.Miniport.Miniport->BindEngine.m_isDirty = 1;
      memset(v16, 0, sizeof(v16));
      if ( (unsigned __int8)byte_14011CBA3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v16);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_LZq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v14,
            v15,
            0x103u,
            (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
            a3,
            *(unsigned __int16 **)&v16[8],
            *(_QWORD *)v16);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
    Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, a4, 0);
  }
}
