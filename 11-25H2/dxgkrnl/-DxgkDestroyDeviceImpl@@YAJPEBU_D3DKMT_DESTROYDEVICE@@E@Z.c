/*
 * XREFs of ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1403AB268
 * Callers:
 *     DxgkDestroyDeviceInternal @ 0x1401BA698 (DxgkDestroyDeviceInternal.c)
 *     ?VmBusDestroyDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021BC40 (-VmBusDestroyDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkDestroyDevice @ 0x1403AB250 (DxgkDestroyDevice.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x140031AE0 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x14003510C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1401B7D90 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1403AB8E0 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1403ABCBC (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ @ 0x1403ABFF8 (-DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1403AC098 (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkDestroyDeviceImpl(const struct _D3DKMT_DESTROYDEVICE *a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v6; // r14
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rdi
  D3DKMT_HANDLE v9; // r8d
  unsigned int v10; // eax
  __int64 v11; // r9
  int v12; // edx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // edx
  __int64 v17; // r9
  const char *v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  D3DKMT_HANDLE hDevice; // [rsp+50h] [rbp-148h] BYREF
  int v29; // [rsp+58h] [rbp-140h] BYREF
  __int64 v30; // [rsp+60h] [rbp-138h]
  char v31; // [rsp+68h] [rbp-130h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v32; // [rsp+70h] [rbp-128h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v33; // [rsp+78h] [rbp-120h] BYREF
  _BYTE v34[16]; // [rsp+80h] [rbp-118h] BYREF
  _BYTE v35[24]; // [rsp+90h] [rbp-108h] BYREF
  _BYTE v36[24]; // [rsp+A8h] [rbp-F0h] BYREF
  GUID v37; // [rsp+C0h] [rbp-D8h] BYREF
  _BYTE v38[160]; // [rsp+D0h] [rbp-C8h] BYREF

  LOBYTE(v32) = 0;
  v37 = 0LL;
  EtwActivityIdControl(3u, &v37);
  DisplayScenarioContextEnsureAndAssociate(&v37, 0x32u, 0, &v33, (unsigned __int8 *)&v32);
  v6 = v33;
  v29 = -1;
  v30 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 2010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerEnter, v5, 2010);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v29, 2010);
  Current = DXGPROCESS::GetCurrent(v7);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2272;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v29);
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v32);
    return 3221225485LL;
  }
  hDevice = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (const struct _D3DKMT_DESTROYDEVICE *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&hDevice, a1, 4uLL);
  }
  else
  {
    hDevice = a1->hDevice;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v35, Current);
  v9 = hDevice;
  v10 = (hDevice >> 6) & 0xFFFFFF;
  if ( v10 < *((_DWORD *)Current + 74) )
  {
    v11 = *((_QWORD *)Current + 35);
    if ( ((hDevice >> 25) & 0x60) == (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0x60)
      && (*(_DWORD *)(v11 + 16LL * v10 + 8) & 0x2000) == 0 )
    {
      v12 = *(_DWORD *)(v11 + 16LL * v10 + 8) & 0x1F;
      if ( v12 )
      {
        if ( v12 == 3 )
        {
          v13 = *(_QWORD *)(v11 + 16LL * v10);
          goto LABEL_15;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        v9 = hDevice;
      }
    }
  }
  v13 = 0LL;
LABEL_15:
  if ( !v13 )
  {
    WdLogSingleEntry2(2LL, v9, -1073741811LL);
    WdLogGlobalForLineNumber = 2311;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v35);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v29);
    if ( (_BYTE)v32 )
      DisplayScenarioContextDissociate(&v33);
    return 3221225485LL;
  }
  v14 = (v9 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v14 < *((_DWORD *)Current + 74) )
  {
    v15 = *((_QWORD *)Current + 35);
    v16 = *(_DWORD *)(v15 + 16 * v14 + 8);
    if ( ((v9 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60) && (v16 & 0x2000) == 0 && (v16 & 0x1F) != 0 )
      *(_DWORD *)(v15 + 16 * (((unsigned __int64)v9 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v35);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v34,
    (struct DXGDEVICE *)v13);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v36, (struct _KTHREAD **)(v13 + 144));
  DXGDEVICE::DestroyAllContexts((DXGDEVICE *)v13, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
  DXGDEVICE::DestroyAllPagingQueues((DXGDEVICE *)v13, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v38, v13, 2, v17, 0);
  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v38, v18);
  DXGDEVICE::DestroyAllDeviceSyncObjects((DXGDEVICE *)v13);
  DXGDEVICE::DestroyAllTrackedWorkloads((DXGDEVICE *)v13);
  v19 = *(_QWORD *)(v13 + 1880);
  if ( v19 )
  {
    if ( !*(_QWORD *)(v19 + 3120) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2356;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pDisplayAdapter->IsDisplayAdapter()",
        2356LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v19 + 3120), (const struct DXGDEVICE *)v13)
      || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v19 + 3120), (const struct DXGDEVICE *)v13) )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v38);
      DxgkReleaseVidPnSourceOwnerAndRestartCdds((struct DXGDEVICE *)v13, v6, 1);
    }
  }
  else
  {
    v23 = *(_DWORD *)(v13 + 1892);
    if ( v23 )
    {
      WdLogSingleEntry2(2LL, v13, v23);
      WdLogGlobalForLineNumber = 2381;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Device 0x%I64x is being destroyed but VidPnOwnershipCount = 0x%I64x",
        v13,
        *(unsigned int *)(v13 + 1892),
        0LL,
        0LL,
        0LL);
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v38);
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v36);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v13 + 16), (struct DXGDEVICE *)v13);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v29);
  if ( (_BYTE)v32 )
    DisplayScenarioContextDissociate(&v33);
  return 0LL;
}
