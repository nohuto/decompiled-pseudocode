/*
 * XREFs of ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1402525F8
 * Callers:
 *     DxgkInvalidateActiveVidPn @ 0x1401C4E00 (DxgkInvalidateActiveVidPn.c)
 *     DpiAcpiProcessEventRequests @ 0x14024B658 (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x140034684 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x140038864 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040B60 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x140045D68 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140250990 (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1403DA174 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 */

__int64 __fastcall DmmInvalidateActiveVidPn(
        DXGADAPTER *this,
        __int64 a2,
        void *a3,
        __int64 a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  unsigned int v5; // r14d
  enum _DXGK_RECOMMENDFUNCTIONALVIDPN_REASON v7; // esi
  __int64 v9; // rax
  VIDPN_MGR *v10; // r12
  __int64 result; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DMMVIDPN *v17; // rbx
  __int64 v18; // rax
  char v19; // r14
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  DMMVIDPNTOPOLOGY *v21; // r13
  struct DMMVIDPN *v22; // rsi
  char *v23; // rsi
  int v24; // eax
  char *v25; // rax
  int v26; // eax
  int v27; // edi
  struct DMMVIDPN *v28; // [rsp+50h] [rbp-30h] BYREF
  __int64 v29; // [rsp+58h] [rbp-28h] BYREF
  struct DMMVIDPN *v30; // [rsp+60h] [rbp-20h] BYREF
  __int64 v31; // [rsp+68h] [rbp-18h] BYREF
  char *v32; // [rsp+70h] [rbp-10h]
  unsigned int v33; // [rsp+B0h] [rbp+30h]
  int v35; // [rsp+D8h] [rbp+58h]

  v5 = a4;
  v7 = (int)a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  WdLogGlobalForLineNumber = 10452;
  if ( this )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 10472;
    }
    v9 = *((_QWORD *)this + 390);
    if ( v9 )
    {
      v10 = *(VIDPN_MGR **)(v9 + 104);
      if ( !v10 )
      {
        WdLogSingleEntry1(2LL, this);
        result = 3223192373LL;
        WdLogGlobalForLineNumber = 10491;
        return result;
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v31, *(_QWORD *)(v9 + 104));
      v28 = 0LL;
      v30 = 0LL;
      v12 = VIDPN_MGR::RecommendFunctionalVidPn(v10, v7, a3, v5, &v30);
      v17 = (struct DMMVIDPN *)v12;
      if ( v12 >= 0 )
      {
        auto_rc<DMMVIDPN>::reset((__int64 *)&v28, (__int64)v30);
        v17 = v28;
        v19 = 0;
        if ( v7 == DXGK_RFVR_HOTKEY )
        {
          v19 = 1;
          if ( v28 == (struct DMMVIDPN *)-96LL )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 10536;
          }
          v29 = 0LL;
          ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v10);
          auto_rc<DMMVIDPN const>::reset(&v29, (__int64)ClientCommittedVidPnRef);
          if ( v29 )
          {
            v21 = (DMMVIDPNTOPOLOGY *)(v29 + 96);
            if ( v29 == -96 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 10555;
            }
            if ( *((_QWORD *)v21 + 5) == *((_QWORD *)v17 + 17) )
            {
              v22 = (struct DMMVIDPN *)*((_QWORD *)v17 + 15);
              v32 = (char *)v17 + 120;
              if ( v22 == (struct DMMVIDPN *)((char *)v17 + 120) )
                goto LABEL_28;
              v23 = (char *)v22 - 8;
              if ( !v23 )
                goto LABEL_28;
              do
              {
                v33 = *(_DWORD *)(*((_QWORD *)v23 + 11) + 24LL);
                v24 = *(_DWORD *)(*((_QWORD *)v23 + 12) + 24LL);
                v35 = v24;
                if ( v33 == -1 )
                {
                  WdLogSingleEntry0(1LL);
                  v24 = v35;
                  WdLogGlobalForLineNumber = 10573;
                }
                if ( v24 == -1 )
                {
                  WdLogSingleEntry0(1LL);
                  v24 = v35;
                  WdLogGlobalForLineNumber = 10574;
                }
                if ( !DMMVIDPNTOPOLOGY::FindPath(v21, v33, v24) )
                  break;
                v25 = (char *)*((_QWORD *)v23 + 1);
                v23 = v25 - 8;
                if ( v25 == v32 )
                  v23 = 0LL;
              }
              while ( v23 );
              if ( !v23 )
LABEL_28:
                v19 = 0;
            }
          }
          auto_rc<DMMVIDPN const>::reset(&v29, 0LL);
          if ( v19 )
          {
            WdLogSingleEntry1(7LL, v17);
            WdLogGlobalForLineNumber = 10603;
          }
        }
        v26 = VIDPN_MGR::CommitVidPnViaSDC((struct _KTHREAD **)v10, v17, v19, a5);
        v27 = v26;
        if ( v26 >= 0 )
        {
          auto_rc<DMMVIDPN>::reset((__int64 *)&v28, 0LL);
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v31 + 40));
          return 0LL;
        }
        WdLogSingleEntry2(2LL, v17, v26);
        WdLogGlobalForLineNumber = 10617;
        LODWORD(v17) = v27;
      }
      else
      {
        v18 = WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
        *(_QWORD *)(v18 + 24) = 0LL;
        *(_QWORD *)(v18 + 32) = v17;
        WdLogGlobalForLineNumber = 10518;
      }
      auto_rc<DMMVIDPN>::reset((__int64 *)&v28, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v31 + 40));
      return (unsigned int)v17;
    }
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 10477;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10455;
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 10466;
  }
  return 3223191554LL;
}
