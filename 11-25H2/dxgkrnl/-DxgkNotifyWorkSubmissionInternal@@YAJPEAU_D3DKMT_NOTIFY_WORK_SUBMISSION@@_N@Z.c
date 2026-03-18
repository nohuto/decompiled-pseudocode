/*
 * XREFs of ?DxgkNotifyWorkSubmissionInternal@@YAJPEAU_D3DKMT_NOTIFY_WORK_SUBMISSION@@_N@Z @ 0x1401D4620
 * Callers:
 *     NtDxgkNotifyWorkSubmission @ 0x1401D60B0 (NtDxgkNotifyWorkSubmission.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDOORBELLAPILOCKS@@QEAA@PEAVDXGHWQUEUE@@PEAJ@Z @ 0x140073154 (--0DXGDOORBELLAPILOCKS@@QEAA@PEAVDXGHWQUEUE@@PEAJ@Z.c)
 *     ??1DXGDOORBELLAPILOCKS@@QEAA@XZ @ 0x140073258 (--1DXGDOORBELLAPILOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?DdiNotifyWorkSubmission@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_NOTIFYWORKSUBMISSION@@@Z @ 0x1401A43D0 (-DdiNotifyWorkSubmission@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_NOTIFYWORKSUBMISSION@@@Z.c)
 *     ??1HWQUEUERELEASEREFERENCE@@QEAA@XZ @ 0x1401D26CC (--1HWQUEUERELEASEREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNotifyWorkSubmissionInternal(struct _D3DKMT_NOTIFY_WORK_SUBMISSION *a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_NOTIFY_WORK_SUBMISSION *v3; // rbx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 CurrentProcess; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  const wchar_t *v10; // r9
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // r9
  int v14; // r8d
  __int64 v15; // rsi
  _QWORD *v16; // rsi
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  unsigned int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // r10
  int v26; // r8d
  __int64 v27; // rdi
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // [rsp+50h] [rbp-158h] BYREF
  __int64 v33; // [rsp+58h] [rbp-150h]
  char v34; // [rsp+60h] [rbp-148h]
  __int64 v35; // [rsp+68h] [rbp-140h] BYREF
  _QWORD *v36; // [rsp+70h] [rbp-138h] BYREF
  int v37; // [rsp+78h] [rbp-130h] BYREF
  _QWORD v38[2]; // [rsp+80h] [rbp-128h] BYREF
  _BYTE v39[24]; // [rsp+90h] [rbp-118h] BYREF
  _BYTE v40[24]; // [rsp+A8h] [rbp-100h] BYREF
  _BYTE v41[208]; // [rsp+C0h] [rbp-E8h] BYREF

  v3 = a1;
  v32 = -1;
  v33 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2223;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2223);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 2223);
  v35 = 0LL;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (struct _D3DKMT_NOTIFY_WORK_SUBMISSION *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v35, v3, 8uLL);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v4);
    v7 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 4063;
    v9 = PsGetCurrentProcess(v8);
    v10 = L"unexpected process 0x%I64x, returning 0x%I64x";
LABEL_9:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v10, v9, -1073741811LL, 0LL, 0LL, 0LL);
LABEL_49:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v32);
    }
    return v7;
  }
  if ( HIDWORD(v35) )
  {
    v7 = -1073741811;
    WdLogSingleEntry2(2LL, HIDWORD(v35), -1073741811LL);
    WdLogGlobalForLineNumber = 4071;
    v9 = HIDWORD(v35);
    v10 = L"Reserved bits in Flags (0x%I64x) should not be set, returning 0x%I64x";
    goto LABEL_9;
  }
  v36 = 0LL;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v39, Current);
  v11 = v35;
  v12 = ((unsigned int)v35 >> 6) & 0xFFFFFF;
  if ( v12 >= *((_DWORD *)Current + 74) )
    goto LABEL_18;
  v13 = *((_QWORD *)Current + 35);
  if ( (((unsigned int)v35 >> 25) & 0x60) != (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x60) )
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
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    v11 = v35;
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
    WdLogGlobalForLineNumber = 4091;
LABEL_47:
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v39);
    goto LABEL_48;
  }
  v16 = *(_QWORD **)(v15 + 16);
  _m_prefetchw(v16 + 13);
  v17 = v16[13];
  do
  {
    if ( !v17 )
    {
      v7 = -1073741811;
      WdLogSingleEntry2(3LL, v16, -1073741811LL);
      WdLogGlobalForLineNumber = 4099;
      goto LABEL_47;
    }
    v18 = v17;
    v17 = _InterlockedCompareExchange64(v16 + 13, v17 + 1, v17);
  }
  while ( v18 != v17 );
  v36 = v16;
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v39);
  v37 = 0;
  DXGDOORBELLAPILOCKS::DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v41, (struct DXGHWQUEUE *)v16, &v37);
  v19 = v37;
  if ( v37 >= 0 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v40, Current);
    v23 = v35;
    v24 = ((unsigned int)v35 >> 6) & 0xFFFFFF;
    if ( v24 < *((_DWORD *)Current + 74) )
    {
      v25 = *((_QWORD *)Current + 35);
      if ( (((unsigned int)v35 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16LL * v24 + 8) & 0x60)
        && (*(_DWORD *)(v25 + 16LL * v24 + 8) & 0x2000) == 0 )
      {
        v26 = *(_DWORD *)(v25 + 16LL * v24 + 8) & 0x1F;
        if ( v26 )
        {
          if ( v26 == 21 )
          {
            v27 = *(_QWORD *)(v25 + 16LL * v24);
            goto LABEL_37;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          v23 = v35;
        }
      }
    }
    v27 = 0LL;
LABEL_37:
    if ( v27 )
    {
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v40);
      if ( (unsigned int)**(_QWORD **)(v27 + 136) == 1 )
      {
        v29 = v16[2];
        if ( (*(_DWORD *)(v29 + 392) & 0x20) != 0 )
        {
          v7 = 0;
        }
        else
        {
          v38[1] = 0LL;
          v38[0] = v16[4];
          v7 = ADAPTER_RENDER::DdiNotifyWorkSubmission(
                 *(ADAPTER_RENDER **)(*(_QWORD *)(v29 + 16) + 16LL),
                 (struct _DXGKARG_NOTIFYWORKSUBMISSION *)v38,
                 v28);
        }
      }
      else
      {
        v7 = -1073741811;
        WdLogSingleEntry2(3LL, v27, -1073741811LL);
        WdLogGlobalForLineNumber = 4134;
      }
    }
    else
    {
      v7 = -1073741811;
      WdLogSingleEntry2(3LL, v23, -1073741811LL);
      WdLogGlobalForLineNumber = 4124;
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v40);
    }
    DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v41);
LABEL_48:
    HWQUEUERELEASEREFERENCE::~HWQUEUERELEASEREFERENCE((HWQUEUERELEASEREFERENCE *)&v36);
    goto LABEL_49;
  }
  WdLogSingleEntry1(3LL, v37);
  WdLogGlobalForLineNumber = 4111;
  DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v41);
  HWQUEUERELEASEREFERENCE::~HWQUEUERELEASEREFERENCE((HWQUEUERELEASEREFERENCE *)&v36);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v32);
  return v19;
}
