/*
 * XREFs of ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x1402BD920
 * Callers:
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14001E938 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x14018B658 (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?IommuBeginExclusiveAccess@ADAPTER_RENDER@@CAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x14019D130 (-IommuBeginExclusiveAccess@ADAPTER_RENDER@@CAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402BD4A4 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1402BD67C (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140015210 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Flush@ADAPTER_DISPLAY@@QEAAXXZ @ 0x140056F7C (-Flush@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140290400 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1402A5D10 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1402BB298 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEBDPEAU_EPROCESS@@@Z @ 0x1402ED2D0 (-StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEBDPEAU_EPROCESS@@@Z.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@_N@Z @ 0x1403C1824 (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1403D9480 (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1403E16C0 (-FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1403EA328 (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceExclusive(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // r8
  DXGGLOBAL *v7; // rbx
  __int64 v8; // rcx
  struct _EPROCESS *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  int FirstProfilerInterface; // eax
  __int64 v14; // r8
  bool v15; // zf
  DXGGLOBAL *v16; // rbx
  __int64 v17; // rcx
  struct _EPROCESS *v18; // rax
  __int64 v19; // rcx
  struct DXGPROCESS *Current; // rax
  DXGPROCESS *v21; // r15
  int v22; // r12d
  __int64 v23; // rax
  DXGGLOBAL *Global; // rbx
  __int64 v25; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // [rsp+20h] [rbp-58h]

  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 168)) )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, a1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 4115;
  }
  if ( a2 == 3 )
  {
    KeEnterCriticalRegion();
    Current = DXGPROCESS::GetCurrent(v19);
    v21 = Current;
    v22 = a3 & 2;
    if ( v22 )
    {
      if ( !Current )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4177;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pProcess", 4177LL, 0LL, 0LL, 0LL, 0LL);
      }
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v21 + 216, 0LL);
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *((_QWORD *)v21 + 28) = KeGetCurrentThread();
      DXGPROCESS::AcquireDeviceLockForAllDevices(v21, (struct DXGADAPTER *)a1);
      v23 = *(_QWORD *)(a1 + 3128);
      if ( v23 && *(_QWORD *)(v23 + 744) )
        DXGPROCESS::FlushAllDevice(v21, (const struct DXGADAPTER *)a1);
    }
    Global = DXGGLOBAL::GetGlobal();
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v25);
    DXGGLOBAL::StartCoreDripsBlockerTracking(Global, *(_QWORD *)(a1 + 232), 0LL, CurrentProcess);
    DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    if ( bTracingEnabled
      && (qword_14015B4C0 & 0x1000000) != 0
      && (qword_14015B4C0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000000LL) != 0 )
    {
      LODWORD(v30) = 1;
      McTemplateK0pt_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&EventPreAcquireAdapterLock,
        v27,
        a1,
        v30);
    }
    DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(a1, 3LL);
    if ( bTracingEnabled
      && (qword_14015B4C0 & 0x1000000) != 0
      && (qword_14015B4C0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000000LL) != 0 )
    {
      LODWORD(v30) = 1;
      McTemplateK0pt_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&EventPostAcquireAdapterLock,
        v28,
        a1,
        v30);
    }
    if ( *(_DWORD *)(a1 + 200) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 216));
    v29 = *(_QWORD *)(a1 + 3128);
    if ( v29 && *(_QWORD *)(v29 + 744) )
    {
      if ( *(_BYTE *)(v29 + 752) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4220;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"this->GetRenderCore()->m_bSchedulerSuspendedByAcquireCoreResource == FALSE",
          4220LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (int)ADAPTER_RENDER::SuspendScheduler(*(DXGADAPTER ***)(a1 + 3128), 0, 0LL) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4222;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"NT_SUCCESS(SchedulerStatus)",
          4222LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 3128) + 752LL) = 1;
    }
    if ( !*(_QWORD *)(a1 + 3128) )
      ADAPTER_DISPLAY::Flush(*(ADAPTER_DISPLAY **)(a1 + 3120));
    if ( v22 )
    {
      DXGPROCESS::ReleaseDeviceLockForAllDevices(v21, (struct DXGADAPTER *)a1);
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *((_QWORD *)v21 + 28) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v21 + 216, 0LL);
      KeLeaveCriticalRegion();
    }
    goto LABEL_66;
  }
  KeEnterCriticalRegion();
  if ( (a3 & 1) == 0 )
  {
    v7 = DXGGLOBAL::GetGlobal();
    v9 = (struct _EPROCESS *)PsGetCurrentProcess(v8);
    DXGGLOBAL::StartCoreDripsBlockerTracking(v7, *(_QWORD *)(a1 + 232), 0LL, v9);
    DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    if ( bTracingEnabled
      && (qword_14015B4C0 & 0x1000000) != 0
      && (qword_14015B4C0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000000LL) != 0 )
    {
      LODWORD(v30) = 1;
      McTemplateK0pt_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&EventPreAcquireAdapterLock,
        v10,
        a1,
        v30);
    }
    DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(a1, a2);
    if ( bTracingEnabled
      && (qword_14015B4C0 & 0x1000000) != 0
      && (qword_14015B4C0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000000LL) != 0 )
    {
      LODWORD(v30) = 1;
      McTemplateK0pt_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&EventPostAcquireAdapterLock,
        v11,
        a1,
        v30);
    }
    if ( *(_DWORD *)(a1 + 200) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 216));
LABEL_35:
    if ( !*(_QWORD *)(a1 + 3128) )
      ADAPTER_DISPLAY::Flush(*(ADAPTER_DISPLAY **)(a1 + 3120));
LABEL_66:
    *(_DWORD *)(a1 + 176) = a2;
    return;
  }
  if ( bTracingEnabled
    && (qword_14015B4C0 & 0x1000000) != 0
    && (qword_14015B4C0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000000LL) != 0 )
  {
    LODWORD(v30) = 1;
    McTemplateK0pt_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      (__int64)&EventPreAcquireAdapterLock,
      v6,
      a1,
      v30);
  }
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 168), 0);
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 168)) )
  {
    *(_DWORD *)(a1 + 4916) = a2;
    FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
    v15 = bTracingEnabled == 0;
    *(_DWORD *)(a1 + 4920) = FirstProfilerInterface;
    if ( !v15
      && (qword_14015B4C0 & 0x1000000) != 0
      && (qword_14015B4C0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000000LL) != 0 )
    {
      LODWORD(v30) = 1;
      McTemplateK0pt_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&EventPostAcquireAdapterLock,
        v14,
        a1,
        v30);
    }
    v16 = DXGGLOBAL::GetGlobal();
    v18 = (struct _EPROCESS *)PsGetCurrentProcess(v17);
    DXGGLOBAL::StartCoreDripsBlockerTracking(v16, *(_QWORD *)(a1 + 232), 0LL, v18);
    goto LABEL_35;
  }
  if ( bTracingEnabled
    && (qword_14015B4C0 & 0x1000000) != 0
    && (qword_14015B4C0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000000LL) != 0 )
  {
    LODWORD(v30) = 0;
    McTemplateK0pt_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      (__int64)&EventPostAcquireAdapterLock,
      v12,
      a1,
      v30);
  }
  KeLeaveCriticalRegion();
}
