/*
 * XREFs of ?DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z @ 0x1401D37A0
 * Callers:
 *     NtDxgkCreateDoorbell @ 0x1401D6050 (NtDxgkCreateDoorbell.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x14001E170 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14002B430 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0DXGDOORBELLAPILOCKS@@QEAA@PEAVDXGHWQUEUE@@PEAJ@Z @ 0x140073154 (--0DXGDOORBELLAPILOCKS@@QEAA@PEAVDXGHWQUEUE@@PEAJ@Z.c)
 *     ??1DXGDOORBELLAPILOCKS@@QEAA@XZ @ 0x140073258 (--1DXGDOORBELLAPILOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?CreateDoorbell@DXGHWQUEUE@@QEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z @ 0x1401D2C98 (-CreateDoorbell@DXGHWQUEUE@@QEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x14032359C (-AllocateElements@-$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z.c)
 */

__int64 __fastcall DxgkCreateDoorbellInternal(struct _D3DKMT_CREATE_DOORBELL *a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_CREATE_DOORBELL *v3; // r12
  __int64 v4; // r13
  const void *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  size_t v13; // r8
  const void *v14; // rdx
  PVOID v15; // r9
  ULONG64 v16; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v18; // rcx
  struct DXGPROCESS *v19; // r15
  __int64 CurrentProcess; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  const wchar_t *v23; // r9
  struct DXGHWQUEUE *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r8
  int Doorbell; // r14d
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned int v36; // ecx
  __int64 v37; // rsi
  size_t v38; // r8
  PVOID v39; // rdx
  void *v40; // rcx
  ULONG64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // [rsp+50h] [rbp-1D8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-1D0h]
  char v46; // [rsp+60h] [rbp-1C8h]
  int v47; // [rsp+68h] [rbp-1C0h] BYREF
  struct DXGHWQUEUE *v48; // [rsp+70h] [rbp-1B8h] BYREF
  unsigned int v49[20]; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v50; // [rsp+D0h] [rbp-158h]
  _BYTE v51[16]; // [rsp+D8h] [rbp-150h] BYREF
  __m128i v52; // [rsp+E8h] [rbp-140h]
  __int64 v53; // [rsp+F8h] [rbp-130h]
  int v54; // [rsp+100h] [rbp-128h]
  PVOID P; // [rsp+108h] [rbp-120h] BYREF
  _BYTE v56[16]; // [rsp+110h] [rbp-118h] BYREF
  int v57; // [rsp+120h] [rbp-108h]
  _BYTE v58[208]; // [rsp+130h] [rbp-F8h] BYREF

  v3 = a1;
  v44 = -1;
  v45 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v46 = 1;
    v44 = 2220;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2220);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v44, 2220);
  memset(v49, 0, 0x48uLL);
  P = 0LL;
  v57 = 0;
  v4 = 0LL;
  v50 = 0LL;
  v5 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v5 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v49, v5, 0x48uLL);
  if ( *(_QWORD *)&v49[6] )
  {
    if ( v49[4] )
      goto LABEL_18;
LABEL_11:
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3660;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"PrivateDriverData pointer and size don't match",
      3660LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v56 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v57 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, v44);
    return -1073741811LL;
  }
  if ( v49[4] )
    goto LABEL_11;
LABEL_18:
  if ( v49[4] > 0x10 )
  {
    WdLogSingleEntry3(2LL, v49[4], 16LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3669;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"PrivateDriverDataSize 0x%I64x is greater than max permitted size 0x%I64x, returning 0x%I64x",
      v49[4],
      16LL,
      -1073741811LL,
      0LL,
      0LL);
    if ( P != v56 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v57 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v44);
    }
    return 3221225485LL;
  }
  if ( v49[4] )
  {
    if ( !PagedPoolZeroedArray<unsigned char,16>::AllocateElements(&P) )
    {
      WdLogSingleEntry2(2LL, v49[4], -1073741801LL);
      WdLogGlobalForLineNumber = 3682;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Out of memory allocating 0x%x bytes for private driver data, returning 0x%x",
        v49[4],
        -1073741801LL,
        0LL,
        0LL,
        0LL);
      if ( P != v56 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v57 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
      if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v44);
      return 3221225495LL;
    }
    v13 = v49[4];
    v14 = *(const void **)&v49[6];
    v15 = P;
    v16 = *(_QWORD *)&v49[6] + v49[4];
    if ( v16 < *(_QWORD *)&v49[6] || v16 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v15, v14, v13);
    v4 = *(_QWORD *)&v49[6];
    v50 = *(_QWORD *)&v49[6];
    *(_QWORD *)&v49[6] = P;
  }
  Current = DXGPROCESS::GetCurrent();
  v19 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v18);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 3718;
    v22 = PsGetCurrentProcess(v21);
    v23 = L"unexpected process 0x%I64x, returning 0x%I64x";
