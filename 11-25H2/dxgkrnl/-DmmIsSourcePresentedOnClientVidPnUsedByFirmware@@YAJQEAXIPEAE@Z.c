/*
 * XREFs of ?DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z @ 0x1403C1550
 * Callers:
 *     DxgkIsBootPrimarySource @ 0x1403C13E0 (DxgkIsBootPrimarySource.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x140034684 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x140036A80 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x140038864 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402D0038 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmIsSourcePresentedOnClientVidPnUsedByFirmware(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned __int8 *a3)
{
  __int64 v3; // r14
  __int64 v6; // rdi
  VIDPN_MGR *v7; // rdi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  DMMVIDPNTOPOLOGY *v9; // r15
  __int64 v10; // rbx
  __int64 i; // rbp
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  _QWORD *v18; // rax
  __int64 result; // rax
  __int64 v20; // rdi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v22[7]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a2;
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 11506;
    return result;
  }
  *a3 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 11523;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 11529;
  }
  v6 = *((_QWORD *)a1 + 390);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 11534;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v7 = *(VIDPN_MGR **)(v6 + 104);
  if ( v7 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v22, (__int64)v7);
    v24 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v7);
    auto_rc<DMMVIDPN const>::reset(&v24, (__int64)ClientCommittedVidPnRef);
    if ( v24 )
    {
      v9 = (DMMVIDPNTOPOLOGY *)(v24 + 96);
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v7 + 15) + 72LL));
      v10 = *((_QWORD *)v7 + 15);
      for ( i = 0LL; ; ++i )
      {
        v23 = -1;
        v12 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v9, v3, i, &v23);
        v17 = v12;
        if ( v12 < 0 )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
          v18[3] = i;
          v18[4] = v3;
          v18[5] = v9;
          v18[6] = v17;
          WdLogGlobalForLineNumber = 11597;
          if ( v10 )
            ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
          goto LABEL_12;
        }
        v20 = v23;
        if ( v23 == -1 )
          break;
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v10, v23);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 417) )
          {
            *a3 = 1;
            break;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v20, v10);
          WdLogGlobalForLineNumber = 11623;
        }
      }
      if ( v10 )
        ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
      auto_rc<DMMVIDPN const>::reset(&v24, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v22[0] + 40));
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(3LL, a1);
      WdLogGlobalForLineNumber = 11567;
      LODWORD(v17) = -1071774884;
LABEL_12:
      auto_rc<DMMVIDPN const>::reset(&v24, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v22[0] + 40));
      return (unsigned int)v17;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 11548;
  }
  return result;
}
