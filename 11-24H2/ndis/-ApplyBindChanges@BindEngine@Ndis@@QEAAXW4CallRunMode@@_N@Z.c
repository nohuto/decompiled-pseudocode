/*
 * XREFs of ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140161800
 * Callers:
 *     NdisEnumerateFilterModules @ 0x14002DDA0 (NdisEnumerateFilterModules.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x14004C300 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140051D30 (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisWdfDevicePowerOn @ 0x1400822C0 (ndisWdfDevicePowerOn.c)
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x140084490 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisWdfMiniportDataPathPause @ 0x140094B10 (NdisWdfMiniportDataPathPause.c)
 *     NdisWdfMiniportDataPathStart @ 0x140094BF0 (NdisWdfMiniportDataPathStart.c)
 *     ?ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x140098EC4 (-ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     _lambda_f57a5082c6497a0052959e1defd60ec1_::_lambda_invoker_cdecl_ @ 0x1400999C0 (_lambda_f57a5082c6497a0052959e1defd60ec1_--_lambda_invoker_cdecl_.c)
 *     _lambda_038fcc6e7bde754e7b10949a64dec82f_::operator() @ 0x140099A24 (_lambda_038fcc6e7bde754e7b10949a64dec82f_--operator().c)
 *     NdisMSetMiniportSecondary @ 0x1400A00C0 (NdisMSetMiniportSecondary.c)
 *     ?ndisBindRequest@@YAXPEAXAEAUBindEngine@Ndis@@AEAVBindState@2@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1400A6944 (-ndisBindRequest@@YAXPEAXAEAUBindEngine@Ndis@@AEAVBindState@2@PEBU_NET_PNP_EVENT_NOTIFICATION@@@.c)
 *     _lambda_7537066ad08712f65f7ead95a6eccf2e_::operator() @ 0x1400B73B8 (_lambda_7537066ad08712f65f7ead95a6eccf2e_--operator().c)
 *     ?ndisQueuedStatusUnbindAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1400B80C0 (-ndisQueuedStatusUnbindAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1400B840C (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140135010 (-ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1401382D0 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     ndisHandleLegacyBindIoctl @ 0x1401390A8 (ndisHandleLegacyBindIoctl.c)
 *     _lambda_ecdb32753e2b7a1d37d87608ec168c64_::_lambda_invoker_cdecl_ @ 0x140141EF0 (_lambda_ecdb32753e2b7a1d37d87608ec168c64_--_lambda_invoker_cdecl_.c)
 *     _lambda_b246ce06b62e0fe260ebdade75b833fa_::_lambda_invoker_cdecl_ @ 0x1401432E0 (_lambda_b246ce06b62e0fe260ebdade75b833fa_--_lambda_invoker_cdecl_.c)
 *     _lambda_f04dbbba9fe6a1cf15f4fb42f8ba953a_::_lambda_invoker_cdecl_ @ 0x140143320 (_lambda_f04dbbba9fe6a1cf15f4fb42f8ba953a_--_lambda_invoker_cdecl_.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x140160850 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1401610C0 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z @ 0x140161430 (-ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z.c)
 *     ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x140161570 (-ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x140161630 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140166CD0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x140171ED0 (ndisHandleProtocolReconfigNotification.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140176710 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x140180650 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x140180E40 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x14003A580 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x14003AA90 (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400864C0 (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400866C0 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline @ 0x14008F740 (Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400C3328 (-ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     Feature_BindEngineWatchdog__private_IsEnabledDeviceUsageNoInline @ 0x1400C64A8 (Feature_BindEngineWatchdog__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1401530F0 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x140153320 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x14015F2C0 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 */

