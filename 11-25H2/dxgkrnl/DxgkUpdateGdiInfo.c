/*
 * XREFs of DxgkUpdateGdiInfo @ 0x1403A67F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002D3C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003EC00 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x140056308 (-FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1401C57BC (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x140283874 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x140287094 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkQueryDmmInterface @ 0x1402DD374 (DxgkQueryDmmInterface.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1403680C0 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1403A6D68 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1403A831C (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1403DA050 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 */

__int64 __fastcall DxgkUpdateGdiInfo(
        char *a1,
        struct _LUID *a2,
        __int64 a3,
        struct _GDIINFO *a4,
        struct _DPI_INFORMATION *a5)
{
  unsigned int v5; // ebx
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // zf
  int v12; // eax
  __int64 v13; // r14
  bool v14; // di
  __int64 v15; // rcx
  __int64 v16; // r8
  bool v17; // zf
  int v19; // eax
  __int64 v20; // rcx
  __int64 CurrentProcess; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  int DpiFromRegistry; // eax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  unsigned int v35; // ebx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v36; // r8
  const struct _DPI_SCALE_FACTOR_COLLECTION *v37; // r8
  int PlateauIndexForScaleFactor; // eax
  int v39; // r10d
  struct _UNICODE_STRING *v40; // r9
  int v41; // eax
  bool v42; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v43[3]; // [rsp+51h] [rbp-AFh] BYREF
  int v44; // [rsp+54h] [rbp-ACh] BYREF
  int v45; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A0h]
  char v47; // [rsp+68h] [rbp-98h]
  struct _DXGDMM_INTERFACE *v48; // [rsp+70h] [rbp-90h] BYREF
  struct _GDIINFO *v49; // [rsp+78h] [rbp-88h]
  unsigned int v50[4]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v51; // [rsp+90h] [rbp-70h]
  _BYTE v52[144]; // [rsp+A0h] [rbp-60h] BYREF

  v45 = -1;
  v5 = a3;
  v49 = a4;
  LODWORD(v48) = a3;
  v7 = (unsigned int)a2;
  v46 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v47 = 1;
    v45 = 2172;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2172);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v45, 2172);
  if ( !a1 )
  {
    LODWORD(v8) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2230;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified an invalid adapter handle, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    v11 = v47 == 0;
LABEL_32:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v45);
    return (unsigned int)v8;
  }
  v12 = DxgkAcquireSessionModeChangeLock(0);
  v13 = v12;
  v14 = v12 >= 0;
  v42 = v12 >= 0;
  if ( v12 < 0 )
  {
    WdLogSingleEntry1(2LL, v12);
    WdLogGlobalForLineNumber = 2244;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
      v13,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v14 )
      DxgkReleaseSessionModeChangeLock();
    goto LABEL_10;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v52, (struct DXGADAPTER *const)a1, 0LL);
  v19 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v52, 0LL);
  v13 = v19;
  if ( v19 < 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v20);
    WdLogSingleEntry3(2LL, v13, CurrentProcess, a1);
    WdLogGlobalForLineNumber = 2256;
    v23 = PsGetCurrentProcess(v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Couldn't acquire shared adapter access, Status=0x%I64x EPROCESS=0x%I64x pAdapter=0x%I64x",
      v13,
      v23,
      (__int64)a1,
      0LL,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v42);
LABEL_10:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    v17 = v47 == 0;
    goto LABEL_11;
  }
  v43[0] = 0;
  IsEmergencyMonitorConnected(a1, v7, v43);
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)v52);
  v44 = 0;
  if ( v43[0] )
  {
    v44 = dword_14015D984;
  }
  else
  {
    DpiFromRegistry = DpiPersistence::ReadDpiFromRegistry(
                        (DpiPersistence *)(a1 + 412),
                        (const struct _LUID *)(unsigned int)v7,
                        1,
                        (struct _UNICODE_STRING *)&v44);
    v26 = DpiFromRegistry;
    if ( DpiFromRegistry < 0 )
    {
      v27 = PsGetCurrentProcess(v25);
      WdLogSingleEntry3(3LL, v26, v27, a1);
      WdLogGlobalForLineNumber = 2277;
    }
    v5 = (unsigned int)v48;
  }
  v28 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v52, 0LL);
  v13 = v28;
  if ( v28 >= 0 )
  {
    v48 = 0LL;
    v34 = DxgkQueryDmmInterface((DXGADAPTER *)a1, v29, &v48);
    v13 = v34;
    if ( v34 >= 0 )
    {
      LODWORD(v8) = UpdateGdiInfoForVidPnSource(v48, a1, v7, v44, v5, v49, a5);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v52);
      if ( *((_DWORD *)a5 + 21) == 1234568 )
      {
        v35 = *((_DWORD *)a5 + 2);
        *(_OWORD *)v50 = 0LL;
        v51 = 0LL;
        QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v50);
        DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)*((unsigned int *)a5 + 3), (__int64)v50, v36);
        PlateauIndexForScaleFactor = DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)v35, (__int64)v50, v37);
        v41 = DpiPersistence::WriteDpiToHKLMRegistry(
                (DpiPersistence *)(a1 + 412),
                (const struct _LUID *)(unsigned int)v7,
                PlateauIndexForScaleFactor - v39,
                v40);
        v8 = v41;
        if ( v41 < 0 )
        {
          WdLogSingleEntry1(2LL, v41);
          WdLogGlobalForLineNumber = 2330;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to write DPI to registry with Status = 0x%I64x",
            v8,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v8) = 0;
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
      if ( v14 )
        DxgkReleaseSessionModeChangeLock();
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
      v11 = v47 == 0;
      goto LABEL_32;
    }
    WdLogSingleEntry3(2LL, v34, a1, v7);
    WdLogGlobalForLineNumber = 2304;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed DxgkQueryDmmInterface with Status = 0x%I64x, adapter = 0x%I64x, SourceId = 0x%I64x",
      v13,
      (__int64)a1,
      v7,
      0LL,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    v17 = v47 == 0;
  }
  else
  {
    v31 = PsGetCurrentProcess(v30);
    WdLogSingleEntry3(2LL, v13, v31, a1);
    WdLogGlobalForLineNumber = 2291;
    v33 = PsGetCurrentProcess(v32);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Couldn't acquire shared adapter access, Status=0x%I64x EPROCESS=0x%I64x pAdapter=0x%I64x",
      v13,
      v33,
      (__int64)a1,
      0LL,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    v17 = v47 == 0;
  }
LABEL_11:
  if ( !v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v45);
  return (unsigned int)v13;
}
