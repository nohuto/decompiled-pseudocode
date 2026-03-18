/*
 * XREFs of ?_AcquireFirstModeInfo@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x14027A6BC
 * Callers:
 *     ?AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x140270B10 (-AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCE.c)
 * Callees:
 *     ?_CreateMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEBUDMMMONITORSOURCEMODE@12@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403C0DC0 (-_CreateMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEBUDMMMONITORSOURCEMODE@12@PEAPEAU_.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_AcquireFirstModeInfo(
        DxgMonitor::MonitorModes *this,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *v11; // rdx
  int v12; // edi
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v13; // rbx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v14; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 30) )
  {
    v7 = (_QWORD *)((char *)this + 128);
    v14 = 0LL;
    v8 = (_QWORD *)*((_QWORD *)this + 16);
    if ( v8 == v7 )
      goto LABEL_7;
    v9 = v8 - 12;
    if ( !v8 )
      v9 = 0LL;
    if ( !v9 )
    {
LABEL_7:
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2417;
    }
    v10 = (_QWORD *)*v7;
    if ( (_QWORD *)*v7 == v7 )
    {
      v11 = 0LL;
    }
    else
    {
      v11 = (const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *)(v10 - 12);
      if ( !v10 )
        v11 = 0LL;
    }
    v12 = DxgMonitor::MonitorModes::_CreateMonitorModeEnumerator(this, v11, &v14);
    if ( v12 >= 0 )
    {
      v13 = v14;
      if ( !v14 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2422;
      }
      *a2 = v13;
    }
    return (unsigned int)v12;
  }
  else
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    result = 1075708747LL;
    WdLogGlobalForLineNumber = 2405;
  }
  return result;
}
