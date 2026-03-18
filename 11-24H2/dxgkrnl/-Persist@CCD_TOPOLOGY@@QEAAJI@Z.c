/*
 * XREFs of ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x140341C24
 * Callers:
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x14031B5E4 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     DxgkPersistPathsModality @ 0x140341B10 (DxgkPersistPathsModality.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038EA8C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038F310 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x14018AA54 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 *     DxgkInvalidateQdcCacheOnlyDatabase @ 0x14018C84C (DxgkInvalidateQdcCacheOnlyDatabase.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x140268BC0 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x14031B404 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x14031CC98 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x14033E89C (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x14033ECE4 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x14033F4B0 (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x14034028C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x140341394 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x140390668 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1403E6928 (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Persist(struct D3DKMT_GETPATHSMODALITY **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 result; // rax
  struct CCD_BTL *v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edx
  int v11; // eax
  unsigned int v12; // edx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  unsigned int v15; // edx
  struct CCD_BTL *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  struct CCD_BTL *v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  _QWORD *v29; // rax
  int v30; // eax
  struct _STRING *v31; // rax
  struct D3DKMT_GETPATHSMODALITY *v32; // r8
  struct _STRING *ConnectedSetStr; // rax
  __int64 v34; // rcx
  int v35; // eax
  unsigned int v36; // edi
  struct CCD_BTL *v37; // rax
  int v38; // eax
  struct _STRING v39; // [rsp+30h] [rbp-50h] BYREF
  int v40; // [rsp+40h] [rbp-40h] BYREF
  __int128 v41; // [rsp+48h] [rbp-38h] BYREF
  __int64 v42; // [rsp+58h] [rbp-28h]
  __int16 v43; // [rsp+60h] [rbp-20h]
  __int128 v44; // [rsp+68h] [rbp-18h]

  v5 = (unsigned int)a2;
  if ( g_bDMgrIsSetupRunning == 1 )
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    result = 0LL;
    WdLogGlobalForLineNumber = 3152;
    return result;
  }
  if ( !*((_WORD *)CCD_TOPOLOGY::GetModalitySetId((CCD_TOPOLOGY *)this) + 4) )
  {
    WdLogSingleEntry3(2LL, this, this[8], *(int *)this);
    WdLogGlobalForLineNumber = 3165;
    DxgkLogCodePointPacket(0x3Fu, 0, v5, 0xC0000001, 0LL);
    return 3221225473LL;
  }
  v40 = 0;
  v41 = 0LL;
  v42 = 0LL;
  v44 = 0LL;
  v43 = 0;
  v7 = CCD_BTL::Global();
  v8 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, int *))v7)(v7, &v40);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( !CCD_SET_STRING_ID::IsSubsetOf((CCD_SET_STRING_ID *)this, (const struct CCD_SET_STRING_ID *)&v40) )
    {
      WdLogSingleEntry3(3LL, -1073741266LL, this[8], v5);
      v10 = 2;
      WdLogGlobalForLineNumber = 3191;
LABEL_9:
      DxgkLogCodePointPacket(0x3Fu, v10, v5, 0xC000022E, 0LL);
      v9 = -1073741266;
      goto LABEL_38;
    }
    if ( (v5 & 0x40000000) == 0 )
    {
      v11 = CCD_TOPOLOGY::VerifyConnectivityHash((CCD_TOPOLOGY *)this, (const struct CCD_SET_STRING_ID *)&v40);
      v9 = v11;
      if ( v11 == -1073741266 )
      {
        WdLogSingleEntry3(3LL, -1073741266LL, this[8], v5);
        v10 = 3;
        WdLogGlobalForLineNumber = 3205;
        goto LABEL_9;
      }
      if ( v11 < 0 )
      {
        WdLogSingleEntry3(2LL, v11, this[8], v5);
        v12 = 3;
        WdLogGlobalForLineNumber = 3215;
LABEL_15:
        DxgkLogCodePointPacket(0x3Fu, v12, v5, v9, 0LL);
        goto LABEL_38;
      }
    }
    if ( (int)v5 < 0 )
    {
      v12 = 4;
      goto LABEL_15;
    }
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( SessionData && *((_BYTE *)SessionData + 18498) )
    {
      v15 = 9;
LABEL_37:
      DxgkLogCodePointPacket(0x3Fu, v15, v5, v9, 0LL);
      DxgkInvalidateQdcCacheOnlyDatabase();
      goto LABEL_38;
    }
    v16 = CCD_BTL::Global();
    if ( *((struct CCD_BTL **)v16 + 17) != (struct CCD_BTL *)((char *)v16 + 136) )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
      v21[3] = v5;
      LODWORD(v5) = v5 | 1;
      v21[4] = this;
      v21[5] = this[8];
      WdLogGlobalForLineNumber = 3245;
      v22 = CCD_BTL::Global();
      CDS_JOURNAL::Purge((struct CCD_BTL *)((char *)v22 + 112));
    }
    if ( (v5 & 1) == 0 )
    {
      v23 = CCD_STORE::ForTopology(
              (const struct CCD_SET_STRING_ID *)this,
              anonymous_namespace_::_UpdateTimestampTopologySetCallback,
              this,
              0);
      v28 = v23;
      if ( v23 >= 0 )
      {
LABEL_31:
        if ( CCD_SET_STRING_ID::IsSubsetOf((CCD_SET_STRING_ID *)this, (const struct CCD_SET_STRING_ID *)&v40) )
        {
          ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v40);
          v35 = CCD_STORE::_ForSetSubkey<CCD_STORE::CONNECTED_SET_DESCRIPTOR>(
                  v34,
                  ConnectedSetStr,
                  (int (__fastcall *)(_BYTE *, __int64))anonymous_namespace_::_UpdateConnectedSetCallback,
                  (__int64)this);
          v36 = v35;
          if ( v35 < 0 )
          {
            WdLogSingleEntry4(2LL, v35, &v41, this, this[8]);
            WdLogGlobalForLineNumber = 3311;
            DxgkLogCodePointPacket(0x3Fu, 6u, v5, v36, 0LL);
          }
        }
        v37 = CCD_BTL::Global();
        v38 = CCD_TOPOLOGY::CopyInheritScope((struct CCD_BTL *)((char *)v37 + 8), (const struct CCD_TOPOLOGY *)this);
        v9 = v38;
        if ( v38 < 0 )
        {
          WdLogSingleEntry3(2LL, v38, this, this[8]);
          WdLogGlobalForLineNumber = 3327;
          DxgkLogCodePointPacket(0x3Fu, 7u, v5, v9, 0LL);
          v9 = 0;
        }
        v15 = 8;
        goto LABEL_37;
      }
      v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24, v26, v27);
      v29[3] = v28;
      v29[4] = this;
      v29[5] = this[8];
      WdLogGlobalForLineNumber = 3267;
    }
    v30 = CCD_STORE::ForTopology(
            (const struct CCD_SET_STRING_ID *)this,
            (int (*)(struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *, void *))anonymous_namespace_::_SaveTopologySetCallback,
            this,
            1);
    v9 = v30;
    if ( v30 < 0 )
    {
      WdLogSingleEntry3(2LL, v30, this, this[8]);
      WdLogGlobalForLineNumber = 3279;
      DxgkLogCodePointPacket(0x3Fu, 5u, v5, v9, 0LL);
      goto LABEL_38;
    }
    if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 1344) )
    {
      v31 = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v40);
      v32 = this[8];
      v39 = *v31;
      LogCddDatabaseAccessPacket(0, v9, v32, &v39, 0);
    }
    goto LABEL_31;
  }
  WdLogSingleEntry3(2LL, v8, this, this[8]);
  WdLogGlobalForLineNumber = 3178;
  DxgkLogCodePointPacket(0x3Fu, 1u, v5, v9, 0LL);
LABEL_38:
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v40);
  return v9;
}
