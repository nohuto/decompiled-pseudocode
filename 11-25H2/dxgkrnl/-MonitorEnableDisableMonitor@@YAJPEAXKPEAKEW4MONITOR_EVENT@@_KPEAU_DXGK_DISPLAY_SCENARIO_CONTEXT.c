/*
 * XREFs of ?MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042BF30
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x140427DC4 (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SendHostMonitorPowerMsg@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IE@Z @ 0x140030D10 (-SendHostMonitorPowerMsg@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IE@Z.c)
 *     Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline @ 0x14007D790 (Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline.c)
 *     ?_GetUsb4TargetList@MONITOR_MGR@@QEAAJPEAK0@Z @ 0x14026CC10 (-_GetUsb4TargetList@MONITOR_MGR@@QEAAJPEAK0@Z.c)
 *     ?QueueWorkItem@USB4_POWERON_WORK_QUEUE@@QEAAJPEAVDXGADAPTER@@KPEAKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140271120 (-QueueWorkItem@USB4_POWERON_WORK_QUEUE@@QEAAJPEAVDXGADAPTER@@KPEAKPEAU_DXGK_DISPLAY_SCENARIO_CON.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x140354944 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

__int64 __fastcall MonitorEnableDisableMonitor(
        __int64 a1,
        __int64 a2,
        int *a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned __int64 a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v7; // r14
  int *v8; // r12
  __int64 v9; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v14; // r8
  __int64 v15; // r13
  __int64 v16; // rbx
  unsigned __int64 v17; // r15
  char v18; // r14
  int *v19; // rdi
  __int64 v20; // r12
  unsigned __int8 v21; // bl
  int v22; // eax
  char v23; // r15
  int v24; // edi
  __int64 v25; // r9
  int *v26; // rbx
  __int64 v27; // r15
  char v28; // r12
  struct DXGGLOBAL *Global; // rax
  unsigned int *v30; // r15
  unsigned int *v31; // rbx
  unsigned __int64 v32; // rax
  unsigned int *v33; // rax
  USB4_POWERON_WORK_QUEUE *v34; // rcx
  __int64 v35; // [rsp+48h] [rbp-60h]
  unsigned __int8 v36; // [rsp+B0h] [rbp+8h]
  int v37; // [rsp+B8h] [rbp+10h]
  unsigned int v39; // [rsp+C8h] [rbp+20h] BYREF

  LOBYTE(v39) = a4;
  v37 = a2;
  LODWORD(v7) = a2;
  v8 = a3;
  v9 = (unsigned int)a2;
  if ( (_BYTE)a4 == 1 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
    v11[3] = v9;
    v11[4] = a1;
    v11[5] = 2LL;
    WdLogGlobalForLineNumber = 1539;
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
    v12[3] = v9;
    v12[4] = a1;
    v12[5] = 2LL;
    WdLogGlobalForLineNumber = 1544;
  }
  if ( !a1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1563;
  }
  if ( !*(_QWORD *)(a1 + 3120) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1564;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 3120) + 112LL);
  if ( !v15 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 1574;
    return 3221225485LL;
  }
  v16 = (unsigned int)(v7 - 1);
  v36 = 0;
  v17 = (a6 != 0) + 2LL;
  a5 = 0;
  v35 = v16;
  if ( (_DWORD)v7 != 1 )
  {
    v18 = v39;
    v19 = v8;
    v20 = (unsigned int)v16;
    v21 = 0;
    do
    {
      LOBYTE(v14) = v18;
      v22 = MONITOR_MGR::_EnableDisableMonitor(v15, (unsigned int)*v19, v14, 2LL, v17, (__int64)a7, &a5);
      if ( v22 < 0 )
      {
        WdLogSingleEntry3(2LL, (unsigned int)*v19, a1, v22);
        WdLogGlobalForLineNumber = 1604;
      }
      v21 |= a5;
      ++v19;
      --v20;
    }
    while ( v20 );
    LODWORD(v7) = v37;
    v8 = a3;
    v36 = v21;
    v16 = v35;
  }
  v23 = v39;
  LOBYTE(v14) = v39;
  v24 = MONITOR_MGR::_EnableDisableMonitor(v15, (unsigned int)v8[v16], v14, 2LL, a6, (__int64)a7, &a5);
  if ( v24 >= 0 )
  {
    if ( (_DWORD)v7 )
    {
      v26 = v8;
      v27 = (unsigned int)v7;
      v28 = a6 == 0;
      do
      {
        Global = DXGGLOBAL::GetGlobal();
        HOSTVMMONITORMAPPING::SendHostMonitorPowerMsg(
          (struct DXGGLOBAL *)((char *)Global + 305232),
          *(struct _LUID *)(a1 + 412),
          *v26++,
          v28);
        --v27;
      }
      while ( v27 );
      v8 = a3;
      v23 = v39;
    }
    if ( v36 | a5 && v23 == 1 )
    {
      v30 = 0LL;
      v31 = 0LL;
      if ( (_DWORD)v7 == 1 && *v8 == -1 )
      {
        v39 = *(_DWORD *)(v15 + 32);
        v7 = v39;
        v32 = 4LL * v39;
        if ( !is_mul_ok(v39, 4uLL) )
          v32 = -1LL;
        v33 = (unsigned int *)operator new[](v32, 0x4D677844u, 256LL, v25);
        v31 = v33;
        if ( v33 )
        {
          MONITOR_MGR::_GetUsb4TargetList((MONITOR_MGR *)v15, &v39, v33);
          LODWORD(v7) = v39;
          v30 = v31;
        }
        else
        {
          WdLogSingleEntry1(2LL, v7);
          WdLogGlobalForLineNumber = 1651;
          v24 = -1073741801;
        }
        if ( v24 < 0 )
          goto LABEL_42;
      }
      else
      {
        v39 = v7;
        v30 = (unsigned int *)v8;
      }
      if ( (unsigned int)Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline() )
      {
        v34 = *(USB4_POWERON_WORK_QUEUE **)(v15 + 96);
        if ( !v34 )
        {
          v24 = -1073741637;
LABEL_40:
          if ( v24 < 0 )
          {
            WdLogSingleEntry1(2LL, v24);
            WdLogGlobalForLineNumber = 1681;
          }
LABEL_42:
          if ( v31 )
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v31);
          return (unsigned int)v24;
        }
      }
      else
      {
        v34 = (USB4_POWERON_WORK_QUEUE *)((char *)MONITOR_MGR::_pUsb4Manager + 72);
      }
      v24 = USB4_POWERON_WORK_QUEUE::QueueWorkItem(v34, (struct DXGADAPTER *)a1, v7, v30, a7);
      goto LABEL_40;
    }
  }
  return (unsigned int)v24;
}
