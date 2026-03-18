/*
 * XREFs of ?DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z @ 0x1401D8A50
 * Callers:
 *     NtDxgkCreateDoorbell @ 0x1401DB2E0 (NtDxgkCreateDoorbell.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x14000EB90 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14002BC70 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ??0DXGDOORBELLAPILOCKS@@QEAA@PEAVDXGHWQUEUE@@PEAJ@Z @ 0x140073C48 (--0DXGDOORBELLAPILOCKS@@QEAA@PEAVDXGHWQUEUE@@PEAJ@Z.c)
 *     ??1DXGDOORBELLAPILOCKS@@QEAA@XZ @ 0x140073D4C (--1DXGDOORBELLAPILOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?CreateDoorbell@DXGHWQUEUE@@QEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z @ 0x1401D7F48 (-CreateDoorbell@DXGHWQUEUE@@QEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x1402BA484 (-AllocateElements@-$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z.c)
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
  struct _KTHREAD **Current; // rax
  __int64 v18; // rcx
  struct _KTHREAD **v19; // r15
  __int64 CurrentProcess; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  const wchar_t *v23; // r9
  struct DXGHWQUEUE *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  int Doorbell; // r14d
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int64 v31; // rsi
  __int64 v32; // rax
  struct _KTHREAD *v33; // rdx
  unsigned int v34; // ecx
  __int64 v35; // rsi
  size_t v36; // r8
  PVOID v37; // rdx
  void *v38; // rcx
  ULONG64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // [rsp+50h] [rbp-1D8h] BYREF
  __int64 v43; // [rsp+58h] [rbp-1D0h]
  char v44; // [rsp+60h] [rbp-1C8h]
  int v45; // [rsp+68h] [rbp-1C0h] BYREF
  struct DXGHWQUEUE *v46; // [rsp+70h] [rbp-1B8h] BYREF
  unsigned int v47[20]; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-158h]
  _BYTE v49[16]; // [rsp+D8h] [rbp-150h] BYREF
  __m128i v50; // [rsp+E8h] [rbp-140h]
  __int64 v51; // [rsp+F8h] [rbp-130h]
  int v52; // [rsp+100h] [rbp-128h]
  PVOID P; // [rsp+108h] [rbp-120h] BYREF
  _BYTE v54[16]; // [rsp+110h] [rbp-118h] BYREF
  int v55; // [rsp+120h] [rbp-108h]
  _BYTE v56[208]; // [rsp+130h] [rbp-F8h] BYREF

  v3 = a1;
  v42 = -1;
  v43 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v44 = 1;
    v42 = 2220;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2220);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v42, 2220);
  memset(v47, 0, 0x48uLL);
  P = 0LL;
  v55 = 0;
  v4 = 0LL;
  v48 = 0LL;
  v5 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v5 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v47, v5, 0x48uLL);
  if ( *(_QWORD *)&v47[6] )
  {
    if ( v47[4] )
      goto LABEL_18;
LABEL_11:
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3660;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"PrivateDriverData pointer and size don't match",
      3660LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v54 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v55 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, v42);
    return -1073741811LL;
  }
  if ( v47[4] )
    goto LABEL_11;
LABEL_18:
  if ( v47[4] > 0x10 )
  {
    WdLogSingleEntry3(2LL, v47[4], 16LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3669;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"PrivateDriverDataSize 0x%I64x is greater than max permitted size 0x%I64x, returning 0x%I64x",
      v47[4],
      16LL,
      -1073741811LL,
      0LL,
      0LL);
    if ( P != v54 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v55 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( v44 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v42);
    }
    return 3221225485LL;
  }
  if ( v47[4] )
  {
    if ( !PagedPoolZeroedArray<unsigned char,16>::AllocateElements(&P) )
    {
      WdLogSingleEntry2(2LL, v47[4], -1073741801LL);
      WdLogGlobalForLineNumber = 3682;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Out of memory allocating 0x%x bytes for private driver data, returning 0x%x",
        v47[4],
        -1073741801LL,
        0LL,
        0LL,
        0LL);
      if ( P != v54 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v55 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
      if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v42);
      return 3221225495LL;
    }
    v13 = v47[4];
    v14 = *(const void **)&v47[6];
    v15 = P;
    v16 = *(_QWORD *)&v47[6] + v47[4];
    if ( v16 < *(_QWORD *)&v47[6] || v16 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v15, v14, v13);
    v4 = *(_QWORD *)&v47[6];
    v48 = *(_QWORD *)&v47[6];
    *(_QWORD *)&v47[6] = P;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v19 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v18);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 3718;
    v22 = PsGetCurrentProcess(v21);
    v23 = L"unexpected process 0x%I64x, returning 0x%I64x";
LABEL_41:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v23, v22, -1073741811LL, 0LL, 0LL, 0LL);
    goto LABEL_82;
  }
  if ( (v47[3] & 0xFFFFFFFC) != 0 )
  {
    WdLogSingleEntry2(2LL, v47[3], -1073741811LL);
    WdLogGlobalForLineNumber = 3726;
    v22 = v47[3];
    v23 = L"Reserved bits in Flags (0x%I64x) should not be set, returning 0x%I64x";
    goto LABEL_41;
  }
  v46 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v49, v47[0], Current, &v46, 0, 1);
  v24 = v46;
  if ( !v46 || !*((_BYTE *)v46 + 140) )
  {
    WdLogSingleEntry2(2LL, v47[0], -1073741811LL);
    WdLogGlobalForLineNumber = 3736;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"invalid hHwQueue 0x%I64x, returning 0x%I64x",
      v47[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_81;
  }
  v45 = 0;
  if ( (v47[3] & 1) != 0 )
  {
    v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v46 + 2) + 16LL) + 16LL) + 16LL) + 3128LL);
    v50 = *(__m128i *)(v25 + 1272);
    v51 = *(_QWORD *)(v25 + 1288);
    v52 = *(_DWORD *)(v25 + 1296);
    if ( (_mm_cvtsi128_si32(v50) & 1) == 0 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 3750;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"RequireSecondaryCpuVA flag set but adapter does not support secondary doorbell, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_81:
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v49);
LABEL_82:
      if ( P != v54 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v55 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
      if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v40, (__int64)&EventProfilerExit, v41, v42);
      return 3221225485LL;
    }
  }
  DXGDOORBELLAPILOCKS::DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v56, v46, &v45);
  if ( v45 >= 0 )
  {
    Doorbell = DXGHWQUEUE::CreateDoorbell(v24, (struct _D3DKMT_CREATE_DOORBELL *)v47);
    v45 = Doorbell;
    if ( Doorbell >= 0 )
    {
      DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v56);
      *(_QWORD *)&v47[8] = *(_QWORD *)(*((_QWORD *)v24 + 18) + 56LL);
      *(_QWORD *)&v47[10] = *(_QWORD *)(*((_QWORD *)v24 + 18) + 72LL);
      *(_QWORD *)&v47[12] = *(_QWORD *)(*((_QWORD *)v24 + 18) + 144LL);
      v47[16] = **((_DWORD **)v24 + 18);
      v31 = v47[16];
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v19 + 31));
      v32 = ((unsigned int)v31 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v32 < *((_DWORD *)v19 + 74) )
      {
        v33 = v19[35];
        v34 = *((_DWORD *)v33 + 4 * v32 + 2);
        if ( (unsigned int)v31 >> 30 == ((v34 >> 5) & 3) && (v34 & 0x1F) != 0 )
        {
          v35 = 2 * ((v31 >> 6) & 0xFFFFFF);
          if ( (*((_DWORD *)v33 + 2 * v35 + 2) & 0x2000) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 224;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              224LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *((_DWORD *)v19[35] + 2 * v35 + 2) &= ~0x2000u;
        }
      }
      v19[32] = 0LL;
      ExReleasePushLockExclusiveEx(v19 + 31, 0LL);
      KeLeaveCriticalRegion();
      *(_QWORD *)&v47[6] = v4;
      v48 = 0LL;
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (struct _D3DKMT_CREATE_DOORBELL *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v3, v47, 0x48uLL);
      if ( v47[4] )
      {
        v36 = v47[4];
        v37 = P;
        v38 = *(void **)&v47[6];
        v39 = *(_QWORD *)&v47[6] + v47[4];
        if ( v39 > MmUserProbeAddress || v39 <= *(_QWORD *)&v47[6] )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v38, v37, v36);
      }
    }
    else
    {
      DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v56);
    }
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v49);
    if ( P != v54 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v55 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v42);
    return (unsigned int)Doorbell;
  }
  else
  {
    DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v56);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v49);
    if ( P != v54 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v55 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v42);
    return (unsigned int)v45;
  }
}
