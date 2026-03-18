/*
 * XREFs of ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x140379894
 * Callers:
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x140374400 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     DxgkGetPathsModality @ 0x140375C90 (DxgkGetPathsModality.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403783FC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x140039A2C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003EC00 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004ABD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?QueryConnectedSetHash@CCD_SET_STRING_ID@@QEBAJPEAUD3DKMT_HASH@@@Z @ 0x1400500D8 (-QueryConnectedSetHash@CCD_SET_STRING_ID@@QEBAJPEAUD3DKMT_HASH@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?GetTopologyForClass@CCD_BTL_FULL@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x140185C28 (-GetTopologyForClass@CCD_BTL_FULL@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1402C2A80 (DxgkGetGlobalRawmodeFlag.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1402CE078 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x140368EA0 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x140369438 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x14036BE7C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x14036C93C (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x14036D014 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x14036D0C0 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x140373174 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1403733CC (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x140373EE8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     DxgkWriteDiagEntry @ 0x1403757E0 (DxgkWriteDiagEntry.c)
 *     ?_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ @ 0x1403D7310 (-_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1403E6FF0 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1403ECF58 (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ??0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z @ 0x1403EE5E4 (--0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z.c)
 *     ??1CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@XZ @ 0x1403EF200 (--1CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@XZ.c)
 *     ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1403F5DE0 (-CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     _CCD_TOPOLOGY::RetrievePersisted_::_2_::RecordRetrievalFlags::_RecordRetrievalFlags @ 0x1403F648C (_CCD_TOPOLOGY--RetrievePersisted_--_2_--RecordRetrievalFlags--_RecordRetrievalFlags.c)
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
  __int64 v19; // r9
  __int64 v20; // rax
  struct _DXGK_DIAG_HEADER *v21; // rbx
  size_t v22; // r8
  const void *v23; // rdx
  struct _STRING *ConnectedSetStr; // rax
  struct D3DKMT_GETPATHSMODALITY *v25; // r8
  _QWORD *v26; // rax
  int TopologyForClass; // eax
  bool GlobalRawmodeFlag; // al
  int v29; // eax
  _QWORD *v30; // rbx
  _QWORD *v31; // rax
  struct CCD_BTL *v32; // rax
  bool v33; // r8
  int v34; // eax
  int TopologyClass; // eax
  int v36; // ecx
  int active; // eax
  int ConnectedSetHash; // eax
  int v40; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 v41; // [rsp+5Ch] [rbp-ACh]
  __int64 v42; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v43; // [rsp+68h] [rbp-A0h]
  __m256i v44; // [rsp+78h] [rbp-90h] BYREF
  __int16 v45; // [rsp+98h] [rbp-70h]
  __int128 v46; // [rsp+A0h] [rbp-68h]
  int v47; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v48; // [rsp+B8h] [rbp-50h]
  __int64 v49; // [rsp+C8h] [rbp-40h]
  __int16 v50; // [rsp+D0h] [rbp-38h]
  __int128 v51; // [rsp+D8h] [rbp-30h]
  struct _STRING v52; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v53[208]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v54[12]; // [rsp+1C8h] [rbp+C0h] BYREF
  unsigned __int16 v55; // [rsp+1D4h] [rbp+CCh]
  char v56; // [rsp+2E0h] [rbp+1D8h] BYREF

  v3 = 0LL;
  v4 = a2;
  v56 = 0;
  v6 = 0;
  v40 = 0;
  v8 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v56, 0);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v44.m256i_i32[0] = 0;
    memset(&v44.m256i_u64[1], 0, 24);
    v46 = 0LL;
    v45 = 0;
    v10 = CCD_BTL::Global();
    v11 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, __m256i *))v10)(v10, &v44);
    LODWORD(v9) = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry4(2LL, v11, this, *((_QWORD *)this + 8), v4);
      WdLogGlobalForLineNumber = 2531;
LABEL_65:
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v44);
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
      CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v53, this);
      if ( (v4 & 0x2000) != 0 )
      {
        ModalitySetId = CCD_TOPOLOGY::GetModalitySetId(this);
        v47 = 0;
        v49 = 0LL;
        v50 = 0;
        v48 = 0LL;
        v51 = 0LL;
        CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)&v47, (__int64)ModalitySetId);
        v17 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
                (CCD_RECENT_TOPOLOGY_RETRIEVER *)v53,
                (const struct CCD_SET_STRING_ID *)&v44,
                (const struct CCD_SET_STRING_ID *)&v47,
                v4 & 0xF,
                (v4 & 0x1000) != 0);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v47);
      }
      else
      {
        v17 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
                (CCD_RECENT_TOPOLOGY_RETRIEVER *)v53,
                this,
                v4 & 0xF,
                (v4 & 0x1000) != 0);
      }
      LODWORD(v9) = -1073741275;
      if ( v17 == -1073741275 )
      {
        v40 = 2;
        WdLogSingleEntry3(3LL, this, *((_QWORD *)this + 8), v4);
        WdLogGlobalForLineNumber = 2574;
        CCD_RECENT_TOPOLOGY_RETRIEVER::~CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v53);
        goto LABEL_65;
      }
      if ( v17 < 0 )
      {
        WdLogSingleEntry4(2LL, v17, this, *((_QWORD *)this + 8), v4);
        WdLogGlobalForLineNumber = 2587;
        CCD_RECENT_TOPOLOGY_RETRIEVER::~CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v53);
        goto LABEL_64;
      }
      v40 = 1;
      CCD_RECENT_TOPOLOGY_RETRIEVER::~CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v53);
      v18 = (struct D3DKMT_HASH **)((char *)this + 64);
LABEL_55:
      LODWORD(v42) = 0;
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(this, (enum CCD_TOPOLOGY_CLASS *)&v42);
      if ( TopologyClass >= 0 )
      {
        v36 = v42;
      }
      else
      {
        WdLogSingleEntry3(2LL, TopologyClass, this, *v18);
        v36 = 0;
        WdLogGlobalForLineNumber = 2808;
        LODWORD(v42) = 0;
      }
      *((_DWORD *)*v18 + 8) = v36;
      active = CCD_TOPOLOGY::_FillPathsActiveFlags(this);
      if ( active < 0
        || (active = CCD_TOPOLOGY::FillPathsTargetFlags(this), active < 0)
        || (active = CCD_TOPOLOGY::_CheckResolvedTopologyForVirtualModeConsistency(this), active < 0) )
      {
        LODWORD(v9) = active;
        goto LABEL_65;
      }
      ConnectedSetHash = CCD_SET_STRING_ID::QueryConnectedSetHash((CCD_SET_STRING_ID *)&v44, *v18);
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
      CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v54, this);
      LODWORD(v9) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
                      (CCD_RECENT_TOPOLOGY_RETRIEVER *)v54,
                      (const struct CCD_SET_STRING_ID *)&v44,
                      0LL,
                      v4 & 0xF,
                      (v4 & 0x1000) != 0);
      if ( (_DWORD)v9 == -1073741789 )
      {
        if ( a3 )
          *a3 = v55;
        CCD_RECENT_TOPOLOGY_RETRIEVER::~CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v54);
        goto LABEL_22;
      }
      if ( (int)v9 >= 0 )
      {
        if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 1312) )
        {
          ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v44);
          v25 = (struct D3DKMT_GETPATHSMODALITY *)*((_QWORD *)this + 8);
          v52 = *ConnectedSetStr;
          LogCddDatabaseAccessPacket(1, v9, v25, &v52, v4);
        }
        else
        {
          v42 = 0LL;
          DxgkLogCodePointPacket(9u, v4, v9, 0, 0LL);
        }
        v6 = 1;
      }
      else
      {
        v43 = *(__m128i *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v44);
        v40 = _mm_cvtsi128_si32(v43);
        LODWORD(v42) = (unsigned __int16)v40 + 57;
        v20 = operator new[]((unsigned int)v42, 0x63644356u, 256LL, v19);
        v21 = (struct _DXGK_DIAG_HEADER *)v20;
        if ( v20 )
        {
          v22 = (unsigned __int16)v40;
          v23 = (const void *)v43.m128i_i64[1];
          *(_DWORD *)v20 = 9;
          *(_DWORD *)(v20 + 4) = v42;
          *(_DWORD *)(v20 + 40) = 0;
          *(_QWORD *)(v20 + 32) = 0LL;
          *(_QWORD *)(v20 + 8) = 0LL;
          *(_OWORD *)(v20 + 16) = 0LL;
          *(_DWORD *)(v20 + 48) = v9;
          *(_DWORD *)(v20 + 52) = v4;
          memmove((void *)(v20 + 56), v23, v22);
          DxgkWriteDiagEntry(v21);
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v21);
        }
        else
        {
          v42 = 0LL;
          DxgkLogCodePointPacket(0x1Bu, v4, v9, 0, 0LL);
        }
        v6 = 2;
      }
      v40 = v6;
      CCD_RECENT_TOPOLOGY_RETRIEVER::~CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v54);
      if ( (int)v9 >= 0 )
      {
LABEL_44:
        v30 = (_QWORD *)((char *)this + 64);
        v43.m128i_i64[0] = (unsigned int)v4;
        if ( (int)v9 < 0 )
        {
          WdLogSingleEntry4(2LL, (int)v9, this, *v30, (unsigned int)v4);
          WdLogGlobalForLineNumber = 2751;
          goto LABEL_65;
        }
        v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
        v18 = (struct D3DKMT_HASH **)((char *)this + 64);
        v31[3] = this;
        v31[4] = *v30;
        v31[5] = (unsigned int)v4;
        WdLogGlobalForLineNumber = 2759;
        if ( (v4 & 0xF) == 0xF )
        {
          v32 = CCD_BTL::Global();
          v34 = CDS_JOURNAL::CommitTo((struct CCD_BTL *)((char *)v32 + 112), this, v33, a3);
          LODWORD(v9) = -1073741789;
          if ( v34 == -1073741789 )
          {
            if ( a3 )
              v3 = *a3;
            WdLogSingleEntry5(3LL, v3, -1073741789LL, this, *v30, v43.m128i_i64[0]);
            WdLogGlobalForLineNumber = 2774;
            goto LABEL_65;
          }
          if ( v34 == -1073741266 )
          {
            WdLogSingleEntry4(3LL, -1073741266LL, this, *v30, (unsigned int)v4);
            WdLogGlobalForLineNumber = 2784;
            v18 = (struct D3DKMT_HASH **)((char *)this + 64);
          }
          else
          {
            v18 = (struct D3DKMT_HASH **)((char *)this + 64);
            if ( v34 < 0 )
            {
              WdLogSingleEntry4(2LL, v34, this, *v30, (unsigned int)v4);
              WdLogGlobalForLineNumber = 2794;
            }
          }
        }
        goto LABEL_55;
      }
    }
    if ( (v4 & 0x80u) == 0LL )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
      v41 = 0;
      v26[3] = (int)v9;
      v26[4] = this;
      v26[5] = *((_QWORD *)this + 8);
      v26[6] = (unsigned int)v4;
      WdLogGlobalForLineNumber = 2677;
      v43.m128i_i64[0] = (unsigned int)v4;
      CCD_BTL::Global();
      TopologyForClass = CCD_BTL_FULL::GetTopologyForClass();
      LODWORD(v9) = TopologyForClass;
      if ( TopologyForClass == -1073741789 )
      {
        if ( a3 )
          *a3 = v41;
        CCD_TOPOLOGY::_FillPathsActiveFlags(this);
        CCD_TOPOLOGY::FillPathsTargetFlags(this);
        v40 = 0;
LABEL_22:
        LODWORD(v9) = -1073741789;
        goto LABEL_65;
      }
      if ( TopologyForClass < 0 )
      {
        v40 = v6 | 8;
        WdLogSingleEntry4(2LL, TopologyForClass, this, *((_QWORD *)this + 8), v43.m128i_i64[0]);
        WdLogGlobalForLineNumber = 2712;
        goto LABEL_65;
      }
      if ( (v4 & 0x4000000) != 0 )
      {
        GlobalRawmodeFlag = DxgkGetGlobalRawmodeFlag();
        v29 = CCD_TOPOLOGY::Functionalize(this, GlobalRawmodeFlag ? 0x20000 : 0, 1);
        LODWORD(v9) = v29;
        if ( v29 < 0 )
        {
          v40 = v6 | 8;
          WdLogSingleEntry4(2LL, v29, this, *((_QWORD *)this + 8), v43.m128i_i64[0]);
          WdLogGlobalForLineNumber = 2737;
          goto LABEL_65;
        }
      }
      v40 = v6 | 4;
    }
    goto LABEL_44;
  }
  WdLogSingleEntry1(2LL, v8);
  WdLogGlobalForLineNumber = 2519;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
    v9,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_66:
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v56);
  CCD_TOPOLOGY::RetrievePersisted_::_2_::RecordRetrievalFlags::_RecordRetrievalFlags(&v40);
  return (unsigned int)v9;
}
