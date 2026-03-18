/*
 * XREFs of ?DxgkDestroyDoorbellInternal@@YAJPEAU_D3DKMT_DESTROY_DOORBELL@@_N@Z @ 0x1401D9494
 * Callers:
 *     NtDxgkDestroyDoorbell @ 0x1401DB300 (NtDxgkDestroyDoorbell.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDOORBELLAPILOCKS@@QEAA@PEAVDXGHWQUEUE@@PEAJ@Z @ 0x140073C48 (--0DXGDOORBELLAPILOCKS@@QEAA@PEAVDXGHWQUEUE@@PEAJ@Z.c)
 *     ??1DXGDOORBELLAPILOCKS@@QEAA@XZ @ 0x140073D4C (--1DXGDOORBELLAPILOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ??1HWQUEUERELEASEREFERENCE@@QEAA@XZ @ 0x1401D797C (--1HWQUEUERELEASEREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDoorbell@DXGHWQUEUE@@QEAAXXZ @ 0x1401D8240 (-DestroyDoorbell@DXGHWQUEUE@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyDoorbellInternal(struct _D3DKMT_DESTROY_DOORBELL *a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_DESTROY_DOORBELL *v3; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  struct DXGPROCESS *v6; // rsi
  __int64 CurrentProcess; // rax
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // r9
  int v14; // r8d
  unsigned int *v15; // rbx
  unsigned int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // edx
  __int64 v20; // rbx
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // [rsp+50h] [rbp-138h] BYREF
  int v31; // [rsp+58h] [rbp-130h] BYREF
  __int64 v32; // [rsp+60h] [rbp-128h]
  char v33; // [rsp+68h] [rbp-120h]
  int v34; // [rsp+70h] [rbp-118h] BYREF
  __int64 v35; // [rsp+78h] [rbp-110h] BYREF
  _BYTE v36[32]; // [rsp+80h] [rbp-108h] BYREF
  _BYTE v37[208]; // [rsp+A0h] [rbp-E8h] BYREF

  v3 = a1;
  v31 = -1;
  v32 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2221;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2221);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 2221);
  v30 = 0;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (struct _D3DKMT_DESTROY_DOORBELL *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v30, v3, 4uLL);
  Current = DXGPROCESS::GetCurrent();
  v6 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v5);
    v8 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 3975;
    v10 = PsGetCurrentProcess(v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"unexpected process 0x%I64x, returning 0x%I64x",
      v10,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_36:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v31);
    }
    return v8;
  }
  v35 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v36, Current);
  v11 = v30;
  v12 = (v30 >> 6) & 0xFFFFFF;
  if ( v12 >= *((_DWORD *)v6 + 74) )
    goto LABEL_15;
  v13 = *((_QWORD *)v6 + 35);
  if ( ((v30 >> 25) & 0x60) != (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x60) )
    goto LABEL_15;
  if ( (*(_DWORD *)(v13 + 16LL * v12 + 8) & 0x2000) != 0 )
    goto LABEL_15;
  v14 = *(_DWORD *)(v13 + 16LL * v12 + 8) & 0x1F;
  if ( !v14 )
    goto LABEL_15;
  if ( v14 != 21 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    v11 = v30;
LABEL_15:
    v15 = 0LL;
    goto LABEL_16;
  }
  v15 = *(unsigned int **)(v13 + 16LL * v12);
LABEL_16:
  if ( !v15 )
  {
    v8 = -1073741811;
    WdLogSingleEntry2(3LL, v11, -1073741811LL);
    WdLogGlobalForLineNumber = 3995;
LABEL_34:
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v36);
LABEL_35:
    HWQUEUERELEASEREFERENCE::~HWQUEUERELEASEREFERENCE((HWQUEUERELEASEREFERENCE *)&v35);
    goto LABEL_36;
  }
  v16 = *v15;
  v17 = (*v15 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v17 < *((_DWORD *)v6 + 74) )
  {
    v18 = *((_QWORD *)v6 + 35);
    v19 = *(_DWORD *)(v18 + 16 * v17 + 8);
    if ( ((v16 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60) && (v19 & 0x2000) == 0 && (v19 & 0x1F) != 0 )
      *(_DWORD *)(v18 + 16LL * ((v16 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  v20 = *((_QWORD *)v15 + 2);
  _m_prefetchw((const void *)(v20 + 104));
  v21 = *(_QWORD *)(v20 + 104);
  do
  {
    if ( !v21 )
    {
      v8 = -1073741811;
      WdLogSingleEntry2(3LL, v20, -1073741811LL);
      WdLogGlobalForLineNumber = 4008;
      goto LABEL_34;
    }
    v22 = v21;
    v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 104), v21 + 1, v21);
  }
  while ( v22 != v21 );
  v35 = v20;
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v36);
  v34 = 0;
  DXGDOORBELLAPILOCKS::DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v37, (struct DXGHWQUEUE *)v20, &v34);
  v8 = v34;
  if ( v34 < 0 )
  {
    WdLogSingleEntry1(3LL, v34);
    WdLogGlobalForLineNumber = 4021;
    DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v37);
    goto LABEL_35;
  }
  DXGHWQUEUE::DestroyDoorbell((DXGHWQUEUE *)v20, v23, v24);
  DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v37);
  HWQUEUERELEASEREFERENCE::~HWQUEUERELEASEREFERENCE((HWQUEUERELEASEREFERENCE *)&v35);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v31);
  return 0LL;
}
