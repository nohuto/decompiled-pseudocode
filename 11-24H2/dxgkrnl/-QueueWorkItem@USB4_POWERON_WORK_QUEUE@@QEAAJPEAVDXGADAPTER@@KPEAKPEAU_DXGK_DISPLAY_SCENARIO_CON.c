/*
 * XREFs of ?QueueWorkItem@USB4_POWERON_WORK_QUEUE@@QEAAJPEAVDXGADAPTER@@KPEAKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402782C4
 * Callers:
 *     ?MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042DE1C (-MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x14002FE7C (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x140034CD4 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___ @ 0x1400650D8 (DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___.c)
 *     ??4CDisplayScenarioContextCarrier@@QEAAAEAV0@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14006A828 (--4CDisplayScenarioContextCarrier@@QEAAAEAV0@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     _DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140091650 (_DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ??_GUSB4_POWERON_WORK_CONTEXT@@QEAAPEAXI@Z @ 0x1400916EC (--_GUSB4_POWERON_WORK_CONTEXT@@QEAAPEAXI@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     _lambda_c7448c75b3dac8478dfa1698e822be3e_::_lambda_c7448c75b3dac8478dfa1698e822be3e_ @ 0x14018D100 (_lambda_c7448c75b3dac8478dfa1698e822be3e_--_lambda_c7448c75b3dac8478dfa1698e822be3e_.c)
 */

__int64 __fastcall USB4_POWERON_WORK_QUEUE::QueueWorkItem(
        USB4_POWERON_WORK_QUEUE *this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        unsigned int *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int128 *v6; // rax
  __int128 v7; // xmm1
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  void *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rax
  const wchar_t *v15; // r9
  struct _IO_WORKITEM *WorkItem; // rsi
  unsigned int v17; // ebx
  int v19; // [rsp+58h] [rbp-51h] BYREF
  _BYTE v20[8]; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v21[48]; // [rsp+68h] [rbp-41h] BYREF
  __int128 v22[2]; // [rsp+98h] [rbp-11h] BYREF
  _QWORD v23[8]; // [rsp+B8h] [rbp+Fh] BYREF
  struct DXGADAPTER *v24; // [rsp+110h] [rbp+67h] BYREF
  unsigned int v25; // [rsp+118h] [rbp+6Fh] BYREF
  void *Src; // [rsp+120h] [rbp+77h] BYREF

  Src = a4;
  v25 = a3;
  v24 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 152;
  }
  v19 = 0;
  v6 = (__int128 *)lambda_c7448c75b3dac8478dfa1698e822be3e_::_lambda_c7448c75b3dac8478dfa1698e822be3e_(
                     v23,
                     (__int64)&Src,
                     (__int64)&v19,
                     (__int64)&v24,
                     (__int64)&v25);
  v7 = v6[1];
  v22[0] = *v6;
  v22[1] = v7;
  DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e_((__int64)v21, v22);
  if ( v25 && Src )
  {
    v8 = operator new(0x30uLL, 0x4D677844u, 256LL);
    v9 = v8;
    if ( !v8 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 180;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate memory for Usb4 power on context",
        180LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v19 = -1073741801;
      goto LABEL_17;
    }
    *(_BYTE *)(v8 + 8) = 0;
    *(_QWORD *)(v8 + 16) = 0LL;
    *(_QWORD *)(v8 + 40) = 0LL;
    v10 = 4LL * v25;
    if ( !is_mul_ok(v25, 4uLL) )
      v10 = -1LL;
    v11 = operator new[](v10, 0x4D677844u, 256LL);
    v12 = *(void **)(v9 + 40);
    *(_QWORD *)(v9 + 40) = v11;
    if ( v12 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v12);
    v13 = *(void **)(v9 + 40);
    if ( !v13 )
    {
      WdLogSingleEntry0(6LL);
      v14 = 189LL;
      v15 = L"Failed to allocate memory for Usb4 power on target list";
LABEL_12:
      WdLogGlobalForLineNumber = v14;
      DxgkLogInternalTriageEvent(0LL, 262145LL, 0xFFFFFFFFLL, v15, v14, 0LL, 0LL, 0LL, 0LL);
      v19 = -1073741801;
      USB4_POWERON_WORK_CONTEXT::`scalar deleting destructor'((USB4_POWERON_WORK_CONTEXT *)v9);
LABEL_17:
      DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v21);
      return 3221225495LL;
    }
    *(_QWORD *)v9 = this;
    *(_QWORD *)(v9 + 24) = *(_QWORD *)((char *)v24 + 412);
    *(_DWORD *)(v9 + 32) = v25;
    memmove(v13, Src, 4LL * v25);
    CDisplayScenarioContextCarrier::operator=(v9 + 8, (const struct _GUID *)a5);
    WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)v24 + 27));
    if ( !WorkItem )
    {
      WdLogSingleEntry0(6LL);
      v14 = 205LL;
      v15 = L"Can't allocate memory to hold IO work item.";
      goto LABEL_12;
    }
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v20, (USB4_POWERON_WORK_QUEUE *)((char *)this + 8));
    ++*(_DWORD *)this;
    KeClearEvent((PRKEVENT)((char *)this + 56));
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v20);
    IoQueueWorkItemEx(WorkItem, USB4_POWERON_WORK_QUEUE::_HandlePowerOn, DelayedWorkQueue, (PVOID)v9);
    v17 = v19;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    v17 = -1073741811;
    WdLogGlobalForLineNumber = 171;
    v19 = -1073741811;
  }
  DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v21);
  return v17;
}
