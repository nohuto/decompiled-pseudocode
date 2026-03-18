/*
 * XREFs of ?DmmIsHdrAllowedOnTarget@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1402D4C08
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140415E90 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1402D5110 (-GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?IsHdrAllowedOnVidPnPath@DMMVIDPNPRESENTPATH@@QEBA_NXZ @ 0x1402D6414 (-IsHdrAllowedOnVidPnPath@DMMVIDPNPRESENTPATH@@QEBA_NXZ.c)
 */

bool __fastcall DmmIsHdrAllowedOnTarget(struct DXGADAPTER *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  VIDPN_MGR *v5; // rdi
  DMMVIDPNPRESENTPATH *PathFromTargetInClientVidPn; // rax
  bool IsHdrAllowedOnVidPnPath; // bl
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 305124) )
    return 0;
  v4 = *((_QWORD *)a1 + 390);
  if ( !v4 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 15783;
    return 0;
  }
  v5 = *(VIDPN_MGR **)(v4 + 104);
  if ( !v5 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 15791;
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
    WdLogGlobalForLineNumber = 15811;
    IsHdrAllowedOnVidPnPath = 1;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v9 + 40));
  return IsHdrAllowedOnVidPnPath;
}
