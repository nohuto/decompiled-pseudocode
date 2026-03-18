/*
 * XREFs of ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x14038AC80
 * Callers:
 *     BmlIsSupportedByMonitorTargetMode @ 0x14038A904 (BmlIsSupportedByMonitorTargetMode.c)
 *     ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x14038A9B0 (-IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMO.c)
 * Callees:
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036128 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x14038B110 (-_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_M.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODE::IsSupportedByMonitor(
        DMMVIDPNTARGETMODE *this,
        char a2,
        unsigned __int8 *const a3,
        enum _D3DKMDT_MODE_PRUNING_REASON *const a4)
{
  char v4; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rsi
  int v13; // edi
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r14d
  unsigned __int8 v18; // r14
  int v19; // eax
  int v20; // esi
  __int64 result; // rax
  int IsSupportedModeInternal; // eax
  unsigned __int8 v23; // [rsp+30h] [rbp-48h] BYREF
  char v24[3]; // [rsp+31h] [rbp-47h] BYREF
  int v25; // [rsp+34h] [rbp-44h] BYREF
  int v26; // [rsp+38h] [rbp-40h] BYREF
  int v27; // [rsp+3Ch] [rbp-3Ch] BYREF
  int v28; // [rsp+40h] [rbp-38h]
  __int64 v29; // [rsp+48h] [rbp-30h]
  _QWORD v30[5]; // [rsp+50h] [rbp-28h] BYREF
  char v31; // [rsp+C0h] [rbp+48h] BYREF
  char v32; // [rsp+C8h] [rbp+50h]
  unsigned __int8 *v33; // [rsp+D0h] [rbp+58h]
  enum _D3DKMDT_MODE_PRUNING_REASON *v34; // [rsp+D8h] [rbp+60h]

  v34 = a4;
  v33 = a3;
  v32 = a2;
  v4 = 0;
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 66;
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 67;
  }
  *a3 = 0;
  *a4 = D3DKMDT_MPR_UNINITIALIZED;
  if ( !*((_QWORD *)this + 5) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v9 = *((_QWORD *)this + 5);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 87;
    return 3223192337LL;
  }
  v10 = *(_QWORD *)(v9 + 112);
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL, v9);
    WdLogGlobalForLineNumber = 101;
    return 3223192337LL;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 96) + 112LL);
  v29 = v11;
  if ( v11 )
  {
    if ( this == (DMMVIDPNTARGETMODE *)-72LL )
    {
      v20 = -1073741811;
    }
    else
    {
      MONITOR_MGR::AcquireMonitorShared(v30, v11);
      if ( v30[0] )
      {
        v12 = *(_QWORD *)(v30[0] + 232LL);
        v13 = 0;
        v25 = 0;
        v31 = 0;
        if ( ((*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 232) + 40LL))(*(_QWORD *)(v12 + 232)) == 1
           || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 232) + 40LL))(*(_QWORD *)(v12 + 232)) == 2
           || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 232) + 40LL))(*(_QWORD *)(v12 + 232)) == 3
           || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 232) + 40LL))(*(_QWORD *)(v12 + 232)) == 14)
          && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 232) + 104LL))(*(_QWORD *)(v12 + 232)) )
        {
          WdLogSingleEntry1(7LL, v12);
          v13 = 1;
          WdLogGlobalForLineNumber = 1769;
          v4 = 1;
LABEL_27:
          v31 = v4;
          v17 = 0;
          v25 = v13;
          goto LABEL_28;
        }
        v15 = *(unsigned int *)(v12 + 112);
        if ( (unsigned int)(v15 - 1) <= 1 )
        {
          LOBYTE(v14) = a2;
          IsSupportedModeInternal = DxgMonitor::MonitorModes::_IsSupportedModeInternal(
                                      v12,
                                      (char *)this + 72,
                                      v15,
                                      v14,
                                      &v31,
                                      &v25);
          v4 = v31;
          v17 = IsSupportedModeInternal;
          v13 = v25;
        }
        else
        {
          v26 = 0;
          v27 = 0;
          v23 = 0;
          v24[0] = 0;
          if ( (_DWORD)v15 != 3 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1793;
          }
          LOBYTE(v14) = a2;
          v17 = DxgMonitor::MonitorModes::_IsSupportedModeInternal(v12, (char *)this + 72, 2LL, v14, &v23, &v26);
          if ( v17 >= 0 )
          {
            LOBYTE(v16) = v32;
            v17 = DxgMonitor::MonitorModes::_IsSupportedModeInternal(v12, (char *)this + 72, 1LL, v16, v24, &v27);
            if ( v17 >= 0 )
            {
              v4 = v23;
              v18 = v24[0];
              v19 = v27;
              v13 = v26;
              v28 = v27;
              if ( v23 != v24[0] )
              {
                WdLogSingleEntry5(7LL, v12, v23, v26, (unsigned __int8)v24[0], v27);
                WdLogGlobalForLineNumber = 1833;
                WdLogSingleEntry5(
                  7LL,
                  *((unsigned int *)this + 21),
                  *((unsigned int *)this + 22),
                  *((unsigned int *)this + 23),
                  *((unsigned int *)this + 24),
                  (int)(*((_DWORD *)this + 30) << 29) >> 29);
                WdLogGlobalForLineNumber = 1841;
                WdLogSingleEntry3(
                  7LL,
                  *((unsigned int *)this + 25),
                  *((unsigned int *)this + 26),
                  *((_QWORD *)this + 14));
                v19 = v28;
                WdLogGlobalForLineNumber = 1847;
              }
              if ( v18 || v4 )
                v4 = 1;
              if ( v18 )
                v13 = v19;
              goto LABEL_27;
            }
          }
        }
LABEL_28:
        CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v30);
        v20 = v17;
        if ( v17 >= 0 )
        {
          *v33 = v4;
          *v34 = v13;
          return 0LL;
        }
        goto LABEL_31;
      }
      v20 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 3106;
      CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v30);
    }
LABEL_31:
    WdLogSingleEntry3(2LL, this, v29, v20);
    result = (unsigned int)v20;
    WdLogGlobalForLineNumber = 134;
    return result;
  }
  WdLogSingleEntry2(3LL, *(unsigned int *)(v10 + 24), this);
  result = 3223192376LL;
  WdLogGlobalForLineNumber = 114;
  return result;
}
