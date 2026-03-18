/*
 * XREFs of ?QueueWorkItem@USB4_POWERON_WORK_QUEUE@@QEAAJPEAVDXGADAPTER@@KPEAKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140271120
 * Callers:
 *     ?MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042BF30 (-MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x14002F83C (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x140034DA0 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___ @ 0x1400654B8 (DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___.c)
 *     ??4CDisplayScenarioContextCarrier@@QEAAAEAV0@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14006ABFC (--4CDisplayScenarioContextCarrier@@QEAAAEAV0@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     _DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1400901F0 (_DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ??_GUSB4_POWERON_WORK_CONTEXT@@QEAAPEAXI@Z @ 0x14009028C (--_GUSB4_POWERON_WORK_CONTEXT@@QEAAPEAXI@Z.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     _lambda_c7448c75b3dac8478dfa1698e822be3e_::_lambda_c7448c75b3dac8478dfa1698e822be3e_ @ 0x14018AEC0 (_lambda_c7448c75b3dac8478dfa1698e822be3e_--_lambda_c7448c75b3dac8478dfa1698e822be3e_.c)
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
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  void *v14; // rcx
  void *v15; // rcx
  __int64 v16; // rax
  const wchar_t *v17; // r9
  struct _IO_WORKITEM *WorkItem; // rsi
  unsigned int v19; // ebx
  int v21; // [rsp+58h] [rbp-51h] BYREF
  _BYTE v22[8]; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v23[48]; // [rsp+68h] [rbp-41h] BYREF
  __int128 v24[2]; // [rsp+98h] [rbp-11h] BYREF
  _QWORD v25[8]; // [rsp+B8h] [rbp+Fh] BYREF
  struct DXGADAPTER *v26; // [rsp+110h] [rbp+67h] BYREF
  unsigned int v27; // [rsp+118h] [rbp+6Fh] BYREF
  void *Src; // [rsp+120h] [rbp+77h] BYREF

  Src = a4;
  v27 = a3;
  v26 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 152;
  }
  v21 = 0;
  v6 = (__int128 *)lambda_c7448c75b3dac8478dfa1698e822be3e_::_lambda_c7448c75b3dac8478dfa1698e822be3e_(
                     v25,
                     (__int64)&Src,
                     (__int64)&v21,
                     (__int64)&v26,
                     (__int64)&v27);
  v7 = v6[1];
  v24[0] = *v6;
  v24[1] = v7;
  DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e_((__int64)v23, v24);
  if ( v27 && Src )
  {
    v9 = operator new(0x30uLL, 0x4D677844u, 256LL, v8);
    v11 = v9;
    if ( !v9 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 180;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate memory for Usb4 power on context",
        180LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v21 = -1073741801;
      goto LABEL_17;
    }
    *(_BYTE *)(v9 + 8) = 0;
    *(_QWORD *)(v9 + 16) = 0LL;
    *(_QWORD *)(v9 + 40) = 0LL;
    v12 = 4LL * v27;
    if ( !is_mul_ok(v27, 4uLL) )
      v12 = -1LL;
    v13 = operator new[](v12, 0x4D677844u, 256LL, v10);
    v14 = *(void **)(v11 + 40);
    *(_QWORD *)(v11 + 40) = v13;
    if ( v14 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
    v15 = *(void **)(v11 + 40);
    if ( !v15 )
    {
      WdLogSingleEntry0(6LL);
      v16 = 189LL;
      v17 = L"Failed to allocate memory for Usb4 power on target list";
LABEL_12:
      WdLogGlobalForLineNumber = v16;
      DxgkLogInternalTriageEvent(0LL, 262145, 0xFFFFFFFFLL, v17, v16, 0LL, 0LL, 0LL, 0LL);
      v21 = -1073741801;
      USB4_POWERON_WORK_CONTEXT::`scalar deleting destructor'((USB4_POWERON_WORK_CONTEXT *)v11);
LABEL_17:
      DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v23);
      return 3221225495LL;
    }
    *(_QWORD *)v11 = this;
    *(_QWORD *)(v11 + 24) = *(_QWORD *)((char *)v26 + 412);
    *(_DWORD *)(v11 + 32) = v27;
    memmove(v15, Src, 4LL * v27);
    CDisplayScenarioContextCarrier::operator=(v11 + 8, (const struct _GUID *)a5);
    WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)v26 + 27));
    if ( !WorkItem )
    {
      WdLogSingleEntry0(6LL);
      v16 = 205LL;
      v17 = L"Can't allocate memory to hold IO work item.";
      goto LABEL_12;
    }
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v22, (USB4_POWERON_WORK_QUEUE *)((char *)this + 8));
    ++*(_DWORD *)this;
    KeClearEvent((PRKEVENT)((char *)this + 56));
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v22);
    IoQueueWorkItemEx(WorkItem, USB4_POWERON_WORK_QUEUE::_HandlePowerOn, DelayedWorkQueue, (PVOID)v11);
    v19 = v21;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    v19 = -1073741811;
    WdLogGlobalForLineNumber = 171;
    v21 = -1073741811;
  }
  DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v23);
  return v19;
}
