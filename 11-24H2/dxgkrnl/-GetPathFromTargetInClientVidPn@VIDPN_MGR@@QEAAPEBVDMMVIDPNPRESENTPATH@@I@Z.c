/*
 * XREFs of ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x140315010
 * Callers:
 *     ?ReleaseDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x14025F6D4 (-ReleaseDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 *     ?DmmIsHdrAllowedOnTarget@@YA_NPEAVDXGADAPTER@@I@Z @ 0x140314B08 (-DmmIsHdrAllowedOnTarget@@YA_NPEAVDXGADAPTER@@I@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1400345B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1400384F0 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040610 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x140315880 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

const struct DMMVIDPNPRESENTPATH *__fastcall VIDPN_MGR::GetPathFromTargetInClientVidPn(
        struct _KTHREAD **this,
        unsigned int a2)
{
  __int64 v3; // rsi
  struct DMMVIDPNPRESENTPATH *v4; // rbx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  DMMVIDPNTOPOLOGY *v6; // rdi
  int PathSourceFromTarget; // eax
  struct DMMVIDPNPRESENTPATH *Path; // rdi
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  if ( this[8] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1713;
  }
  v4 = 0LL;
  v11 = 0LL;
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef((VIDPN_MGR *)this);
  auto_rc<DMMVIDPN const>::reset(&v11, (__int64)ClientCommittedVidPnRef);
  if ( v11 )
  {
    v6 = (DMMVIDPNTOPOLOGY *)(v11 + 96);
    if ( v11 == -96 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1732;
    }
    PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v6, v3);
    if ( PathSourceFromTarget == -1 )
    {
      WdLogSingleEntry1(7LL, v3);
      WdLogGlobalForLineNumber = 1741;
    }
    else
    {
      Path = DMMVIDPNTOPOLOGY::FindPath(v6, PathSourceFromTarget, v3);
      if ( !Path )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1751;
      }
      v4 = Path;
    }
    auto_rc<DMMVIDPN const>::reset(&v11, 0LL);
    return v4;
  }
  else
  {
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry1(7LL, ContainingAdapter);
    WdLogGlobalForLineNumber = 1722;
    auto_rc<DMMVIDPN const>::reset(&v11, 0LL);
    return 0LL;
  }
}
