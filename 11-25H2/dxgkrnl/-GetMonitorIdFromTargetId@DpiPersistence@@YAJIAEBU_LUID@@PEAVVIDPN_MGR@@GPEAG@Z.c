/*
 * XREFs of ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x140366FBC
 * Callers:
 *     ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x140366E60 (-AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1402C8614 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1402C8700 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z @ 0x140367A88 (-MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z.c)
 */

__int64 __fastcall DpiPersistence::GetMonitorIdFromTargetId(
        DpiPersistence *this,
        unsigned int *a2,
        struct _LUID *a3,
        struct VIDPN_MGR *a4,
        unsigned __int16 *a5)
{
  __int64 v7; // rbx
  unsigned int v8; // r14d
  int ConnectedMonitorHandle; // eax
  __int64 v10; // rsi
  unsigned int v11; // edx
  struct HDXGMONITOR__ *v12; // r14
  int v13; // eax
  __int64 v14; // r15
  __int64 v16; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+38h] [rbp-40h]
  __int64 v19; // [rsp+38h] [rbp-40h]
  __int64 v20; // [rsp+40h] [rbp-38h]
  __int64 v21; // [rsp+40h] [rbp-38h]
  struct HDXGMONITOR__ *v22; // [rsp+50h] [rbp-28h] BYREF

  v22 = 0LL;
  v7 = (unsigned int)this;
  v8 = (unsigned __int16)a4;
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle((VIDPN_MGR *)a3, (unsigned int)this, &v22);
  v10 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle >= 0 )
  {
    v11 = v8;
    v12 = v22;
    LODWORD(v10) = MonitorGetCCDMonitorID(v22, v11, a5);
    if ( (_DWORD)v10 == -2147483643 )
      LODWORD(v10) = -1073741789;
    v13 = VIDPN_MGR::ReleaseMonitorHandle((VIDPN_MGR *)a3, v12);
    v14 = v13;
    if ( v13 < 0 )
    {
      WdLogSingleEntry5(1LL, v13, v7, v12, (int)a2[1], *a2);
      v20 = *a2;
      v18 = (int)a2[1];
      WdLogGlobalForLineNumber = 122;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"Failed to release monitor handle. (_Status = 0x%I64x, i_VidPnTargetId = 0x%I64x, MonitorHandle = 0x%I64x, i_Adap"
         "terLuid = 0x%I64x%08I64x)",
        v14,
        v7,
        (__int64)v12,
        v18,
        v20);
      return (unsigned int)v14;
    }
    if ( (int)v10 < 0 )
    {
      WdLogSingleEntry5(2LL, (int)v10, v7, v12, (int)a2[1], *a2);
      v21 = *a2;
      v19 = (int)a2[1];
      WdLogGlobalForLineNumber = 134;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to get monitor Id. (Status = 0x%I64x, i_VidPnTargetId = 0x%I64x, MonitorHandle = 0x%I64x, i_AdapterLuid ="
         " 0x%I64x%08I64x)",
        (int)v10,
        v7,
        (__int64)v12,
        v19,
        v21);
    }
  }
  else
  {
    WdLogSingleEntry4(2LL, ConnectedMonitorHandle, (unsigned int)v7, (int)a2[1], *a2);
    v17 = *a2;
    v16 = (int)a2[1];
    WdLogGlobalForLineNumber = 100;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to retrieve monitor handle. (Status = 0x%I64x, i_VidPnTargetId = 0x%I64x, i_AdapterLuid = 0x%I64x%08I64x)",
      v10,
      v7,
      v16,
      v17,
      0LL);
  }
  return (unsigned int)v10;
}
