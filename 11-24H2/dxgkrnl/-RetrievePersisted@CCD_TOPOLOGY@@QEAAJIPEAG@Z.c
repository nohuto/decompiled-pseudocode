/*
 * XREFs of ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1403907A8
 * Callers:
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x14031B5E4 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     DxgkGetPathsModality @ 0x14031E370 (DxgkGetPathsModality.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038F310 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1400395DC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003E5F0 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?QueryConnectedSetHash@CCD_SET_STRING_ID@@QEBAJPEAUD3DKMT_HASH@@@Z @ 0x14004FB58 (-QueryConnectedSetHash@CCD_SET_STRING_ID@@QEBAJPEAUD3DKMT_HASH@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?GetTopologyForClass@CCD_BTL_FULL@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x140187E80 (-GetTopologyForClass@CCD_BTL_FULL@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x14031B404 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x14031CC98 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     DxgkWriteDiagEntry @ 0x14031DEC0 (DxgkWriteDiagEntry.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x14031FF34 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x14033D5A0 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x14033E220 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x14034028C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x140340D4C (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x14034102C (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x140341394 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x140362950 (DxgkGetGlobalRawmodeFlag.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1403C1620 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1403C1AA8 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ @ 0x1403CF51C (-_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1403E6928 (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ??0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z @ 0x1403E8814 (--0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z.c)
 *     ??1CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@XZ @ 0x1403E93E0 (--1CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@XZ.c)
 *     ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1403EFE50 (-CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     _CCD_TOPOLOGY::RetrievePersisted_::_2_::RecordRetrievalFlags::_RecordRetrievalFlags @ 0x1403F04FC (_CCD_TOPOLOGY--RetrievePersisted_--_2_--RecordRetrievalFlags--_RecordRetrievalFlags.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrievePersisted(CCD_TOPOLOGY *this, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v3; // rdi
  __int64 v4; // r15
  int v6; // ebx
  int v8; // eax
  __int64 v9; // r14
  struct CCD_BTL *v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  const struct CCD_SET_STRING_ID *ModalitySetId; // rax
  int v17; // ebx
  struct D3DKMT_HASH **v18; // r14
  __int64 v19; // rax
  struct _DXGK_DIAG_HEADER *v20; // rbx
  size_t v21; // r8
  const void *v22; // rdx
  struct _STRING *ConnectedSetStr; // rax
  struct D3DKMT_GETPATHSMODALITY *v24; // r8
  _QWORD *v25; // rax
  int TopologyForClass; // eax
  bool GlobalRawmodeFlag; // al
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  _QWORD *v31; // rbx
  _QWORD *v32; // rax
  struct CCD_BTL *v33; // rax
  bool v34; // r8
  int v35; // eax
  int TopologyClass; // eax
  int v37; // ecx
  int active; // eax
  int ConnectedSetHash; // eax
  int v41; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 v42; // [rsp+5Ch] [rbp-ACh]
  __int64 v43; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v44; // [rsp+68h] [rbp-A0h]
  __m256i v45; // [rsp+78h] [rbp-90h] BYREF
  __int16 v46; // [rsp+98h] [rbp-70h]
  __int128 v47; // [rsp+A0h] [rbp-68h]
  int v48; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v49; // [rsp+B8h] [rbp-50h]
  __int64 v50; // [rsp+C8h] [rbp-40h]
  __int16 v51; // [rsp+D0h] [rbp-38h]
  __int128 v52; // [rsp+D8h] [rbp-30h]
  struct _STRING v53; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v54[208]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v55[12]; // [rsp+1C8h] [rbp+C0h] BYREF
  unsigned __int16 v56; // [rsp+1D4h] [rbp+CCh]
  char v57; // [rsp+2E0h] [rbp+1D8h] BYREF

  v3 = 0LL;
  v4 = a2;
  v57 = 0;
  v6 = 0;
  v41 = 0;
  v8 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v57, 0);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v45.m256i_i32[0] = 0;
    memset(&v45.m256i_u64[1], 0, 24);
    v47 = 0LL;
    v46 = 0;
    v10 = CCD_BTL::Global();
    v11 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, __m256i *))v10)(v10, &v45);
    LODWORD(v9) = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry4(2LL, v11, this, *((_QWORD *)this + 8), v4);
      WdLogGlobalForLineNumber = 2531;
LABEL_65:
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v45);
      goto LABEL_66;
    }
    if ( (v4 & 0x20) != 0 )
    {
      if ( !*((_WORD *)CCD_TOPOLOGY::GetModalitySetId(this) + 4) )
      {
        WdLogSingleEntry3(2LL, this, *((_QWORD *)this + 8), *(int *)this);
        WdLogGlobalForLineNumber = 2546;
        LODWORD(v9) = -1073741823;
        goto LABEL_65;
      }
      CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v54, this);
      if ( (v4 & 0x2000) != 0 )
      {
        ModalitySetId = CCD_TOPOLOGY::GetModalitySetId(this);
        v48 = 0;
        v50 = 0LL;
        v51 = 0;
        v49 = 0LL;
        v52 = 0LL;
        CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)&v48, (__int64)ModalitySetId);
        v17 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
                (CCD_RECENT_TOPOLOGY_RETRIEVER *)v54,
                (const struct CCD_SET_STRING_ID *)&v45,
                (const struct CCD_SET_STRING_ID *)&v48,
                v4 & 0xF,
                (v4 & 0x1000) != 0);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v48);
      }
      else
      {
        v17 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
                (CCD_RECENT_TOPOLOGY_RETRIEVER *)v54,
                this,
                v4 & 0xF,
                (v4 & 0x1000) != 0);
      }
      LODWORD(v9) = -1073741275;
      if ( v17 == -1073741275 )
      {
        v41 = 2;
        WdLogSingleEntry3(3LL, this, *((_QWORD *)this + 8), v4);
        WdLogGlobalForLineNumber = 2574;
        CCD_RECENT_TOPOLOGY_RETRIEVER::~CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v54);
        goto LABEL_65;
      }
      if ( v17 < 0 )
      {
        WdLogSingleEntry4(2LL, v17, this, *((_QWORD *)this + 8), v4);
        WdLogGlobalForLineNumber = 2587;
        CCD_RECENT_TOPOLOGY_RETRIEVER::~CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v54);
        goto LABEL_64;
      }
      v41 = 1;
      CCD_RECENT_TOPOLOGY_RETRIEVER::~CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v54);
      v18 = (struct D3DKMT_HASH **)((char *)this + 64);
LABEL_55:
      LODWORD(v43) = 0;
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(this, (enum CCD_TOPOLOGY_CLASS *)&v43);
      if ( TopologyClass >= 0 )
      {
        v37 = v43;
      }
      else
      {
        WdLogSingleEntry3(2LL, TopologyClass, this, *v18);
        v37 = 0;
        WdLogGlobalForLineNumber = 2808;
        LODWORD(v43) = 0;
      }
      *((_DWORD *)*v18 + 8) = v37;
      active = CCD_TOPOLOGY::_FillPathsActiveFlags(this);
      if ( active < 0
        || (active = CCD_TOPOLOGY::FillPathsTargetFlags(this), active < 0)
        || (active = CCD_TOPOLOGY::_CheckResolvedTopologyForVirtualModeConsistency(this), active < 0) )
      {
        LODWORD(v9) = active;
        goto LABEL_65;
      }
      ConnectedSetHash = CCD_SET_STRING_ID::QueryConnectedSetHash((CCD_SET_STRING_ID *)&v45, *v18);
      v17 = ConnectedSetHash;
      if ( ConnectedSetHash < 0 )
      {
        WdLogSingleEntry4(2LL, ConnectedSetHash, this, *v18, (unsigned int)v4);
        WdLogGlobalForLineNumber = 2846;
      }
LABEL_64:
      LODWORD(v9) = v17;
      goto LABEL_65;
    }
    if ( (v4 & 0x10000000) != 0 )
    {
      LODWORD(v4) = v4 | 1;
      LODWORD(v9) = -1073741275;
    }
    else
    {
      CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v55, this);
      LODWORD(v9) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
                      (CCD_RECENT_TOPOLOGY_RETRIEVER *)v55,
                      (const struct CCD_SET_STRING_ID *)&v45,
                      0LL,
                      v4 & 0xF,
                      (v4 & 0x1000) != 0);
      if ( (_DWORD)v9 == -1073741789 )
      {
        if ( a3 )
          *a3 = v56;
        CCD_RECENT_TOPOLOGY_RETRIEVER::~CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v55);
        goto LABEL_22;
      }
      if ( (int)v9 >= 0 )
      {
        if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 1344) )
        {
          ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v45);
          v24 = (struct D3DKMT_GETPATHSMODALITY *)*((_QWORD *)this + 8);
          v53 = *ConnectedSetStr;
          LogCddDatabaseAccessPacket(1, v9, v24, &v53, v4);
        }
        else
        {
          v43 = 0LL;
          DxgkLogCodePointPacket(9u, v4, v9, 0, 0LL);
        }
        v6 = 1;
      }
      else
      {
        v44 = *(__m128i *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v45);
        v41 = _mm_cvtsi128_si32(v44);
        LODWORD(v43) = (unsigned __int16)v41 + 57;
        v19 = operator new[]((unsigned int)v43, 0x63644356u, 256LL);
        v20 = (struct _DXGK_DIAG_HEADER *)v19;
        if ( v19 )
        {
          v21 = (unsigned __int16)v41;
          v22 = (const void *)v44.m128i_i64[1];
          *(_DWORD *)v19 = 9;
          *(_DWORD *)(v19 + 4) = v43;
          *(_DWORD *)(v19 + 40) = 0;
          *(_QWORD *)(v19 + 32) = 0LL;
          *(_QWORD *)(v19 + 8) = 0LL;
          *(_OWORD *)(v19 + 16) = 0LL;
          *(_DWORD *)(v19 + 48) = v9;
          *(_DWORD *)(v19 + 52) = v4;
          memmove((void *)(v19 + 56), v22, v21);
          DxgkWriteDiagEntry(v20);
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v20);
        }
        else
        {
          v43 = 0LL;
          DxgkLogCodePointPacket(0x1Bu, v4, v9, 0, 0LL);
        }
        v6 = 2;
      }
      v41 = v6;
      CCD_RECENT_TOPOLOGY_RETRIEVER::~CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v55);
      if ( (int)v9 >= 0 )
      {
LABEL_44:
        v31 = (_QWORD *)((char *)this + 64);
        v44.m128i_i64[0] = (unsigned int)v4;
        if ( (int)v9 < 0 )
        {
          WdLogSingleEntry4(2LL, (int)v9, this, *v31, (unsigned int)v4);
          WdLogGlobalForLineNumber = 2751;
          goto LABEL_65;
        }
        v32 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
        v18 = (struct D3DKMT_HASH **)((char *)this + 64);
        v32[3] = this;
        v32[4] = *v31;
        v32[5] = (unsigned int)v4;
        WdLogGlobalForLineNumber = 2759;
        if ( (v4 & 0xF) == 0xF )
        {
          v33 = CCD_BTL::Global();
          v35 = CDS_JOURNAL::CommitTo((struct CCD_BTL *)((char *)v33 + 112), this, v34, a3);
          LODWORD(v9) = -1073741789;
          if ( v35 == -1073741789 )
          {
            if ( a3 )
              v3 = *a3;
            WdLogSingleEntry5(3LL, v3, -1073741789LL, this, *v31, v44.m128i_i64[0]);
            WdLogGlobalForLineNumber = 2774;
            goto LABEL_65;
          }
          if ( v35 == -1073741266 )
          {
            WdLogSingleEntry4(3LL, -1073741266LL, this, *v31, (unsigned int)v4);
            WdLogGlobalForLineNumber = 2784;
            v18 = (struct D3DKMT_HASH **)((char *)this + 64);
          }
          else
          {
            v18 = (struct D3DKMT_HASH **)((char *)this + 64);
            if ( v35 < 0 )
            {
              WdLogSingleEntry4(2LL, v35, this, *v31, (unsigned int)v4);
              WdLogGlobalForLineNumber = 2794;
            }
          }
        }
        goto LABEL_55;
      }
    }
    if ( (v4 & 0x80u) == 0LL )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
      v42 = 0;
      v25[3] = (int)v9;
      v25[4] = this;
      v25[5] = *((_QWORD *)this + 8);
      v25[6] = (unsigned int)v4;
      WdLogGlobalForLineNumber = 2677;
      v44.m128i_i64[0] = (unsigned int)v4;
      CCD_BTL::Global();
      TopologyForClass = CCD_BTL_FULL::GetTopologyForClass();
      LODWORD(v9) = TopologyForClass;
      if ( TopologyForClass == -1073741789 )
      {
        if ( a3 )
          *a3 = v42;
        CCD_TOPOLOGY::_FillPathsActiveFlags(this);
        CCD_TOPOLOGY::FillPathsTargetFlags(this);
        v41 = 0;
LABEL_22:
        LODWORD(v9) = -1073741789;
        goto LABEL_65;
      }
      if ( TopologyForClass < 0 )
      {
        v41 = v6 | 8;
        WdLogSingleEntry4(2LL, TopologyForClass, this, *((_QWORD *)this + 8), v44.m128i_i64[0]);
        WdLogGlobalForLineNumber = 2712;
        goto LABEL_65;
      }
      if ( (v4 & 0x4000000) != 0 )
      {
        GlobalRawmodeFlag = DxgkGetGlobalRawmodeFlag();
        LOBYTE(v28) = 1;
        v30 = CCD_TOPOLOGY::Functionalize(this, GlobalRawmodeFlag ? 0x20000 : 0, v28, v29);
        LODWORD(v9) = v30;
        if ( v30 < 0 )
        {
          v41 = v6 | 8;
          WdLogSingleEntry4(2LL, v30, this, *((_QWORD *)this + 8), v44.m128i_i64[0]);
          WdLogGlobalForLineNumber = 2737;
          goto LABEL_65;
        }
      }
      v41 = v6 | 4;
    }
    goto LABEL_44;
  }
  WdLogSingleEntry1(2LL, v8);
  WdLogGlobalForLineNumber = 2519;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
    v9,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_66:
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v57);
  CCD_TOPOLOGY::RetrievePersisted_::_2_::RecordRetrievalFlags::_RecordRetrievalFlags(&v41);
  return (unsigned int)v9;
}
