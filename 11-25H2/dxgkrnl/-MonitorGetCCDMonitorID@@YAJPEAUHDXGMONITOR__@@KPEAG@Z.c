/*
 * XREFs of ?MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z @ 0x140367A88
 * Callers:
 *     _lambda_f44fa2b0187a36f67bd7075047dd61ad_::operator() @ 0x1401BF5A4 (_lambda_f44fa2b0187a36f67bd7075047dd61ad_--operator().c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1402C82B4 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x140366FBC (-GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE44@Z @ 0x140367198 (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 *     ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x14036783C (-DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x140419880 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140032C94 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ??4MONITOR_REF_ACCESSOR@@QEAAAEAV0@AEBV0@@Z @ 0x140051934 (--4MONITOR_REF_ACCESSOR@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z @ 0x140367C10 (-GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z.c)
 */

__int64 __fastcall MonitorGetCCDMonitorID(struct HDXGMONITOR__ *a1, unsigned int a2, unsigned __int16 *a3)
{
  struct HDXGMONITOR__ *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int CCDMonitorID; // ebx
  void *v10; // [rsp+20h] [rbp-40h] BYREF
  struct HDXGMONITOR__ *v11; // [rsp+28h] [rbp-38h]
  struct HDXGMONITOR__ *v12; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-28h] BYREF
  struct HDXGMONITOR__ *v14; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+68h] [rbp+8h]

  v5 = a1;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v11 = 0LL;
  v10 = retaddr;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v10);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v10);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v10);
  v11 = v5;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v10);
  v12 = v5;
  MonitorResourceLock::AcquireShared((PERESOURCE)((char *)v5 + 40));
  v6 = 2LL;
  v13[0] = retaddr;
  v7 = 2LL;
  do
  {
    v13[1] = v5;
    --v7;
  }
  while ( v7 );
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v13);
  if ( *((_DWORD *)v5 + 70) != 1 && *((_QWORD *)v5 + 37) )
  {
    MONITOR_REF_ACCESSOR::operator=((MONITOR_REF_ACCESSOR *)&v10, (__int64)v5 + 288);
    v5 = v11;
  }
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v12);
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3409;
  }
  v14 = v5;
  if ( v5 )
    MonitorResourceLock::AcquireShared((PERESOURCE)((char *)v5 + 40));
  v15[0] = retaddr;
  do
  {
    v15[1] = v5;
    --v6;
  }
  while ( v6 );
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v15);
  CCDMonitorID = DXGMONITOR::GetCCDMonitorID((struct HDXGMONITOR__ *)((char *)v5 + 16), 1, a2, a3);
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v14);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v10);
  return CCDMonitorID;
}
