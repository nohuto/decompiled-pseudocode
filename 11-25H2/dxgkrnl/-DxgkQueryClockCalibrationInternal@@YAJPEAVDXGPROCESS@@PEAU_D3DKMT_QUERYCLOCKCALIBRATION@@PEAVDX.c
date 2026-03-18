/*
 * XREFs of ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x1403854B8
 * Callers:
 *     ?VmBusQueryClockCalibration@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140220600 (-VmBusQueryClockCalibration@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkQueryClockCalibration @ 0x140385300 (DxgkQueryClockCalibration.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1400172A0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x140021718 (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?VmBusSendQueryClockCalibration@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@@Z @ 0x1401839AC (-VmBusSendQueryClockCalibration@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUE.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x140302664 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 */

__int64 __fastcall DxgkQueryClockCalibrationInternal(
        struct DXGPROCESS *a1,
        struct _D3DKMT_QUERYCLOCKCALIBRATION *a2,
        struct DXGADAPTER *this)
{
  __int64 v6; // rax
  DXGADAPTER *v7; // rcx
  DXGADAPTER *v8; // rsi
  struct DXGADAPTER *v9; // rbx
  int v10; // edi
  __int64 PhysicalAdapterIndex; // rax
  __int64 NodeOrdinal; // rdx
  ADAPTER_RENDER *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  int v18; // ebx
  DXGADAPTER *v19; // rcx
  struct DXGGLOBAL *Global; // rax
  int ClockCalibration; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  int IndirectDisplayPairedAdapter; // eax
  __int64 v31; // r15
  __int64 hAdapter; // [rsp+28h] [rbp-D8h]
  int v33; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+58h] [rbp-A8h]
  char v35; // [rsp+60h] [rbp-A0h]
  struct DXGADAPTER *v36[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v37[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v38[144]; // [rsp+90h] [rbp-70h] BYREF

  v33 = -1;
  v34 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2125;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, (__int64)this, 2125);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 2125);
  if ( !this )
  {
    WdLogSingleEntry2(2LL, a1, a2->hAdapter);
    hAdapter = a2->hAdapter;
    WdLogGlobalForLineNumber = 10485;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid adapter, pDxgProcess=0x%I64x, hAdapter=0x%8x",
      (__int64)a1,
      hAdapter,
      0LL,
      0LL,
      0LL);
