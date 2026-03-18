/*
 * XREFs of ?AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1403F81A4
 * Callers:
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401BF658 (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14003E58C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetNextVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAPEAVVIDPNTARGETINFO@@XZ @ 0x14006D280 (-GetNextVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAPEAVVIDPNTARGETINFO@@XZ.c)
 *     ?Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1401C0E00 (-Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z.c)
 */

__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::AddVidPnTargetInfo(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        struct DXGADAPTER *a2)
{
  unsigned int v2; // edi
  __int64 v6; // rbx
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rsi
  VIDPNTARGETINFO *NextVidPnTargetInfo; // rax
  __int64 v11; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1296;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->IsCoreResourceSharedOwner()",
      1296LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = *(_QWORD *)(*((_QWORD *)a2 + 390) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v11, v6);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v6 + 120) + 72LL));
  v7 = *(_QWORD **)(v6 + 120);
  v8 = (_QWORD *)v7[3];
  if ( v8 == v7 + 3 )
    NextTarget = 0LL;
  else
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v8 - 1);
  while ( NextTarget )
  {
    if ( *((_QWORD *)NextTarget + 14) )
    {
      NextVidPnTargetInfo = DISPLAYDIAGNOSTICADAPTERDATA::GetNextVidPnTargetInfo(this);
      if ( !NextVidPnTargetInfo )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1318;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"No memory available for adding a new display target",
          1318LL,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( v7 )
          ReferenceCounted::Release((ReferenceCounted *)(v7 + 8));
        v2 = -1073741801;
        goto LABEL_19;
      }
      if ( (int)VIDPNTARGETINFO::Initialize(NextVidPnTargetInfo, a2, NextTarget) >= 0 )
        ++*((_DWORD *)this + 489);
    }
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v7, NextTarget);
  }
  if ( v7 )
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 8));
LABEL_19:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v11 + 40));
  return v2;
}
