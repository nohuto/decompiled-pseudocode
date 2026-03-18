/*
 * XREFs of DxgkIsMonitorConnected @ 0x1401AD630
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x14026BA4C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?MonitorGetUsageClass@@YAJPEAUHDXGMONITOR__@@PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEA_N@Z @ 0x1402DEB68 (-MonitorGetUsageClass@@YAJPEAUHDXGMONITOR__@@PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEA_N@Z.c)
 *     ?MonitorIsMonitorConnected@@YAJPEAXIEPEAE@Z @ 0x1402DF8D8 (-MonitorIsMonitorConnected@@YAJPEAXIEPEAE@Z.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402E06D8 (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402E09E0 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 */

__int64 __fastcall DxgkIsMonitorConnected(
        struct _LUID a1,
        unsigned int a2,
        unsigned __int8 a3,
        bool a4,
        unsigned __int8 *a5)
{
  __int64 v6; // r14
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v10; // rax
  DXGADAPTER *v11; // rdi
  __int64 UsageClass; // r15
  int v13; // eax
  int IsMonitorConnected; // eax
  int MonitorHandle; // eax
  struct HDXGMONITOR__ *v16; // r14
  void *v17; // r8
  bool v18; // [rsp+50h] [rbp-B0h] BYREF
  struct _LUID v19; // [rsp+58h] [rbp-A8h] BYREF
  struct HDXGMONITOR__ *v20; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v22[144]; // [rsp+70h] [rbp-90h] BYREF

  v18 = a4;
  v6 = a2;
  v19 = a1;
  v21 = 0LL;
  if ( !a5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 10355;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specifies a NULL pHasMonitorConnected in DxgkIsMonitorConnected function.",
      10355LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  *a5 = 0;
  Global = DXGGLOBAL::GetGlobal();
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v21);
  v11 = v10;
  if ( !v10 )
  {
    WdLogSingleEntry2(2LL, v19.HighPart, a1.LowPart);
    WdLogGlobalForLineNumber = 10369;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkIsMonitorConnected function.",
      v19.HighPart,
      a1.LowPart,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(v10) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10376;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"!pAdapter->IsCoreResourceSharedOwner()",
      10376LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, v11, 0LL);
  DXGADAPTER::ReleaseReference(v11);
  if ( *((_QWORD *)v11 + 390) )
  {
    v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22, 0LL);
    UsageClass = v13;
    if ( v13 >= 0 )
    {
      if ( *((_BYTE *)v11 + 3017) )
      {
        WdLogSingleEntry2(4LL, v19.HighPart, a1.LowPart);
        WdLogGlobalForLineNumber = 10411;
        LODWORD(UsageClass) = -1073741130;
      }
      else
      {
        IsMonitorConnected = MonitorIsMonitorConnected(v11, v6, a3, a5);
        UsageClass = IsMonitorConnected;
        if ( IsMonitorConnected >= 0 )
        {
          if ( *a5 && !v18 )
          {
            v20 = 0LL;
            MonitorHandle = MonitorGetMonitorHandle(v11, v6, a3, DxgkIsMonitorConnected, &v20);
            UsageClass = MonitorHandle;
            if ( MonitorHandle >= 0 )
            {
              v16 = v20;
              v19.LowPart = 0;
              v18 = 0;
              UsageClass = (int)MonitorGetUsageClass(v20, (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&v19, &v18);
              MonitorReleaseMonitorHandle(v11, v16, v17);
              if ( (int)UsageClass >= 0 )
              {
                *a5 = v19.LowPart == 0;
              }
              else
              {
                WdLogSingleEntry2(2LL, v16, UsageClass);
                WdLogGlobalForLineNumber = 10454;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Failed to check monitor HMD state on monitor 0x%I64x with status (0x%I64x)",
                  (__int64)v16,
                  UsageClass,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            else
            {
              WdLogSingleEntry4(2LL, v6, v19.HighPart, a1.LowPart, MonitorHandle);
              WdLogGlobalForLineNumber = 10440;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Failed to get monitor handle on target 0x%I64x from adapter 0x%I64x0x%I64x with status (0x%I64x)",
                v6,
                v19.HighPart,
                a1.LowPart,
                UsageClass,
                0LL);
            }
          }
        }
        else
        {
          WdLogSingleEntry4(2LL, v6, v19.HighPart, a1.LowPart, IsMonitorConnected);
          WdLogGlobalForLineNumber = 10426;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to check monitor connectivity on target 0x%I64x from adapter 0x%I64x0x%I64x with status (0x%I64x)",
            v6,
            v19.HighPart,
            a1.LowPart,
            UsageClass,
            0LL);
        }
      }
    }
    else
    {
      WdLogSingleEntry3(2LL, v19.HighPart, a1.LowPart, v13);
      WdLogGlobalForLineNumber = 10404;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to acquire shared access on adapter luid (0x%I64x::0x%I64x) with status (0x%I64x)",
        v19.HighPart,
        a1.LowPart,
        UsageClass,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, v19.HighPart, a1.LowPart);
    WdLogGlobalForLineNumber = 10391;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specified adapter (0x%I64x%08I64x) in DxgkIsMonitorConnected function is NOT a display adapter.",
      v19.HighPart,
      a1.LowPart,
      0LL,
      0LL,
      0LL);
    LODWORD(UsageClass) = -1073741811;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v22);
  return (unsigned int)UsageClass;
}
