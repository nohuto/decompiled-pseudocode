/*
 * XREFs of ?MonitorFillMonitorDeviceInfo@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1403BF6CC
 * Callers:
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@AEBVDXGADAPTER_REFERENCE@@@Z @ 0x1403BF514 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@AEBVDXGADAPTER_REFE.c)
 * Callees:
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036128 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140036FB0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEBAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1403B24AC (-_FillMonitorDeviceInfo@DXGMONITOR@@QEBAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 */

__int64 __fastcall MonitorFillMonitorDeviceInfo(struct HDXGMONITOR__ *a1, struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a2)
{
  DXGMONITOR *v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rax
  struct _DEVICE_OBJECT *v6; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edi
  int v14; // eax
  int v15; // edi
  int v16; // ecx
  DXGMONITOR *v17[7]; // [rsp+20h] [rbp-38h] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(v17, (__int64)a1);
  v3 = v17[0];
  if ( !v17[0] )
  {
    v4 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
    WdLogGlobalForLineNumber = 4179;
LABEL_11:
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v17);
    return v4;
  }
  memset((char *)a2 + 164, 0, 0x100uLL);
  v5 = *((_QWORD *)v3 + 25);
  v6 = *(struct _DEVICE_OBJECT **)(v5 + 8);
  if ( v6 && *(_QWORD *)(v5 + 56) )
  {
    SymbolicLinkList = 0LL;
    DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v6, 0, &SymbolicLinkList);
    v12 = DeviceInterfaces;
    if ( DeviceInterfaces < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = DeviceInterfaces;
      WdLogGlobalForLineNumber = 4198;
LABEL_10:
      v4 = v12;
      goto LABEL_11;
    }
    v12 = RtlStringCchCopyW((char *)a2 + 164, 128LL, (char *)SymbolicLinkList);
    ExFreePoolWithTag(SymbolicLinkList, 0);
    if ( v12 < 0 )
      goto LABEL_10;
    *((_WORD *)a2 + 83) = 92;
  }
  v14 = DXGMONITOR::_FillMonitorDeviceInfo(v3, a2);
  v15 = 0;
  if ( v14 != -1071841279 )
    v15 = v14;
  if ( v15 >= 0 )
  {
    v16 = *((_DWORD *)a2 + 5);
    if ( (v16 & 1) == 0 && !*((_WORD *)a2 + 18) )
      *((_DWORD *)a2 + 5) = v16 | 2;
  }
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v17);
  return (unsigned int)v15;
}
