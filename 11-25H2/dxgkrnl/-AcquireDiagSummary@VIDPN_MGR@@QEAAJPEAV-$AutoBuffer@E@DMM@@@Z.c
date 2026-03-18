/*
 * XREFs of ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x14024FE94
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x14024F2D8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x140013054 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x140059CD8 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x140064B38 (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x140254DC8 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1402550DC (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1402588B8 (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x140258A28 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x14025F2FC (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x140260ADC (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     ?MonitorSerializeMonitorPresentEvents@@YAJPEAXPEA_KPEAU_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION@@@Z @ 0x14026818C (-MonitorSerializeMonitorPresentEvents@@YAJPEAXPEA_KPEAU_DMM_MONITORPRESENCEEVENTSET_SERIALIZATIO.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1403AAD74 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
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
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 v14; // rcx
  int v15; // eax
  struct DXGADAPTER *v16; // rax
  int v17; // eax
  _DWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // rsi
  struct DXGADAPTER *v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  struct DXGADAPTER *v24; // rax
  int v25; // eax
  struct DXGADAPTER *v26; // rax
  int v27; // eax
  struct DXGADAPTER *v28; // rax
  struct DXGADAPTER *v29; // rax
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // r9
  struct DXGADAPTER *v33; // rax
  struct _DMM_MONITORPRESENCEEVENTSET_SERIALIZATION *v34; // r15
  struct DXGADAPTER *v35; // rax
  struct DXGADAPTER *v36; // rax
  int v37; // eax
  struct DXGADAPTER *v38; // rax
  size_t v39; // r12
  size_t v40; // rsi
  int v41; // eax
  _DWORD *v42; // rdi
  char *v43; // rbx
  char *v44; // rcx
  char *v45; // rbx
  char *v46; // rbx
  char *v47; // rbx
  char *v48; // rbx
  char *v49; // rbx
  char *v50; // rbx
  void **v51; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v52; // [rsp+28h] [rbp-D8h]
  void **v53; // [rsp+38h] [rbp-C8h]
  void *v54; // [rsp+40h] [rbp-C0h]
  size_t v55; // [rsp+48h] [rbp-B8h]
  __int64 v56; // [rsp+50h] [rbp-B0h]
  void **v57; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v58; // [rsp+60h] [rbp-A0h]
  void **v59; // [rsp+70h] [rbp-90h]
  _DWORD *v60; // [rsp+78h] [rbp-88h]
  unsigned __int64 v61; // [rsp+80h] [rbp-80h]
  __int64 v62; // [rsp+88h] [rbp-78h]
  void **v63; // [rsp+90h] [rbp-70h] BYREF
  __int128 v64; // [rsp+98h] [rbp-68h]
  void **v65; // [rsp+A8h] [rbp-58h]
  void *v66; // [rsp+B0h] [rbp-50h]
  size_t v67; // [rsp+B8h] [rbp-48h]
  __int64 v68; // [rsp+C0h] [rbp-40h]
  void **v69; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v70; // [rsp+D0h] [rbp-30h]
  void **v71; // [rsp+E0h] [rbp-20h]
  void *v72; // [rsp+E8h] [rbp-18h]
  size_t v73; // [rsp+F0h] [rbp-10h]
  __int64 v74; // [rsp+F8h] [rbp-8h]
  void **v75; // [rsp+100h] [rbp+0h] BYREF
  __int128 v76; // [rsp+108h] [rbp+8h]
  void **v77; // [rsp+118h] [rbp+18h]
  void *v78; // [rsp+120h] [rbp+20h]
  size_t v79; // [rsp+128h] [rbp+28h]
  __int64 v80; // [rsp+130h] [rbp+30h]
  void **v81; // [rsp+138h] [rbp+38h] BYREF
  __int128 v82; // [rsp+140h] [rbp+40h]
  void **v83; // [rsp+150h] [rbp+50h]
  void *v84; // [rsp+158h] [rbp+58h]
  size_t v85; // [rsp+160h] [rbp+60h]
  __int64 v86; // [rsp+168h] [rbp+68h]
  void **v87; // [rsp+170h] [rbp+70h] BYREF
  __int128 v88; // [rsp+178h] [rbp+78h]
  void **v89; // [rsp+188h] [rbp+88h]
  void *v90; // [rsp+190h] [rbp+90h]
  size_t v91; // [rsp+198h] [rbp+98h]
  __int64 v92; // [rsp+1A0h] [rbp+A0h]
  void **v93; // [rsp+1A8h] [rbp+A8h] BYREF
  __int128 v94; // [rsp+1B0h] [rbp+B0h]
  void **v95; // [rsp+1C0h] [rbp+C0h]
  struct _DMM_MONITORPRESENCEEVENTSET_SERIALIZATION *v96; // [rsp+1C8h] [rbp+C8h]
  size_t v97; // [rsp+1D0h] [rbp+D0h]
  __int64 v98; // [rsp+1D8h] [rbp+D8h]
  void **v99; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v100; // [rsp+1E8h] [rbp+E8h]
  void **v101; // [rsp+1F8h] [rbp+F8h]
  void *Src; // [rsp+200h] [rbp+100h]
  size_t Size; // [rsp+208h] [rbp+108h]
  __int64 v104; // [rsp+210h] [rbp+110h]
  unsigned __int64 v105; // [rsp+268h] [rbp+168h] BYREF
  __int64 v106; // [rsp+270h] [rbp+170h] BYREF

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
  v99 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  Src = 0LL;
  v101 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  Size = 0LL;
  v100 = 0LL;
  v104 = 256LL;
  v6 = DMMVIDEOPRESENTSOURCESET::Serialize(v5, &v99);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = (DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)this + 15);
    v63 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v66 = 0LL;
    v65 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v64 = 0LL;
    v67 = 0LL;
    v68 = 256LL;
    v10 = DMMVIDEOPRESENTTARGETSET::Serialize(v9);
    v7 = v10;
    if ( v10 < 0 )
    {
      ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
      WdLogSingleEntry3(2LL, *((_QWORD *)this + 15), ContainingAdapter, v7);
      WdLogGlobalForLineNumber = 4351;
LABEL_9:
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v63);
      goto LABEL_45;
    }
    v14 = *((_QWORD *)this + 16);
    v51 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v53 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v54 = 0LL;
    v55 = 0LL;
    v56 = 256LL;
    v52 = 0LL;
    if ( v14 )
    {
      v15 = DMMVIDPN::Serialize(v14, &v51);
      v7 = v15;
      if ( v15 < 0 )
      {
        v16 = VIDPN_MGR::GetContainingAdapter(this);
        WdLogSingleEntry3(2LL, *((_QWORD *)this + 16), v16, v7);
        WdLogGlobalForLineNumber = 4369;
LABEL_13:
        DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v51);
        goto LABEL_9;
      }
    }
    else
    {
      v17 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(&v51, 0xCuLL, v11, v12);
      LODWORD(v7) = v17;
      if ( v17 < 0 )
      {
        WdLogSingleEntry2(2LL, 12LL, v17);
        WdLogGlobalForLineNumber = 4382;
        goto LABEL_13;
      }
      v18 = v54;
      *(_QWORD *)v54 = qword_14015C308;
      v18[2] = dword_14015C310;
    }
    v72 = 0LL;
    v69 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v73 = 0LL;
    v71 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v74 = 256LL;
    v70 = 0LL;
    v19 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests((char *)this + 192, &v69);
    v20 = v19;
    if ( v19 < 0 )
    {
      v21 = VIDPN_MGR::GetContainingAdapter(this);
      WdLogSingleEntry3(2LL, (char *)this + 192, v21, v20);
      WdLogGlobalForLineNumber = 4400;
LABEL_19:
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v69);
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v51);
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v63);
      LODWORD(v7) = v20;
      goto LABEL_45;
    }
    v22 = *((_QWORD *)this + 15);
    v75 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v78 = 0LL;
    v77 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v76 = 0LL;
    v79 = 0LL;
    v80 = 256LL;
    v23 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v22, &v75);
    v7 = v23;
    if ( v23 < 0 )
    {
      v24 = VIDPN_MGR::GetContainingAdapter(this);
      WdLogSingleEntry3(2LL, *((_QWORD *)this + 15), v24, v7);
      WdLogGlobalForLineNumber = 4414;
LABEL_22:
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v75);
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v69);
      goto LABEL_13;
    }
    v84 = 0LL;
    v81 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v85 = 0LL;
    v83 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v86 = 256LL;
    v82 = 0LL;
    v25 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests((char *)this + 328, &v81);
    v20 = v25;
    if ( v25 >= 0 )
    {
      v90 = 0LL;
      v87 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
      v91 = 0LL;
      v89 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
      v92 = 256LL;
      v88 = 0LL;
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v106, (__int64)this);
      v27 = DMMVIDPN::SerializeVidPns((char *)this + 256, &v87);
      v20 = v27;
      if ( v27 >= 0 )
      {
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v106 + 40));
        v96 = 0LL;
        v93 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
        v97 = 0LL;
        v95 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
        v94 = 0LL;
        v98 = 256LL;
        v105 = 0LL;
        v29 = VIDPN_MGR::GetContainingAdapter(this);
        v30 = MonitorSerializeMonitorPresentEvents(v29, &v105, 0LL);
        v20 = v30;
        if ( (int)(v30 + 0x80000000) < 0 || v30 == -1073741789 )
        {
          v7 = v105;
          if ( !v105 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 4469;
          }
          DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(&v93, v7, v31, v32);
          v34 = v96;
          if ( !v96 )
          {
            v35 = VIDPN_MGR::GetContainingAdapter(this);
            WdLogSingleEntry2(2LL, v7, v35);
            WdLogGlobalForLineNumber = 4476;
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v93);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v87);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v81);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v75);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v69);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v51);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v63);
            LODWORD(v7) = -1073741801;
            goto LABEL_45;
          }
          v36 = VIDPN_MGR::GetContainingAdapter(this);
          v37 = MonitorSerializeMonitorPresentEvents(v36, &v105, v34);
          v20 = v37;
          if ( v37 >= 0 )
          {
            v62 = 256LL;
            v39 = v97;
            v57 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
            v40 = Size + v67 + v55 + v73 + v79 + v85 + v97 + v91;
            v58 = 0LL;
            v59 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
            v60 = 0LL;
            v61 = 0LL;
            v41 = DMM::AutoBuffer<unsigned char>::Initialize(&v57, v40 + 40, 0LL, 256LL);
            LODWORD(v7) = v41;
            if ( v41 >= 0 )
            {
              v42 = v60;
              v60[1] = v61;
              *(_WORD *)v42 = 24577;
              v43 = (char *)(v60 + 10);
              v44 = (char *)(v60 + 10);
              v42[2] = 40;
              memmove(v44, Src, Size);
              v45 = &v43[Size];
              v42[3] = (_DWORD)v45 - (_DWORD)v60;
              memmove(v45, v66, v67);
              v46 = &v45[v67];
              v42[4] = (_DWORD)v46 - (_DWORD)v60;
              memmove(v46, v54, v55);
              v47 = &v46[v55];
              v42[5] = (_DWORD)v47 - (_DWORD)v60;
              memmove(v47, v72, v73);
              v48 = &v47[v73];
              v42[6] = (_DWORD)v48 - (_DWORD)v60;
              memmove(v48, v78, v79);
              v49 = &v48[v79];
              v42[7] = (_DWORD)v49 - (_DWORD)v60;
              memmove(v49, v84, v85);
              v50 = &v49[v85];
              v42[8] = (_DWORD)v50 - (_DWORD)v60;
              memmove(v50, v90, v91);
              v7 = (unsigned __int64)&v50[v91];
              v42[9] = v7 - (_DWORD)v60;
              memmove((void *)v7, v34, v39);
              LODWORD(v7) = DMM::AutoBuffer<unsigned char>::Initialize(a2, v61, v60, v62);
              if ( (v7 & 0x80000000) == 0LL )
              {
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v57);
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v93);
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v87);
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v81);
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v75);
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v69);
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v51);
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v63);
                LODWORD(v7) = 0;
                goto LABEL_45;
              }
              WdLogSingleEntry2(2LL, a2, &v57);
              WdLogGlobalForLineNumber = 4659;
            }
            else
            {
              WdLogSingleEntry3(2LL, v40 + 40, this, v41);
              WdLogGlobalForLineNumber = 4532;
            }
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v57);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v93);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v87);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v81);
            goto LABEL_22;
          }
          v38 = VIDPN_MGR::GetContainingAdapter(this);
          WdLogSingleEntry2(2LL, v38, v20);
          WdLogGlobalForLineNumber = 4488;
        }
        else
        {
          v33 = VIDPN_MGR::GetContainingAdapter(this);
          WdLogSingleEntry2(2LL, v33, v20);
          WdLogGlobalForLineNumber = 4464;
        }
        DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v93);
      }
      else
      {
        v28 = VIDPN_MGR::GetContainingAdapter(this);
        WdLogSingleEntry3(2LL, (char *)this + 256, v28, v20);
        WdLogGlobalForLineNumber = 4447;
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v106 + 40));
      }
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v87);
    }
    else
    {
      v26 = VIDPN_MGR::GetContainingAdapter(this);
      WdLogSingleEntry3(2LL, (char *)this + 328, v26, v20);
      WdLogGlobalForLineNumber = 4429;
    }
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v81);
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v75);
    goto LABEL_19;
  }
  v8 = VIDPN_MGR::GetContainingAdapter(this);
  WdLogSingleEntry3(2LL, *((_QWORD *)this + 14), v8, v7);
  WdLogGlobalForLineNumber = 4337;
LABEL_45:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v99);
  return (unsigned int)v7;
}
