/*
 * XREFs of ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1401DB674
 * Callers:
 *     DxgkGetLegacyDpiInfo @ 0x1401DCB40 (DxgkGetLegacyDpiInfo.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1401DBDB8 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     DxgkQueryDmmInterface @ 0x140344CD8 (DxgkQueryDmmInterface.c)
 */

__int64 __fastcall Win81::DxgkUpdateGdiInfo(Win81 *this, void *a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned int v6; // r15d
  __int64 v7; // rbx
  unsigned int updated; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  bool v12; // zf
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 CurrentProcess; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  int DmmInterface; // eax
  __int64 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // r8
  struct _DPI_INFORMATION *v26; // [rsp+30h] [rbp-D0h]
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h]
  char v29; // [rsp+60h] [rbp-A0h]
  Win81 *v30; // [rsp+68h] [rbp-98h]
  _BYTE v31[144]; // [rsp+70h] [rbp-90h] BYREF

  v27 = -1;
  v6 = a3;
  v7 = (unsigned int)a2;
  v28 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2172;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 2172);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 2172);
  if ( !this )
  {
    updated = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1069;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specified an invalid adapter handle, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    v12 = v29 == 0;
LABEL_18:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v27);
    return updated;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, this, 0LL);
  v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v31, 0LL);
  v15 = v13;
  if ( v13 >= 0 )
  {
    v30 = 0LL;
    DmmInterface = DxgkQueryDmmInterface(this);
    v23 = DmmInterface;
    if ( DmmInterface >= 0 )
    {
      updated = Win81::UpdateGdiInfoForVidPnSource(v30, this, (void *const)(unsigned int)v7, v6, a4, a5, v26);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      v12 = v29 == 0;
      goto LABEL_18;
    }
    WdLogSingleEntry3(2LL, DmmInterface, this, v7);
    WdLogGlobalForLineNumber = 1094;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed DxgkQueryDmmInterface with Status = 0x%I64x, adapter = 0x%I64x, SourceId = 0x%I64x",
      v23,
      (__int64)this,
      v7,
      0LL,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v27);
    return (unsigned int)v23;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v14);
    WdLogSingleEntry3(2LL, v15, CurrentProcess, this);
    WdLogGlobalForLineNumber = 1081;
    v18 = PsGetCurrentProcess(v17);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Couldn't acquire shared adapter access, Status=0x%I64x EPROCESS=0x%I64x pAdapter=0x%I64x",
      v15,
      v18,
      (__int64)this,
      0LL,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v27);
    return (unsigned int)v15;
  }
}
