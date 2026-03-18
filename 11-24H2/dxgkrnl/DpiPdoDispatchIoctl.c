/*
 * XREFs of DpiPdoDispatchIoctl @ 0x14042ACC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140032AE8 (--0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x1400356D0 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x140035774 (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline @ 0x14006E134 (Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     ?_DispatchIoctrls@DXGMONITOR@@QEBAJKKPEAXK0PEA_KK@Z @ 0x140275EC0 (-_DispatchIoctrls@DXGMONITOR@@QEBAJKKPEAXK0PEA_KK@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402C78D0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402CA36C (DpiAcquireCoreSyncAccessSafe.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402E1840 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z @ 0x14031EF08 (-DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z.c)
 */

__int64 __fastcall DpiPdoDispatchIoctl(__int64 a1, IRP *a2)
{
  unsigned int *p_MajorFunction; // rax
  __int64 v5; // r14
  struct _IRP *MasterIrp; // r12
  unsigned int v7; // edi
  struct _DEVICE_OBJECT *v8; // rcx
  PVOID DeviceExtension; // rsi
  bool v10; // zf
  int MonitorInstance; // ebx
  __int64 v12; // rbx
  ULONG v13; // r15d
  __int64 v14; // r14
  MONITOR_MGR *v15; // rsi
  MONITOR_REF_ACCESSOR *v17; // rcx
  ULONG v18; // r15d
  __int64 v19; // r14
  MONITOR_MGR *v20; // rsi
  unsigned __int64 v21; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v22[8]; // [rsp+48h] [rbp-21h] BYREF
  DXGMONITOR *v23; // [rsp+50h] [rbp-19h]
  _BYTE v24[8]; // [rsp+58h] [rbp-11h] BYREF
  DXGMONITOR *v25; // [rsp+60h] [rbp-9h]
  DXGMONITOR *v26[11]; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v28; // [rsp+D8h] [rbp+6Fh]
  unsigned int v29; // [rsp+E0h] [rbp+77h]
  ULONG pSessionId; // [rsp+E8h] [rbp+7Fh] BYREF

  v21 = 0LL;
  pSessionId = 0;
  IoGetRequestorSessionId(a2, &pSessionId);
  p_MajorFunction = (unsigned int *)&a2->Tail.Overlay.CurrentStackLocation->MajorFunction;
  v5 = *(_QWORD *)(a1 + 64);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v7 = p_MajorFunction[6];
  v8 = *(struct _DEVICE_OBJECT **)(v5 + 32);
  v28 = p_MajorFunction[2];
  v29 = p_MajorFunction[4];
  DeviceExtension = v8->DeviceExtension;
  if ( v7 > 0x231004 )
  {
    if ( v7 != 2297864 )
    {
      if ( v7 == 2297868 || v7 == 2297872 )
      {
        if ( !(unsigned int)Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline() )
          goto LABEL_20;
        MonitorInstance = DpiAcquireCoreSyncAccessSafe(a1, 0);
        if ( MonitorInstance < 0 )
          goto LABEL_33;
        v12 = *((_QWORD *)DeviceExtension + 504);
        v13 = pSessionId;
        if ( !v12 )
          goto LABEL_31;
        v14 = *(unsigned int *)(v5 + 504);
        if ( (_DWORD)v14 == -1 )
          goto LABEL_31;
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)DeviceExtension + 504)) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2929;
        }
        if ( !*(_QWORD *)(v12 + 3120) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2930;
        }
        v15 = *(MONITOR_MGR **)(*(_QWORD *)(v12 + 3120) + 112LL);
        if ( v15 )
        {
          MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v22, 0LL);
          MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v15, v14, 1, (struct MONITOR_REF_ACCESSOR *)v22);
          if ( MonitorInstance >= 0 )
          {
            MonitorInstance = DXGMONITOR::_DispatchIoctrls(
                                (DxgMonitor::MonitorGammaState **)v23,
                                v7,
                                v29,
                                MasterIrp,
                                v28,
                                MasterIrp,
                                &v21,
                                v13);
          }
          else
          {
            WdLogSingleEntry2(7LL, v14, v15);
            WdLogGlobalForLineNumber = 2958;
          }
          v17 = (MONITOR_REF_ACCESSOR *)v22;
          goto LABEL_49;
        }
        goto LABEL_30;
      }
      if ( v7 != 2298880 && v7 != 2298884 && v7 != 2298888 )
      {
        v10 = v7 == 2310164;
LABEL_19:
        if ( !v10 )
        {
LABEL_20:
          MonitorInstance = -1073741637;
          goto LABEL_33;
        }
      }
    }
