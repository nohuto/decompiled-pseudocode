/*
 * XREFs of ?ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400C3328
 * Callers:
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003B770 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140080F80 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x140082890 (-ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z @ 0x14015F590 (-ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140161800 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181E10 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x140038080 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140038460 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z @ 0x14004A750 (-ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z.c)
 *     ?ndisWdfAcquireAsyncPowerRefAndResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C3A60 (-ndisWdfAcquireAsyncPowerRefAndResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisSelectiveSuspendStopWdf(struct _NDIS_MINIPORT_BLOCK *a1, signed int a2)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  char v5; // si
  KIRQL v6; // r14
  char v7; // r15

  SelectiveSuspend = a1->SelectiveSuspend;
  v5 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  v7 = !ndisIsPowerReferencedForSelectiveSuspend(SelectiveSuspend, 1);
  if ( !*((_DWORD *)SelectiveSuspend + 128)
    && !*((_DWORD *)SelectiveSuspend + 129)
    && !*((_DWORD *)SelectiveSuspend + 132)
    && !*((_DWORD *)SelectiveSuspend + 133)
    && !*((_DWORD *)SelectiveSuspend + 130)
    && !*((_DWORD *)SelectiveSuspend + 131)
    && !*((_DWORD *)SelectiveSuspend + 144)
    && !*((_DWORD *)SelectiveSuspend + 127) )
  {
    v5 = 1;
    KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 272));
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xFu,
      0x23u,
      (struct _GUID *)&WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids,
      (char)a1,
      a2);
  if ( a2 > 6 )
  {
    switch ( a2 )
    {
      case 7:
        *((_DWORD *)SelectiveSuspend + 127) |= 0x40u;
        break;
      case 8:
        ++*((_DWORD *)SelectiveSuspend + 134);
        *((_DWORD *)SelectiveSuspend + 127) |= 0x80u;
        break;
      case 11:
        *((_DWORD *)SelectiveSuspend + 127) |= 0x400u;
        break;
      case 13:
        ++*((_DWORD *)SelectiveSuspend + 135);
        *((_DWORD *)SelectiveSuspend + 127) |= 0x1000u;
        break;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 6:
        *((_DWORD *)SelectiveSuspend + 127) |= 0x20u;
        break;
      case 1:
        *((_DWORD *)SelectiveSuspend + 127) |= 1u;
        break;
      case 2:
        *((_DWORD *)SelectiveSuspend + 127) |= 2u;
        break;
      case 3:
        *((_DWORD *)SelectiveSuspend + 127) |= 4u;
        *((_DWORD *)SelectiveSuspend + 126) |= 0x400u;
        break;
      case 4:
        *((_DWORD *)SelectiveSuspend + 127) |= 8u;
        break;
      case 5:
        *((_DWORD *)SelectiveSuspend + 127) |= 0x10u;
        break;
    }
  }
  ndisSelectiveSuspendSetResumeBusyReason(SelectiveSuspend, v7, a2, 0);
  if ( !v5 && KeReadStateEvent((PRKEVENT)((char *)SelectiveSuspend + 272)) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v6);
    return;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v6);
  if ( a2 == 6 )
  {
LABEL_39:
    ndisWdfAcquireAsyncPowerRefAndResume(a1);
    return;
  }
  if ( ((a2 - 3) & 0xFFFFFFFD) == 0 )
  {
    if ( !v5 )
      return;
    goto LABEL_39;
  }
  if ( v5 )
    ndisWdfAcquirePowerReferenceHelper(a1, 1, 0);
  else
    KeWaitForSingleObject((char *)SelectiveSuspend + 272, Executive, 0, 0, 0LL);
}
