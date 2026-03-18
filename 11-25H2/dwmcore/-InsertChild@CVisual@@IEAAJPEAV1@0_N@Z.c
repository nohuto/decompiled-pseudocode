/*
 * XREFs of ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x1801380F0
 * Callers:
 *     ?SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z @ 0x1802965A0 (-SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800209D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800B34B0 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B4B40 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800E433C (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800E53C4 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800E56E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180137CA4 (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x180138AD0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::InsertChild(CVisual *this, CVisual **a2, struct CVisual *a3, const char *a4)
{
  char v4; // di
  struct CVisual *v6; // r12
  struct CManipulationManager *v7; // r13
  __int64 v8; // rcx
  __int64 v9; // r10
  unsigned __int64 v10; // rbx
  unsigned __int64 *v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // r14
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  bool v16; // zf
  struct CVisual *v17; // rdx
  int v18; // eax
  unsigned int v19; // r15d
  __int64 v20; // rsi
  __int64 v21; // rbx
  unsigned __int64 *v22; // rdi
  unsigned __int64 v23; // rdx
  int v24; // r8d
  int v25; // eax
  __int64 v26; // rax
  __int64 (__fastcall *v27)(CResource *); // rax
  _BYTE *v28; // rdx
  __int64 v29; // rax
  char *v30; // r8
  char *v31; // rdx
  struct CProcessAttribution *(__fastcall *v32)(CResource *); // rax
  __int64 v33; // rbx
  char v34; // cl
  __int64 v35; // rax
  struct CProcessAttribution *(__fastcall *v36)(CResource *); // rax
  __int64 v37; // rax
  __int64 v38; // rax
  struct CProcessAttribution *(__fastcall *v39)(CResource *); // rax
  __int64 v40; // rax
  __int64 v41; // rbx
  char v42; // al
  __int64 v43; // rax
  struct CProcessAttribution *(__fastcall *v44)(CResource *); // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  CComposition *v48; // rbx
  int ManipulationManager; // eax
  struct CManipulationManager *v50; // rbx
  int v51; // r8d
  int v52; // eax
  unsigned __int64 v54; // rax
  char *v55; // rdi
  __int64 v56; // rbp
  __int64 v57; // rsi
  __int64 v58; // rcx
  unsigned __int64 v59; // rcx
  char *v60; // rdi
  __int64 v61; // rbp
  __int64 v62; // rsi
  __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  void (__fastcall *v65)(unsigned __int64, __int64, __int64); // rax
  unsigned int v66; // edx
  void (__fastcall *v67)(unsigned __int64, _QWORD, __int64); // rax
  unsigned int v68; // edx
  unsigned int v69; // ecx
  __int64 v70; // rax
  unsigned __int64 v71; // rbx
  __int64 v72; // rdx
  unsigned __int64 v73; // rbx
  unsigned __int64 v74; // rsi
  __int64 v75; // rbp
  __int64 v76; // rdi
  unsigned __int64 Count; // rax
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rsi
  __int64 v80; // rbp
  __int64 v81; // rdi
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rcx
  char *v84; // rax
  unsigned int v85; // edx
  void (__fastcall *v86)(unsigned __int64, __int64, struct CVisual *); // rax
  unsigned int v87; // edx
  unsigned __int64 v88; // rbx
  struct CManipulationManager *v89; // rcx
  __int64 v90; // rcx
  unsigned int v91; // [rsp+30h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct CManipulationManager *v93; // [rsp+80h] [rbp+8h] BYREF
  CVisual **v94; // [rsp+88h] [rbp+10h]

  v94 = a2;
  v93 = this;
  v4 = (char)a4;
  v6 = (struct CVisual *)a2;
  v7 = this;
  if ( a2[11] == this )
  {
    v19 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x231u, 0LL);
    return v19;
  }
  v8 = *((_QWORD *)this + 10);
  v9 = v8 & 2;
  v10 = v8 & 1;
  v11 = (unsigned __int64 *)(v8 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v9 )
    v12 = *v11;
  else
    v12 = v10;
  v13 = 0LL;
  if ( a3 )
  {
    if ( !v12 )
      goto LABEL_140;
    v14 = v12 - 1;
    a4 = (const char *)(8 * v12 + 8);
    do
    {
      if ( v9 )
        v15 = *v11;
      else
        v15 = v10;
      if ( v14 < v15 )
      {
        v16 = v15 == 1;
        v17 = (struct CVisual *)v11;
        if ( !v16 )
          v17 = *(struct CVisual **)&a4[(_QWORD)v11];
        if ( v17 == a3 )
          break;
      }
      --v14;
      a4 -= 8;
      --v12;
    }
    while ( v12 );
    if ( !v12 )
LABEL_140:
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x247,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visual.cpp",
        a4);
    if ( !v4 )
      --v12;
  }
  else
  {
    v54 = 0LL;
    if ( !(_BYTE)a4 )
      v54 = v12;
    v12 = v54;
  }
  v18 = CPtrArrayBase::InsertAt((struct CManipulationManager *)((char *)v7 + 80), (unsigned __int64)v6, v12);
  v91 = v18;
  v19 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x24Fu, 0LL);
    return v19;
  }
  (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v6 + 8LL))(v6);
  v20 = *((_QWORD *)v6 + 11);
  if ( v20 )
  {
    v21 = *(_QWORD *)(v20 + 80);
    if ( (v21 & 2) != 0 )
    {
      v22 = (unsigned __int64 *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
      v23 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
    }
    else
    {
      v23 = v21 & 1;
      v22 = (unsigned __int64 *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
    }
    if ( v23 == 1 )
    {
      if ( v6 != (struct CVisual *)v22 )
        goto LABEL_33;
      *(_QWORD *)(v20 + 80) = 0LL;
    }
    else
    {
      if ( !v23 )
        goto LABEL_33;
      v69 = 0;
      v70 = 0LL;
      do
      {
        if ( v6 == (struct CVisual *)v22[v70 + 2] )
          break;
        v70 = ++v69;
      }
      while ( v69 < v23 );
      if ( v69 >= v23 )
        goto LABEL_33;
      if ( (*(_QWORD *)(v20 + 80) & 2LL) != 0 )
        v71 = *v22;
      else
        v71 = v21 & 1;
      if ( v69 < v71 )
      {
        v72 = 1LL;
        if ( v71 - v69 <= 1 )
          v72 = v71 - v69;
        if ( v71 == v72 )
        {
          if ( v71 > 1 )
            operator delete(v22);
          *(_QWORD *)(v20 + 80) = 0LL;
        }
        else
        {
          v73 = v71 - v72;
          if ( v73 == 1 )
          {
            v88 = v22[(v72 & (v69 - 1LL)) + 2];
            operator delete(v22);
            *(_QWORD *)(v20 + 80) = v88 | 1;
          }
          else
          {
            if ( v69 < v73 )
              memmove_0(&v22[v69 + 2], &v22[v69 + 2 + v72], 8 * (v73 - v69));
            *v22 = v73;
          }
        }
      }
    }
    if ( (*((_BYTE *)v6 + 106) & 0x40) != 0 )
    {
      CVisual::DirtyForInvisibleChild((CComposition **)v20, v6);
      v24 = *((_DWORD *)v6 + 66) + 1;
      if ( (*((_BYTE *)v6 + 107) & 1) == 0 )
        v24 = *((_DWORD *)v6 + 66);
      v25 = *((_DWORD *)v6 + 67) + 1;
      if ( (*((_BYTE *)v6 + 107) & 4) == 0 )
        v25 = *((_DWORD *)v6 + 67);
      if ( v24 || v25 )
      {
        v90 = v20;
        do
        {
          *(_DWORD *)(v20 + 264) -= v24;
          *(_DWORD *)(v20 + 268) -= v25;
          if ( (*(_BYTE *)(v20 + 106) & 0x40) == 0 )
            break;
          v20 = *(_QWORD *)(v20 + 88);
          if ( v90 )
          {
            v90 = *(_QWORD *)(v90 + 88);
            if ( v90 )
              v90 = *(_QWORD *)(v90 + 88);
          }
        }
        while ( v20 != v90 );
      }
    }
    v26 = *(_QWORD *)v6;
    *((_QWORD *)v6 + 11) = 0LL;
    v27 = *(__int64 (__fastcall **)(CResource *))(v26 + 16);
    if ( v27 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v6);
    else
      v27(v6);
  }
LABEL_33:
  *((_QWORD *)v6 + 11) = v7;
  CVisual::OnOuterTransformChanged(v6);
  CVisual::OnClipChanged(v6, v28);
  if ( (*((_BYTE *)v6 + 106) & 0x40) == 0 )
    return v19;
  v29 = *((_QWORD *)v7 + 4);
  if ( (v29 & 2) != 0 )
    v29 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v29) = v29 & 1;
  v30 = (char *)CCachedVisualImage::NotifyOnChanged;
  v31 = (char *)CVisualSurface::NotifyOnChanged;
  if ( (_DWORD)v29 )
  {
    v74 = 0LL;
    v75 = (unsigned int)v29;
    v76 = 16LL;
    do
    {
      Count = CPtrArray<CVisual>::GetCount((_QWORD *)v7 + 4);
      if ( v74 >= Count )
      {
        v78 = 0LL;
      }
      else if ( Count == 1 )
      {
        v78 = *((_QWORD *)v7 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
      }
      else
      {
        _mm_lfence();
        v78 = *(_QWORD *)((*((_QWORD *)v7 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + v76);
      }
      if ( v78 != *((_QWORD *)v7 + 11) )
      {
        v84 = *(char **)(*(_QWORD *)v78 + 80LL);
        if ( v84 == v30 )
        {
          CResource::NotifyOnChanged((_DWORD *)v78, 0, (__int64)v7);
        }
        else if ( v84 == v31 )
        {
          v85 = 6;
          if ( v7 != *(struct CManipulationManager **)(v78 + 72) )
            v85 = 0;
          CResource::NotifyOnChanged((_DWORD *)v78, v85, (__int64)v7);
        }
        else
        {
          ((void (__fastcall *)(unsigned __int64, _QWORD, struct CManipulationManager *))v84)(v78, 0LL, v7);
        }
        v31 = (char *)CVisualSurface::NotifyOnChanged;
        v30 = (char *)CCachedVisualImage::NotifyOnChanged;
      }
      ++v74;
      v76 += 8LL;
      --v75;
    }
    while ( v75 );
  }
  v32 = *(struct CProcessAttribution *(__fastcall **)(CResource *))(*(_QWORD *)v7 + 160LL);
  if ( v32 != CResource::GetProcessAttributionNoRef )
    ((void (__fastcall *)(struct CManipulationManager *, char *, char *))v32)(v7, v31, v30);
  *((_BYTE *)v7 + 96) |= 0x11u;
  v33 = *((_QWORD *)v7 + 11);
  if ( (*((_BYTE *)v7 + 106) & 0x40) != 0 )
  {
    do
    {
      if ( !v33 )
        break;
      v34 = *(_BYTE *)(v33 + 96);
      if ( (v34 & 0x11) == 0x11 )
        break;
      *(_BYTE *)(v33 + 96) = v34 | 0x11;
      v35 = *(_QWORD *)(v33 + 32);
      if ( (v35 & 2) != 0 )
        v35 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v35) = v35 & 1;
      if ( (_DWORD)v35 )
      {
        v55 = 0LL;
        v56 = (unsigned int)v35;
        v57 = 16LL;
        do
        {
          v58 = *(_QWORD *)(v33 + 32);
          if ( (v58 & 2) != 0 )
            v31 = *(char **)(v58 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            v31 = (char *)(*(_QWORD *)(v33 + 32) & 1LL);
          if ( v55 >= v31 )
          {
            v59 = 0LL;
          }
          else if ( v31 == (char *)1 )
          {
            v59 = v58 & 0xFFFFFFFFFFFFFFFCuLL;
          }
          else
          {
            _mm_lfence();
            v59 = *(_QWORD *)((*(_QWORD *)(v33 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + v57);
          }
          if ( v59 != *(_QWORD *)(v33 + 88) )
          {
            v67 = *(void (__fastcall **)(unsigned __int64, _QWORD, __int64))(*(_QWORD *)v59 + 80LL);
            if ( (char *)v67 == (char *)CCachedVisualImage::NotifyOnChanged )
            {
              CResource::NotifyOnChanged((_DWORD *)v59, 0, v33);
            }
            else if ( (char *)v67 == (char *)CVisualSurface::NotifyOnChanged )
            {
              v68 = 6;
              if ( v33 != *(_QWORD *)(v59 + 72) )
                v68 = 0;
              CResource::NotifyOnChanged((_DWORD *)v59, v68, v33);
            }
            else
            {
              v67(v59, 0LL, v33);
            }
          }
          ++v55;
          v57 += 8LL;
          --v56;
        }
        while ( v56 );
        v7 = v93;
      }
      v36 = *(struct CProcessAttribution *(__fastcall **)(CResource *))(*(_QWORD *)v33 + 160LL);
      if ( v36 != CResource::GetProcessAttributionNoRef && v36 != CWindowNode::GetProcessAttributionNoRef )
        ((void (__fastcall *)(__int64, char *, char *))v36)(v33, v31, v30);
      v37 = v33;
      v33 = *(_QWORD *)(v33 + 88);
    }
    while ( (*(_BYTE *)(v37 + 106) & 0x40) != 0 );
    v19 = v91;
    v6 = (struct CVisual *)v94;
  }
  v38 = *((_QWORD *)v6 + 4);
  if ( (v38 & 2) != 0 )
    v38 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v38) = v38 & 1;
  if ( (_DWORD)v38 )
  {
    v79 = 0LL;
    v80 = (unsigned int)v38;
    v81 = 16LL;
    do
    {
      v82 = CPtrArray<CVisual>::GetCount((_QWORD *)v6 + 4);
      if ( v79 >= v82 )
      {
        v83 = 0LL;
      }
      else if ( v82 == 1 )
      {
        v83 = *((_QWORD *)v6 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
      }
      else
      {
        _mm_lfence();
        v83 = *(_QWORD *)((*((_QWORD *)v6 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + v81);
      }
      if ( v83 != *((_QWORD *)v6 + 11) )
      {
        v86 = *(void (__fastcall **)(unsigned __int64, __int64, struct CVisual *))(*(_QWORD *)v83 + 80LL);
        if ( (char *)v86 == (char *)CCachedVisualImage::NotifyOnChanged )
        {
          CResource::NotifyOnChanged((_DWORD *)v83, 6u, (__int64)v6);
        }
        else if ( (char *)v86 == (char *)CVisualSurface::NotifyOnChanged )
        {
          v87 = 6;
          if ( v6 != *(struct CVisual **)(v83 + 72) )
            v87 = 1;
          CResource::NotifyOnChanged((_DWORD *)v83, v87, (__int64)v6);
        }
        else
        {
          v86(v83, 1LL, v6);
        }
      }
      ++v79;
      v81 += 8LL;
      --v80;
    }
    while ( v80 );
    v19 = v91;
    v7 = v93;
  }
  v39 = *(struct CProcessAttribution *(__fastcall **)(CResource *))(*(_QWORD *)v6 + 160LL);
  if ( v39 == CResource::GetProcessAttributionNoRef )
  {
    v40 = *((_QWORD *)v6 + 7);
    if ( !v40 )
    {
      *((_BYTE *)v6 + 96) |= 4u;
      goto LABEL_56;
    }
    v13 = *(_QWORD *)(v40 + 64);
  }
  else
  {
    v13 = ((__int64 (__fastcall *)(struct CVisual *, char *, char *))v39)(v6, v31, v30);
  }
  *((_BYTE *)v6 + 96) |= 4u;
  if ( v13 )
    ++*(_DWORD *)(v13 + 28);
LABEL_56:
  v41 = *((_QWORD *)v6 + 11);
  if ( (*((_BYTE *)v6 + 106) & 0x40) == 0 )
    goto LABEL_70;
  do
  {
    if ( !v41 )
      break;
    v42 = *(_BYTE *)(v41 + 96);
    if ( v42 < 0 )
      break;
    *(_BYTE *)(v41 + 96) = v42 | 0x80;
    v43 = *(_QWORD *)(v41 + 32);
    if ( (v43 & 2) != 0 )
      v43 = *(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v43) = v43 & 1;
    if ( (_DWORD)v43 )
    {
      v60 = 0LL;
      v61 = (unsigned int)v43;
      v62 = 16LL;
      do
      {
        v63 = *(_QWORD *)(v41 + 32);
        if ( (v63 & 2) != 0 )
          v31 = *(char **)(v63 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v31 = (char *)(*(_QWORD *)(v41 + 32) & 1LL);
        if ( v60 >= v31 )
        {
          v64 = 0LL;
        }
        else if ( v31 == (char *)1 )
        {
          v64 = v63 & 0xFFFFFFFFFFFFFFFCuLL;
        }
        else
        {
          _mm_lfence();
          v64 = *(_QWORD *)((*(_QWORD *)(v41 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + v62);
        }
        if ( v64 != *(_QWORD *)(v41 + 88) )
        {
          v65 = *(void (__fastcall **)(unsigned __int64, __int64, __int64))(*(_QWORD *)v64 + 80LL);
          if ( (char *)v65 == (char *)CCachedVisualImage::NotifyOnChanged )
          {
            CResource::NotifyOnChanged((_DWORD *)v64, 6u, v41);
          }
          else if ( (char *)v65 == (char *)CVisualSurface::NotifyOnChanged )
          {
            v66 = 6;
            if ( v41 != *(_QWORD *)(v64 + 72) )
              v66 = 1;
            CResource::NotifyOnChanged((_DWORD *)v64, v66, v41);
          }
          else
          {
            v65(v64, 1LL, v41);
          }
        }
        ++v60;
        v62 += 8LL;
        --v61;
      }
      while ( v61 );
      v19 = v91;
      v7 = v93;
    }
    v44 = *(struct CProcessAttribution *(__fastcall **)(CResource *))(*(_QWORD *)v41 + 160LL);
    if ( v44 != CResource::GetProcessAttributionNoRef )
    {
      if ( v44 == CWindowNode::GetProcessAttributionNoRef )
        v46 = *(_QWORD *)(v41 + 816);
      else
        v46 = ((__int64 (__fastcall *)(__int64, char *, char *))v44)(v41, v31, v30);
LABEL_65:
      if ( v46 && v13 != v46 )
      {
        ++*(_DWORD *)(v46 + 24);
        v13 = v46;
      }
      goto LABEL_68;
    }
    v45 = *(_QWORD *)(v41 + 56);
    if ( v45 )
    {
      v46 = *(_QWORD *)(v45 + 64);
      goto LABEL_65;
    }
LABEL_68:
    v47 = v41;
    v41 = *(_QWORD *)(v41 + 88);
  }
  while ( (*(_BYTE *)(v47 + 106) & 0x40) != 0 );
  v6 = (struct CVisual *)v94;
LABEL_70:
  if ( (*((_BYTE *)v6 + 105) & 0x20) != 0 )
  {
    v48 = (CComposition *)*((_QWORD *)v7 + 3);
    v93 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v93);
    ManipulationManager = CComposition::GetManipulationManager(v48, &v93);
    v50 = v93;
    if ( ManipulationManager >= 0 )
      CManipulationManager::QueueMidManipulationUpdate((__int64)v93, 2u, (__int64)v6);
    if ( v50 )
      (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v50 + 16LL))(v50);
  }
  v51 = *((_DWORD *)v6 + 67) + 1;
  if ( (*((_BYTE *)v6 + 107) & 4) == 0 )
    v51 = *((_DWORD *)v6 + 67);
  v52 = *((_DWORD *)v6 + 66) + 1;
  if ( (*((_BYTE *)v6 + 107) & 1) == 0 )
    v52 = *((_DWORD *)v6 + 66);
  if ( v52 || v51 )
  {
    v89 = v7;
    do
    {
      *((_DWORD *)v7 + 66) += v52;
      *((_DWORD *)v7 + 67) += v51;
      if ( (*((_BYTE *)v7 + 106) & 0x40) == 0 )
        break;
      v7 = (struct CManipulationManager *)*((_QWORD *)v7 + 11);
      if ( v89 )
      {
        v89 = (struct CManipulationManager *)*((_QWORD *)v89 + 11);
        if ( v89 )
          v89 = (struct CManipulationManager *)*((_QWORD *)v89 + 11);
      }
    }
    while ( v7 != v89 );
  }
  return v19;
}
