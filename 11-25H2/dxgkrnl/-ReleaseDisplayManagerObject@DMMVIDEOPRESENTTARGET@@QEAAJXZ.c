/*
 * XREFs of ?ReleaseDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1402587D4
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x14008CF78 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ?SetTargetUsage@DMMVIDEOPRESENTTARGET@@QEAAXW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x14008DECC (-SetTargetUsage@DMMVIDEOPRESENTTARGET@@QEAAXW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 *     ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x140250DCC (-DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1402D5110 (-GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?ReleaseTargetOwnershipNoDmm@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x140408C38 (-ReleaseTargetOwnershipNoDmm@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGET::ReleaseDisplayManagerObject(DMMVIDEOPRESENTTARGET *this)
{
  VIDPN_MGR *v2; // rdi
  struct DXGADAPTER *ContainingAdapter; // rsi
  int v4; // eax
  const struct DMMVIDPNPRESENTPATH *PathFromTargetInClientVidPn; // rax

  if ( !*((_QWORD *)this + 5) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  if ( *((_QWORD *)this + 68) )
  {
    v2 = *(VIDPN_MGR **)(*((_QWORD *)this + 5) + 88LL);
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v2);
    v4 = DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnershipNoDmm(
           *((DXGDISPLAYMANAGEROBJECT **)this + 68),
           *(struct _LUID *)((char *)ContainingAdapter + 412),
           *((_DWORD *)this + 6));
    if ( v4 < 0 )
    {
      WdLogSingleEntry1(1LL, v4);
      WdLogGlobalForLineNumber = 720;
    }
    PathFromTargetInClientVidPn = VIDPN_MGR::GetPathFromTargetInClientVidPn(v2, *((_DWORD *)this + 6));
    if ( PathFromTargetInClientVidPn )
      *(_BYTE *)(3984LL * *(unsigned int *)(*((_QWORD *)PathFromTargetInClientVidPn + 11) + 24LL)
               + *(_QWORD *)(*((_QWORD *)ContainingAdapter + 390) + 128LL)
               + 765) = 1;
    *((_QWORD *)this + 68) = 0LL;
  }
  return 0LL;
}
