/*
 * XREFs of ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1402D6EB0
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1402D74E8 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x140034684 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x140038864 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040B60 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z @ 0x140054698 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402D0038 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1402D64B4 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1402D71F8 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 */

__int64 __fastcall DmmUpdateGammaRampOnVidPnSource(DXGADAPTER *a1, unsigned int a2, const struct DXGK_GAMMA_RAMP *a3)
{
  __int64 v3; // r15
  __int64 v5; // rdi
  __int64 v6; // r14
  VIDPN_MGR *v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r13
  ReferenceCounted *v11; // rcx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  DMMVIDPNTOPOLOGY *v13; // r14
  __int64 i; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  DMMVIDPNPRESENTPATH *Path; // rsi
  int updated; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 result; // rax
  _QWORD *v27; // rax
  __int64 v28; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v29; // [rsp+90h] [rbp+30h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+48h] BYREF

  v3 = a2;
  v5 = (__int64)a1;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 8804;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8812;
  }
  v6 = *(_QWORD *)(v5 + 3120);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, v5);
    WdLogGlobalForLineNumber = 8817;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v7 = *(VIDPN_MGR **)(v6 + 104);
  if ( v7 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v28, (__int64)v7);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v7 + 14) + 72LL));
    v8 = *((_QWORD *)v7 + 14);
    v9 = IndexedSet<DMMVIDEOPRESENTSOURCE>::FindById(v8, v3);
    v10 = v9;
    if ( v9 )
    {
      if ( a3 )
        _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
      v11 = *(ReferenceCounted **)(v9 + 128);
      if ( v11 )
        ReferenceCounted::Release(v11);
      *(_QWORD *)(v10 + 128) = a3;
      if ( v8 )
        ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
      v30 = 0LL;
      ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v7);
      auto_rc<DMMVIDPN const>::reset(&v30, (__int64)ClientCommittedVidPnRef);
      if ( v30 )
      {
        v13 = (DMMVIDPNTOPOLOGY *)(v30 + 96);
        for ( i = 0LL; ; ++i )
        {
          v29 = -1;
          v15 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v13, v3, i, &v29);
          v5 = v15;
          if ( v15 < 0 )
          {
            v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
            v27[3] = i;
            v27[4] = v3;
            v27[5] = v13;
            v27[6] = v5;
            WdLogGlobalForLineNumber = 8898;
            goto LABEL_30;
          }
          if ( v29 == -1 )
          {
            auto_rc<DMMVIDPN const>::reset(&v30, 0LL);
            DXGFASTMUTEX::Release((struct _KTHREAD **)(v28 + 40));
            return 0LL;
          }
          Path = DMMVIDPNTOPOLOGY::FindPath(v13, v3, v29);
          if ( !Path )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 8918;
          }
          updated = DMMVIDPNPRESENTPATH::UpdateGammaRamp(Path);
          LODWORD(v5) = updated;
          if ( updated < 0 )
            break;
          LODWORD(v5) = DMMVIDPNPRESENTPATH::SetDriverGammaRamp(Path, 0LL);
          if ( (int)v5 < 0 )
            goto LABEL_30;
        }
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v23, v22, v24, v25) + 24) = updated;
        WdLogGlobalForLineNumber = 8928;
LABEL_30:
        auto_rc<DMMVIDPN const>::reset(&v30, 0LL);
      }
      else
      {
        WdLogSingleEntry1(2LL, v5);
        WdLogGlobalForLineNumber = 8871;
        auto_rc<DMMVIDPN const>::reset(&v30, 0LL);
        LODWORD(v5) = -1071774884;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v3);
      WdLogGlobalForLineNumber = 8852;
      if ( v8 )
        ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
      LODWORD(v5) = -1071774972;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v28 + 40));
    return (unsigned int)v5;
  }
  else
  {
    WdLogSingleEntry1(2LL, v5);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 8831;
  }
  return result;
}
