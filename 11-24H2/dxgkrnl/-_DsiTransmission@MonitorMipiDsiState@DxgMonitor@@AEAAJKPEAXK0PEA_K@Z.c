/*
 * XREFs of ?_DsiTransmission@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z @ 0x14027F154
 * Callers:
 *     ?OnIoctl@MonitorMipiDsiState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x14027EE40 (-OnIoctl@MonitorMipiDsiState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x14002FE7C (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x140034CD4 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140066C98 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140066F1C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?_ValidateMipiDsiPackets@MonitorMipiDsiState@DxgMonitor@@AEAAJPEAU_DXGK_DSI_TRANSMISSION@@@Z @ 0x14027F6D0 (-_ValidateMipiDsiPackets@MonitorMipiDsiState@DxgMonitor@@AEAAJPEAU_DXGK_DSI_TRANSMISSION@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorMipiDsiState::_DsiTransmission(
        DxgMonitor::MonitorMipiDsiState *this,
        unsigned int a2,
        _BYTE *a3,
        unsigned int a4,
        _BYTE *a5,
        __int64 a6)
{
  unsigned __int64 v6; // rbp
  __int64 v8; // rdi
  unsigned __int64 *v10; // r14
  __int64 result; // rax
  __int64 v12; // rax
  int v13; // ecx
  unsigned int v14; // r9d
  unsigned int v15; // edx
  DxgMonitor::MonitorMipiDsiState *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi

  v6 = a4;
  v8 = a2;
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 237;
  }
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 238;
  }
  v10 = (unsigned __int64 *)a6;
  if ( !a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 239;
  }
  *v10 = 0LL;
  a6 = (unsigned int)Feature_MipiDsi2__private_featureState;
  if ( (Feature_MipiDsi2__private_featureState & 0x10) == 0 )
  {
    LODWORD(a6) = Feature_MipiDsi2__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_MipiDsi2__private_descriptor, a6, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(a6, 3, (__int64)&Feature_MipiDsi2__private_descriptor);
  }
  if ( !(unsigned __int8)ExIsManufacturingModeEnabled() )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 266;
    return 3221225659LL;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12) < 0xC002 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 273;
    return 3221225659LL;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this) )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 280;
    return 3221225659LL;
  }
  if ( (unsigned int)v8 < 0x20 )
  {
    WdLogSingleEntry2(2LL, 32LL, v8);
    WdLogGlobalForLineNumber = 290;
    return 3221225507LL;
  }
  if ( (_DWORD)v8 != (_DWORD)v6 )
  {
    WdLogSingleEntry2(2LL, v8, v6);
    WdLogGlobalForLineNumber = 300;
    return 3221225507LL;
  }
  if ( a3 == a5 )
  {
    v13 = (unsigned __int8)a3[4];
    *v10 = v6;
    a3[5] = -1;
    if ( (unsigned __int8)(v13 - 1) > 0x7Fu )
    {
      *((_WORD *)a3 + 7) = 256;
    }
    else
    {
      v14 = *((unsigned __int16 *)a3 + 5);
      v15 = 14 * v13 + v14 + 18;
      if ( (unsigned int)v8 < v15
        || (v16 = (DxgMonitor::MonitorMipiDsiState *)*(unsigned int *)a3, (unsigned int)v8 < (unsigned int)v16)
        || (unsigned int)v16 < v15 )
      {
        *((_WORD *)a3 + 7) = 256;
        WdLogSingleEntry3(3LL, v8, *(unsigned int *)a3, v15);
        WdLogGlobalForLineNumber = 343;
      }
      else if ( (unsigned __int16)v14 <= 0xFFF7u )
      {
        if ( (unsigned int)v16 <= 0x11000 )
        {
          if ( (int)DxgMonitor::MonitorMipiDsiState::_ValidateMipiDsiPackets(v16, (struct _DXGK_DSI_TRANSMISSION *)a3) >= 0 )
          {
            MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&a5, (DxgMonitor::MonitorMipiDsiState *)((char *)this + 32));
            v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
            v18 = (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17 + 112LL))(v17, a3);
            MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&a5);
            if ( (int)v18 < 0 )
            {
              WdLogSingleEntry2(3LL, v18, *((unsigned __int16 *)a3 + 6));
              WdLogGlobalForLineNumber = 402;
            }
          }
          else
          {
            WdLogSingleEntry1(3LL, (unsigned __int8)a3[5]);
            WdLogGlobalForLineNumber = 386;
          }
        }
        else
        {
          *((_WORD *)a3 + 7) = 256;
          WdLogSingleEntry2(3LL, v16, 69632LL);
          WdLogGlobalForLineNumber = 376;
        }
      }
      else
      {
        *((_WORD *)a3 + 7) = 256;
        WdLogSingleEntry2(3LL, v14, 65527LL);
        WdLogGlobalForLineNumber = 359;
      }
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, a3, a5);
    result = 3221225705LL;
    WdLogGlobalForLineNumber = 308;
  }
  return result;
}
