/*
 * XREFs of ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140325B10
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14001EE2C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402668CC (-MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CB2B0 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1402D5A28 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?MonitorCleanUpFromSimulatedMonitor@@YAXPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140324358 (-MonitorCleanUpFromSimulatedMonitor@@YAXPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1403261A4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 */

__int64 __fastcall CompleteTopologyTransitionCallback(struct DXGADAPTER *a1, _QWORD *a2)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // r13
  unsigned int v5; // r8d
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned int v14; // esi
  __int64 v15; // r12
  __int64 i; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r14
  __int64 v22; // rax
  MONITOR_MGR *v23; // r10
  int MonitorInstance; // eax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // [rsp+20h] [rbp-E0h]
  __int64 v33; // [rsp+30h] [rbp-D0h]
  unsigned int v34; // [rsp+50h] [rbp-B0h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v35; // [rsp+54h] [rbp-ACh] BYREF
  void *v36; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h]
  _BYTE v38[144]; // [rsp+70h] [rbp-90h] BYREF
  void *retaddr; // [rsp+148h] [rbp+48h]

  v2 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2[1];
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v38, a1, 0LL);
  v6 = COREADAPTERACCESS::AcquireExclusive((__int64)v38, v5 + 1, v5);
  v11 = 0;
  if ( v6 < 0 )
  {
    if ( v6 == -1073741130 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
      v25[3] = a1;
      v25[4] = *((int *)a1 + 104);
      v25[5] = *((unsigned int *)a1 + 103);
      WdLogGlobalForLineNumber = 8537;
    }
    else
    {
      v11 = v6;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
    return v11;
  }
  else
  {
    v12 = *((_QWORD *)a1 + 390);
    if ( v12 )
    {
      v14 = 0;
      if ( *(_DWORD *)(v12 + 96) )
      {
        do
        {
          v34 = -1;
          v15 = 1LL;
          for ( i = 0LL; (int)DmmEnumClientVidPnPathTargetsFromSource(a1, v14, i, &v34) >= 0 && v34 != -1; i = v15++ )
          {
            v35 = D3DKMDT_VOT_UNINITIALIZED;
            DmmGetVideoOutputTechnology(a1, v34, 0LL, &v35);
            if ( v35 == D3DKMDT_VOT_MIRACAST )
            {
              if ( *(_DWORD *)a2 || *((_DWORD *)a2 + 1) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 8571;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  0xFFFFFFFFLL,
                  L"(pTransContext->ActiveMiracastAdapterLuid.LowPart == 0) && (pTransContext->ActiveMiracastAdapterLuid.HighPart == 0)",
                  8571LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              *a2 = *(_QWORD *)((char *)a1 + 412);
            }
            v21 = v34;
            v22 = WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
            *(_QWORD *)(v22 + 24) = v21;
            *(_QWORD *)(v22 + 32) = a1;
            WdLogGlobalForLineNumber = 2027;
            if ( (_DWORD)v21 != -1 )
            {
              if ( !*((_QWORD *)a1 + 390) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 2049;
              }
              if ( *(_QWORD *)(*((_QWORD *)a1 + 390) + 112LL) )
              {
                v36 = retaddr;
                v37 = 0LL;
                MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v36);
                MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v23, v21, 0, (struct MONITOR_REF_ACCESSOR *)&v36);
                if ( MonitorInstance == -1073741275 )
                {
                  if ( v37 )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 2073;
                  }
                  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v36);
                  v30 = WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
                  *(_QWORD *)(v30 + 24) = a1;
                  *(_QWORD *)(v30 + 32) = v34;
                  WdLogGlobalForLineNumber = 8589;
                  MonitorCreateSimulatedMonitor((__int64)a1, v34, 4LL, v31, v32, 0, v33, (__int64)v2);
                }
                else
                {
                  if ( MonitorInstance >= 0 && !v37 )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 2080;
                  }
                  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v36);
                }
              }
              else
              {
                WdLogSingleEntry1(2LL, a1);
                WdLogGlobalForLineNumber = 2059;
              }
            }
          }
          ++v14;
        }
        while ( v14 < *(_DWORD *)(*((_QWORD *)a1 + 390) + 96LL) );
      }
      MonitorCleanUpFromSimulatedMonitor((PERESOURCE *)a1, v2);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
    return 0LL;
  }
}
