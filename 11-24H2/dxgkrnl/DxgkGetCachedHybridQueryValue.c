/*
 * XREFs of DxgkGetCachedHybridQueryValue @ 0x14039FF10
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

__int64 __fastcall DxgkGetCachedHybridQueryValue(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // r14
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  const void *v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v12; // rax
  struct DXGADAPTER *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  int Src; // [rsp+50h] [rbp-88h] BYREF
  int v18; // [rsp+58h] [rbp-80h] BYREF
  __int64 v19; // [rsp+60h] [rbp-78h]
  char v20; // [rsp+68h] [rbp-70h]
  _BYTE v21[16]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v22; // [rsp+80h] [rbp-58h] BYREF
  _BYTE v23[8]; // [rsp+88h] [rbp-50h] BYREF
  struct DXGADAPTER *v24; // [rsp+90h] [rbp-48h]
  char v25; // [rsp+98h] [rbp-40h]
  struct _LUID v26[2]; // [rsp+A0h] [rbp-38h] BYREF
  int v27; // [rsp+B0h] [rbp-28h]

  v3 = (void *)a1;
  v18 = -1;
  v19 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v20 = 1;
    v18 = 2090;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2090);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 2090);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( Current )
  {
    *(_OWORD *)&v26[0].LowPart = 0LL;
    v27 = 0;
    v6 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v6 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v26, v6, 0x14uLL);
    Src = 0;
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v21, Current);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
    if ( v27 )
    {
      if ( v27 == 1 )
      {
        v7 = *((_DWORD *)Current + 131);
      }
      else
      {
        if ( v27 != 2 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3960;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"Invalid D3DKMT_HYBRID_LIST QueryType!",
            3960LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_11;
        }
        v7 = *((_DWORD *)Current + 130);
      }
      Src = v7;
LABEL_11:
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v3, &Src, 4uLL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v21);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
      if ( v20 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v18);
      }
      return 0LL;
    }
    v22 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    v12 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)&v26[0].HighPart, &v22);
    v13 = v12;
    if ( v12 )
    {
      v24 = v12;
      v25 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
      DXGADAPTER::ReleaseReference(v13);
      if ( *((_QWORD *)v13 + 391) )
      {
        if ( *((_DWORD *)v13 + 50) == 1 )
        {
          v14 = *((_QWORD *)v13 + 391);
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v14 + 72, 0LL);
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 88));
          Src = DXGPROCESS::GetGpuPreferenceDListState(Current, *((_DWORD *)v13 + 60));
          _InterlockedDecrement((volatile signed __int32 *)(v14 + 88));
          ExReleasePushLockSharedEx(v14 + 72, 0LL);
          KeLeaveCriticalRegion();
        }
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
        goto LABEL_11;
      }
      WdLogSingleEntry2(2LL, (int)v26[1].LowPart, (unsigned int)v26[0].HighPart);
      WdLogGlobalForLineNumber = 3928;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"D3DKMTGetCachedHybridQueryValue called with a display-only adapter with LUID (0x%I64x%08I64x).",
        (int)v26[1].LowPart,
        (unsigned int)v26[0].HighPart,
        0LL,
        0LL,
        0LL);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
    }
    else
    {
      WdLogSingleEntry2(2LL, (int)v26[1].LowPart, (unsigned int)v26[0].HighPart);
      WdLogGlobalForLineNumber = 3912;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to reference adapter by LUID (0x%I64x%08I64x).",
        (int)v26[1].LowPart,
        (unsigned int)v26[0].HighPart,
        0LL,
        0LL,
        0LL);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v21);
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3876;
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
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v18);
  return 3221225485LL;
}
