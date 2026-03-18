/*
 * XREFs of ?DmmCheckMonitorPowerState@@YAJPEAXI@Z @ 0x140250C5C
 * Callers:
 *     DxgkCheckMonitorPowerState @ 0x14040F790 (DxgkCheckMonitorPowerState.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x140034684 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x140038864 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x140043668 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402D0038 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x14032A060 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14035604C (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z @ 0x140356248 (-IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1403B1968 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 */

__int64 __fastcall DmmCheckMonitorPowerState(DXGADAPTER *this, unsigned int a2)
{
  __int64 v3; // rbp
  VIDPN_MGR *v4; // rbx
  unsigned int v5; // edi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  const struct DMMVIDPN *v7; // rbx
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  int v9; // edx
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  const struct DMMVIDPN *v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  v4 = *(VIDPN_MGR **)(*((_QWORD *)this + 390) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v13, (__int64)v4);
  v5 = 0;
  if ( !DXGADAPTER::IsVSyncAvailable(this, v3) )
  {
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v4);
    v12 = ClientCommittedVidPnRef;
    v7 = ClientCommittedVidPnRef;
    if ( !ClientCommittedVidPnRef )
    {
      WdLogSingleEntry2(3LL, this, -1071775738LL);
      WdLogGlobalForLineNumber = 15309;
LABEL_4:
      auto_rc<DMMVIDPN const>::reset((__int64 *)&v12, 0LL);
      v5 = -1071775738;
      goto LABEL_16;
    }
    v11 = 0;
    if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
                (const struct DMMVIDPN *)((char *)ClientCommittedVidPnRef + 96),
                v3,
                0LL,
                &v11) < 0 )
    {
      WdLogSingleEntry2(3LL, v3, this);
      WdLogGlobalForLineNumber = 15331;
      goto LABEL_4;
    }
    PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget((const struct DMMVIDPN *)((char *)v7 + 96), v11);
    if ( !PathFromTarget )
    {
      WdLogSingleEntry1(2LL, v11);
      WdLogGlobalForLineNumber = 15341;
      goto LABEL_4;
    }
    if ( (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(
                         *(_QWORD *)(*((_QWORD *)PathFromTarget + 12) + 96LL),
                         0LL) == 12 )
    {
      v5 = -2145517568;
    }
    else if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn(this)
           || v9 != 14
           || DMMVIDPN::IsPathFromSourcePoweredOff(v7, v3) )
    {
      v5 = -1071775738;
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v12, 0LL);
  }
LABEL_16:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v13 + 40));
  return v5;
}
