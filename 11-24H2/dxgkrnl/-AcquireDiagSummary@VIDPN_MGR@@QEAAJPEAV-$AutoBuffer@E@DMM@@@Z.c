/*
 * XREFs of ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x140256CC4
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140256108 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1400224E4 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x140023444 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x140064758 (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x14025BC64 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x14025BF78 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x14025F7B8 (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x14025F928 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1402661FC (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1402679DC (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     ?MonitorSerializeMonitorPresentEvents@@YAJPEAXPEA_KPEAU_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION@@@Z @ 0x14026F0EC (-MonitorSerializeMonitorPresentEvents@@YAJPEAXPEA_KPEAU_DMM_MONITORPRESENCEEVENTSET_SERIALIZATIO.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x140311AA4 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagSummary(VIDPN_MGR *this, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  int v6; // eax
  unsigned __int64 v7; // rbx
  struct DXGADAPTER *v8; // rax
  DMMVIDEOPRESENTTARGETSET *v9; // rcx
  int v10; // eax
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 v12; // rcx
  int v13; // eax
  struct DXGADAPTER *v14; // rax
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  __int64 v18; // rsi
  struct DXGADAPTER *v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  struct DXGADAPTER *v22; // rax
  int v23; // eax
  struct DXGADAPTER *v24; // rax
  int v25; // eax
  struct DXGADAPTER *v26; // rax
  struct DXGADAPTER *v27; // rax
  int v28; // eax
  struct DXGADAPTER *v29; // rax
  struct _DMM_MONITORPRESENCEEVENTSET_SERIALIZATION *v30; // r15
  struct DXGADAPTER *v31; // rax
  struct DXGADAPTER *v32; // rax
  int v33; // eax
  struct DXGADAPTER *v34; // rax
  size_t v35; // r12
  size_t v36; // rsi
  int v37; // eax
  _DWORD *v38; // rdi
  char *v39; // rbx
  char *v40; // rcx
  char *v41; // rbx
  char *v42; // rbx
  char *v43; // rbx
  char *v44; // rbx
  char *v45; // rbx
  char *v46; // rbx
  void **v47; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v48; // [rsp+28h] [rbp-D8h]
  void **v49; // [rsp+38h] [rbp-C8h]
  void *v50; // [rsp+40h] [rbp-C0h]
  size_t v51; // [rsp+48h] [rbp-B8h]
  __int64 v52; // [rsp+50h] [rbp-B0h]
  void **v53; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v54; // [rsp+60h] [rbp-A0h]
  void **v55; // [rsp+70h] [rbp-90h]
  _DWORD *v56; // [rsp+78h] [rbp-88h]
  unsigned __int64 v57; // [rsp+80h] [rbp-80h]
  __int64 v58; // [rsp+88h] [rbp-78h]
  void **v59; // [rsp+90h] [rbp-70h] BYREF
  __int128 v60; // [rsp+98h] [rbp-68h]
  void **v61; // [rsp+A8h] [rbp-58h]
  void *v62; // [rsp+B0h] [rbp-50h]
  size_t v63; // [rsp+B8h] [rbp-48h]
  __int64 v64; // [rsp+C0h] [rbp-40h]
  void **v65; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v66; // [rsp+D0h] [rbp-30h]
  void **v67; // [rsp+E0h] [rbp-20h]
  void *v68; // [rsp+E8h] [rbp-18h]
  size_t v69; // [rsp+F0h] [rbp-10h]
  __int64 v70; // [rsp+F8h] [rbp-8h]
  void **v71; // [rsp+100h] [rbp+0h] BYREF
  __int128 v72; // [rsp+108h] [rbp+8h]
  void **v73; // [rsp+118h] [rbp+18h]
  void *v74; // [rsp+120h] [rbp+20h]
  size_t v75; // [rsp+128h] [rbp+28h]
  __int64 v76; // [rsp+130h] [rbp+30h]
  void **v77; // [rsp+138h] [rbp+38h] BYREF
  __int128 v78; // [rsp+140h] [rbp+40h]
  void **v79; // [rsp+150h] [rbp+50h]
  void *v80; // [rsp+158h] [rbp+58h]
  size_t v81; // [rsp+160h] [rbp+60h]
  __int64 v82; // [rsp+168h] [rbp+68h]
  void **v83; // [rsp+170h] [rbp+70h] BYREF
  __int128 v84; // [rsp+178h] [rbp+78h]
  void **v85; // [rsp+188h] [rbp+88h]
  void *v86; // [rsp+190h] [rbp+90h]
  size_t v87; // [rsp+198h] [rbp+98h]
  __int64 v88; // [rsp+1A0h] [rbp+A0h]
  void **v89; // [rsp+1A8h] [rbp+A8h] BYREF
  __int128 v90; // [rsp+1B0h] [rbp+B0h]
  void **v91; // [rsp+1C0h] [rbp+C0h]
  struct _DMM_MONITORPRESENCEEVENTSET_SERIALIZATION *v92; // [rsp+1C8h] [rbp+C8h]
  size_t v93; // [rsp+1D0h] [rbp+D0h]
  __int64 v94; // [rsp+1D8h] [rbp+D8h]
  void **v95; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v96; // [rsp+1E8h] [rbp+E8h]
  void **v97; // [rsp+1F8h] [rbp+F8h]
  void *Src; // [rsp+200h] [rbp+100h]
  size_t Size; // [rsp+208h] [rbp+108h]
  __int64 v100; // [rsp+210h] [rbp+110h]
  unsigned __int64 v101; // [rsp+268h] [rbp+168h] BYREF
  __int64 v102; // [rsp+270h] [rbp+170h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 4321;
    return result;
  }
  if ( a2[4] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4327;
  }
  v5 = *((_QWORD *)this + 14);
  v95 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  Src = 0LL;
  v97 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  Size = 0LL;
  v96 = 0LL;
  v100 = 256LL;
  v6 = DMMVIDEOPRESENTSOURCESET::Serialize(v5, &v95);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = (DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)this + 15);
    v59 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v62 = 0LL;
    v61 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v60 = 0LL;
    v63 = 0LL;
    v64 = 256LL;
    v10 = DMMVIDEOPRESENTTARGETSET::Serialize(v9);
    v7 = v10;
    if ( v10 < 0 )
    {
      ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
      WdLogSingleEntry3(2LL, *((_QWORD *)this + 15), ContainingAdapter, v7);
      WdLogGlobalForLineNumber = 4351;
LABEL_9:
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v59);
      goto LABEL_45;
    }
    v12 = *((_QWORD *)this + 16);
    v47 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v49 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v50 = 0LL;
    v51 = 0LL;
    v52 = 256LL;
    v48 = 0LL;
    if ( v12 )
    {
      v13 = DMMVIDPN::Serialize(v12, &v47);
      v7 = v13;
      if ( v13 < 0 )
      {
        v14 = VIDPN_MGR::GetContainingAdapter(this);
        WdLogSingleEntry3(2LL, *((_QWORD *)this + 16), v14, v7);
        WdLogGlobalForLineNumber = 4369;
LABEL_13:
        DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v47);
        goto LABEL_9;
      }
    }
    else
    {
      v15 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(&v47, 0xCuLL);
      LODWORD(v7) = v15;
      if ( v15 < 0 )
      {
        WdLogSingleEntry2(2LL, 12LL, v15);
        WdLogGlobalForLineNumber = 4382;
        goto LABEL_13;
      }
      v16 = v50;
      *(_QWORD *)v50 = qword_14015F308;
      v16[2] = dword_14015F310;
    }
    v68 = 0LL;
    v65 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v69 = 0LL;
    v67 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v70 = 256LL;
    v66 = 0LL;
    v17 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests((char *)this + 192, &v65);
    v18 = v17;
    if ( v17 < 0 )
    {
      v19 = VIDPN_MGR::GetContainingAdapter(this);
      WdLogSingleEntry3(2LL, (char *)this + 192, v19, v18);
      WdLogGlobalForLineNumber = 4400;
LABEL_19:
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v65);
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v47);
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v59);
      LODWORD(v7) = v18;
      goto LABEL_45;
    }
    v20 = *((_QWORD *)this + 15);
    v71 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v74 = 0LL;
    v73 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v72 = 0LL;
    v75 = 0LL;
    v76 = 256LL;
    v21 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v20, &v71);
    v7 = v21;
    if ( v21 < 0 )
    {
      v22 = VIDPN_MGR::GetContainingAdapter(this);
      WdLogSingleEntry3(2LL, *((_QWORD *)this + 15), v22, v7);
      WdLogGlobalForLineNumber = 4414;
LABEL_22:
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v71);
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v65);
      goto LABEL_13;
    }
    v80 = 0LL;
    v77 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v81 = 0LL;
    v79 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v82 = 256LL;
    v78 = 0LL;
    v23 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests((char *)this + 328, &v77);
    v18 = v23;
    if ( v23 >= 0 )
    {
      v86 = 0LL;
      v83 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
      v87 = 0LL;
      v85 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
      v88 = 256LL;
      v84 = 0LL;
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v102, (__int64)this);
      v25 = DMMVIDPN::SerializeVidPns((char *)this + 256, &v83);
      v18 = v25;
      if ( v25 >= 0 )
      {
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v102 + 40));
        v92 = 0LL;
        v89 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
        v93 = 0LL;
        v91 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
        v90 = 0LL;
        v94 = 256LL;
        v101 = 0LL;
        v27 = VIDPN_MGR::GetContainingAdapter(this);
        v28 = MonitorSerializeMonitorPresentEvents(v27, &v101, 0LL);
        v18 = v28;
        if ( (int)(v28 + 0x80000000) < 0 || v28 == -1073741789 )
        {
          v7 = v101;
          if ( !v101 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 4469;
          }
          DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(&v89, v7);
          v30 = v92;
          if ( !v92 )
          {
            v31 = VIDPN_MGR::GetContainingAdapter(this);
            WdLogSingleEntry2(2LL, v7, v31);
            WdLogGlobalForLineNumber = 4476;
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v89);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v83);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v77);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v71);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v65);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v47);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v59);
            LODWORD(v7) = -1073741801;
            goto LABEL_45;
          }
          v32 = VIDPN_MGR::GetContainingAdapter(this);
          v33 = MonitorSerializeMonitorPresentEvents(v32, &v101, v30);
          v18 = v33;
          if ( v33 >= 0 )
          {
            v58 = 256LL;
            v35 = v93;
            v53 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
            v36 = Size + v63 + v51 + v69 + v75 + v81 + v93 + v87;
            v54 = 0LL;
            v55 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
            v56 = 0LL;
            v57 = 0LL;
            v37 = DMM::AutoBuffer<unsigned char>::Initialize(&v53, v36 + 40, 0LL, 256LL);
            LODWORD(v7) = v37;
            if ( v37 >= 0 )
            {
              v38 = v56;
              v56[1] = v57;
              *(_WORD *)v38 = 28673;
              v39 = (char *)(v56 + 10);
              v40 = (char *)(v56 + 10);
              v38[2] = 40;
              memmove(v40, Src, Size);
              v41 = &v39[Size];
              v38[3] = (_DWORD)v41 - (_DWORD)v56;
              memmove(v41, v62, v63);
              v42 = &v41[v63];
              v38[4] = (_DWORD)v42 - (_DWORD)v56;
              memmove(v42, v50, v51);
              v43 = &v42[v51];
              v38[5] = (_DWORD)v43 - (_DWORD)v56;
              memmove(v43, v68, v69);
              v44 = &v43[v69];
              v38[6] = (_DWORD)v44 - (_DWORD)v56;
              memmove(v44, v74, v75);
              v45 = &v44[v75];
              v38[7] = (_DWORD)v45 - (_DWORD)v56;
              memmove(v45, v80, v81);
              v46 = &v45[v81];
              v38[8] = (_DWORD)v46 - (_DWORD)v56;
              memmove(v46, v86, v87);
              v7 = (unsigned __int64)&v46[v87];
              v38[9] = v7 - (_DWORD)v56;
              memmove((void *)v7, v30, v35);
              LODWORD(v7) = DMM::AutoBuffer<unsigned char>::Initialize(a2, v57, v56, v58);
              if ( (v7 & 0x80000000) == 0LL )
              {
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v53);
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v89);
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v83);
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v77);
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v71);
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v65);
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v47);
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v59);
                LODWORD(v7) = 0;
                goto LABEL_45;
              }
              WdLogSingleEntry2(2LL, a2, &v53);
              WdLogGlobalForLineNumber = 4659;
            }
            else
            {
              WdLogSingleEntry3(2LL, v36 + 40, this, v37);
              WdLogGlobalForLineNumber = 4532;
            }
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v53);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v89);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v83);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v77);
            goto LABEL_22;
          }
          v34 = VIDPN_MGR::GetContainingAdapter(this);
          WdLogSingleEntry2(2LL, v34, v18);
          WdLogGlobalForLineNumber = 4488;
        }
        else
        {
          v29 = VIDPN_MGR::GetContainingAdapter(this);
          WdLogSingleEntry2(2LL, v29, v18);
          WdLogGlobalForLineNumber = 4464;
        }
        DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v89);
      }
      else
      {
        v26 = VIDPN_MGR::GetContainingAdapter(this);
        WdLogSingleEntry3(2LL, (char *)this + 256, v26, v18);
        WdLogGlobalForLineNumber = 4447;
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v102 + 40));
      }
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v83);
    }
    else
    {
      v24 = VIDPN_MGR::GetContainingAdapter(this);
      WdLogSingleEntry3(2LL, (char *)this + 328, v24, v18);
      WdLogGlobalForLineNumber = 4429;
    }
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v77);
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v71);
    goto LABEL_19;
  }
  v8 = VIDPN_MGR::GetContainingAdapter(this);
  WdLogSingleEntry3(2LL, *((_QWORD *)this + 14), v8, v7);
  WdLogGlobalForLineNumber = 4337;
LABEL_45:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v95);
  return (unsigned int)v7;
}
