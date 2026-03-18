/*
 * XREFs of ?DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z @ 0x1402597DC
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1402324E0 (DxgkHandleVideoParameters.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1400345B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1400369D0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1400384F0 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x14031A018 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmIsSourcePresentedOnClientVidPnAnalogTvOut(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int *a4)
{
  __int64 v4; // r15
  __int64 result; // rax
  __int64 v9; // rdi
  VIDPN_MGR *v10; // rdi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v12; // rdi
  DMMVIDPNTOPOLOGY *v13; // r14
  __int64 v14; // rbx
  unsigned __int64 i; // rbp
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  _QWORD *v23; // rax
  __int64 v24; // [rsp+50h] [rbp-38h] BYREF
  __int64 v25; // [rsp+58h] [rbp-30h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp+20h] BYREF

  v4 = a2;
  if ( !a4 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 11685;
    return result;
  }
  *a4 = -1;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 11702;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 11708;
  }
  v9 = *((_QWORD *)a1 + 390);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 11713;
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
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v25, (__int64)v10);
    v24 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v10);
    auto_rc<DMMVIDPN const>::reset(&v24, (__int64)ClientCommittedVidPnRef);
    if ( v24 )
    {
      v13 = (DMMVIDPNTOPOLOGY *)(v24 + 96);
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v10 + 15) + 72LL));
      v14 = *((_QWORD *)v10 + 15);
      for ( i = 0LL; ; ++i )
      {
        v26 = -1;
        v16 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v13, v4, i, &v26);
        v12 = v16;
        if ( v16 < 0 )
          break;
        v21 = v26;
        if ( v26 == -1 )
          goto LABEL_18;
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v14, v26);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 108) )
          {
            *a3 = 1;
            *a4 = v21;
LABEL_18:
            if ( v14 )
              ReferenceCounted::Release((ReferenceCounted *)(v14 + 64));
            auto_rc<DMMVIDPN const>::reset(&v24, 0LL);
            DXGFASTMUTEX::Release((struct _KTHREAD **)(v25 + 40));
            return 0LL;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v21, v14);
          WdLogGlobalForLineNumber = 11804;
        }
      }
      v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
      v23[3] = i;
      v23[4] = v4;
      v23[5] = v13;
      v23[6] = v12;
      WdLogGlobalForLineNumber = 11776;
      if ( v14 )
        ReferenceCounted::Release((ReferenceCounted *)(v14 + 64));
    }
    else
    {
      WdLogSingleEntry1(3LL, a1);
      WdLogGlobalForLineNumber = 11746;
      LODWORD(v12) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v24, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v25 + 40));
    return (unsigned int)v12;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 11727;
  }
  return result;
}