LABEL_43:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v33);
    return -1073741811LL;
  }
  v6 = *((_QWORD *)this + 390);
  v7 = 0LL;
  v36[0] = 0LL;
  v8 = 0LL;
  if ( v6 )
  {
    if ( !*(_DWORD *)(v6 + 96) )
    {
      v18 = -1073741811;
      WdLogSingleEntry2(2LL, 0LL, -1073741811LL);
      WdLogGlobalForLineNumber = 8824;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
        0LL,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      v19 = v36[0];
      if ( v36[0] )
LABEL_24:
        DXGADAPTER::ReleaseReference(v19);
LABEL_25:
      WdLogSingleEntry1(3LL, this);
      WdLogGlobalForLineNumber = 10496;
      goto LABEL_33;
    }
    v8 = this;
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v7 = v36[0];
  }
  if ( !*((_QWORD *)this + 391) )
  {
    if ( (*((_DWORD *)this + 111) & 0x100) != 0 )
    {
      IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter(this, 0, v36);
      v31 = IndirectDisplayPairedAdapter;
      if ( IndirectDisplayPairedAdapter >= 0 )
        goto LABEL_11;
      WdLogSingleEntry2(2LL, this, IndirectDisplayPairedAdapter);
      WdLogGlobalForLineNumber = 8866;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to get the paired render adapter for indirect display adapter 0x%I64x, (Status = 0x%I64x).",
        (__int64)this,
        v31,
        0LL,
        0LL,
        0LL);
      if ( v36[0] )
        DXGADAPTER::ReleaseReference(v36[0]);
      v36[0] = 0LL;
      if ( v8 )
        DXGADAPTER::ReleaseReference(v8);
      v18 = v31;
    }
    else
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v37);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
      Global = DXGGLOBAL::GetGlobal();
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v36, *((struct DXGADAPTER **)Global + 121));
      if ( v36[0] )
      {
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
        goto LABEL_11;
      }
      v18 = -1073741637;
      WdLogSingleEntry2(2LL, this, -1073741637LL);
      WdLogGlobalForLineNumber = 8880;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"WARP render only adapter is not ready to be used with display only adapter 0x%I64x, returning 0x%I64x.",
        (__int64)this,
        -1073741637LL,
        0LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
      if ( v36[0] )
        DXGADAPTER::ReleaseReference(v36[0]);
      v36[0] = 0LL;
      if ( v8 )
      {
        v19 = v8;
        goto LABEL_24;
      }
    }
    goto LABEL_25;
  }
  if ( v7 )
    DXGADAPTER::ReleaseReference(v7);
  v36[0] = this;
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  v36[1] = (struct DXGADAPTER *)-1LL;
LABEL_11:
  v9 = v36[0];
  v36[0] = 0LL;
  if ( v8 )
    DXGADAPTER::ReleaseReference(v8);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v38, v9, 0LL);
  v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v38, 0LL);
  DXGADAPTER::ReleaseReference(v9);
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(3LL, v9);
    WdLogGlobalForLineNumber = 10513;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v33);
    return (unsigned int)v10;
  }
  PhysicalAdapterIndex = a2->PhysicalAdapterIndex;
  if ( (unsigned int)PhysicalAdapterIndex >= *((_DWORD *)v9 + 74) )
  {
    WdLogSingleEntry1(3LL, a2->PhysicalAdapterIndex);
    WdLogGlobalForLineNumber = 10519;
    goto LABEL_42;
  }
  NodeOrdinal = a2->NodeOrdinal;
  if ( (unsigned int)NodeOrdinal >= *(unsigned __int16 *)(*((_QWORD *)v9 + 374) + 344 * PhysicalAdapterIndex) )
  {
    WdLogSingleEntry1(3LL, NodeOrdinal);
    WdLogGlobalForLineNumber = 10525;
LABEL_42:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
    goto LABEL_43;
  }
  *(_OWORD *)&a2->ClockData.GpuFrequency = 0LL;
  a2->ClockData.CpuClockCounter = 0LL;
  a2->ClockData.Flags.Value = 0;
  if ( *((_BYTE *)v9 + 209) )
  {
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 426) < 0x15u )
    {
      v18 = -1073741822;
      goto LABEL_31;
    }
    ClockCalibration = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryClockCalibration(
                         (struct DXGADAPTER *)((char *)v9 + 4664),
                         a1,
                         a2);
  }
  else
  {
    v13 = (ADAPTER_RENDER *)*((_QWORD *)v9 + 391);
    v14 = *((_QWORD *)v13 + 2);
    if ( !*(_QWORD *)(v14 + 912) || *(int *)(v14 + 2736) < 0x2000 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 10549;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Clock calibration cannot be queried if the driver does nto support it.",
        10549LL,
        0LL,
        0LL,
        0LL,
        0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
      if ( v35 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v33);
      }
      return 3221225473LL;
    }
    ClockCalibration = ADAPTER_RENDER::DdiCalibrateGpuClock(
                         v13,
                         a2->NodeOrdinal,
                         a2->PhysicalAdapterIndex,
                         &a2->ClockData);
  }
  v18 = ClockCalibration;
LABEL_31:
  if ( v18 < 0 )
  {
    WdLogSingleEntry3(3LL, v18, a2->NodeOrdinal, a2->PhysicalAdapterIndex);
    WdLogGlobalForLineNumber = 10566;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
LABEL_33:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v33);
    return (unsigned int)v18;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v33);
  return 0LL;
}
