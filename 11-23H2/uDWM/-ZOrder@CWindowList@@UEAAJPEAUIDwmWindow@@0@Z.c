/*
 * XREFs of ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180041680
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertAt@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z @ 0x180004FE0 (-InsertAt@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180008E50 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x180011C20 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003A9B0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180047F08 (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18004B2C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004DAFC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ @ 0x18004FAD8 (-PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800CF324 (-ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x18010A1CC (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 *     ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18010CC54 (-ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?ZOrderAcrylicSheet@CWindowList@@QEAAJXZ @ 0x18010D284 (-ZOrderAcrylicSheet@CWindowList@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowList::ZOrder(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3)
{
  unsigned int v6; // r15d
  int v7; // edi
  struct CWindowData *v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rax
  struct _RTL_GENERIC_TABLE *v11; // r13
  char *v12; // rax
  char *v13; // rsi
  struct CWindowData *v14; // rbx
  int v15; // edi
  char *v16; // rdi
  CWindowData **v17; // rcx
  CWindowData *v18; // rax
  __int64 v19; // rcx
  CWindowData *v20; // rdi
  __int64 v21; // rax
  char *v22; // rax
  CWindowData *v23; // r12
  CWindowData *v24; // rbx
  char v25; // r14
  CWindowData *v26; // rsi
  CWindowList *v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // r13
  struct CVisual *v31; // rbx
  __int64 v32; // rax
  char *v33; // rax
  char *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  int inserted; // eax
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // r13
  unsigned __int64 v43; // rsi
  int v44; // ebx
  int v45; // ecx
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v50; // rax
  __int64 v51; // rax
  char *v52; // rax
  char *v53; // rsi
  char *v54; // rbx
  __int64 v55; // rax
  char *v56; // rsi
  __int64 v57; // rax
  char *v58; // rax
  char *v59; // rcx
  char *v60; // rax
  __int64 v61; // rdi
  __int64 *v62; // r12
  unsigned int v63; // eax
  unsigned int v64; // r8d
  char *v65; // rax
  unsigned int v66; // ecx
  __int64 v67; // rdx
  struct CVisual *v68; // r14
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  int v70; // eax
  int v71; // eax
  struct _RTL_GENERIC_TABLE *v72; // rax
  CWindowData *v73; // rax
  struct _RTL_CRITICAL_SECTION *v74; // rax
  CWindowData *v75; // rax
  int v76; // eax
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rdx
  int v81; // eax
  unsigned __int64 v82; // r9
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rdx
  int v86; // eax
  __int64 v87; // rdx
  int v88; // eax
  int v89; // eax
  int ProjectedShadowSceneForDesktop; // eax
  CProjectedShadowScene *v91; // rbx
  int v92; // [rsp+20h] [rbp-E0h]
  CProjectedShadowScene *v93; // [rsp+30h] [rbp-D0h] BYREF
  struct _RTL_CRITICAL_SECTION *v94; // [rsp+38h] [rbp-C8h] BYREF
  __int64 Buffer; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v96; // [rsp+48h] [rbp-B8h]
  __int128 v97; // [rsp+50h] [rbp-B0h]
  __int128 v98; // [rsp+60h] [rbp-A0h]
  __int128 v99; // [rsp+70h] [rbp-90h]
  __int64 v100; // [rsp+80h] [rbp-80h]
  char v101; // [rsp+88h] [rbp-78h]
  __int64 v102; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v103; // [rsp+A8h] [rbp-58h]
  __int128 v104; // [rsp+B0h] [rbp-50h]
  __int128 v105; // [rsp+C0h] [rbp-40h]
  __int128 v106; // [rsp+D0h] [rbp-30h]
  __int64 v107; // [rsp+E0h] [rbp-20h]
  char v108; // [rsp+E8h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v109; // [rsp+100h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]
  CWindowData *v112; // [rsp+158h] [rbp+58h] BYREF
  PRTL_GENERIC_TABLE Table; // [rsp+168h] [rbp+68h] BYREF

  v109 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v112 = 0LL;
  v7 = 0;
  v8 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !v8 && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
  {
    v72 = (struct _RTL_GENERIC_TABLE *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 16LL))(
                                         WPF::g_pProcessHeap,
                                         864LL);
    Table = v72;
    if ( !v72 || (v73 = CWindowData::CWindowData((CWindowData *)v72), (v8 = v73) == 0LL) )
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x822u, 0LL);
LABEL_111:
      v9 = v7;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xE2Fu, 0LL);
      goto LABEL_58;
    }
    *((_QWORD *)v73 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v73);
    *((_QWORD *)v8 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    v7 = CWindowList::SyncWindowData(this, a2, v8);
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x826u, 0LL);
      goto LABEL_111;
    }
  }
  v112 = v8;
  v9 = v7;
  if ( !v8 )
  {
    v9 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0xE31u, 0LL);
    goto LABEL_58;
  }
  v10 = *((_QWORD *)v8 + 17);
  v11 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  Table = v11;
  v96 = 0LL;
  v97 = 0LL;
  v100 = -1LL;
  v101 = 0;
  v98 = 0LL;
  v99 = 0LL;
  Buffer = v10;
  v12 = (char *)RtlLookupElementGenericTable(v11, &Buffer);
  if ( !v12 || (v13 = v12 + 80, v12 == (char *)-80LL) )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xE34u, 0LL);
    goto LABEL_58;
  }
  v14 = (struct CWindowData *)(v12 + 80);
  if ( a3 )
  {
    v15 = 0;
    v14 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 8LL))(a3);
    if ( !v14 && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 16LL))(a3) )
    {
      v74 = (struct _RTL_CRITICAL_SECTION *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 16LL))(
                                              WPF::g_pProcessHeap,
                                              864LL);
      v94 = v74;
      if ( !v74 || (v75 = CWindowData::CWindowData((CWindowData *)v74), (v14 = v75) == 0LL) )
      {
        v15 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x822u, 0LL);
        v9 = -2147024882;
        goto LABEL_120;
      }
      *((_QWORD *)v75 + 3) = a3;
      (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a3)(a3, v75);
      *((_QWORD *)v14 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 24LL))(a3);
      v76 = CWindowList::SyncWindowData(this, a3, v14);
      v15 = v76;
      v9 = v76;
      if ( v76 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v76, 0x826u, 0LL);
        goto LABEL_120;
      }
    }
    v9 = v15;
    if ( v15 < 0 )
    {
LABEL_120:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xE3Cu, 0LL);
      goto LABEL_58;
    }
    if ( !v14 )
    {
      v9 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0xE3Fu, 0LL);
      goto LABEL_58;
    }
  }
  if ( v112 == *(CWindowData **)v14 )
    goto LABEL_58;
  v16 = *(char **)v112;
  v17 = (CWindowData **)*((_QWORD *)v112 + 1);
  if ( *(CWindowData **)(*(_QWORD *)v112 + 8LL) != v112
    || *v17 != v112
    || (*v17 = (CWindowData *)v16,
        *((_QWORD *)v16 + 1) = v17,
        v18 = v112,
        v19 = *(_QWORD *)v14,
        *(struct CWindowData **)(*(_QWORD *)v14 + 8LL) != v14) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v112 = v19;
  *((_QWORD *)v18 + 1) = v14;
  *(_QWORD *)(v19 + 8) = v18;
  *(_QWORD *)v14 = v18;
  if ( v16 && v16 != v13 )
  {
    if ( *(char **)v16 == v16 )
    {
      if ( (v16[678] & 0x10) == 0
        || (v77 = CWindowList::ToggleAutoParenting((CWindowList *)v19, (struct CWindowData *)v16), v9 = v77, v77 >= 0) )
      {
LABEL_73:
        v9 = 0;
        goto LABEL_16;
      }
      v78 = 8168LL;
    }
    else
    {
      v51 = *((_QWORD *)v16 + 17);
      v96 = 0LL;
      v97 = 0LL;
      v100 = -1LL;
      v101 = 0;
      v98 = 0LL;
      v99 = 0LL;
      Buffer = v51;
      v52 = (char *)RtlLookupElementGenericTable(v11, &Buffer);
      if ( v52 )
        v53 = v52 + 80;
      else
        v53 = 0LL;
      v54 = v16;
      while ( 1 )
      {
        if ( (v54[672] & 1) != 0 )
        {
          v55 = *((_QWORD *)v54 + 55);
          if ( v55 )
          {
            if ( *(_QWORD *)(v55 + 24) )
            {
              v19 = *((_QWORD *)v54 + 3);
              if ( v19 )
              {
                if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v19 + 440LL))(v19) )
                {
                  if ( CWindowData::PropertiesAllowAutoParenting((CWindowData *)v54)
                    && (v54[677] & 0x10) == 0
                    && !*((_QWORD *)v54 + 58)
                    && (v54[676] & 2) == 0 )
                  {
                    v19 = *((_QWORD *)v54 + 75);
                    if ( (*(_BYTE *)(v19 + 672) & 1) != 0 )
                    {
                      if ( *(_QWORD *)(v19 + 440) )
                      {
                        if ( (*(_BYTE *)(v19 + 678) & 0x10) == 0 )
                        {
                          v79 = *((_QWORD *)v54 + 1);
                          if ( (char *)v79 != v53 )
                          {
                            while ( 1 )
                            {
                              if ( v79 == v19 )
                                goto LABEL_140;
                              if ( (*(_BYTE *)(v79 + 672) & 1) != 0 )
                              {
                                v80 = *(_QWORD *)(v79 + 440);
                                if ( v80 )
                                {
                                  if ( *(_QWORD *)(v80 + 24) )
                                    break;
                                }
                              }
                              v79 = *(_QWORD *)(v79 + 8);
                              if ( (char *)v79 == v53 )
                                goto LABEL_71;
                            }
                            if ( *(_QWORD *)(v79 + 600) == v19 && (*(_BYTE *)(v79 + 678) & 0x10) != 0 )
                            {
LABEL_140:
                              LOBYTE(v19) = 1;
                              goto LABEL_72;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LABEL_71:
              LOBYTE(v19) = 0;
LABEL_72:
              if ( (_BYTE)v19 == ((v54[678] & 0x10) != 0) )
                goto LABEL_73;
              v77 = CWindowList::ToggleAutoParenting((CWindowList *)v19, (struct CWindowData *)v54);
              v9 = v77;
              if ( v77 < 0 )
                break;
            }
          }
        }
        v54 = *(char **)v54;
        if ( !v54 || v54 == v53 || v54 == v16 )
          goto LABEL_73;
      }
      v78 = 8184LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v78,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v77,
      v92);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xE4Du, 0LL);
    goto LABEL_58;
  }
LABEL_16:
  v20 = v112;
  if ( !*((_QWORD *)v112 + 55) )
    goto LABEL_57;
  if ( *(CWindowData **)v112 != v112 )
  {
    v21 = *((_QWORD *)v112 + 17);
    v96 = 0LL;
    v97 = 0LL;
    v100 = -1LL;
    v101 = 0;
    v98 = 0LL;
    v99 = 0LL;
    Buffer = v21;
    v22 = (char *)RtlLookupElementGenericTable(v11, &Buffer);
    if ( v22 )
      v23 = (CWindowData *)(v22 + 80);
    else
      v23 = 0LL;
    v24 = v20;
    v25 = 1;
    v26 = v20;
LABEL_21:
    v27 = (CWindowList *)*((_QWORD *)v26 + 3);
    if ( v27 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CWindowList *))(*(_QWORD *)v27 + 440LL))(v27) )
      {
        if ( CWindowData::PropertiesAllowAutoParenting(v26)
          && (*((_BYTE *)v26 + 677) & 0x10) == 0
          && !*((_QWORD *)v26 + 58)
          && (*((_BYTE *)v26 + 676) & 2) == 0 )
        {
          v27 = (CWindowList *)*((_QWORD *)v26 + 75);
          if ( (*((_BYTE *)v27 + 672) & 1) != 0 )
          {
            if ( *((_QWORD *)v27 + 55) )
            {
              if ( (*((_BYTE *)v27 + 678) & 0x10) == 0 )
              {
                v84 = *((_QWORD *)v26 + 1);
                if ( (CWindowData *)v84 != v23 )
                {
                  while ( 1 )
                  {
                    if ( (CWindowList *)v84 == v27 )
                      goto LABEL_164;
                    if ( (*(_BYTE *)(v84 + 672) & 1) != 0 )
                    {
                      v85 = *(_QWORD *)(v84 + 440);
                      if ( v85 )
                      {
                        if ( *(_QWORD *)(v85 + 24) )
                          break;
                      }
                    }
                    v84 = *(_QWORD *)(v84 + 8);
                    if ( (CWindowData *)v84 == v23 )
                      goto LABEL_23;
                  }
                  if ( *(CWindowList **)(v84 + 600) == v27 && (*(_BYTE *)(v84 + 678) & 0x10) != 0 )
                  {
LABEL_164:
                    LOBYTE(v27) = 1;
                    v24 = v26;
                    goto LABEL_24;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_23:
    LOBYTE(v27) = 0;
LABEL_24:
    if ( (_BYTE)v27 != ((*((_BYTE *)v26 + 678) & 0x10) != 0) )
    {
      v86 = CWindowList::ToggleAutoParenting(v27, v26);
      v9 = v86;
      if ( v86 >= 0 )
        goto LABEL_41;
      v82 = (unsigned int)v86;
      v83 = 8184LL;
      goto LABEL_180;
    }
    if ( v25 )
    {
      if ( (*((_BYTE *)v26 + 678) & 0x10) != 0 )
      {
        v30 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v24 + 75) + 440LL) + 288LL);
        v31 = *(struct CVisual **)(*(_QWORD *)(v30 + 48) + 8LL * (unsigned int)(*(_DWORD *)(v30 + 72) - 1));
      }
      else
      {
        v28 = *((_QWORD *)v26 + 17);
        v96 = 0LL;
        v97 = 0LL;
        v100 = -1LL;
        v101 = 0;
        v98 = 0LL;
        v99 = 0LL;
        Buffer = v28;
        v29 = RtlLookupElementGenericTable(v11, &Buffer);
        if ( v29 )
          v30 = v29[3];
        else
          v30 = 0LL;
        v31 = 0LL;
        if ( *(CWindowData **)v26 != v26 )
        {
          v32 = *((_QWORD *)v26 + 17);
          v103 = 0LL;
          v104 = 0LL;
          v107 = -1LL;
          v108 = 0;
          v105 = 0LL;
          v106 = 0LL;
          v102 = v32;
          v33 = (char *)RtlLookupElementGenericTable(Table, &v102);
          v34 = v33 ? v33 + 80 : (char *)&`CWindowList::GetWindowListForDesktop'::`5'::EmptyList;
          v35 = *((_QWORD *)v26 + 1);
          if ( (char *)v35 != v34 )
          {
            while ( 1 )
            {
              v36 = *(_QWORD *)(v35 + 440);
              if ( v36 )
              {
                if ( *(_QWORD *)(v36 + 24) )
                  break;
              }
              v35 = *(_QWORD *)(v35 + 8);
              if ( (char *)v35 == v34 )
                goto LABEL_38;
            }
            v31 = *(struct CVisual **)(v35 + 440);
            if ( (*(_BYTE *)(v35 + 678) & 0x10) != 0 )
            {
              v35 = *(_QWORD *)(v35 + 600);
              v31 = *(struct CVisual **)(v35 + 440);
            }
            v37 = *(_QWORD *)(v35 + 464);
            if ( v37 && *(_QWORD *)(v37 + 24) )
              v31 = *(struct CVisual **)(v35 + 464);
          }
        }
      }
LABEL_38:
      inserted = VisualCollection::InsertRelative((VisualCollection *)(v30 + 32), *((_QWORD *)v26 + 55), v31, 1u, v92);
      v9 = inserted;
      if ( inserted < 0 )
      {
        v87 = 2879LL;
        goto LABEL_179;
      }
      v39 = *((_QWORD *)v26 + 58);
      if ( v39 )
      {
        if ( *(_QWORD *)(v39 + 24) )
        {
          inserted = VisualCollection::InsertRelative(
                       (VisualCollection *)(v30 + 32),
                       v39,
                       *((struct CVisual **)v26 + 55),
                       1u,
                       v92);
          v9 = inserted;
          if ( inserted < 0 )
          {
            v87 = 2883LL;
LABEL_179:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v87,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
              (const char *)(unsigned int)inserted,
              v92);
            v82 = v9;
            v83 = 0x1FFFLL;
            goto LABEL_180;
          }
        }
      }
      v11 = Table;
LABEL_41:
      while ( 1 )
      {
        v25 = 0;
        v24 = *(CWindowData **)v26;
        if ( !*(_QWORD *)v26 || v24 == v23 || v24 == v20 )
          break;
        if ( (*((_BYTE *)v24 + 672) & 1) != 0 )
        {
          v50 = *((_QWORD *)v24 + 55);
          if ( v50 )
          {
            v26 = *(CWindowData **)v26;
            if ( *(_QWORD *)(v50 + 24) )
              goto LABEL_21;
          }
        }
        v26 = v24;
      }
    }
    goto LABEL_46;
  }
  if ( (*((_BYTE *)v112 + 678) & 0x10) != 0 )
  {
    v81 = CWindowList::ToggleAutoParenting((CWindowList *)v19, v112);
    v9 = v81;
    if ( v81 < 0 )
    {
      v82 = (unsigned int)v81;
      v83 = 8168LL;
LABEL_180:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v83,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)v82,
        v92);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xE54u, 0LL);
      goto LABEL_58;
    }
LABEL_46:
    v20 = v112;
  }
  v40 = *((_QWORD *)v20 + 17);
  v103 = 0LL;
  v104 = 0LL;
  v107 = -1LL;
  v108 = 0;
  v105 = 0LL;
  v106 = 0LL;
  v102 = v40;
  v41 = RtlLookupElementGenericTable(v11, &v102);
  if ( v41 )
    v42 = v41[3];
  else
    v42 = 0LL;
  v20 = v112;
  v43 = *((_QWORD *)v112 + 56);
  v44 = 0;
  v45 = *(_DWORD *)(v43 + 384);
  if ( (unsigned int)(v45 - 1) <= 1 || (unsigned int)(v45 - 4) <= 0xE )
  {
    v67 = *(_QWORD *)(v43 + 336);
    v68 = *(struct CVisual **)(v67 + 440);
    if ( *((_QWORD *)v68 + 3) )
    {
      if ( (*(_BYTE *)(v67 + 678) & 0x10) != 0 )
        v68 = *(struct CVisual **)(*(_QWORD *)(v67 + 600) + 440LL);
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                               *(_QWORD *)(v67 + 136));
      v70 = VisualCollection::InsertRelative(
              (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
              v43,
              v68,
              1u,
              v92);
      v44 = v70;
      v9 = v70;
      if ( v70 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v70, 0x2B6u, 0LL);
        goto LABEL_183;
      }
      v20 = v112;
    }
  }
  v9 = v44;
  if ( v44 < 0 )
  {
LABEL_183:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0xE58u, 0LL);
    goto LABEL_58;
  }
  if ( v20 == *((CWindowData **)this + 88) && *((_QWORD *)this + 68) )
  {
    v88 = CWindowList::ZOrderAcrylicSheet(this);
    v9 = v88;
    if ( v88 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v88, 0xE5Du, 0LL);
      goto LABEL_58;
    }
    v20 = v112;
  }
  v46 = *((_QWORD *)v20 + 58);
  if ( v46 )
  {
    v89 = VisualCollection::InsertRelative((VisualCollection *)(v42 + 32), v46, *((struct CVisual **)v20 + 55), 1u, v92);
    v9 = v89;
    if ( v89 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v89, 0xE63u, 0LL);
      goto LABEL_58;
    }
    v20 = v112;
  }
  v47 = *((_QWORD *)v20 + 55);
  if ( v47 && (*(_BYTE *)(v47 + 249) & 0x10) != 0 )
  {
    v93 = 0LL;
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v93);
    ProjectedShadowSceneForDesktop = CWindowList::GetProjectedShadowSceneForDesktop(
                                       this,
                                       *((_QWORD *)v112 + 17),
                                       0,
                                       &v93);
    v9 = ProjectedShadowSceneForDesktop;
    if ( ProjectedShadowSceneForDesktop < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ProjectedShadowSceneForDesktop, 0xE6Au, 0LL);
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v93);
      goto LABEL_58;
    }
    v91 = v93;
    v94 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    CProjectedShadowScene::ZOrderProjectedShadowReceiverVisual(v91);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v94);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v93);
    v20 = v112;
  }
  v11 = Table;
LABEL_57:
  v48 = *((_QWORD *)v20 + 75);
  if ( !v48 || *(_DWORD *)(v48 + 632) <= 1u )
    goto LABEL_58;
  v56 = 0LL;
  v57 = *((_QWORD *)v20 + 17);
  v103 = 0LL;
  v104 = 0LL;
  v107 = -1LL;
  v108 = 0;
  v105 = 0LL;
  v106 = 0LL;
  v102 = v57;
  v58 = (char *)RtlLookupElementGenericTable(v11, &v102);
  if ( !v58 )
  {
LABEL_84:
    v61 = v48 + 608;
    v62 = (__int64 *)(v48 + 608);
LABEL_85:
    if ( *(CWindowData **)(*v62 + 8LL * (unsigned int)(*(_DWORD *)(v48 + 632) - 1)) != v112 )
    {
      DynArray<CWindowData *,0>::Remove(v62, &v112);
      v63 = *(_DWORD *)(v61 + 24);
      v64 = v63 + 1;
      if ( v63 + 1 < v63 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      else if ( v64 > *(_DWORD *)(v61 + 20) )
      {
        Table = (PRTL_GENERIC_TABLE)&v112;
        v71 = DynArrayImpl<0>::Grow((char **)v61, 8u, 1, 0, (unsigned __int64 *)&Table);
        if ( v71 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v71, 0xC0u, 0LL);
        else
          *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(v61 + 24))++) + *(_QWORD *)v61) = Table->TableRoot;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v61 + 8LL * v63) = v112;
        *(_DWORD *)(v61 + 24) = v64;
      }
    }
    goto LABEL_58;
  }
  v59 = v58 + 80;
  if ( v58 != (char *)-80LL )
  {
    v60 = *(char **)v112;
    if ( *(char **)v112 != v59 )
    {
      while ( *((_QWORD *)v60 + 75) != v48 )
      {
        v60 = *(char **)v60;
        if ( v60 == v59 )
          goto LABEL_84;
      }
      v56 = v60;
    }
  }
  v61 = v48 + 608;
  v62 = (__int64 *)(v48 + 608);
  if ( !v56 )
    goto LABEL_85;
  DynArray<CWindowData *,0>::Remove((__int64 *)(v48 + 608), &v112);
  v65 = *(char **)v61;
  v66 = *(_DWORD *)(v48 + 632);
  if ( v66 )
  {
    do
    {
      if ( v56 == *(char **)v65 )
        break;
      ++v6;
      v65 += 8;
    }
    while ( v6 < v66 );
  }
  DynArray<CWindowData *,0>::InsertAt((__int64 *)(v48 + 608), &v112, v6);
LABEL_58:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v9;
}
