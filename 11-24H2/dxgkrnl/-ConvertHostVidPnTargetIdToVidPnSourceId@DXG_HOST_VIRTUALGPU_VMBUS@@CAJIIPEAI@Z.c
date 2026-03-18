/*
 * XREFs of ?ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z @ 0x1402A9A9C
 * Callers:
 *     ?VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402A9CB0 (-VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1404248C0 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140012080 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002DDD0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1403156CC (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 */

__int64 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::ConvertHostVidPnTargetIdToVidPnSourceId(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3)
{
  unsigned int v5; // ebx
  struct _KTHREAD **Current; // rax
  struct DXGDEVICE *v7; // rsi
  __int64 v8; // r9
  int SourceConnectedToTargetInClientVidPn; // ebx
  __int64 v10; // rax
  const wchar_t *v11; // r9
  void *v12; // rcx
  struct DXGDEVICE *v14; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v15; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v16[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v17[160]; // [rsp+70h] [rbp-90h] BYREF

  v5 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  v14 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v15, v5, Current, &v14);
  v7 = v14;
  if ( !v14 )
  {
    SourceConnectedToTargetInClientVidPn = -1073741811;
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 6469;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid device handle", 6469LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_11;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v16,
    v14);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v17, (__int64)v7, 2, v8, 0);
  SourceConnectedToTargetInClientVidPn = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v17, 0LL);
  if ( SourceConnectedToTargetInClientVidPn >= 0 )
  {
    v12 = (void *)*((_QWORD *)v7 + 237);
    if ( v12 )
    {
      SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v12, a2, a3);
      if ( SourceConnectedToTargetInClientVidPn >= 0 )
        goto LABEL_5;
      WdLogSingleEntry0(2LL);
      v10 = 6462LL;
      v11 = L"Fail to locate VidPnSourceId";
    }
    else
    {
      SourceConnectedToTargetInClientVidPn = -1073741811;
      WdLogSingleEntry0(2LL);
      v10 = 6452LL;
      v11 = L"Fail to locate display adapter";
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    v10 = 6444LL;
    v11 = L"Fail to lock device";
  }
  WdLogGlobalForLineNumber = v10;
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v11, v10, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v17);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v16);
LABEL_11:
  if ( v15 && _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v15 + 2), v15);
  return (unsigned int)SourceConnectedToTargetInClientVidPn;
}
