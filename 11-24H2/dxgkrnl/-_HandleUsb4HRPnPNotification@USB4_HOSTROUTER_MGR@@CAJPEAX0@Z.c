/*
 * XREFs of ?_HandleUsb4HRPnPNotification@USB4_HOSTROUTER_MGR@@CAJPEAX0@Z @ 0x140278F50
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AddHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z @ 0x140277984 (-AddHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?RemoveHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z @ 0x1402785A0 (-RemoveHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall USB4_HOSTROUTER_MGR::_HandleUsb4HRPnPNotification(
        char *NotificationStructure,
        USB4_HOSTROUTER_MGR *Context,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+28h] [rbp-18h]
  char v21; // [rsp+30h] [rbp-10h]

  v19 = -1;
  v20 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 7062;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)NotificationStructure, (__int64)&EventProfilerEnter, a3, 7062);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 7062);
  WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  WdLogGlobalForLineNumber = 515;
  if ( !NotificationStructure || !Context )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 520;
    goto LABEL_26;
  }
  v9 = *(_QWORD *)(NotificationStructure + 20) - *(_QWORD *)&GUID_DEVINTERFACE_USB4_VIRTUAL_POWER_PDO.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(NotificationStructure + 28) - *(_QWORD *)GUID_DEVINTERFACE_USB4_VIRTUAL_POWER_PDO.Data4;
  if ( v9 )
  {
    WdLogSingleEntry1(2LL, NotificationStructure + 20);
    WdLogGlobalForLineNumber = 528;
LABEL_26:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v19);
    }
    return 3221225485LL;
  }
  v10 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v10 )
  {
    v11 = USB4_HOSTROUTER_MGR::AddHostRouter(Context, *((const struct _UNICODE_STRING **)NotificationStructure + 5));
LABEL_19:
    v13 = v11;
    goto LABEL_21;
  }
  v12 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v12 )
    v12 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  if ( !v12 )
  {
    v11 = USB4_HOSTROUTER_MGR::RemoveHostRouter(Context, *((const struct _UNICODE_STRING **)NotificationStructure + 5));
    goto LABEL_19;
  }
  v13 = -1073741811;
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v19);
  return v13;
}
