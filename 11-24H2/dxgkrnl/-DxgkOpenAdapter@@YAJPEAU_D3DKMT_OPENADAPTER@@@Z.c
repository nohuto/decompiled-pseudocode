/*
 * XREFs of ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x140330650
 * Callers:
 *     DxgkOpenAdapterFromDeviceName @ 0x140330080 (DxgkOpenAdapterFromDeviceName.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1400391A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043DA0 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402B64B0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     DpiGetDxgAdapterSafe @ 0x14034F7AC (DpiGetDxgAdapterSafe.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x14036620C (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 */

__int64 __fastcall DxgkOpenAdapter(struct _D3DKMT_OPENADAPTER *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  int DxgAdapterSafe; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rcx
  DXGADAPTER *v11; // rbx
  DXGADAPTER *v12; // rcx
  DXGADAPTER *v13; // rbx
  DXGADAPTER *v14; // rbx
  _QWORD *v15; // rcx
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // r14d
  DXGADAPTER *v23; // rbx
  int v24; // edi
  DXGADAPTER *v25; // rbx
  unsigned int v26; // eax
  unsigned int v27; // r15d
  struct ADAPTER_RENDER *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // [rsp+50h] [rbp-30h] BYREF
  __int64 v34; // [rsp+58h] [rbp-28h]
  char v35; // [rsp+60h] [rbp-20h]
  _QWORD v36[2]; // [rsp+68h] [rbp-18h] BYREF
  char v37; // [rsp+78h] [rbp-8h]
  DXGADAPTER *v38; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v39; // [rsp+D0h] [rbp+50h] BYREF

  v33 = -1;
  v34 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2001);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 2001);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    DxgAdapterSafe = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 313;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v33);
    }
    return (unsigned int)DxgAdapterSafe;
  }
  v10 = *(_QWORD *)a1;
  v38 = 0LL;
  v39 = 0LL;
  DxgAdapterSafe = DpiGetDxgAdapterSafe(v10, &v38, &v39);
  if ( DxgAdapterSafe < 0 )
    goto LABEL_7;
  v11 = v38;
  if ( (*((_DWORD *)v38 + 744) & 4) != 0 )
  {
    WdLogSingleEntry1(3LL, v38);
    v12 = v11;
    WdLogGlobalForLineNumber = 338;
    goto LABEL_25;
  }
  v36[1] = v38;
  _InterlockedIncrement64((volatile signed __int64 *)v38 + 3);
  v13 = v38;
  v36[0] = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v13 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)v13 + 38);
  v37 = 1;
  v14 = v38;
  if ( *((_DWORD *)v38 + 50) == 1 && !*((_BYTE *)v38 + 3017) )
  {
    v15 = (_QWORD *)*((_QWORD *)v38 + 391);
    if ( v15 )
    {
      if ( !*(_BYTE *)(v15[2] + 209LL) )
      {
        v16 = v15[92];
        v17 = v15[93];
        v18 = *((_QWORD *)Current + 8);
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 8LL * (unsigned int)(*(_DWORD *)v16 - 1) + 16);
          if ( v19 )
            goto LABEL_23;
        }
        else
        {
          v19 = 0LL;
        }
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1019;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pVidSchProcess", 1019LL, 0LL, 0LL, 0LL, 0LL);
LABEL_23:
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v16 + 8) + 848LL))(v17, v19) )
        {
          WdLogSingleEntry2(4LL, v14, Current);
          WdLogGlobalForLineNumber = 356;
          DXGADAPTER::ReleaseReference(v14);
          _InterlockedDecrement((volatile signed __int32 *)v14 + 38);
          ExReleasePushLockSharedEx((char *)v14 + 136, 0LL);
          KeLeaveCriticalRegion();
          v12 = v38;
LABEL_25:
          DXGADAPTER::ReleaseReference(v12);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
          if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v33);
          return 3221225506LL;
        }
      }
    }
  }
  v22 = 0;
  if ( *((_DWORD *)v14 + 50) == 1 )
  {
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
    v25 = v38;
    v26 = HMGRTABLE::AllocHandle((unsigned int *)Current + 70, (__int64)v38, 1, 0, 0);
    *((_QWORD *)Current + 32) = 0LL;
    v27 = v26;
    ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement64((volatile signed __int64 *)v25 + 3);
    v23 = v38;
    if ( v27 )
    {
      v28 = (struct ADAPTER_RENDER *)*((_QWORD *)v38 + 391);
      if ( v28 && (v24 = DXGPROCESS::OpenAdapter(Current, v28, (*((_DWORD *)Current + 102) & 0x80) != 0), v24 < 0) )
      {
        DXGPROCESS::FreeHandleSafe(Current, v27);
        DXGADAPTER::ReleaseReferenceNoTracking(v23);
      }
      else
      {
        v22 = v27;
        v24 = 0;
      }
    }
    else
    {
      DXGADAPTER::ReleaseReferenceNoTracking(v38);
      v24 = -1073741801;
    }
  }
  else
  {
    v23 = v38;
    v24 = -1073741130;
    WdLogSingleEntry2(3LL, v38, -1073741130LL);
    WdLogGlobalForLineNumber = 3372;
  }
  DXGADAPTER::ReleaseReference(v23);
  if ( v24 >= 0 )
  {
    *((_DWORD *)a1 + 2) = v22;
    *(_QWORD *)((char *)a1 + 12) = *(_QWORD *)((char *)v23 + 412);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit, v32, v33);
    return 0LL;
  }
  else
  {
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v33);
    return (unsigned int)v24;
  }
}