LABEL_41:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v23, v22, -1073741811LL, 0LL, 0LL, 0LL);
    goto LABEL_82;
  }
  if ( (v49[3] & 0xFFFFFFFC) != 0 )
  {
    WdLogSingleEntry2(2LL, v49[3], -1073741811LL);
    WdLogGlobalForLineNumber = 3726;
    v22 = v49[3];
    v23 = L"Reserved bits in Flags (0x%I64x) should not be set, returning 0x%I64x";
    goto LABEL_41;
  }
  v48 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v51, v49[0], Current, &v48, 0, 1);
  v24 = v48;
  if ( !v48 || !*((_BYTE *)v48 + 140) )
  {
    WdLogSingleEntry2(2LL, v49[0], -1073741811LL);
    WdLogGlobalForLineNumber = 3736;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"invalid hHwQueue 0x%I64x, returning 0x%I64x",
      v49[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_81;
  }
  v47 = 0;
  if ( (v49[3] & 1) != 0 )
  {
    v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v48 + 2) + 16LL) + 16LL) + 16LL) + 3128LL);
    v52 = *(__m128i *)(v25 + 1272);
    v53 = *(_QWORD *)(v25 + 1288);
    v54 = *(_DWORD *)(v25 + 1296);
    if ( (_mm_cvtsi128_si32(v52) & 1) == 0 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 3750;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"RequireSecondaryCpuVA flag set but adapter does not support secondary doorbell, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_81:
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v51);
LABEL_82:
      if ( P != v56 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v57 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
      if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v42, (__int64)&EventProfilerExit, v43, v44);
      return 3221225485LL;
    }
  }
  DXGDOORBELLAPILOCKS::DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v58, v48, &v47);
  if ( v47 >= 0 )
  {
    Doorbell = DXGHWQUEUE::CreateDoorbell(v24, (struct _D3DKMT_CREATE_DOORBELL *)v49, v26, v27);
    v47 = Doorbell;
    if ( Doorbell >= 0 )
    {
      DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v58);
      *(_QWORD *)&v49[8] = *(_QWORD *)(*((_QWORD *)v24 + 18) + 56LL);
      *(_QWORD *)&v49[10] = *(_QWORD *)(*((_QWORD *)v24 + 18) + 72LL);
      *(_QWORD *)&v49[12] = *(_QWORD *)(*((_QWORD *)v24 + 18) + 144LL);
      v49[16] = **((_DWORD **)v24 + 18);
      v33 = v49[16];
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v19 + 248));
      v34 = ((unsigned int)v33 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v34 < *((_DWORD *)v19 + 74) )
      {
        v35 = *((_QWORD *)v19 + 35);
        v36 = *(_DWORD *)(v35 + 16 * v34 + 8);
        if ( (unsigned int)v33 >> 30 == ((v36 >> 5) & 3) && (v36 & 0x1F) != 0 )
        {
          v37 = 2 * ((v33 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v35 + 8 * v37 + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 224;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              224LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(*((_QWORD *)v19 + 35) + 8 * v37 + 8) &= ~0x2000u;
        }
      }
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *((_QWORD *)v19 + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v19 + 248, 0LL);
      KeLeaveCriticalRegion();
      *(_QWORD *)&v49[6] = v4;
      v50 = 0LL;
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (struct _D3DKMT_CREATE_DOORBELL *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v3, v49, 0x48uLL);
      if ( v49[4] )
      {
        v38 = v49[4];
        v39 = P;
        v40 = *(void **)&v49[6];
        v41 = *(_QWORD *)&v49[6] + v49[4];
        if ( v41 > MmUserProbeAddress || v41 <= *(_QWORD *)&v49[6] )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v40, v39, v38);
      }
    }
    else
    {
      DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v58);
    }
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v51);
    if ( P != v56 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v57 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit, v32, v44);
    return (unsigned int)Doorbell;
  }
  else
  {
    DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v58);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v51);
    if ( P != v56 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v57 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v44);
    return (unsigned int)v47;
  }
}