LABEL_38:
    MonitorInstance = DpiAcquireCoreSyncAccessSafe(a1, 0);
    if ( MonitorInstance < 0 )
      goto LABEL_33;
    v12 = *((_QWORD *)DeviceExtension + 504);
    v18 = pSessionId;
    if ( !v12 )
      goto LABEL_31;
    v19 = *(unsigned int *)(v5 + 504);
    if ( (_DWORD)v19 == -1 )
      goto LABEL_31;
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)DeviceExtension + 504)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2929;
    }
    if ( !*(_QWORD *)(v12 + 3120) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2930;
    }
    v20 = *(MONITOR_MGR **)(*(_QWORD *)(v12 + 3120) + 112LL);
    if ( v20 )
    {
      MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v24, 0LL);
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v20, v19, 1, (struct MONITOR_REF_ACCESSOR *)v24);
      if ( MonitorInstance >= 0 )
      {
        if ( v7 == 2310164 )
        {
          MONITOR_REF_LOCK_ACCESSOR::MONITOR_REF_LOCK_ACCESSOR(
            (MONITOR_REF_LOCK_ACCESSOR *)v26,
            (const struct MONITOR_REF_ACCESSOR *)v24);
          MonitorInstance = DXGMONITOR::_DispatchIoctrls(
                              (DxgMonitor::MonitorGammaState **)v26[0],
                              2310164LL,
                              v29,
                              MasterIrp,
                              v28,
                              MasterIrp,
                              &v21,
                              v18);
          MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v26);
        }
        else
        {
          MonitorInstance = DXGMONITOR::_DispatchIoctrls(
                              (DxgMonitor::MonitorGammaState **)v25,
                              v7,
                              v29,
                              MasterIrp,
                              v28,
                              MasterIrp,
                              &v21,
                              v18);
        }
      }
      else
      {
        WdLogSingleEntry2(7LL, v19, v20);
        WdLogGlobalForLineNumber = 2958;
      }
      v17 = (MONITOR_REF_ACCESSOR *)v24;
LABEL_49:
      MONITOR_REF_ACCESSOR::Release(v17);
      goto LABEL_32;
    }
LABEL_30:
    WdLogSingleEntry1(2LL, v12);
    WdLogGlobalForLineNumber = 2940;
LABEL_31:
    MonitorInstance = -1073741811;
LABEL_32:
    DpiReleaseCoreSyncAccessSafe(a1, 0);
    goto LABEL_33;
  }
  if ( v7 == 2297860 )
    goto LABEL_38;
  if ( v7 != 2296832
    && v7 != 2296836
    && v7 != 2296840
    && v7 != 2296844
    && v7 != 2296848
    && v7 != 2296852
    && v7 != 2296856 )
  {
    v10 = v7 == 2297856;
    goto LABEL_19;
  }
  MonitorInstance = DpiBrightnessHandleIoctls(
                      v8,
                      *(unsigned int *)(v5 + 504),
                      v7,
                      p_MajorFunction[4],
                      (int *)&MasterIrp->Type,
                      p_MajorFunction[2],
                      (char *)MasterIrp,
                      &v21);
LABEL_33:
  a2->IoStatus.Information = v21;
  a2->IoStatus.Status = MonitorInstance;
  IofCompleteRequest(a2, 1);
  return (unsigned int)MonitorInstance;
}
