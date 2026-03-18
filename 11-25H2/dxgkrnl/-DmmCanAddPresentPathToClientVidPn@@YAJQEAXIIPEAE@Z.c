/*
 * XREFs of ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1403B9434
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x14042A600 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1402CE7D4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402CFC04 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 */

__int64 __fastcall DmmCanAddPresentPathToClientVidPn(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  __int64 v4; // rbp
  __int64 v6; // r15
  unsigned __int8 v8; // si
  __int64 v9; // rdi
  VIDPN_MGR *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rbx
  __int64 v14; // r12
  int v15; // eax
  int v16; // edi
  __int64 result; // rax
  __int64 v18; // [rsp+50h] [rbp-38h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+20h] BYREF

  v4 = a3;
  v6 = a2;
  if ( !a4 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 7766;
    return result;
  }
  *a4 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 7783;
    return 3223191554LL;
  }
  v8 = 1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7789;
  }
  v9 = *((_QWORD *)a1 + 390);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 7794;
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
  v10 = *(VIDPN_MGR **)(v9 + 104);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v18, (__int64)v10);
    v19 = 0LL;
    v11 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v10, &v19);
    v12 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(7LL, v11);
      WdLogGlobalForLineNumber = 7828;
      if ( v19 )
        ReferenceCounted::Release((ReferenceCounted *)(v19 + 24));
      goto LABEL_15;
    }
    v13 = v19;
    v14 = v19 + 96;
    v15 = VIDPN_MGR::AddPathToVidPnTopology(
            v10,
            (struct DMMVIDPNTOPOLOGY *const)(v19 + 96),
            v6,
            v4,
            (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
            0xFFFFu,
            0,
            D3DKMDT_MCC_ENFORCE);
    v16 = v15;
    if ( v15 == -1071774975 )
    {
      WdLogSingleEntry3(7LL, v6, v4, v14);
      WdLogGlobalForLineNumber = 7854;
    }
    else
    {
      if ( v15 != -1071774976 )
      {
        if ( v15 < 0 )
        {
          WdLogSingleEntry4(2LL, v6, v4, v14, v15);
          WdLogGlobalForLineNumber = 7872;
          if ( v13 )
            ReferenceCounted::Release((ReferenceCounted *)(v13 + 24));
          v12 = v16;
          goto LABEL_15;
        }
LABEL_12:
        *a4 = v8;
        if ( v13 )
          ReferenceCounted::Release((ReferenceCounted *)(v13 + 24));
        v12 = 0;
LABEL_15:
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v18 + 40));
        return v12;
      }
      WdLogSingleEntry3(7LL, v6, v4, v14);
      WdLogGlobalForLineNumber = 7863;
    }
    v8 = 0;
    goto LABEL_12;
  }
  WdLogSingleEntry1(2LL, a1);
  result = 3223192373LL;
  WdLogGlobalForLineNumber = 7808;
  return result;
}
