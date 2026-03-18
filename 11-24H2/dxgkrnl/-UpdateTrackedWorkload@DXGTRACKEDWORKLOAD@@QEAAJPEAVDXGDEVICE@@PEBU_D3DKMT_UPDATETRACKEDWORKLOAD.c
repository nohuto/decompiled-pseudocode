/*
 * XREFs of ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x140203FC4
 * Callers:
 *     NtDxgkUpdateTrackedWorkload @ 0x1402051D0 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Boost@TrackedWorkloadMonitor@@QEAAXPEAVRollingStats@@@Z @ 0x1400A08C4 (-Boost@TrackedWorkloadMonitor@@QEAAXPEAVRollingStats@@@Z.c)
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ @ 0x140203074 (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ.c)
 *     ?Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z @ 0x140203EB4 (-Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::UpdateTrackedWorkload(
        DXGTRACKEDWORKLOAD *this,
        struct DXGDEVICE *a2,
        const struct _D3DKMT_UPDATETRACKEDWORKLOAD *a3,
        unsigned __int64 a4)
{
  int v5; // r14d
  unsigned int VBlankOffsetHundredsNS; // ecx
  unsigned int v9; // edx
  unsigned int AbsoluteQPC_high; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // r8d
  __int64 v16; // rsi
  UINT64 FenceSubmissionValue; // r9
  UINT BeginTrackedWorkloadIndex; // r11d
  __int64 v19; // rdx
  char v20; // al
  LARGE_INTEGER PerformanceCounter; // rax
  int v22; // ecx
  __int64 v23; // rcx
  const wchar_t *v24; // r9
  __int64 v26; // [rsp+20h] [rbp-68h]
  UINT64 v27; // [rsp+28h] [rbp-60h]
  _BYTE v28[32]; // [rsp+50h] [rbp-38h] BYREF

  v5 = 0;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v28, (struct _KTHREAD **)this + 5);
  VBlankOffsetHundredsNS = a3->FinishDeadline.VBlankOffsetHundredsNS;
  v9 = *((_DWORD *)this + 28);
  if ( VBlankOffsetHundredsNS >= v9
    || (AbsoluteQPC_high = HIDWORD(a3->FinishDeadline.AbsoluteQPC), AbsoluteQPC_high >= v9)
    || VBlankOffsetHundredsNS == AbsoluteQPC_high )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v24 = L"Invalid index, returning 0x%I64x";
    WdLogGlobalForLineNumber = 1826;
    goto LABEL_29;
  }
  v11 = 0;
  v12 = *((_DWORD *)this + 26);
  *((_QWORD *)this + 39) = a3->GPUCalibrationTimestamp;
  while ( 1 )
  {
    if ( v11 >= v12 )
    {
      v5 = -2147483622;
      WdLogSingleEntry2(2LL, this, -2147483622LL);
      WdLogGlobalForLineNumber = 1835;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"TrackedWorkload 0x%I64x: Unable to find available entry, returning 0x%I64x",
        (__int64)this,
        -2147483622LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_30;
    }
    v13 = 136LL * v11;
    v14 = *((_QWORD *)this + 4);
    if ( !*(_BYTE *)(v13 + v14 + 32) )
      break;
    ++v11;
  }
  *(_BYTE *)(v13 + v14 + 32) = 1;
  v15 = 0;
  v16 = *((_QWORD *)this + 4);
  FenceSubmissionValue = a3->FenceSubmissionValue;
  BeginTrackedWorkloadIndex = a3->BeginTrackedWorkloadIndex;
  while ( 1 )
  {
    if ( v15 >= *((_DWORD *)this + 27) )
    {
      v5 = BeginTrackedWorkloadIndex != 0 ? -1073741811 : -2147483622;
      WdLogSingleEntry3(2LL, this, a3->FenceSubmissionValue, v5);
      v27 = a3->FenceSubmissionValue;
      WdLogGlobalForLineNumber = 1842;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"TrackedWorkload 0x%I64x: Unable to find entry for pairID %d, returning 0x%I64x",
        (__int64)this,
        v27,
        v5,
        0LL,
        0LL);
      goto LABEL_30;
    }
    v19 = *((_QWORD *)this + 3) + 24LL * v15;
    v20 = *(_BYTE *)v19;
    if ( !BeginTrackedWorkloadIndex )
      break;
    if ( v20 && *(_QWORD *)(v19 + 8) == FenceSubmissionValue )
    {
      *(_QWORD *)(v13 + v16 + 128) = v19;
      goto LABEL_17;
    }
LABEL_15:
    ++v15;
  }
  if ( v20 )
    goto LABEL_15;
  *(_QWORD *)(v13 + v16 + 128) = v19;
  *(_BYTE *)v19 = 1;
  *(_QWORD *)(*(_QWORD *)(v13 + v16 + 128) + 8LL) = FenceSubmissionValue;
  *(_QWORD *)(*(_QWORD *)(v13 + v16 + 128) + 16LL) = 0LL;
LABEL_17:
  *(_BYTE *)(v13 + v16 + 120) = 1;
  *(_DWORD *)(v13 + v16) = a3->FinishDeadline.VBlankOffsetHundredsNS;
  *(_DWORD *)(v13 + v16 + 8) = HIDWORD(a3->FinishDeadline.AbsoluteQPC);
  *(_BYTE *)(v13 + v16 + 4) = a3->BeginTrackedWorkloadIndex != 0;
  *(_BYTE *)(v13 + v16 + 12) = a3->EndTrackedWorkloadIndex != 0;
  *(_QWORD *)(v13 + v16 + 16) = a3->FenceCompletedValue;
  *(_QWORD *)(v13 + v16 + 40) = *(_QWORD *)&a3[1].hDevice;
  *(_QWORD *)(v13 + v16 + 48) = a3->CPUCalibrationTimestamp;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  *(LARGE_INTEGER *)(v13 + v16 + 112) = PerformanceCounter;
  if ( *(_BYTE *)(v13 + v16 + 12) )
    goto LABEL_30;
  v22 = *((_DWORD *)this + 286);
  if ( !v22 )
  {
    v23 = *(_QWORD *)&a3->FinishDeadline.Type;
    *(_QWORD *)(v13 + v16 + 24) = v23;
    if ( v23 - PerformanceCounter.QuadPart < 0 )
      TrackedWorkloadMonitor::Boost(
        (DXGTRACKEDWORKLOAD *)((char *)this + 328),
        (DXGTRACKEDWORKLOAD *)((char *)this + 232));
    goto LABEL_21;
  }
  if ( v22 != 1 )
  {
    v5 = -1073741811;
    WdLogSingleEntry2(2LL, *((int *)this + 286), -1073741811LL);
    v26 = *((int *)this + 286);
    WdLogGlobalForLineNumber = 1881;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Unknown deadline type %d, returning 0x%I64x",
      v26,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_30;
  }
  *(_BYTE *)(v13 + v16 + 104) = 1;
  *(_QWORD *)(v13 + v16 + 24) = 0LL;
  if ( MonitoredFenceHelper::Update(
         (MonitoredFenceHelper *)(v13 + v16 + 56),
         *((struct ADAPTER_RENDER ***)this + 2),
         *(_QWORD *)&a3->FinishDeadline.Type,
         a4) >= 0 )
  {
LABEL_21:
    v5 = DXGTRACKEDWORKLOAD::EndTrackedWorkload(this);
    goto LABEL_30;
  }
  v5 = -1073741811;
  WdLogSingleEntry1(2LL, -1073741811LL);
  v24 = L"Couldn't update fence, returning 0x%I64x";
  WdLogGlobalForLineNumber = 1874;
LABEL_29:
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v24, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
LABEL_30:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
  return (unsigned int)v5;
}
