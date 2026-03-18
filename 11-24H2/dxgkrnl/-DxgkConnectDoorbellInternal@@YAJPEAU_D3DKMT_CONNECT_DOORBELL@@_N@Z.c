/*
 * XREFs of ?DxgkConnectDoorbellInternal@@YAJPEAU_D3DKMT_CONNECT_DOORBELL@@_N@Z @ 0x1401D846C
 * Callers:
 *     NtDxgkConnectDoorbell @ 0x1401DB2C0 (NtDxgkConnectDoorbell.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDOORBELLAPILOCKS@@QEAA@PEAVDXGHWQUEUE@@PEAJ@Z @ 0x140073C48 (--0DXGDOORBELLAPILOCKS@@QEAA@PEAVDXGHWQUEUE@@PEAJ@Z.c)
 *     ??1DXGDOORBELLAPILOCKS@@QEAA@XZ @ 0x140073D4C (--1DXGDOORBELLAPILOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ??1HWQUEUERELEASEREFERENCE@@QEAA@XZ @ 0x1401D797C (--1HWQUEUERELEASEREFERENCE@@QEAA@XZ.c)
 *     ?Connect@DXGDOORBELL@@QEAAJXZ @ 0x1401D7B90 (-Connect@DXGDOORBELL@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkConnectDoorbellInternal(struct _D3DKMT_CONNECT_DOORBELL *a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_CONNECT_DOORBELL *v3; // rdi
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 CurrentProcess; // rax
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rax
  const wchar_t *v10; // r9
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // r9
  int v14; // r8d
  __int64 v15; // rsi
  __int64 v16; // rsi
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  unsigned int v19; // esi
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // r10
  int v26; // r8d
  DXGDOORBELL *v27; // rsi
  __int64 v28; // rcx
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // [rsp+50h] [rbp-148h] BYREF
  __int64 v35; // [rsp+58h] [rbp-140h]
  char v36; // [rsp+60h] [rbp-138h]
  __int64 v37; // [rsp+68h] [rbp-130h] BYREF
  __int64 v38; // [rsp+70h] [rbp-128h] BYREF
  int v39; // [rsp+78h] [rbp-120h] BYREF
  _BYTE v40[24]; // [rsp+80h] [rbp-118h] BYREF
  _BYTE v41[24]; // [rsp+98h] [rbp-100h] BYREF
  _BYTE v42[208]; // [rsp+B0h] [rbp-E8h] BYREF

  v3 = a1;
  v34 = -1;
  v35 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v36 = 1;
    v34 = 2222;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2222);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 2222);
  v38 = 0LL;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (struct _D3DKMT_CONNECT_DOORBELL *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v38, v3, 8uLL);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v4);
    v7 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 3845;
    v9 = PsGetCurrentProcess(v8);
    v10 = L"unexpected process 0x%I64x, returning 0x%I64x";
LABEL_9:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v10, v9, -1073741811LL, 0LL, 0LL, 0LL);
LABEL_53:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( v36 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit, v33, v34);
    }
    return v7;
  }
  if ( HIDWORD(v38) )
  {
    v7 = -1073741811;
    WdLogSingleEntry2(2LL, HIDWORD(v38), -1073741811LL);
    WdLogGlobalForLineNumber = 3853;
    v9 = HIDWORD(v38);
    v10 = L"Reserved bits in Flags (0x%I64x) should not be set, returning 0x%I64x";
    goto LABEL_9;
  }
  v37 = 0LL;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v40, Current);
  v11 = v38;
  v12 = ((unsigned int)v38 >> 6) & 0xFFFFFF;
  if ( v12 >= *((_DWORD *)Current + 74) )
    goto LABEL_18;
  v13 = *((_QWORD *)Current + 35);
  if ( (((unsigned int)v38 >> 25) & 0x60) != (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x60) )
    goto LABEL_18;
  if ( (*(_DWORD *)(v13 + 16LL * v12 + 8) & 0x2000) != 0 )
    goto LABEL_18;
  v14 = *(_DWORD *)(v13 + 16LL * v12 + 8) & 0x1F;
  if ( !v14 )
    goto LABEL_18;
  if ( v14 != 21 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    v11 = v38;
LABEL_18:
    v15 = 0LL;
    goto LABEL_19;
  }
  v15 = *(_QWORD *)(v13 + 16LL * v12);
LABEL_19:
  if ( !v15 )
  {
    v7 = -1073741811;
    WdLogSingleEntry2(3LL, v11, -1073741811LL);
    WdLogGlobalForLineNumber = 3874;
    goto LABEL_51;
  }
  v16 = *(_QWORD *)(v15 + 16);
  _m_prefetchw((const void *)(v16 + 104));
  v17 = *(_QWORD *)(v16 + 104);
  do
  {
    if ( !v17 )
    {
      v7 = -1073741811;
      WdLogSingleEntry2(3LL, v16, -1073741811LL);
      WdLogGlobalForLineNumber = 3882;
LABEL_51:
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v40);
LABEL_52:
      HWQUEUERELEASEREFERENCE::~HWQUEUERELEASEREFERENCE((HWQUEUERELEASEREFERENCE *)&v37);
      goto LABEL_53;
    }
    v18 = v17;
    v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 104), v17 + 1, v17);
  }
  while ( v18 != v17 );
  v37 = v16;
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v40);
  v39 = 0;
  DXGDOORBELLAPILOCKS::DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v42, (struct DXGHWQUEUE *)v16, &v39);
  v19 = v39;
  if ( v39 < 0 )
  {
    WdLogSingleEntry1(3LL, v39);
    WdLogGlobalForLineNumber = 3894;
    DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v42);
    HWQUEUERELEASEREFERENCE::~HWQUEUERELEASEREFERENCE((HWQUEUERELEASEREFERENCE *)&v37);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v34);
    return v19;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v41, Current);
  v23 = v38;
  v24 = ((unsigned int)v38 >> 6) & 0xFFFFFF;
  if ( v24 < *((_DWORD *)Current + 74)
    && (v25 = *((_QWORD *)Current + 35), (((unsigned int)v38 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16LL * v24 + 8) & 0x60))
    && (*(_DWORD *)(v25 + 16LL * v24 + 8) & 0x2000) == 0
    && (v26 = *(_DWORD *)(v25 + 16LL * v24 + 8) & 0x1F) != 0 )
  {
    if ( v26 != 21 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      v23 = v38;
      goto LABEL_36;
    }
    v27 = *(DXGDOORBELL **)(v25 + 16LL * v24);
  }
  else
  {
LABEL_36:
    v27 = 0LL;
  }
  if ( !v27 )
  {
    v7 = -1073741811;
    WdLogSingleEntry2(3LL, v23, -1073741811LL);
    WdLogGlobalForLineNumber = 3907;
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v41);
LABEL_39:
    DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v42);
    goto LABEL_52;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v41);
  v28 = **((_QWORD **)v27 + 17);
  if ( (_DWORD)v28 )
  {
    v29 = v28 - 1;
    if ( v29 )
    {
      if ( v29 == 2 )
      {
        v7 = -1073741811;
        WdLogSingleEntry3(3LL, v27, (int)**((_QWORD **)v27 + 17), -1073741811LL);
        WdLogGlobalForLineNumber = 3919;
      }
      else
      {
        v7 = DXGDOORBELL::Connect(v27);
      }
      goto LABEL_39;
    }
  }
  WdLogSingleEntry2(3LL, v27, 0LL);
  WdLogGlobalForLineNumber = 3928;
  DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v42);
  HWQUEUERELEASEREFERENCE::~HWQUEUERELEASEREFERENCE((HWQUEUERELEASEREFERENCE *)&v37);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v34);
  return 0LL;
}
