/*
 * XREFs of ?DmmIsHdrAllowedOnTarget@@YA_NPEAVDXGADAPTER@@I@Z @ 0x140314B08
 * Callers:
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x140276A70 (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x1403C64A0 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsHdrAllowedOnVidPnPath@DMMVIDPNPRESENTPATH@@QEBA_NXZ @ 0x1403146CC (-IsHdrAllowedOnVidPnPath@DMMVIDPNPRESENTPATH@@QEBA_NXZ.c)
 *     ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x140315010 (-GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z.c)
 */

char __fastcall DmmIsHdrAllowedOnTarget(struct DXGADAPTER *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  VIDPN_MGR *v5; // rdi
  DMMVIDPNPRESENTPATH *PathFromTargetInClientVidPn; // rax
  char IsHdrAllowedOnVidPnPath; // bl
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 305204) )
    return 0;
  v4 = *((_QWORD *)a1 + 390);
  if ( !v4 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 15795;
    return 0;
  }
  v5 = *(VIDPN_MGR **)(v4 + 104);
  if ( !v5 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 15803;
    return 0;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v9, *(_QWORD *)(v4 + 104));
  PathFromTargetInClientVidPn = VIDPN_MGR::GetPathFromTargetInClientVidPn(v5, v2);
  if ( PathFromTargetInClientVidPn )
  {
    IsHdrAllowedOnVidPnPath = DMMVIDPNPRESENTPATH::IsHdrAllowedOnVidPnPath(PathFromTargetInClientVidPn);
  }
  else
  {
    WdLogSingleEntry1(3LL, v2);
    WdLogGlobalForLineNumber = 15823;
    IsHdrAllowedOnVidPnPath = 1;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v9 + 40));
  return IsHdrAllowedOnVidPnPath;
}
