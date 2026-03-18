/*
 * XREFs of DxgkGetPostCompositionCaps @ 0x140372140
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14000C948 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z @ 0x140372718 (-GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z.c)
 */

__int64 __fastcall DxgkGetPostCompositionCaps(ULONG64 a1, __int64 a2, __int64 a3)
{
  const void *v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rax
  struct DXGADAPTER *v7; // r14
  int PairingAdapters; // esi
  struct DXGADAPTER *v9; // rdi
  struct DXGADAPTER *v10; // rsi
  void *v11; // rcx
  void *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // [rsp+50h] [rbp-118h] BYREF
  __int64 v19; // [rsp+58h] [rbp-110h]
  char v20; // [rsp+60h] [rbp-108h]
  struct DXGADAPTER *v21; // [rsp+68h] [rbp-100h] BYREF
  struct DXGADAPTER *v22; // [rsp+70h] [rbp-F8h] BYREF
  struct DXGADAPTER *v23; // [rsp+78h] [rbp-F0h] BYREF
  unsigned __int64 v24; // [rsp+80h] [rbp-E8h] BYREF
  DXGADAPTER *v25; // [rsp+88h] [rbp-E0h] BYREF
  unsigned __int64 v26; // [rsp+98h] [rbp-D0h] BYREF
  __int128 Src; // [rsp+A0h] [rbp-C8h] BYREF
  _BYTE v28[144]; // [rsp+B0h] [rbp-B8h] BYREF

  v18 = -1;
  v19 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v20 = 1;
    v18 = 2146;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2146);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 2146);
  Src = 0LL;
  v4 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&Src, v4, 0x10uLL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5);
  if ( Current )
  {
    v23 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v25, Src, Current, &v23, 1);
    v7 = v23;
    if ( v23 )
    {
      v22 = 0LL;
      v21 = 0LL;
      v24 = 0LL;
      v26 = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters(v23, DWORD1(Src), &v22, &v24, &v21, &v26, 0);
      if ( PairingAdapters < 0 )
      {
        v9 = 0LL;
        v21 = 0LL;
        PairingAdapters = DxgkpGetPairingAdapters(v7, DWORD1(Src), &v22, &v24, 0LL, 0LL, 0);
      }
      else
      {
        v9 = v21;
      }
      if ( PairingAdapters < 0 )
      {
        WdLogSingleEntry2(2LL, v7, DWORD1(Src));
        WdLogGlobalForLineNumber = 12220;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x!",
          (__int64)v7,
          DWORD1(Src),
          0LL,
          0LL,
          0LL);
      }
      else
      {
        if ( v9 && !*((_QWORD *)v9 + 390) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 12226;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"(pDisplayAdapter == NULL) || (pDisplayAdapter->IsDisplayAdapter())",
            12226LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v10 = v22;
        if ( !v22 || !*((_QWORD *)v22 + 391) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 12228;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"(pRenderAdapter != NULL) && (pRenderAdapter->IsRenderAdapter())",
            12228LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, v10, v9);
        DXGADAPTER::ReleaseReference(v10);
        if ( v9 )
          DXGADAPTER::ReleaseReference(v9);
        PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v28, 0LL);
        if ( PairingAdapters >= 0 )
        {
          if ( !v9 || (**((_DWORD **)v9 + 376) & 0x800000) != 0 )
            *((_QWORD *)&Src + 1) = 0x3F8000003F800000LL;
          else
            PairingAdapters = ADAPTER_DISPLAY::GetPostCompositionCaps(
                                *((ADAPTER_DISPLAY **)v9 + 390),
                                DWORD1(Src),
                                (float *)&Src + 2,
                                (float *)&Src + 3);
          v11 = (void *)(a1 + 8);
          if ( a1 + 8 >= MmUserProbeAddress )
            v11 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v11, (char *)&Src + 8, 4uLL);
          v12 = (void *)(a1 + 12);
          if ( a1 + 12 >= MmUserProbeAddress )
            v12 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v12, (char *)&Src + 12, 4uLL);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
      }
      if ( v25 )
        DXGADAPTER::ReleaseReference(v25);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
      if ( v20 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v18);
      }
      return (unsigned int)PairingAdapters;
    }
    WdLogSingleEntry2(3LL, (unsigned int)Src, -1073741811LL);
    WdLogGlobalForLineNumber = 12188;
    if ( v25 )
      DXGADAPTER::ReleaseReference(v25);
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 12177;
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
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v18);
  return 3221225485LL;
}
