/*
 * XREFs of DxgkGetMultiPlaneOverlayCaps @ 0x140399040
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14001BF28 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023190 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x140288C10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM2@Z @ 0x1403997C0 (-GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM.c)
 */

__int64 __fastcall DxgkGetMultiPlaneOverlayCaps(ULONG64 a1, __int64 a2, __int64 a3)
{
  const void *v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGADAPTER *v7; // rsi
  int PairingAdapters; // r14d
  ADAPTER_DISPLAY **v9; // rdi
  struct DXGADAPTER *v10; // r14
  int v11; // eax
  unsigned int MultiPlaneOverlayCaps; // r15d
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // [rsp+50h] [rbp-128h] BYREF
  __int64 v29; // [rsp+58h] [rbp-120h]
  char v30; // [rsp+60h] [rbp-118h]
  struct DXGADAPTER *v31; // [rsp+68h] [rbp-110h] BYREF
  struct DXGADAPTER *v32; // [rsp+70h] [rbp-108h] BYREF
  struct DXGADAPTER *v33; // [rsp+78h] [rbp-100h] BYREF
  unsigned __int64 v34; // [rsp+80h] [rbp-F8h] BYREF
  DXGADAPTER *v35; // [rsp+88h] [rbp-F0h] BYREF
  unsigned __int64 v36; // [rsp+98h] [rbp-E0h] BYREF
  __int128 Src; // [rsp+A0h] [rbp-D8h] BYREF
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS v38[4]; // [rsp+B0h] [rbp-C8h] BYREF
  _BYTE v39[144]; // [rsp+C0h] [rbp-B8h] BYREF

  v28 = -1;
  v29 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2145;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2145);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 2145);
  Src = 0LL;
  *(_OWORD *)&v38[0].0 = 0LL;
  v4 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&Src, v4, 0x20uLL);
  Current = DXGPROCESS::GetCurrent(v5);
  if ( Current )
  {
    v33 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v35, Src, Current, &v33, 1);
    v7 = v33;
    if ( v33 )
    {
      v32 = 0LL;
      v31 = 0LL;
      v34 = 0LL;
      v36 = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters(v33, DWORD1(Src), &v32, &v34, &v31, &v36, 0);
      if ( PairingAdapters < 0 )
      {
        v9 = 0LL;
        v31 = 0LL;
        PairingAdapters = DxgkpGetPairingAdapters(v7, DWORD1(Src), &v32, &v34, 0LL, 0LL, 0);
      }
      else
      {
        v9 = (ADAPTER_DISPLAY **)v31;
      }
      if ( PairingAdapters < 0 )
      {
        WdLogSingleEntry2(2LL, v7, DWORD1(Src));
        WdLogGlobalForLineNumber = 12006;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x!",
          (__int64)v7,
          DWORD1(Src),
          0LL,
          0LL,
          0LL);
        if ( v35 )
          DXGADAPTER::ReleaseReference(v35);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
        if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v28);
        return (unsigned int)PairingAdapters;
      }
      else
      {
        if ( v9 && !v9[390] )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 12012;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"(pDisplayAdapter == NULL) || (pDisplayAdapter->IsDisplayAdapter())",
            12012LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v10 = v32;
        if ( !v32 || !*((_QWORD *)v32 + 391) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 12014;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"(pRenderAdapter != NULL) && (pRenderAdapter->IsRenderAdapter())",
            12014LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, v10, (struct DXGADAPTER *const)v9);
        DXGADAPTER::ReleaseReference(v10);
        if ( v9 )
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v9);
        v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v39, 0LL);
        MultiPlaneOverlayCaps = v11;
        if ( v11 < 0 )
        {
          WdLogSingleEntry4(3LL, v11, v7, v10, v9);
          WdLogGlobalForLineNumber = 12034;
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
          if ( v35 )
            DXGADAPTER::ReleaseReference(v35);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
          if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v28);
          return 0LL;
        }
        else
        {
          if ( v9 )
          {
            MultiPlaneOverlayCaps = ADAPTER_DISPLAY::GetMultiPlaneOverlayCaps(
                                      v9[390],
                                      DWORD1(Src),
                                      (unsigned int *)&Src + 2,
                                      (unsigned int *)&Src + 3,
                                      (unsigned int *)v38,
                                      &v38[1],
                                      (float *)&v38[2],
                                      (float *)&v38[3]);
          }
          else
          {
            *((_QWORD *)&Src + 1) = 1LL;
            *(_QWORD *)&v38[0].0 = 0LL;
            v38[2].Value = 1065353216;
            v38[3].Value = 1065353216;
          }
          v13 = (void *)(a1 + 8);
          if ( a1 + 8 >= MmUserProbeAddress )
            v13 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v13, (char *)&Src + 8, 4uLL);
          v14 = (void *)(a1 + 12);
          if ( a1 + 12 >= MmUserProbeAddress )
            v14 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v14, (char *)&Src + 12, 4uLL);
          v15 = (void *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v15 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v15, v38, 4uLL);
          v16 = (void *)(a1 + 20);
          if ( a1 + 20 >= MmUserProbeAddress )
            v16 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v16, &v38[1], 4uLL);
          v17 = (void *)(a1 + 24);
          if ( a1 + 24 >= MmUserProbeAddress )
            v17 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v17, &v38[2], 4uLL);
          v18 = (void *)(a1 + 28);
          if ( a1 + 28 >= MmUserProbeAddress )
            v18 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v18, &v38[3], 4uLL);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
          if ( v35 )
            DXGADAPTER::ReleaseReference(v35);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
          if ( v30 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v28);
          }
          return MultiPlaneOverlayCaps;
        }
      }
    }
    WdLogSingleEntry2(3LL, (unsigned int)Src, -1073741811LL);
    WdLogGlobalForLineNumber = 11975;
    if ( v35 )
      DXGADAPTER::ReleaseReference(v35);
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 11964;
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
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v28);
  return 3221225485LL;
}
