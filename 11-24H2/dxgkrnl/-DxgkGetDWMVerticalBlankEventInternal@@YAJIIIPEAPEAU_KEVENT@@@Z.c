/*
 * XREFs of ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1403F960C
 * Callers:
 *     DxgkGetDWMVerticalBlankEvent @ 0x1403F94E0 (DxgkGetDWMVerticalBlankEvent.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14000C948 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002DAC0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z @ 0x14019953C (-GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetDWMVerticalBlankEventInternal(__int64 a1, unsigned int a2, __int64 a3, struct _KEVENT **a4)
{
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rsi
  struct DXGDEVICE *v7; // rdi
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGADAPTER *v17; // r14
  unsigned __int64 v18; // rdx
  int PairingAdapters; // eax
  __int64 v20; // r15
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGADAPTER *v24; // r15
  ADAPTER_DISPLAY **v25; // rbx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  int v28; // r14d
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  bool v32; // zf
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned __int64 v36; // rdx
  int v37; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h]
  char v39; // [rsp+60h] [rbp-A0h]
  struct DXGDEVICE *v40; // [rsp+68h] [rbp-98h] BYREF
  DXGADAPTER *v41[2]; // [rsp+70h] [rbp-90h] BYREF
  struct DXGADAPTER *v42; // [rsp+80h] [rbp-80h] BYREF
  struct DXGDEVICE *v43; // [rsp+88h] [rbp-78h] BYREF
  struct DXGADAPTER *v44; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v45[8]; // [rsp+98h] [rbp-68h] BYREF
  struct DXGADAPTER *v46; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v47; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v48; // [rsp+B0h] [rbp-50h] BYREF
  struct _KEVENT **v49; // [rsp+B8h] [rbp-48h]
  _BYTE v50[144]; // [rsp+C0h] [rbp-40h] BYREF

  v37 = -1;
  v49 = a4;
  v4 = (unsigned int)a3;
  v5 = a2;
  v6 = (unsigned int)a1;
  v38 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 2192;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2192);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 2192);
  v42 = 0LL;
  v7 = 0LL;
  v43 = 0LL;
  Current = DXGPROCESS::GetCurrent(v8);
  v10 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 7063;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    v13 = v39 == 0;
LABEL_35:
    if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v37);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)Current + 102) & 4) == 0 && !g_OSTestSigningEnabled )
  {
    WdLogSingleEntry1(3LL, -1073741790LL);
    WdLogGlobalForLineNumber = 7071;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v37);
    return 3221225506LL;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v41, v6, (struct _KTHREAD **)Current, &v42, 1);
  v17 = v42;
  if ( !v42 )
  {
    WdLogSingleEntry2(3LL, v6, -1073741811LL);
    WdLogGlobalForLineNumber = 7081;
LABEL_16:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v41, v18);
    goto LABEL_7;
  }
  if ( (_DWORD)v5 )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v45, v5, v10, &v43);
    if ( !v43 )
    {
      WdLogSingleEntry2(3LL, v17, v5);
      WdLogGlobalForLineNumber = 7096;
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v45);
      goto LABEL_16;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v43 + 8);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v45);
    v17 = v42;
    v7 = v43;
  }
  v40 = v7;
  v46 = 0LL;
  v44 = 0LL;
  v48 = 0LL;
  v47 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v17, v4, &v46, &v48, &v44, &v47, 0);
  v20 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry3(2LL, v17, v4, PairingAdapters);
    WdLogGlobalForLineNumber = 7122;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
      (__int64)v17,
      v4,
      v20,
      0LL,
      0LL);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v40);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v41, v21);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v37);
    return (unsigned int)v20;
  }
  v24 = v46;
  v25 = (ADAPTER_DISPLAY **)v44;
  if ( !v46 || !v44 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7128;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(pRenderAdapter != NULL) && (pDisplayAdapter != NULL)",
      7128LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)v25[390] + 24) )
  {
    WdLogSingleEntry2(2LL, v4, -1073741811LL);
    WdLogGlobalForLineNumber = 7134;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
      v4,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v40);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v41, v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    v13 = v39 == 0;
    goto LABEL_35;
  }
  if ( v7 && (v24 != *(struct DXGADAPTER **)(*((_QWORD *)v7 + 2) + 16LL) || v25 != *((ADAPTER_DISPLAY ***)v7 + 237)) )
  {
    WdLogSingleEntry2(3LL, v17, v5);
    WdLogGlobalForLineNumber = 7145;
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v40);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v41, v27);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    v13 = v39 == 0;
    goto LABEL_35;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v50, v24, (struct DXGADAPTER *const)v25);
  DXGADAPTER::ReleaseReference(v24);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v25);
  v28 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v50, 0LL);
  if ( v28 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v40);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v41, v29);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    v32 = v39 == 0;
    goto LABEL_53;
  }
  if ( !*((_QWORD *)v24 + 391) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7163;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pRenderAdapter->IsRenderAdapter()",
      7163LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !v25[390] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7164;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->IsDisplayAdapter()",
      7164LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !(_DWORD)v5 )
  {
LABEL_52:
    ADAPTER_DISPLAY::GetVBlankEvent(v25[390], v4, v49);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v50);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v40);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v41, v36);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    v32 = v39 == 0;
LABEL_53:
    if ( !v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v37);
    return (unsigned int)v28;
  }
  if ( *((_DWORD *)v7 + 152) == 1 )
  {
    v25 = (ADAPTER_DISPLAY **)v44;
    goto LABEL_52;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v40);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v41, v33);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit, v35, v37);
  return 3221226166LL;
}
