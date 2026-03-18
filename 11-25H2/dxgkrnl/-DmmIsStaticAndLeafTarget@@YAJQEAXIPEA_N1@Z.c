/*
 * XREFs of ?DmmIsStaticAndLeafTarget@@YAJQEAXIPEA_N1@Z @ 0x1403C7080
 * Callers:
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1403C6F88 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x140038FF0 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x140056794 (-IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

__int64 __fastcall DmmIsStaticAndLeafTarget(DXGADAPTER *a1, unsigned int a2, bool *a3, bool *a4)
{
  __int64 v4; // r14
  __int64 v8; // rbp
  VIDPN_MGR *v9; // rbp
  __int64 v10; // rbx
  DMMVIDEOPRESENTTARGET *v11; // rax
  __int64 result; // rax
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v4 = a2;
  if ( !a3 || !a4 )
  {
    WdLogSingleEntry2(2LL, a3, a4);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 7304;
    return result;
  }
  *a3 = 0;
  *a4 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 7322;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7328;
  }
  v8 = *((_QWORD *)a1 + 390);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 7333;
    return 3223191554LL;
  }
  v9 = *(VIDPN_MGR **)(v8 + 104);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v14, (__int64)v9);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 15) + 72LL));
    v10 = *((_QWORD *)v9 + 15);
    v11 = (DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v10, v4);
    if ( v11 )
    {
      *a3 = *((_QWORD *)v11 + 59) == 0LL;
      *a4 = DMMVIDEOPRESENTTARGET::IsLeafTarget(v11);
      if ( v10 )
        ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v14 + 40));
      return 0LL;
    }
    else
    {
      ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v9);
      WdLogSingleEntry2(3LL, v4, ContainingAdapter);
      WdLogGlobalForLineNumber = 7371;
      if ( v10 )
        ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v14 + 40));
      return 3223192325LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 7347;
  }
  return result;
}