void __fastcall Ndis::BindEngine::ApplyBindChanges(Ndis::BindEngine *this, enum CallRunMode a2, char a3)
{
  _NDIS_MINIPORT_BLOCK *m_miniport; // rbx
  KPushLock *p_m_lock; // rbp
  bool m_Entered; // si
  bool v9; // zf
  KLockHolder::<unnamed_type_m_State> m_State; // ebx
  const struct _GUID *v11; // rdx
  unsigned int v12; // ebp
  _NDIS_MINIPORT_BLOCK *v13; // r12
  char *PoolWithTag; // rax
  __int64 v15; // rsi
  _QWORD *SystemArgument2; // rcx
  void ***v17; // rax
  int v18; // edx
  _NDIS_MINIPORT_BLOCK *v19; // rdi
  __int32 v20; // ebx
  KLockHolder v21; // [rsp+30h] [rbp-48h] BYREF

  if ( !a3 || a2 )
    goto LABEL_8;
  m_miniport = this->m_miniport;
  if ( !(unsigned int)Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !m_miniport->SelectiveSuspend )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( m_miniport->SelectiveSuspend )
  {
    if ( (mem::ReadNoFence<unsigned long,void>(&m_miniport->Flags) & 0x80u) == 0LL )
    {
LABEL_5:
      ndisSelectiveSuspendStop(m_miniport, 0xDu);
      goto LABEL_6;
    }
    ndisSelectiveSuspendStopWdf(m_miniport, 13);
  }
LABEL_6:
  if ( m_miniport->AoAc )
    ndisAoAcStop(m_miniport, 13, RunAsynchronous);
LABEL_8:
  p_m_lock = &this->m_lock;
  v21.m_Lock = &this->m_lock;
  KeEnterCriticalRegion();
  m_Entered = 1;
  v21.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(&this->m_lock, 0LL);
  v9 = this->m_bindThread == 0LL;
  m_State = Exclusive;
  v21.m_State = Exclusive;
  if ( v9 )
  {
    if ( this->m_isDirty )
    {
      KeClearEvent(&this->m_bindCompleteEvent.m_event);
      if ( a2 == RunAsynchronous )
      {
        this->m_bindThread = (_KTHREAD *)1;
        ExQueueWorkItem(&this->m_asyncBindWorkItem.m_workitem, NormalWorkQueue);
      }
      else
      {
        this->m_bindThread = KeGetCurrentThread();
        Ndis::BindEngine::UpdateBindings(this, &v21);
        p_m_lock = (KPushLock *)v21.m_Lock;
        ExReleasePushLockExclusiveEx(v21.m_Lock, 0LL);
        m_State = Unlocked;
        m_Entered = 0;
        KeLeaveCriticalRegion();
      }
    }
  }
  else
  {
    ExReleasePushLockExclusiveEx(&this->m_lock, 0LL);
    m_State = Unlocked;
    m_Entered = 0;
    v21.m_State = Unlocked;
    v21.m_Region.m_Entered = 0;
    KeLeaveCriticalRegion();
    if ( a2 == RunSynchronous )
    {
      if ( (unsigned int)Feature_BindEngineWatchdog__private_IsEnabledDeviceUsageNoInline() )
      {
        v11 = &WPP_5ba552c322ee33529412a828c3ecb581_Traceguids;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          LOBYTE(v11) = 5;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v11,
            28,
            13,
            (struct _GUID *)&WPP_5ba552c322ee33529412a828c3ecb581_Traceguids,
            (char)this->m_miniport);
        }
        v12 = ndisWatchdogPnPTimeout;
        v13 = this->m_miniport;
        if ( ndisWatchdogDisable
          || (PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x120uLL, 0x7377444Eu),
              (v15 = (__int64)PoolWithTag) == 0) )
        {
          v15 = -1LL;
        }
        else
        {
          *((_QWORD *)PoolWithTag + 20) = 0LL;
          *((_DWORD *)PoolWithTag + 48) = 0;
          *(_OWORD *)(PoolWithTag + 200) = 0LL;
          *(_OWORD *)(PoolWithTag + 216) = 0LL;
          *(_OWORD *)(PoolWithTag + 232) = 0LL;
          *(_OWORD *)(PoolWithTag + 248) = 0LL;
          PoolWithTag[264] = 0;
          KeInitializeDpc((PRKDPC)PoolWithTag, (PKDEFERRED_ROUTINE)ndisWatchdogTimeoutDpc, PoolWithTag);
          KeInitializeTimer((PKTIMER)(v15 + 64));
          *(_QWORD *)(v15 + 152) = v15;
          *(_QWORD *)(v15 + 144) = ndisWatchdogTimeoutWorkerRoutine;
          *(_QWORD *)(v15 + 128) = 0LL;
          KeInitializeEvent((PRKEVENT)(v15 + 168), NotificationEvent, 1u);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DeferredContext, 0LL);
          SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
          v17 = (void ***)(v15 + 272);
          if ( *(_DEVICE_OBJECT **)WPP_MAIN_CB.Dpc.SystemArgument2 != (_DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1 )
            __fastfail(3u);
          *v17 = &WPP_MAIN_CB.Dpc.SystemArgument1;
          *(_QWORD *)(v15 + 280) = SystemArgument2;
          *SystemArgument2 = v17;
          WPP_MAIN_CB.Dpc.SystemArgument2 = (void *)(v15 + 272);
          ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DeferredContext, 0LL);
          KeLeaveCriticalRegion();
        }
        ndisArmWatchdog((struct NDISWATCHDOG__ *)v15, v13, 40, 0LL, v12, 0LL);
        KeWaitForSingleObject(&this->m_bindCompleteEvent, Executive, 0, 0, 0LL);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          LOBYTE(v18) = 5;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v18,
            28,
            14,
            (struct _GUID *)&WPP_5ba552c322ee33529412a828c3ecb581_Traceguids,
            (char)this->m_miniport);
        }
        if ( v15 != -1 )
          ndisFreeWatchdog((struct NDISWATCHDOG__ *)v15);
      }
      else
      {
        KeWaitForSingleObject(&this->m_bindCompleteEvent, Executive, 0, 0, 0LL);
      }
      m_Entered = v21.m_Region.m_Entered;
      p_m_lock = (KPushLock *)v21.m_Lock;
      m_State = v21.m_State;
    }
  }
  if ( a3 && a2 == RunSynchronous )
  {
    v19 = this->m_miniport;
    if ( v19->SelectiveSuspend )
      ndisSelectiveSuspendClearStop(v19, 13);
    if ( v19->AoAc )
      ndisAoAcClearStop(v19, 13);
  }
  v20 = m_State - 1;
  if ( v20 )
  {
    if ( v20 != 1 )
      goto LABEL_45;
    ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
  }
  else
  {
    ExReleasePushLockEx(p_m_lock, 0LL);
  }
  m_Entered = 0;
  KeLeaveCriticalRegion();
LABEL_45:
  if ( m_Entered )
    KeLeaveCriticalRegion();
}
