/*
 * XREFs of ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x14035AC38
 * Callers:
 *     DxgkOpenAdapterFromLuidInternal @ 0x14018C570 (DxgkOpenAdapterFromLuidInternal.c)
 *     DxgkOpenAdapterFromLuid @ 0x14035AC20 (DxgkOpenAdapterFromLuid.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1400391A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043DA0 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402B64B0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x14036620C (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 */

__int64 __fastcall DxgkOpenAdapterFromLuidImpl(struct _D3DKMT_OPENADAPTERFROMLUID *a1, char a2, __int64 a3)
{
  __int64 v5; // rcx
  struct _D3DKMT_OPENADAPTERFROMLUID *v6; // rdx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v8; // r14
  int v9; // ebx
  __int64 v10; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  bool v15; // zf
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v17; // rax
  __int64 v18; // rdi
  _QWORD *v19; // rcx
  _DWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v26; // r12d
  struct ADAPTER_RENDER *v27; // rdx
  void *p_hAdapter; // rcx
  int v29; // [rsp+50h] [rbp-78h] BYREF
  __int64 v30; // [rsp+58h] [rbp-70h]
  char v31; // [rsp+60h] [rbp-68h]
  unsigned __int64 v32; // [rsp+68h] [rbp-60h] BYREF
  __int64 v33; // [rsp+70h] [rbp-58h]
  _DWORD *v34; // [rsp+78h] [rbp-50h]
  _QWORD v35[2]; // [rsp+80h] [rbp-48h] BYREF
  char v36; // [rsp+90h] [rbp-38h]
  struct _LUID AdapterLuid; // [rsp+98h] [rbp-30h] BYREF
  D3DKMT_HANDLE Src; // [rsp+A0h] [rbp-28h] BYREF

  v29 = -1;
  v30 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 2082;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2082);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v29, 2082);
  AdapterLuid = 0LL;
  Src = 0;
  if ( a2 )
  {
    v6 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v6 = (struct _D3DKMT_OPENADAPTERFROMLUID *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&AdapterLuid, v6, 0xCuLL);
  }
  else
  {
    AdapterLuid = a1->AdapterLuid;
    Src = a1->hAdapter;
  }
  Src = 0;
  Current = DXGPROCESS::GetCurrent(v5);
  v8 = Current;
  if ( !Current )
  {
    v9 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 449;
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
LABEL_19:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    v15 = v31 == 0;
LABEL_52:
    if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v29);
    return (unsigned int)v9;
  }
  if ( a2 )
  {
    v10 = *((_QWORD *)Current + 11);
    if ( v10 && (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v10 + 240))(0LL, 0LL, 0LL) != 0 )
    {
      v12 = (*(__int64 (__fastcall **)(struct _LUID))(*((_QWORD *)v8 + 11) + 464LL))(AdapterLuid);
      v9 = v12;
      if ( v12 < 0 )
      {
        WdLogSingleEntry1(3LL, v12);
        WdLogGlobalForLineNumber = 464;
        goto LABEL_19;
      }
    }
  }
  v32 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v17 = DXGGLOBAL::ReferenceAdapterByLuid(Global, AdapterLuid, &v32);
  v18 = (__int64)v17;
  if ( !v17 )
  {
    v9 = -1073741811;
    WdLogSingleEntry3(3LL, AdapterLuid.LowPart, AdapterLuid.HighPart, -1073741811LL);
    WdLogGlobalForLineNumber = 482;
    goto LABEL_19;
  }
  if ( (*((_DWORD *)v17 + 744) & 4) != 0 )
  {
    WdLogSingleEntry1(3LL, v17);
    WdLogGlobalForLineNumber = 492;
  }
  else
  {
    v35[1] = v17;
    _InterlockedIncrement64((volatile signed __int64 *)v17 + 3);
    v35[0] = -1LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v18 + 136, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 152));
    v36 = 1;
    if ( *(_DWORD *)(v18 + 200) != 1 )
      goto LABEL_38;
    if ( *(_BYTE *)(v18 + 3017) )
      goto LABEL_38;
    v19 = *(_QWORD **)(v18 + 3128);
    if ( !v19 || *(_BYTE *)(v19[2] + 209LL) )
      goto LABEL_38;
    v20 = (_DWORD *)v19[92];
    v34 = v20;
    v21 = v19[93];
    v33 = v21;
    v22 = *((_QWORD *)v8 + 8);
    if ( v22 )
      v22 = *(_QWORD *)(v22 + 8LL * (unsigned int)(*v20 - 1) + 16);
    if ( !v22 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1019;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pVidSchProcess", 1019LL, 0LL, 0LL, 0LL, 0LL);
      v21 = v33;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*((_QWORD *)v34 + 1) + 848LL))(v21, v22) )
    {
LABEL_38:
      if ( *(_DWORD *)(v18 + 200) == 1 )
      {
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v8 + 248));
        v26 = HMGRTABLE::AllocHandle((unsigned int *)v8 + 70, v18, 1, 0, 0);
        *((_QWORD *)v8 + 32) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v8 + 248, 0LL);
        KeLeaveCriticalRegion();
        _InterlockedIncrement64((volatile signed __int64 *)(v18 + 24));
        if ( v26 )
        {
          v27 = *(struct ADAPTER_RENDER **)(v18 + 3128);
          if ( v27 && (v9 = DXGPROCESS::OpenAdapter(v8, v27, (*((_DWORD *)v8 + 102) & 0x80) != 0), v9 < 0) )
          {
            DXGPROCESS::FreeHandleSafe(v8, v26);
            DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v18);
          }
          else
          {
            Src = v26;
            v9 = 0;
          }
        }
        else
        {
          DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v18);
          v9 = -1073741801;
        }
      }
      else
      {
        v9 = -1073741130;
        WdLogSingleEntry2(3LL, v18, -1073741130LL);
        WdLogGlobalForLineNumber = 3372;
      }
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
      if ( a2 )
      {
        p_hAdapter = &a1->hAdapter;
        if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
          p_hAdapter = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(p_hAdapter, &Src, 4uLL);
      }
      else
      {
        a1->hAdapter = Src;
      }
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
      v15 = v31 == 0;
      goto LABEL_52;
    }
    WdLogSingleEntry2(4LL, v18, v8);
    WdLogGlobalForLineNumber = 510;
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
    _InterlockedDecrement((volatile signed __int32 *)(v18 + 152));
    ExReleasePushLockSharedEx(v18 + 136, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v29);
  return 3221225506LL;
}
