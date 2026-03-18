/*
 * XREFs of ?DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403D0B20
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14000F84C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?MonitorDestroyAllSameTypeSimulatedMonitor@@YAJPEAXW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1403D0C54 (-MonitorDestroyAllSameTypeSimulatedMonitor@@YAJPEAXW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_.c)
 */

__int64 __fastcall DisplayConfigDestroySimulatedMonitors(struct DXGADAPTER *a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rbp
  unsigned int v6; // r8d
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v13; // rax
  _BYTE v14[144]; // [rsp+50h] [rbp-B8h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2256;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pContext != NULL", 2256LL, 0LL, 0LL, 0LL, 0LL);
  }
  v5 = a2[1];
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, a1, 0LL);
  v7 = COREADAPTERACCESS::AcquireExclusive((__int64)v14, v6 + 1, v6);
  if ( v7 >= 0 )
  {
    LOBYTE(v11) = *((_BYTE *)a2 + 4) != 0;
    v7 = MonitorDestroyAllSameTypeSimulatedMonitor(a1, *(unsigned int *)a2, v5, v11);
  }
  else if ( v7 == -1073741130 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
    v13[3] = a1;
    v13[4] = *((int *)a1 + 104);
    v13[5] = *((unsigned int *)a1 + 103);
    WdLogGlobalForLineNumber = 2277;
    goto LABEL_6;
  }
  v2 = v7;
LABEL_6:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
  return v2;
}
