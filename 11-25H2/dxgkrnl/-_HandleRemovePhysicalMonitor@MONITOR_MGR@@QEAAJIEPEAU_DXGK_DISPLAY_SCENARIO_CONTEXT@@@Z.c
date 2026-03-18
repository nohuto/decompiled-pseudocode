/*
 * XREFs of ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403563B8
 * Callers:
 *     ?MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026804C (-MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140006350 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004ABD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??4MONITOR_REF_ACCESSOR@@QEAAAEAV0@AEBV0@@Z @ 0x140051934 (--4MONITOR_REF_ACCESSOR@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?ReportHpdDepartureSkipped@MonitorUsb4State@DxgMonitor@@QEAAXXZ @ 0x1402715D8 (-ReportHpdDepartureSkipped@MonitorUsb4State@DxgMonitor@@QEAAXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CB2B0 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x1403547A8 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAX_N@Z @ 0x1403550B8 (-_ChangeLIDStatus@DXGMONITOR@@QEAAX_N@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403552A0 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403566BC (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleRemovePhysicalMonitor(MONITOR_MGR *this, unsigned int a2, char a3, GUID *a4)
{
  __int64 v4; // r14
  int MonitorInstance; // edi
  DXGMONITOR *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  DxgMonitor::MonitorUsb4State *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // r15d
  __int128 v23; // xmm0
  DXGMONITOR *v24; // rdx
  char *v25; // rcx
  __int64 v27; // [rsp+30h] [rbp-30h] BYREF
  DXGMONITOR *v28[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v29; // [rsp+50h] [rbp-10h] BYREF
  DXGMONITOR *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v31; // [rsp+98h] [rbp+38h] BYREF

  v4 = a2;
  if ( a2 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1099;
  }
  v28[1] = 0LL;
  v28[0] = retaddr;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v28);
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v4, 0, (struct MONITOR_REF_ACCESSOR *)v28);
  if ( MonitorInstance >= 0 )
  {
    v9 = v28[1];
    if ( !v28[1] )
    {
      WdLogSingleEntry0(1LL);
      v9 = v28[1];
      WdLogGlobalForLineNumber = 1124;
    }
    v10 = 2LL;
    if ( (*((_BYTE *)v9 + 176) & 2) != 0 )
    {
      DXGMONITOR::_ChangeLIDStatus(v9, 0);
      if ( a3 )
      {
        v15 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
        MonitorInstance = 0;
        *(_QWORD *)(v15 + 24) = v4;
        *(_QWORD *)(v15 + 32) = this;
        WdLogGlobalForLineNumber = 1136;
        goto LABEL_27;
      }
      v9 = v28[1];
    }
    v16 = (DxgMonitor::MonitorUsb4State *)*((_QWORD *)v9 + 33);
    if ( !*((_BYTE *)v16 + 8) || !*((_BYTE *)v16 + 56) )
    {
      v22 = *((_DWORD *)v9 + 70);
      if ( v22 == 1 )
      {
        if ( (int)MONITOR_MGR::_RemoveMonitorFromList(this, (const struct MONITOR_REF_ACCESSOR *)v28) < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1197;
        }
        v24 = v28[1];
        v25 = (char *)this + 8;
        if ( *(_DWORD *)(*((_QWORD *)v28[1] + 30) + 16LL) )
          v10 = 5LL;
        v22 = 1;
      }
      else
      {
        v23 = *(_OWORD *)v28;
        v28[1] = 0LL;
        v29 = v23;
        MONITOR_REF_ACCESSOR::operator=((MONITOR_REF_ACCESSOR *)v28, (__int64)v9 + 288);
        MONITOR_REF_ACCESSOR::Release((DXGMONITOR *)((char *)v9 + 288));
        if ( !v28[1] )
        {
          WdLogSingleEntry2(2LL, v4, this);
          WdLogGlobalForLineNumber = 1181;
          MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v29);
          MonitorInstance = -1073741275;
          goto LABEL_27;
        }
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v29);
        v24 = v28[1];
        v25 = (char *)this + 8;
        v10 = 3LL;
      }
      MONITOR_MGR::_IssueMonitorEvent((__int64)v25, *((_DWORD *)v24 + 45), 0, v10, v22, a4);
      MonitorInstance = MONITOR_MGR::_DestroyPhysicalMonitor(
                          this,
                          (const struct MONITOR_REF_ACCESSOR *)v28,
                          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a4);
      goto LABEL_27;
    }
    DxgMonitor::MonitorUsb4State::ReportHpdDepartureSkipped(v16);
    DxgkLogCodePointPacket(
      0x7Bu,
      *((_DWORD *)v28[1] + 45),
      0,
      0,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 412LL));
    if ( (unsigned int)dword_14015B5B8 > 5 && tlgKeywordOn((__int64)&dword_14015B5B8, 4096LL) )
    {
      v27 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 412LL);
      v31 = *((_DWORD *)v28[1] + 45);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v31,
        (__int64)&unk_14013D75F,
        v19,
        v20,
        (__int64)&v31,
        (__int64)&v27);
    }
    v21 = WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
    MonitorInstance = 128;
    *(_QWORD *)(v21 + 24) = v4;
    *(_QWORD *)(v21 + 32) = this;
    WdLogGlobalForLineNumber = 1157;
  }
  else
  {
    WdLogSingleEntry2(2LL, v4, this);
    WdLogGlobalForLineNumber = 1113;
  }
LABEL_27:
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v28);
  return (unsigned int)MonitorInstance;
}
