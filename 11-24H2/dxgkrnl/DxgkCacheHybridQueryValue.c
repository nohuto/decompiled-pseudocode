/*
 * XREFs of DxgkCacheHybridQueryValue @ 0x1403B6BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140031B9C (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGpuPreferenceDListState@DXGPROCESS@@QEAA?AW4_D3DKMT_GPU_PREFERENCE_QUERY_STATE@@I@Z @ 0x1400522D0 (-GetGpuPreferenceDListState@DXGPROCESS@@QEAA-AW4_D3DKMT_GPU_PREFERENCE_QUERY_STATE@@I@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCacheHybridQueryValue(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // r14
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rbx
  const void *v6; // rdx
  int v7; // eax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  struct DXGADAPTER *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rsi
  __int64 v15; // rdi
  int GpuPreferenceDListState; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // [rsp+50h] [rbp-88h] BYREF
  __int64 v21; // [rsp+58h] [rbp-80h]
  char v22; // [rsp+60h] [rbp-78h]
  _BYTE v23[16]; // [rsp+68h] [rbp-70h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-60h] BYREF
  _BYTE v25[8]; // [rsp+80h] [rbp-58h] BYREF
  struct DXGADAPTER *v26; // [rsp+88h] [rbp-50h]
  char v27; // [rsp+90h] [rbp-48h]
  __int128 Src; // [rsp+98h] [rbp-40h] BYREF
  int v29; // [rsp+A8h] [rbp-30h]

  v3 = (void *)a1;
  v20 = -1;
  v21 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2091;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2091);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2091);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3996;
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
LABEL_23:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v20);
    }
    return 3221225485LL;
  }
  Src = 0LL;
  v29 = 0;
  v6 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v6 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&Src, v6, 0x14uLL);
  DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v23, Current);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  switch ( v29 )
  {
    case 0:
      v24 = 0LL;
      Global = DXGGLOBAL::GetGlobal();
      v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)&Src + 4), &v24);
      v10 = v9;
      if ( v9 )
      {
        v26 = v9;
        v27 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
        DXGADAPTER::ReleaseReference(v10);
        if ( *((_QWORD *)v10 + 391) )
        {
          if ( *((_DWORD *)v10 + 50) == 1 )
          {
            v14 = *((_QWORD *)v10 + 391);
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v14 + 72, 0LL);
            *(_QWORD *)(v14 + 80) = KeGetCurrentThread();
            v15 = *((unsigned int *)v10 + 60);
            GpuPreferenceDListState = DXGPROCESS::GetGpuPreferenceDListState(Current, v15);
            if ( GpuPreferenceDListState )
            {
              LODWORD(Src) = GpuPreferenceDListState;
            }
            else
            {
              v17 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8 * v15);
              if ( v17 )
              {
                *(_DWORD *)(v17 + 104) = Src;
              }
              else
              {
                WdLogSingleEntry1(3LL, (unsigned int)v15);
                WdLogGlobalForLineNumber = 985;
              }
            }
            *(_QWORD *)(v14 + 80) = 0LL;
            ExReleasePushLockExclusiveEx(v14 + 72, 0LL);
            KeLeaveCriticalRegion();
          }
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
          goto LABEL_35;
        }
        WdLogSingleEntry2(2LL, SDWORD2(Src), DWORD1(Src));
        WdLogGlobalForLineNumber = 4046;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"D3DKMTCacheHybridQueryValue called with a display-only adapter with LUID (0x%I64x%08I64x).",
          SDWORD2(Src),
          DWORD1(Src),
          0LL,
          0LL,
          0LL);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
      }
      else
      {
        WdLogSingleEntry2(2LL, SDWORD2(Src), DWORD1(Src));
        WdLogGlobalForLineNumber = 4030;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to reference adapter by LUID (0x%I64x%08I64x).",
          SDWORD2(Src),
          DWORD1(Src),
          0LL,
          0LL,
          0LL);
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
      goto LABEL_23;
    case 1:
      v7 = *((_DWORD *)Current + 131);
      if ( !v7 )
      {
        *((_DWORD *)Current + 131) = Src;
        goto LABEL_35;
      }
      goto LABEL_17;
    case 2:
      v7 = *((_DWORD *)Current + 130);
      if ( !v7 )
      {
        *((_DWORD *)Current + 130) = Src;
        goto LABEL_35;
      }
LABEL_17:
      LODWORD(Src) = v7;
      goto LABEL_35;
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 4110;
  DxgkLogInternalTriageEvent(
    0LL,
    262146LL,
    0xFFFFFFFFLL,
    L"Invalid D3DKMT_HYBRID_LIST QueryType!",
    4110LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_35:
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v3, &Src, 4uLL);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v20);
  return 0LL;
}
