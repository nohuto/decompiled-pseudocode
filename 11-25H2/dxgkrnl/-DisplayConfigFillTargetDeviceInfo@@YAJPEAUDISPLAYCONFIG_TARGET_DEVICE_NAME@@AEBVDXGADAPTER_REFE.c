/*
 * XREFs of ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@AEBVDXGADAPTER_REFERENCE@@@Z @ 0x1403BF514
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140415E90 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x140036A80 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14003EB9C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?MonitorFillMonitorDeviceInfo@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1403BF6CC (-MonitorFillMonitorDeviceInfo@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 */

__int64 __fastcall DisplayConfigFillTargetDeviceInfo(
        struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a1,
        const struct DXGADAPTER_REFERENCE *a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rbx
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rcx
  const struct DMMVIDEOPRESENTTARGET *i; // rcx
  struct HDXGMONITOR__ *v14; // rcx
  _QWORD *v16; // rax
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( !a1 || *(_DWORD *)a1 != 2 || *((_DWORD *)a1 + 1) != 420 )
  {
    WdLogSingleEntry1(3LL, a1);
    WdLogGlobalForLineNumber = 4749;
    return 3221225485LL;
  }
  *(_QWORD *)((char *)a1 + 28) = 0LL;
  *((_DWORD *)a1 + 5) = 0;
  memset((char *)a1 + 164, 0, 0x100uLL);
  memset((char *)a1 + 36, 0, 0x80uLL);
  *((_DWORD *)a1 + 6) = -1;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 3120LL) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v17, v5);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 120) + 72LL));
  v6 = *(_QWORD **)(v5 + 120);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v6, *((_DWORD *)a1 + 4));
  if ( !TargetById )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v10, v11);
    v16[3] = *((unsigned int *)a1 + 4);
    v16[4] = a1;
    v16[5] = *(_QWORD *)a2;
    WdLogGlobalForLineNumber = 4782;
    if ( v6 )
      ReferenceCounted::Release((ReferenceCounted *)(v6 + 8));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v17 + 40));
    return 3221225485LL;
  }
  v12 = (_QWORD *)v6[3];
  if ( v12 == v6 + 3 )
  {
    for ( i = 0LL; i != TargetById; i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v6, i) )
    {
LABEL_7:
      if ( *((_DWORD *)i + 20) == *((_DWORD *)TargetById + 20) )
        ++*((_DWORD *)a1 + 8);
    }
    goto LABEL_10;
  }
  i = (const struct DMMVIDEOPRESENTTARGET *)(v12 - 1);
  if ( i != TargetById )
    goto LABEL_7;
LABEL_10:
  *((_DWORD *)a1 + 6) = *((_DWORD *)TargetById + 20);
  v14 = (struct HDXGMONITOR__ *)*((_QWORD *)TargetById + 14);
  if ( v14 )
    v4 = MonitorFillMonitorDeviceInfo(v14, a1);
  else
    *((_DWORD *)a1 + 5) |= 2u;
  if ( v6 )
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 8));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v17 + 40));
  return v4;
}
