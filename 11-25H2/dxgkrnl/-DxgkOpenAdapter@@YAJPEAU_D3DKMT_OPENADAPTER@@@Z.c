/*
 * XREFs of ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1403427F0
 * Callers:
 *     DxgkOpenAdapterFromDeviceName @ 0x140342220 (DxgkOpenAdapterFromDeviceName.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x14003962C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043B6C (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402FF830 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     DpiGetDxgAdapterSafe @ 0x140365E40 (DpiGetDxgAdapterSafe.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x14037DFF0 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
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
  unsigned int v26; // r15d
  struct ADAPTER_RENDER *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // [rsp+50h] [rbp-30h] BYREF
  __int64 v33; // [rsp+58h] [rbp-28h]
  char v34; // [rsp+60h] [rbp-20h]
  _QWORD v35[2]; // [rsp+68h] [rbp-18h] BYREF
  char v36; // [rsp+78h] [rbp-8h]
  DXGADAPTER *v37; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v38; // [rsp+D0h] [rbp+50h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2001);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 2001);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    DxgAdapterSafe = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 311;
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
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v32);
    }
    return (unsigned int)DxgAdapterSafe;
  }
  v10 = *(_QWORD *)a1;
  v37 = 0LL;
  v38 = 0LL;
  DxgAdapterSafe = DpiGetDxgAdapterSafe(v10, &v37, &v38);
  if ( DxgAdapterSafe < 0 )
    goto LABEL_7;
  v11 = v37;
  if ( (*((_DWORD *)v37 + 744) & 4) != 0 )
  {
    WdLogSingleEntry1(3LL, v37);
    v12 = v11;
    WdLogGlobalForLineNumber = 336;
    goto LABEL_25;
  }
  v35[1] = v37;
  _InterlockedIncrement64((volatile signed __int64 *)v37 + 3);
  v13 = v37;
  v35[0] = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v13 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)v13 + 38);
  v36 = 1;
  v14 = v37;
  if ( *((_DWORD *)v37 + 50) == 1 && !*((_BYTE *)v37 + 3017) )
  {
    v15 = (_QWORD *)*((_QWORD *)v37 + 391);
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
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pVidSchProcess", 1019LL, 0LL, 0LL, 0LL, 0LL);
LABEL_23:
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v16 + 8) + 848LL))(v17, v19) )
        {
          WdLogSingleEntry2(4LL, v14, Current);
          WdLogGlobalForLineNumber = 354;
          DXGADAPTER::ReleaseReference(v14);
          _InterlockedDecrement((volatile signed __int32 *)v14 + 38);
          ExReleasePushLockSharedEx((char *)v14 + 136, 0LL);
          KeLeaveCriticalRegion();
          v12 = v37;
LABEL_25:
          DXGADAPTER::ReleaseReference(v12);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
          if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v32);
          return 3221225506LL;
        }
      }
    }
  }
  v22 = 0;
  if ( *((_DWORD *)v14 + 50) == 1 )
  {
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
    v25 = v37;
    v26 = HMGRTABLE::AllocHandle((unsigned int *)Current + 70, (__int64)v37, 1, 0, 0);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)Current + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement64((volatile signed __int64 *)v25 + 3);
    v23 = v37;
    if ( v26 )
    {
      v27 = (struct ADAPTER_RENDER *)*((_QWORD *)v37 + 391);
      if ( v27 && (v24 = DXGPROCESS::OpenAdapter(Current, v27, (*((_DWORD *)Current + 102) & 0x80) != 0), v24 < 0) )
      {
        DXGPROCESS::FreeResourceHandleNoRefSafe(Current, v26);
        DXGADAPTER::ReleaseReferenceNoTracking(v23);
      }
      else
      {
        v22 = v26;
        v24 = 0;
      }
    }
    else
    {
      DXGADAPTER::ReleaseReferenceNoTracking(v37);
      v24 = -1073741801;
    }
  }
  else
  {
    v23 = v37;
    v24 = -1073741130;
    WdLogSingleEntry2(3LL, v37, -1073741130LL);
    WdLogGlobalForLineNumber = 3315;
  }
  DXGADAPTER::ReleaseReference(v23);
  if ( v24 >= 0 )
  {
    *((_DWORD *)a1 + 2) = v22;
    *(_QWORD *)((char *)a1 + 12) = *(_QWORD *)((char *)v23 + 412);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v32);
    return 0LL;
  }
  else
  {
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v32);
    return (unsigned int)v24;
  }
}
