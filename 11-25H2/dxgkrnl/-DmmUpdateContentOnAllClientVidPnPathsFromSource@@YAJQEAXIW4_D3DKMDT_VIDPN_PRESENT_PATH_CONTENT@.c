/*
 * XREFs of ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x140253840
 * Callers:
 *     DxgkHandleVideoParameters @ 0x14022BBF0 (DxgkHandleVideoParameters.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x140034684 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x140038864 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040B60 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x14008DE50 (-SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?SetTargetContentType@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x14025FA2C (-SetTargetContentType@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402D0038 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1402D80F8 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 */

__int64 __fastcall DmmUpdateContentOnAllClientVidPnPathsFromSource(
        DXGADAPTER *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT a3)
{
  __int64 v3; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  VIDPN_MGR *v7; // rdi
  __int64 result; // rax
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  DMMVIDPNTOPOLOGY *v10; // rsi
  unsigned __int64 i; // rdi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DMMVIDPNPRESENTPATH *Path; // rbx
  int updated; // eax
  _QWORD *v19; // rax
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+90h] [rbp+30h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+48h] BYREF

  v3 = a2;
  v5 = (__int64)a1;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 10673;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10681;
  }
  v6 = *(_QWORD *)(v5 + 3120);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, v5);
    WdLogGlobalForLineNumber = 10686;
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
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v20, *(_QWORD *)(v6 + 104));
    v22 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v7);
    auto_rc<DMMVIDPN const>::reset(&v22, (__int64)ClientCommittedVidPnRef);
    if ( v22 )
    {
      v10 = (DMMVIDPNTOPOLOGY *)(v22 + 96);
      for ( i = 0LL; ; ++i )
      {
        v21 = -1;
        v12 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v10, v3, i, &v21);
        v5 = v12;
        if ( v12 < 0 )
          break;
        if ( v21 == -1 )
        {
          auto_rc<DMMVIDPN const>::reset(&v22, 0LL);
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v20 + 40));
          return 0LL;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v10, v3, v21);
        if ( !Path )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10766;
        }
        DMMVIDPNPRESENTPATH::SetContentType(Path, a3);
        if ( *((_BYTE *)Path + 110) )
          updated = DMMVIDPNPRESENTPATH::SetTargetContentType(Path);
        else
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(Path, 0LL);
        LODWORD(v5) = updated;
        if ( updated < 0 )
          goto LABEL_22;
      }
      v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
      v19[3] = i;
      v19[4] = v3;
      v19[5] = v10;
      v19[6] = v5;
      WdLogGlobalForLineNumber = 10746;
    }
    else
    {
      WdLogSingleEntry1(2LL, v5);
      WdLogGlobalForLineNumber = 10719;
      LODWORD(v5) = -1071774884;
    }
LABEL_22:
    auto_rc<DMMVIDPN const>::reset(&v22, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v20 + 40));
    return (unsigned int)v5;
  }
  else
  {
    WdLogSingleEntry1(2LL, v5);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 10700;
  }
  return result;
}
