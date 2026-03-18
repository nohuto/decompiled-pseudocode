/*
 * XREFs of DxgkFlushPresentHistory @ 0x1403E6BA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14001BF28 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14001EE2C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023190 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402BAC68 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

__int64 __fastcall DxgkFlushPresentHistory(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGADAPTER *v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v11; // r8d
  int v12; // eax
  unsigned int v13; // edi
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h]
  char v23; // [rsp+60h] [rbp-A0h]
  struct DXGADAPTER *v24; // [rsp+68h] [rbp-98h] BYREF
  DXGADAPTER *v25[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v26[144]; // [rsp+80h] [rbp-80h] BYREF

  v21 = -1;
  v3 = (unsigned int)a1;
  v22 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 2189;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2189);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 2189);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6862;
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
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v21);
    }
    return 3221225485LL;
  }
  v24 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v25, v3, Current, &v24, 1);
  v6 = v24;
  if ( !v24 )
  {
    WdLogSingleEntry2(3LL, v3, -1073741811LL);
    WdLogGlobalForLineNumber = 6873;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v25, v7);
    goto LABEL_9;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, v24, 0LL);
  v12 = COREADAPTERACCESS::AcquireExclusive((__int64)v26, 2u, v11);
  v13 = v12;
  if ( v12 == -1073741130 )
    goto LABEL_23;
  if ( v12 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v25, v14);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v21);
    return v13;
  }
  v17 = *((_QWORD *)v6 + 391);
  if ( v17 )
  {
    if ( !*((_BYTE *)v6 + 209) )
      ADAPTER_RENDER::FlushScheduler(v17, 1, 0xFFFFFFFFLL, 0);
LABEL_23:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
    if ( v25[0] )
      DXGADAPTER::ReleaseReference(v25[0]);
    goto LABEL_25;
  }
  WdLogSingleEntry2(3LL, v3, -1073741637LL);
  WdLogGlobalForLineNumber = 6897;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v25, v18);
LABEL_25:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v21);
  return 0LL;
}
