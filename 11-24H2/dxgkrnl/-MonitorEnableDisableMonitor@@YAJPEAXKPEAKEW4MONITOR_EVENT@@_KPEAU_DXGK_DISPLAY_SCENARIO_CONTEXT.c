/*
 * XREFs of ?MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042DE1C
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1404279D4 (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SendHostMonitorPowerMsg@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IE@Z @ 0x1400560E4 (-SendHostMonitorPowerMsg@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IE@Z.c)
 *     Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline @ 0x14007DE18 (Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline.c)
 *     ?_GetUsb4TargetList@MONITOR_MGR@@QEAAJPEAK0@Z @ 0x140273B70 (-_GetUsb4TargetList@MONITOR_MGR@@QEAAJPEAK0@Z.c)
 *     ?QueueWorkItem@USB4_POWERON_WORK_QUEUE@@QEAAJPEAVDXGADAPTER@@KPEAKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402782C4 (-QueueWorkItem@USB4_POWERON_WORK_QUEUE@@QEAAJPEAVDXGADAPTER@@KPEAKPEAU_DXGK_DISPLAY_SCENARIO_CON.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x14028D3B4 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
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
  int *v25; // rbx
  __int64 v26; // r15
  unsigned __int8 v27; // r12
  struct DXGGLOBAL *Global; // rax
  unsigned int *v29; // r15
  unsigned int *v30; // rbx
  unsigned __int64 v31; // rax
  unsigned int *v32; // rax
  USB4_POWERON_WORK_QUEUE *v33; // rcx
  __int64 v34; // [rsp+48h] [rbp-60h]
  unsigned __int8 v35; // [rsp+B0h] [rbp+8h]
  int v36; // [rsp+B8h] [rbp+10h]
  unsigned int v38; // [rsp+C8h] [rbp+20h] BYREF

  LOBYTE(v38) = a4;
  v36 = a2;
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
  v35 = 0;
  v17 = (a6 != 0) + 2LL;
  a5 = 0;
  v34 = v16;
  if ( (_DWORD)v7 != 1 )
  {
    v18 = v38;
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
    LODWORD(v7) = v36;
    v8 = a3;
    v35 = v21;
    v16 = v34;
  }
  v23 = v38;
  LOBYTE(v14) = v38;
  v24 = MONITOR_MGR::_EnableDisableMonitor(v15, (unsigned int)v8[v16], v14, 2LL, a6, (__int64)a7, &a5);
  if ( v24 >= 0 )
  {
    if ( (_DWORD)v7 )
    {
      v25 = v8;
      v26 = (unsigned int)v7;
      v27 = a6 == 0;
      do
      {
        Global = DXGGLOBAL::GetGlobal();
        HOSTVMMONITORMAPPING::SendHostMonitorPowerMsg(
          (KSPIN_LOCK *)Global + 38164,
          *(struct _LUID *)(a1 + 412),
          *v25++,
          v27);
        --v26;
      }
      while ( v26 );
      v8 = a3;
      v23 = v38;
    }
    if ( v35 | a5 && v23 == 1 )
    {
      v29 = 0LL;
      v30 = 0LL;
      if ( (_DWORD)v7 == 1 && *v8 == -1 )
      {
        v38 = *(_DWORD *)(v15 + 32);
        v7 = v38;
        v31 = 4LL * v38;
        if ( !is_mul_ok(v38, 4uLL) )
          v31 = -1LL;
        v32 = (unsigned int *)operator new[](v31, 0x4D677844u, 256LL);
        v30 = v32;
        if ( v32 )
        {
          MONITOR_MGR::_GetUsb4TargetList((MONITOR_MGR *)v15, &v38, v32);
          LODWORD(v7) = v38;
          v29 = v30;
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
        v38 = v7;
        v29 = (unsigned int *)v8;
      }
      if ( (unsigned int)Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline() )
      {
        v33 = *(USB4_POWERON_WORK_QUEUE **)(v15 + 96);
        if ( !v33 )
        {
          v24 = -1073741637;
LABEL_40:
          if ( v24 < 0 )
          {
            WdLogSingleEntry1(2LL, v24);
            WdLogGlobalForLineNumber = 1681;
          }
LABEL_42:
          if ( v30 )
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v30);
          return (unsigned int)v24;
        }
      }
      else
      {
        v33 = (USB4_POWERON_WORK_QUEUE *)((char *)MONITOR_MGR::_pUsb4Manager + 72);
      }
      v24 = USB4_POWERON_WORK_QUEUE::QueueWorkItem(v33, (struct DXGADAPTER *)a1, v7, v29, a7);
      goto LABEL_40;
    }
  }
  return (unsigned int)v24;
}
