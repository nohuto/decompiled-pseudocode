/*
 * XREFs of ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1401B4500
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14000F84C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1401A81D0 (-DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402C84A8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

__int64 __fastcall DxgkCddSetPalette(struct DXGADAPTER *a1, const struct _DXGKARG_SETPALETTE *a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  __int64 v7; // r12
  int PairingAdapters; // eax
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGADAPTER *v13; // rbx
  ADAPTER_DISPLAY **v14; // rdi
  int v15; // eax
  __int64 v16; // r14
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // [rsp+30h] [rbp-D0h]
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h]
  char v23; // [rsp+60h] [rbp-A0h]
  struct DXGADAPTER *v24; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *v25; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v26; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v27; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v28[144]; // [rsp+90h] [rbp-70h] BYREF

  v21 = -1;
  v22 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 3010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 3010);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 3010);
  Current = DXGPROCESS::GetCurrent();
  VidPnSourceId = a2->VidPnSourceId;
  v7 = (__int64)Current;
  v25 = 0LL;
  v24 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(a1, VidPnSourceId, &v25, &v27, &v24, &v26, 0);
  v9 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v13 = v25;
    v14 = (ADAPTER_DISPLAY **)v24;
    if ( !v25 || !v24 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2396;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(pRenderAdapter != NULL) && (pDisplayAdapter != NULL)",
        2396LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, v13, (struct DXGADAPTER *const)v14);
    DXGADAPTER::ReleaseReference(v13);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v14);
    v15 = COREADAPTERACCESS::AcquireExclusive((__int64)v28, 2u, 0);
    LODWORD(v16) = v15;
    if ( v15 >= 0 )
    {
      if ( !*((_QWORD *)v13 + 391) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2413;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pRenderAdapter->IsRenderAdapter()",
          2413LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !v14[390] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2414;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pDisplayAdapter->IsDisplayAdapter()",
          2414LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)v13 + 391), 6LL, 0xFFFFFFFFLL);
      v16 = (int)ADAPTER_DISPLAY::DdiSetPalette(v14[390], a2, v17);
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)v13 + 391), 7LL, 0xFFFFFFFFLL);
      if ( (int)v16 < 0 )
      {
        WdLogSingleEntry4(2LL, v16, v14, a2->VidPnSourceId, v7);
        v20 = a2->VidPnSourceId;
        WdLogGlobalForLineNumber = 2428;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"0x%I64x DdiSetPalette() failed 0x%I64x 0x%I64x 0x%I64x",
          v16,
          (__int64)v14,
          v20,
          v7,
          0LL);
      }
    }
    else
    {
      WdLogSingleEntry4(4LL, v15, v13, v14, v7);
      WdLogGlobalForLineNumber = 2409;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v21);
    return (unsigned int)v16;
  }
  else
  {
    WdLogSingleEntry2(2LL, a1, PairingAdapters);
    WdLogGlobalForLineNumber = 2390;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to get bound render adapter from Adapter 0x%I64x in DxgkCddSetPalette (ntStatus = 0x%I64x).",
      (__int64)a1,
      v9,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v21);
    }
    return (unsigned int)v9;
  }
}
