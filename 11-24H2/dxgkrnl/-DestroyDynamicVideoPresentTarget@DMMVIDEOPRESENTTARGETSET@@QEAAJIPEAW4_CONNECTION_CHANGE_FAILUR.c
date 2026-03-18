/*
 * XREFs of ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14025F0F4
 * Callers:
 *     ?DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14025D82C (-DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1400369D0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x140063768 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x14008F6BC (-RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x14008F740 (-RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x14008F790 (-RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1403DCCE4 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::DestroyDynamicVideoPresentTarget(
        VIDPN_MGR **this,
        unsigned int a2,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a3)
{
  __int64 v4; // rsi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  DMMVIDEOPRESENTTARGET *v7; // rbx
  struct DXGADAPTER *ContainingAdapter; // rax
  struct DXGADAPTER *v10; // rax
  struct DXGADAPTER *v11; // rax
  DMMVIDEOPRESENTTARGET *v12; // rcx
  DMMVIDEOPRESENTTARGET *v13; // rcx

  v4 = a2;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)this, a2);
  v7 = TargetById;
  if ( !TargetById )
  {
    *(_DWORD *)a3 = 1;
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this[11]);
    WdLogSingleEntry4(1LL, (unsigned int)v4, ContainingAdapter, -1073741811LL, 1LL);
    WdLogGlobalForLineNumber = 1615;
    return 3221225485LL;
  }
  if ( !*((_QWORD *)TargetById + 59) )
  {
    *(_DWORD *)a3 = 5;
    v10 = VIDPN_MGR::GetContainingAdapter(this[11]);
    WdLogSingleEntry4(1LL, v4, v10, -1073741811LL, 2LL);
    WdLogGlobalForLineNumber = 1628;
    return 3221225485LL;
  }
  DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(TargetById);
  v11 = VIDPN_MGR::GetContainingAdapter(this[11]);
  DMMVIDEOPRESENTTARGET::SetPowerState(v7, v11, 0);
  v12 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)v7 + 66);
  if ( v12 )
    DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(v12, v7);
  v13 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)v7 + 59);
  if ( v13 )
    DMMVIDEOPRESENTTARGET::RemoveChildTarget(v13, v7);
  DMMVIDEOPRESENTTARGETSET::RemoveTarget((DMMVIDEOPRESENTTARGETSET *)this, v7);
  return 0LL;
}
