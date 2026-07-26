/*
 * XREFs of ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140085AD0
 * Callers:
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1400173B0 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     NdisWdfPnpPowerEventHandler @ 0x14004E5A0 (NdisWdfPnpPowerEventHandler.c)
 *     ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14004E610 (-ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140064270 (-ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1400642C0 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     NdisWdfMiniportSetPower @ 0x1400836C0 (NdisWdfMiniportSetPower.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x14015D9B0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisMStartOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x14015DE60 (-ndisMStartOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401846F0 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140064EE0 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400CA558 (-ndisSetIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisSelectiveSuspendClearStop(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  int v4; // edi
  KIRQL v6; // bp
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax

  SelectiveSuspend = a1->SelectiveSuspend;
  v4 = a1->Flags & 0x80;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xFu,
      0x23u,
      (struct _GUID *)&WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
      (char)a1,
      a2);
  if ( a2 == 7 )
  {
    *((_DWORD *)SelectiveSuspend + 127) &= ~0x40u;
  }
  else
  {
    switch ( a2 )
    {
      case 1:
        *((_DWORD *)SelectiveSuspend + 127) &= ~1u;
        break;
      case 4:
        *((_DWORD *)SelectiveSuspend + 127) &= ~8u;
        break;
      case 6:
        *((_DWORD *)SelectiveSuspend + 127) &= ~0x20u;
        break;
      case 8:
        if ( (*((_DWORD *)SelectiveSuspend + 134))-- == 1 )
          *((_DWORD *)SelectiveSuspend + 127) &= ~0x80u;
        break;
      case 9:
        *((_DWORD *)SelectiveSuspend + 127) &= ~0x100u;
        break;
      case 11:
        *((_DWORD *)SelectiveSuspend + 127) &= ~0x400u;
        break;
      case 13:
        v8 = *((_DWORD *)SelectiveSuspend + 127);
        if ( (v8 & 0x1000) == 0 )
          NT_ASSERT("SS->StopFlags.BindChanges");
        v9 = *((_DWORD *)SelectiveSuspend + 135);
        if ( v9 <= 0 )
          NT_ASSERT("SS->PendingBindChangesCount > 0");
        v10 = v9 - 1;
        *((_DWORD *)SelectiveSuspend + 135) = v10;
        if ( !v10 )
          *((_DWORD *)SelectiveSuspend + 127) = v8 & 0xFFFFEFFF;
        break;
      default:
        break;
    }
  }
  if ( v4 )
  {
    if ( !*((_DWORD *)SelectiveSuspend + 128)
      && !*((_DWORD *)SelectiveSuspend + 129)
      && !*((_DWORD *)SelectiveSuspend + 132)
      && !*((_DWORD *)SelectiveSuspend + 133)
      && !*((_DWORD *)SelectiveSuspend + 130)
      && !*((_DWORD *)SelectiveSuspend + 131)
      && !*((_DWORD *)SelectiveSuspend + 144)
      && !*((_DWORD *)SelectiveSuspend + 127) )
    {
      CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(a1);
      CxBlockFromMiniport->Chars.EvtCxPowerDereference(a1->MiniportAdapterContext);
    }
    goto LABEL_29;
  }
  if ( *((_DWORD *)SelectiveSuspend + 127) )
  {
LABEL_29:
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v6);
    return;
  }
  *((_DWORD *)SelectiveSuspend + 126) &= ~0x200u;
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v6);
  ndisSetIdleTimer(a1);
}
