/*
 * XREFs of ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400848F0
 * Callers:
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400656A0 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1400817B0 (-ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400848A0 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x14015D9B0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z @ 0x14015DED0 (-ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401846F0 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140018100 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x14003F7E0 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x14003FBC0 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1400403A0 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z @ 0x1400620F0 (-ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z.c)
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x140084F90 (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 *     Feature_SSDeadlock_Fix__private_IsEnabledDeviceUsageNoInline @ 0x1400A97F8 (Feature_SSDeadlock_Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisSelectiveSuspendStop(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  char v5; // r12
  char v6; // si
  int v7; // r15d
  KIRQL v8; // r14
  char v9; // r13
  __int64 v10; // rdx
  int v11; // eax
  KIRQL v12; // dl
  KIRQL v13; // al

  SelectiveSuspend = a1->SelectiveSuspend;
  v5 = 0;
  v6 = 0;
  v7 = a1->Flags & 0x80;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  v9 = !ndisIsPowerReferencedForSelectiveSuspend(SelectiveSuspend, v7 != 0);
  if ( v7
    && !*((_DWORD *)SelectiveSuspend + 128)
    && !*((_DWORD *)SelectiveSuspend + 129)
    && !*((_DWORD *)SelectiveSuspend + 132)
    && !*((_DWORD *)SelectiveSuspend + 133)
    && !*((_DWORD *)SelectiveSuspend + 130)
    && !*((_DWORD *)SelectiveSuspend + 131)
    && !*((_DWORD *)SelectiveSuspend + 144)
    && !*((_DWORD *)SelectiveSuspend + 127) )
  {
    v6 = 1;
    KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 272));
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xFu,
      0x22u,
      (struct _GUID *)&WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
      (char)a1,
      a2);
  switch ( a2 )
  {
    case 1u:
      *((_DWORD *)SelectiveSuspend + 127) |= 1u;
      break;
    case 2u:
      *((_DWORD *)SelectiveSuspend + 127) |= 2u;
      break;
    case 3u:
      *((_DWORD *)SelectiveSuspend + 127) |= 4u;
      *((_DWORD *)SelectiveSuspend + 126) |= 0x400u;
      break;
    case 4u:
      *((_DWORD *)SelectiveSuspend + 127) |= 8u;
      break;
    case 5u:
      *((_DWORD *)SelectiveSuspend + 127) |= 0x10u;
      break;
    case 6u:
      *((_DWORD *)SelectiveSuspend + 127) |= 0x20u;
      break;
    case 7u:
      *((_DWORD *)SelectiveSuspend + 127) |= 0x40u;
      break;
    case 8u:
      ++*((_DWORD *)SelectiveSuspend + 134);
      *((_DWORD *)SelectiveSuspend + 127) |= 0x80u;
      break;
    case 0xBu:
      *((_DWORD *)SelectiveSuspend + 127) |= 0x400u;
      break;
    case 0xDu:
      ++*((_DWORD *)SelectiveSuspend + 135);
      *((_DWORD *)SelectiveSuspend + 127) |= 0x1000u;
      break;
    default:
      break;
  }
  ndisSelectiveSuspendSetResumeBusyReason(SelectiveSuspend, v9, a2, 0);
  if ( !v7 )
  {
    v11 = *((_DWORD *)SelectiveSuspend + 126);
    if ( (v11 & 1) != 0 )
    {
      KeCancelTimer((PKTIMER)((char *)SelectiveSuspend + 16));
      *((_DWORD *)SelectiveSuspend + 126) &= ~1u;
      v5 = 1;
      v11 = *((_DWORD *)SelectiveSuspend + 126);
    }
    if ( (v11 & 0x200) == 0 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v8);
      ndisCancelWaitWake(a1);
      if ( v5 )
      {
        KeFlushQueuedDpcs();
        ndisWaitForKernelObject((char *)SelectiveSuspend + 152);
      }
      ndisCancelIdleRequestSync(a1, a2, 0, 1u);
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
      *((_DWORD *)SelectiveSuspend + 126) |= 0x200u;
      v12 = v13;
      goto LABEL_43;
    }
LABEL_39:
    v12 = v8;
LABEL_43:
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v12);
    return;
  }
  if ( !v6 && KeReadStateEvent((PRKEVENT)((char *)SelectiveSuspend + 272)) )
    goto LABEL_39;
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v8);
  if ( a2 == 6 )
  {
LABEL_31:
    ndisWdfAcquirePowerReferenceHelper(a1, 0, 0);
    ndisWdfSelectiveSuspendResumeOperations(a1, v10, 1);
    return;
  }
  if ( (unsigned int)Feature_SSDeadlock_Fix__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a2 == 5 )
    {
      if ( !v6 )
        return;
      goto LABEL_31;
    }
    if ( !v6 )
      goto LABEL_33;
  }
  else if ( !v6 )
  {
LABEL_33:
    KeWaitForSingleObject((char *)SelectiveSuspend + 272, Executive, 0, 0, 0LL);
    return;
  }
  ndisWdfAcquirePowerReferenceHelper(a1, 1, 0);
}
