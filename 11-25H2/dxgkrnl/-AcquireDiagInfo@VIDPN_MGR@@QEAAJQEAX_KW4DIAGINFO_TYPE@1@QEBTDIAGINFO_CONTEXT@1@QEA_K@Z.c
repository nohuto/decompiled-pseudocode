/*
 * XREFs of ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x14024F2D8
 * Callers:
 *     ?DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z @ 0x140250E64 (-DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z.c)
 *     ?DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z @ 0x140250FA4 (-DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x14040D114 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 * Callees:
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x140013054 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x140034684 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x140038864 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x140041290 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x140045D68 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x140059CD8 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x140064B38 (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1400718C8 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x14024FE94 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x140254DC8 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1402550DC (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x140255350 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1402564F4 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 *     ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1402566A8 (-_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV-$AutoBuffer@U_DMM_VIDPNSOURCEM.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1402588B8 (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x140258A28 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x14025F2FC (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x140260ADC (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     ?MonitorSerializeMonitorPresentEvents@@YAJPEAXPEA_KPEAU_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION@@@Z @ 0x14026818C (-MonitorSerializeMonitorPresentEvents@@YAJPEAXPEA_KPEAU_DMM_MONITORPRESENCEEVENTSET_SERIALIZATIO.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1402CE7D4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1403AAD74 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagInfo(VIDPN_MGR *a1, void *a2, size_t a3, int a4, int *a5, size_t *a6)
{
  __int64 v6; // r14
  void *v8; // r13
  __int64 result; // rax
  size_t *v11; // r15
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  struct DXGADAPTER *v18; // rax
  int v19; // eax
  struct DXGADAPTER *v20; // rax
  __int64 v21; // rbx
  int v22; // eax
  struct DXGADAPTER *v23; // rax
  int v24; // eax
  struct DXGADAPTER *v25; // rax
  int v26; // eax
  struct DXGADAPTER *v27; // rax
  int v28; // eax
  struct DXGADAPTER *v29; // rax
  int v30; // eax
  struct DXGADAPTER *v31; // rax
  __int64 v32; // rcx
  size_t v33; // rbx
  size_t v34; // r8
  _QWORD *v35; // rax
  int v36; // eax
  unsigned __int8 *v37; // rdx
  DXGDIAGNOSTICS *v38; // rcx
  unsigned __int64 v39; // rbx
  int v40; // eax
  struct DXGADAPTER *v41; // rax
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v43; // rbx
  struct DXGADAPTER *v44; // rax
  int v45; // eax
  struct DXGADAPTER *v46; // rax
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  int *v48; // r13
  __int64 v49; // rdi
  struct DXGADAPTER *v50; // rax
  int v51; // eax
  __int64 v52; // r15
  struct DXGADAPTER *v53; // rax
  int v54; // eax
  struct DXGADAPTER *v55; // rax
  int v56; // eax
  struct DXGADAPTER *v57; // rax
  struct DXGADAPTER *ContainingAdapter; // rax
  int v59; // eax
  __int64 v60; // r8
  __int64 v61; // r9
  struct DXGADAPTER *v62; // rax
  unsigned __int64 v63; // rbx
  struct _DMM_MONITORPRESENCEEVENTSET_SERIALIZATION *v64; // rdi
  struct DXGADAPTER *v65; // rax
  struct DXGADAPTER *v66; // rax
  int v67; // eax
  struct DXGADAPTER *v68; // rax
  DMMVIDPN *v69; // [rsp+58h] [rbp-49h] BYREF
  __int64 v70; // [rsp+60h] [rbp-41h] BYREF
  __int64 v71; // [rsp+68h] [rbp-39h] BYREF
  __int64 v72; // [rsp+70h] [rbp-31h] BYREF
  __int64 v73; // [rsp+78h] [rbp-29h] BYREF
  __int128 v74; // [rsp+80h] [rbp-21h]
  void **v75; // [rsp+90h] [rbp-11h]
  void *Src; // [rsp+98h] [rbp-9h]
  unsigned __int64 v77; // [rsp+A0h] [rbp-1h]
  __int64 v78; // [rsp+A8h] [rbp+7h]
  unsigned __int64 v79; // [rsp+B0h] [rbp+Fh] BYREF
  __int64 v80; // [rsp+B8h] [rbp+17h] BYREF
  void *v81; // [rsp+100h] [rbp+5Fh] BYREF

  v81 = a2;
  v6 = a4;
  v8 = a2;
  if ( a2 )
  {
    if ( a3 )
    {
      memset(a2, 0, a3);
      goto LABEL_7;
    }
LABEL_5:
    WdLogSingleEntry2(2LL, a2, a3);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 4786;
    return result;
  }
  if ( a3 )
    goto LABEL_5;
LABEL_7:
  v11 = a6;
  if ( a6 )
    *a6 = 0LL;
  Src = 0LL;
  v73 = (__int64)&DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v75 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v77 = 0LL;
  v78 = 256LL;
  v74 = 0LL;
  if ( (int)v6 > 8 )
  {
    if ( (_DWORD)v6 == 9 )
    {
      if ( a5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5061;
      }
      v79 = 0LL;
      ContainingAdapter = VIDPN_MGR::GetContainingAdapter(a1);
      v59 = MonitorSerializeMonitorPresentEvents(ContainingAdapter, &v79, 0LL);
      v17 = v59;
      if ( (int)(v59 + 0x80000000) >= 0 && v59 != -1073741789 )
      {
        v62 = VIDPN_MGR::GetContainingAdapter(a1);
        WdLogSingleEntry2(2LL, v62, v17);
        WdLogGlobalForLineNumber = 5081;
        goto LABEL_119;
      }
      v63 = v79;
      if ( !v79 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5086;
      }
      DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(&v73, v63, v60, v61);
      v64 = (struct _DMM_MONITORPRESENCEEVENTSET_SERIALIZATION *)Src;
      if ( !Src )
      {
        v65 = VIDPN_MGR::GetContainingAdapter(a1);
        WdLogSingleEntry2(2LL, v63, v65);
        WdLogGlobalForLineNumber = 5097;
        LODWORD(v17) = -1073741801;
        goto LABEL_119;
      }
      v66 = VIDPN_MGR::GetContainingAdapter(a1);
      v67 = MonitorSerializeMonitorPresentEvents(v66, &v79, v64);
      v17 = v67;
      if ( v67 < 0 )
      {
        v68 = VIDPN_MGR::GetContainingAdapter(a1);
        WdLogSingleEntry2(2LL, v68, v17);
        WdLogGlobalForLineNumber = 5112;
        goto LABEL_119;
      }
      goto LABEL_53;
    }
    if ( (_DWORD)v6 != 10 && (_DWORD)v6 != 11 )
    {
      if ( (_DWORD)v6 == 12 )
        goto LABEL_87;
      if ( (_DWORD)v6 == 13 )
      {
        if ( a5 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 4833;
        }
        v40 = DMM::AutoBuffer<unsigned char>::Initialize(&v73, 2uLL, 0LL, 256LL);
        v17 = v40;
        if ( v40 < 0 )
        {
          WdLogSingleEntry1(2LL, &v73);
          WdLogGlobalForLineNumber = 4720;
          v41 = VIDPN_MGR::GetContainingAdapter(a1);
          WdLogSingleEntry2(2LL, v41, v17);
          WdLogGlobalForLineNumber = 4842;
          goto LABEL_119;
        }
        *(_WORD *)Src = 24577;
        goto LABEL_53;
      }
      if ( (_DWORD)v6 != 14 )
        goto LABEL_67;
      if ( a5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5231;
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v72, (__int64)a1);
      LODWORD(v81) = 0x8000;
      v36 = DMM::AutoBuffer<unsigned char>::Initialize(&v73, 0x8000uLL, 0LL, 256LL);
      LODWORD(v17) = v36;
      if ( v36 >= 0 )
      {
        v37 = (unsigned __int8 *)Src;
        if ( !Src )
        {
          WdLogSingleEntry0(1LL);
          v37 = (unsigned __int8 *)Src;
          WdLogGlobalForLineNumber = 5254;
        }
        v38 = (DXGDIAGNOSTICS *)*((_QWORD *)a1 + 70);
        if ( !v38 )
        {
          WdLogSingleEntry2(2LL, v37, a1);
          WdLogGlobalForLineNumber = 5260;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Unable to obtain VIDPN_MGR Diagnosibility buffer; pDiagnosticsBuffer = 0x%I64x, this = 0x%I64x",
            (__int64)Src,
            (__int64)a1,
            0LL,
            0LL,
            0LL);
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v72 + 40));
          LODWORD(v17) = -1073741436;
          goto LABEL_119;
        }
        LODWORD(v17) = DXGDIAGNOSTICS::ReadDiagnostics(v38, v37, (unsigned int *)&v81, -1);
        if ( (int)v17 >= 0 )
        {
          v39 = (unsigned int)v81;
          if ( (unsigned int)v81 > v77 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 118;
          }
          v77 = v39;
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v72 + 40));
          goto LABEL_53;
        }
        WdLogSingleEntry2(2LL, Src, a1);
        WdLogGlobalForLineNumber = 5272;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Unable to read VIDPN_MGR diagnostics data; DiagInfoSerialization.get() = 0x%I64x, this = 0x%I64x",
          (__int64)Src,
          (__int64)a1,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        WdLogSingleEntry3(2LL, 0x8000LL, a1, v36);
        WdLogGlobalForLineNumber = 5247;
      }
      v32 = v72;
LABEL_50:
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v32 + 40));
      goto LABEL_119;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v70, (__int64)a1);
    v69 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(a1);
    LODWORD(v17) = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      WdLogSingleEntry1(7LL, ClientVidPnFromLastClientCommitedVidPn);
      WdLogGlobalForLineNumber = 5136;
      auto_rc<DMMVIDPN>::reset((__int64 *)&v69, 0LL);
      v32 = v70;
      goto LABEL_50;
    }
    v48 = a5;
    v49 = (unsigned int)*a5;
    if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPN *)((char *)v69 + 96), *a5) )
    {
      v50 = VIDPN_MGR::GetContainingAdapter(a1);
      WdLogSingleEntry1(7LL, v50);
      WdLogGlobalForLineNumber = 5152;
      auto_rc<DMMVIDPN>::reset((__int64 *)&v69, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v70 + 40));
      LODWORD(v17) = -1071774919;
      goto LABEL_119;
    }
    v51 = VIDPN_MGR::UnpinPathModalityFromSource(a1, (DMMVIDPN *)((char *)v69 + 96), v49);
    v52 = v51;
    if ( v51 < 0 )
    {
      v53 = VIDPN_MGR::GetContainingAdapter(a1);
      WdLogSingleEntry3(2LL, v49, v53, v52);
      WdLogGlobalForLineNumber = 5164;
LABEL_100:
      auto_rc<DMMVIDPN>::reset((__int64 *)&v69, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v70 + 40));
      LODWORD(v17) = v52;
      goto LABEL_119;
    }
    if ( (_DWORD)v6 == 10 )
    {
      v56 = VIDPN_MGR::_SerializeVidPnSourceModeSet(a1, v69, v49);
      v52 = v56;
      if ( v56 < 0 )
      {
        v57 = VIDPN_MGR::GetContainingAdapter(a1);
        WdLogSingleEntry3(2LL, v49, v57, v52);
        WdLogGlobalForLineNumber = 5188;
        goto LABEL_100;
      }
    }
    else
    {
      v54 = VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource(
              a1,
              v69,
              v49,
              (struct _D3DKMDT_VIDPN_SOURCE_MODE *)(v48 + 1),
              (__int64)&v73);
      v52 = v54;
      if ( v54 < 0 )
      {
        v55 = VIDPN_MGR::GetContainingAdapter(a1);
        WdLogSingleEntry3(2LL, v49, v55, v52);
        WdLogGlobalForLineNumber = 5213;
        goto LABEL_100;
      }
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v69, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v70 + 40));
    v8 = v81;
    goto LABEL_52;
  }
  switch ( (_DWORD)v6 )
  {
    case 8:
      if ( a5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5030;
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v80, (__int64)a1);
      v30 = DMMVIDPN::SerializeVidPns((char *)a1 + 256, &v73);
      v17 = v30;
      if ( v30 < 0 )
      {
        v31 = VIDPN_MGR::GetContainingAdapter(a1);
        WdLogSingleEntry3(2LL, (char *)a1 + 256, v31, v17);
        v32 = v80;
        WdLogGlobalForLineNumber = 5049;
        goto LABEL_50;
      }
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v80 + 40));
LABEL_52:
      v11 = a6;
      goto LABEL_53;
    case 1:
      if ( a5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4812;
      }
      v28 = VIDPN_MGR::AcquireDiagSummary(a1);
      v17 = v28;
      if ( v28 < 0 )
      {
        v29 = VIDPN_MGR::GetContainingAdapter(a1);
        WdLogSingleEntry2(2LL, v29, v17);
        WdLogGlobalForLineNumber = 4821;
        goto LABEL_119;
      }
LABEL_53:
      v33 = v77;
      if ( v8 )
      {
        v34 = v77;
        if ( a3 < v77 )
          v34 = a3;
        memmove(v8, Src, v34);
      }
      if ( v11 )
        *v11 = v33;
      if ( v33 <= a3 )
      {
        LODWORD(v17) = 0;
      }
      else
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
        LODWORD(v17) = -2147483643;
        v35[3] = a3;
        v35[4] = v6;
        v35[5] = v77;
        WdLogGlobalForLineNumber = 5309;
      }
      goto LABEL_119;
    case 2:
      if ( a5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4854;
      }
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 14) + 72LL));
      v21 = *((_QWORD *)a1 + 14);
      v26 = DMMVIDEOPRESENTSOURCESET::Serialize(v21, &v73);
      v17 = v26;
      if ( v26 >= 0 )
        goto LABEL_40;
      v27 = VIDPN_MGR::GetContainingAdapter(a1);
      WdLogSingleEntry3(2LL, v21, v27, v17);
      WdLogGlobalForLineNumber = 4870;
      goto LABEL_38;
    case 3:
      if ( a5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4882;
      }
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 15) + 72LL));
      v21 = *((_QWORD *)a1 + 15);
      v24 = DMMVIDEOPRESENTTARGETSET::Serialize((DMMVIDEOPRESENTTARGETSET *)v21);
      v17 = v24;
      if ( v24 >= 0 )
        goto LABEL_40;
      v25 = VIDPN_MGR::GetContainingAdapter(a1);
      WdLogSingleEntry3(2LL, v21, v25, v17);
      WdLogGlobalForLineNumber = 4898;
LABEL_38:
      if ( v21 )
        ReferenceCounted::Release((ReferenceCounted *)(v21 + 64));
      goto LABEL_119;
    case 4:
LABEL_87:
      if ( a5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4939;
      }
      v71 = 0LL;
      ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(a1);
      auto_rc<DMMVIDPN const>::reset(&v71, (__int64)ClientCommittedVidPnRef);
      v43 = v71;
      if ( !v71 )
      {
        v44 = VIDPN_MGR::GetContainingAdapter(a1);
        WdLogSingleEntry1(3LL, v44);
        WdLogGlobalForLineNumber = 4949;
        auto_rc<DMMVIDPN const>::reset(&v71, 0LL);
        LODWORD(v17) = -1071774884;
        goto LABEL_119;
      }
      v45 = DMMVIDPN::Serialize(v71, &v73);
      v17 = v45;
      if ( v45 < 0 )
      {
        v46 = VIDPN_MGR::GetContainingAdapter(a1);
        WdLogSingleEntry3(2LL, v43, v46, v17);
        WdLogGlobalForLineNumber = 4966;
        auto_rc<DMMVIDPN const>::reset(&v71, 0LL);
        goto LABEL_119;
      }
      auto_rc<DMMVIDPN const>::reset(&v71, 0LL);
      goto LABEL_53;
    case 5:
      if ( a5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4910;
      }
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 15) + 72LL));
      v21 = *((_QWORD *)a1 + 15);
      v22 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v21, &v73);
      v17 = v22;
      if ( v22 < 0 )
      {
        v23 = VIDPN_MGR::GetContainingAdapter(a1);
        WdLogSingleEntry3(2LL, v21, v23, v17);
        WdLogGlobalForLineNumber = 4926;
        goto LABEL_38;
      }
LABEL_40:
      if ( v21 )
        ReferenceCounted::Release((ReferenceCounted *)(v21 + 64));
      goto LABEL_53;
    case 6:
      if ( a5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4978;
      }
      v19 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests((char *)a1 + 192, &v73);
      v17 = v19;
      if ( v19 < 0 )
      {
        v20 = VIDPN_MGR::GetContainingAdapter(a1);
        WdLogSingleEntry3(2LL, (char *)a1 + 192, v20, v17);
        WdLogGlobalForLineNumber = 4992;
        goto LABEL_119;
      }
      goto LABEL_52;
  }
  if ( (_DWORD)v6 != 7 )
  {
LABEL_67:
    WdLogSingleEntry1(2LL, v6);
    WdLogGlobalForLineNumber = 5285;
    LODWORD(v17) = -1073741811;
    goto LABEL_119;
  }
  if ( a5 )
  {
    WdLogSingleEntry0((unsigned int)(v6 - 6));
    WdLogGlobalForLineNumber = 5004;
  }
  v12 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests((char *)a1 + 328, &v73);
  v17 = v12;
  if ( v12 >= 0 )
    goto LABEL_52;
  v18 = VIDPN_MGR::GetContainingAdapter(a1);
  WdLogSingleEntry3(2LL, (char *)a1 + 328, v18, v17);
  WdLogGlobalForLineNumber = 5018;
LABEL_119:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v73);
  return (unsigned int)v17;
}
