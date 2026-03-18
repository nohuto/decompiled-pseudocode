/*
 * XREFs of ?DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z @ 0x1403A15EC
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x14042BEA0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1400345B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1400384F0 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040610 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 */

__int64 __fastcall DmmIsPresentPathInClientVidPnTopology(DXGADAPTER *a1, int a2, int a3, bool *a4)
{
  bool v4; // bl
  __int64 v9; // rax
  VIDPN_MGR *v10; // rsi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 result; // rax
  __int64 v13; // [rsp+50h] [rbp-28h] BYREF
  const struct DMMVIDPN *v14; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  if ( !a4 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 6754;
    return result;
  }
  *a4 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 6771;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6777;
  }
  v9 = *((_QWORD *)a1 + 390);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 6782;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v10 = *(VIDPN_MGR **)(v9 + 104);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v13, *(_QWORD *)(v9 + 104));
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v10);
    v14 = ClientCommittedVidPnRef;
    if ( ClientCommittedVidPnRef )
      v4 = DMMVIDPNTOPOLOGY::FindPath((const struct DMMVIDPN *)((char *)ClientCommittedVidPnRef + 96), a2, a3) != 0LL;
    *a4 = v4;
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v14, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v13 + 40));
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 6796;
  }
  return result;
}
