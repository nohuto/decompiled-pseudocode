/*
 * XREFs of ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x180093620
 * Callers:
 *     ?SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z @ 0x18028B15C (-SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1800931D4 (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x180094000 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800BDF3C (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800BEE54 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800BF1FC (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800C0810 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v22; // r8
  unsigned __int64 *v23; // rdi
  unsigned __int64 v24; // rdx
  unsigned int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  __int64 (__fastcall *v28)(CCachedVisualImage *, __int64, __int64); // rax
  __int64 v29; // rax
  void (__fastcall *v30)(unsigned __int64, _QWORD, struct CManipulationManager *); // r8
  void (__fastcall *v31)(unsigned __int64, _QWORD, struct CManipulationManager *); // rdx
  struct CProcessAttribution *(__fastcall *v32)(CResource *__hidden); // rax
  __int64 v33; // rbx
  char v34; // cl
  __int64 v35; // rax
  struct CProcessAttribution *(__fastcall *v36)(CWindowNode *__hidden); // rax
  __int64 v37; // rax
  __int64 v38; // rax
  struct CProcessAttribution *(__fastcall *v39)(CResource *__hidden); // rax
  __int64 v40; // rax
  __int64 v41; // rbx
  char v42; // al
  __int64 v43; // rax
  struct CProcessAttribution *(__fastcall *v44)(CWindowNode *__hidden); // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  CComposition *v48; // rbx
  int ManipulationManager; // eax
  struct CManipulationManager *v50; // rbx
  int v51; // r8d
  int v52; // eax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rdi
  __int64 v56; // rbp
  __int64 v57; // rsi
  __int64 v58; // rcx
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rdi
  __int64 v61; // rbp
  __int64 v62; // rsi
  __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  void (__fastcall *v65)(unsigned __int64, __int64, __int64); // rax
  __int64 v66; // rdx
  void (__fastcall *v67)(unsigned __int64, _QWORD, __int64); // rax
  __int64 v68; // rdx
  unsigned int v69; // ecx
  __int64 v70; // rax
  unsigned __int64 v71; // rbx
  unsigned __int64 v72; // rbx
  unsigned __int64 v73; // rsi
  __int64 v74; // rbp
  __int64 v75; // rdi
  unsigned __int64 Count; // rax
  unsigned __int64 v77; // rcx
  unsigned __int64 v78; // rsi
  __int64 v79; // rbp
  __int64 v80; // rdi
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rcx
  void (__fastcall *v83)(unsigned __int64, _QWORD, struct CManipulationManager *); // rax
  __int64 v84; // rdx
  void (__fastcall *v85)(unsigned __int64, __int64, struct CVisual *); // rax
  __int64 v86; // rdx
  unsigned __int64 v87; // rbx
  struct CManipulationManager *v88; // rcx
  __int64 v89; // rcx
  unsigned int v90; // [rsp+30h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct CManipulationManager *v92; // [rsp+80h] [rbp+8h] BYREF
  CVisual **v93; // [rsp+88h] [rbp+10h]

  v93 = a2;
  v92 = this;
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
  v90 = v18;
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
    v22 = v21 & 2;
    if ( (v21 & 2) != 0 )
    {
      v23 = (unsigned __int64 *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
      v24 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
    }
    else
    {
      v24 = v21 & 1;
      v23 = (unsigned __int64 *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
    }
    if ( v24 == 1 )
    {
      if ( v6 != (struct CVisual *)v23 )
        goto LABEL_33;
      *(_QWORD *)(v20 + 80) = 0LL;
    }
    else
    {
      if ( !v24 )
        goto LABEL_33;
      v69 = 0;
      v70 = 0LL;
      do
      {
        if ( v6 == (struct CVisual *)v23[v70 + 2] )
          break;
        v70 = ++v69;
      }
      while ( v69 < v24 );
      if ( v69 >= v24 )
        goto LABEL_33;
      if ( (v21 & 2) != 0 )
        v71 = *v23;
      else
        v71 = v21 & 1;
      if ( v69 < v71 )
      {
        v24 = 1LL;
        if ( v71 - v69 <= 1 )
          v24 = v71 - v69;
        if ( v71 == v24 )
        {
          if ( v71 > 1 )
            operator delete(v23);
          *(_QWORD *)(v20 + 80) = 0LL;
        }
        else
        {
          v72 = v71 - v24;
          if ( v72 == 1 )
          {
            v87 = v23[(v24 & (v69 - 1LL)) + 2];
            operator delete(v23);
            *(_QWORD *)(v20 + 80) = v87 | 1;
          }
          else
          {
            if ( v69 < v72 )
              memmove_0(&v23[v69 + 2], &v23[v69 + 2 + v24], 8 * (v72 - v69));
            *v23 = v72;
          }
        }
      }
    }
    if ( (*((_BYTE *)v6 + 106) & 0x40) != 0 )
    {
      CVisual::DirtyForInvisibleChild((CVisual *)v20, v6);
      v25 = *((_DWORD *)v6 + 66);
      v24 = *((unsigned int *)v6 + 67);
      v22 = v25 + 1;
      if ( (*((_BYTE *)v6 + 107) & 1) == 0 )
        v22 = v25;
      v26 = v24 + 1;
      if ( (*((_BYTE *)v6 + 107) & 4) == 0 )
        v26 = *((_DWORD *)v6 + 67);
      if ( (_DWORD)v22 || v26 )
      {
        v89 = v20;
        do
        {
          *(_DWORD *)(v20 + 264) -= v22;
          *(_DWORD *)(v20 + 268) -= v26;
          if ( (*(_BYTE *)(v20 + 106) & 0x40) == 0 )
            break;
          v20 = *(_QWORD *)(v20 + 88);
          if ( v89 )
          {
            v89 = *(_QWORD *)(v89 + 88);
            if ( v89 )
              v89 = *(_QWORD *)(v89 + 88);
          }
        }
        while ( v20 != v89 );
      }
    }
    v27 = *(_QWORD *)v6;
    *((_QWORD *)v6 + 11) = 0LL;
    v28 = *(__int64 (__fastcall **)(CCachedVisualImage *, __int64, __int64))(v27 + 16);
    if ( v28 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v6, v24, v22);
    else
      ((void (__fastcall *)(struct CVisual *))v28)(v6);
  }
LABEL_33:
  *((_QWORD *)v6 + 11) = v7;
  CVisual::OnOuterTransformChanged(v6);
  CVisual::OnClipChanged(v6);
  if ( (*((_BYTE *)v6 + 106) & 0x40) == 0 )
    return v19;
  v29 = *((_QWORD *)v7 + 4);
  if ( (v29 & 2) != 0 )
    v29 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v29) = v29 & 1;
  v30 = (void (__fastcall *)(unsigned __int64, _QWORD, struct CManipulationManager *))CCachedVisualImage::NotifyOnChanged;
  v31 = (void (__fastcall *)(unsigned __int64, _QWORD, struct CManipulationManager *))CVisualSurface::NotifyOnChanged;
  if ( (_DWORD)v29 )
  {
    v73 = 0LL;
    v74 = (unsigned int)v29;
    v75 = 16LL;
    do
    {
      Count = CPtrArray<CVisual>::GetCount((char *)v7 + 32);
      if ( v73 >= Count )
      {
        v77 = 0LL;
      }
      else if ( Count == 1 )
      {
        v77 = *((_QWORD *)v7 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
      }
      else
      {
        _mm_lfence();
        v77 = *(_QWORD *)((*((_QWORD *)v7 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + v75);
      }
      if ( v77 != *((_QWORD *)v7 + 11) )
      {
        v83 = *(void (__fastcall **)(unsigned __int64, _QWORD, struct CManipulationManager *))(*(_QWORD *)v77 + 80LL);
        if ( v83 == v30 )
        {
          CResource::NotifyOnChanged((_DWORD *)v77, 0LL, (__int64)v7);
        }
        else if ( v83 == v31 )
        {
          v84 = 6LL;
          if ( v7 != *(struct CManipulationManager **)(v77 + 72) )
            v84 = 0LL;
          CResource::NotifyOnChanged((_DWORD *)v77, v84, (__int64)v7);
        }
        else
        {
          v83(v77, 0LL, v7);
        }
        v31 = (void (__fastcall *)(unsigned __int64, _QWORD, struct CManipulationManager *))CVisualSurface::NotifyOnChanged;
        v30 = (void (__fastcall *)(unsigned __int64, _QWORD, struct CManipulationManager *))CCachedVisualImage::NotifyOnChanged;
      }
      ++v73;
      v75 += 8LL;
      --v74;
    }
    while ( v74 );
  }
  v32 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(*(_QWORD *)v7 + 160LL);
  if ( v32 != CResource::GetProcessAttributionNoRef )
    ((void (__fastcall *)(struct CManipulationManager *, _QWORD, _QWORD))v32)(v7, v31, v30);
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
            v31 = *(void (__fastcall **)(unsigned __int64, _QWORD, struct CManipulationManager *))(v58 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            v31 = (void (__fastcall *)(unsigned __int64, _QWORD, struct CManipulationManager *))(*(_QWORD *)(v33 + 32) & 1LL);
          if ( v55 >= (unsigned __int64)v31 )
          {
            v59 = 0LL;
          }
          else if ( v31 == (void (__fastcall *)(unsigned __int64, _QWORD, struct CManipulationManager *))1 )
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
              CResource::NotifyOnChanged((_DWORD *)v59, 0LL, v33);
            }
            else if ( (char *)v67 == (char *)CVisualSurface::NotifyOnChanged )
            {
              v68 = 6LL;
              if ( v33 != *(_QWORD *)(v59 + 72) )
                v68 = 0LL;
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
        v7 = v92;
      }
      v36 = *(struct CProcessAttribution *(__fastcall **)(CWindowNode *__hidden))(*(_QWORD *)v33 + 160LL);
      if ( v36 != CResource::GetProcessAttributionNoRef && v36 != CWindowNode::GetProcessAttributionNoRef )
        ((void (__fastcall *)(__int64, _QWORD, _QWORD))v36)(v33, v31, v30);
      v37 = v33;
      v33 = *(_QWORD *)(v33 + 88);
    }
    while ( (*(_BYTE *)(v37 + 106) & 0x40) != 0 );
    v19 = v90;
    v6 = (struct CVisual *)v93;
  }
  v38 = *((_QWORD *)v6 + 4);
  if ( (v38 & 2) != 0 )
    v38 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v38) = v38 & 1;
  if ( (_DWORD)v38 )
  {
    v78 = 0LL;
    v79 = (unsigned int)v38;
    v80 = 16LL;
    do
    {
      v81 = CPtrArray<CVisual>::GetCount((char *)v6 + 32);
      if ( v78 >= v81 )
      {
        v82 = 0LL;
      }
      else if ( v81 == 1 )
      {
        v82 = *((_QWORD *)v6 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
      }
      else
      {
        _mm_lfence();
        v82 = *(_QWORD *)((*((_QWORD *)v6 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + v80);
      }
      if ( v82 != *((_QWORD *)v6 + 11) )
      {
        v85 = *(void (__fastcall **)(unsigned __int64, __int64, struct CVisual *))(*(_QWORD *)v82 + 80LL);
        if ( (char *)v85 == (char *)CCachedVisualImage::NotifyOnChanged )
        {
          CResource::NotifyOnChanged((_DWORD *)v82, 6LL, (__int64)v6);
        }
        else if ( (char *)v85 == (char *)CVisualSurface::NotifyOnChanged )
        {
          v86 = 6LL;
          if ( v6 != *(struct CVisual **)(v82 + 72) )
            v86 = 1LL;
          CResource::NotifyOnChanged((_DWORD *)v82, v86, (__int64)v6);
        }
        else
        {
          v85(v82, 1LL, v6);
        }
      }
      ++v78;
      v80 += 8LL;
      --v79;
    }
    while ( v79 );
    v19 = v90;
    v7 = v92;
  }
  v39 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(*(_QWORD *)v6 + 160LL);
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
    v13 = ((__int64 (__fastcall *)(struct CVisual *, _QWORD, _QWORD))v39)(v6, v31, v30);
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
          v31 = *(void (__fastcall **)(unsigned __int64, _QWORD, struct CManipulationManager *))(v63 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v31 = (void (__fastcall *)(unsigned __int64, _QWORD, struct CManipulationManager *))(*(_QWORD *)(v41 + 32) & 1LL);
        if ( v60 >= (unsigned __int64)v31 )
        {
          v64 = 0LL;
        }
        else if ( v31 == (void (__fastcall *)(unsigned __int64, _QWORD, struct CManipulationManager *))1 )
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
            CResource::NotifyOnChanged((_DWORD *)v64, 6LL, v41);
          }
          else if ( (char *)v65 == (char *)CVisualSurface::NotifyOnChanged )
          {
            v66 = 6LL;
            if ( v41 != *(_QWORD *)(v64 + 72) )
              v66 = 1LL;
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
      v19 = v90;
      v7 = v92;
    }
    v44 = *(struct CProcessAttribution *(__fastcall **)(CWindowNode *__hidden))(*(_QWORD *)v41 + 160LL);
    if ( v44 != CResource::GetProcessAttributionNoRef )
    {
      if ( v44 == CWindowNode::GetProcessAttributionNoRef )
        v46 = *(_QWORD *)(v41 + 824);
      else
        v46 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v44)(v41, v31, v30);
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
  v6 = (struct CVisual *)v93;
LABEL_70:
  if ( (*((_BYTE *)v6 + 105) & 0x20) != 0 )
  {
    v48 = (CComposition *)*((_QWORD *)v7 + 3);
    v92 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v92);
    ManipulationManager = CComposition::GetManipulationManager(v48, &v92);
    v50 = v92;
    if ( ManipulationManager >= 0 )
      CManipulationManager::QueueMidManipulationUpdate((__int64)v92, 2u, (__int64)v6);
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
    v88 = v7;
    do
    {
      *((_DWORD *)v7 + 66) += v52;
      *((_DWORD *)v7 + 67) += v51;
      if ( (*((_BYTE *)v7 + 106) & 0x40) == 0 )
        break;
      v7 = (struct CManipulationManager *)*((_QWORD *)v7 + 11);
      if ( v88 )
      {
        v88 = (struct CManipulationManager *)*((_QWORD *)v88 + 11);
        if ( v88 )
          v88 = (struct CManipulationManager *)*((_QWORD *)v88 + 11);
      }
    }
    while ( v7 != v88 );
  }
  return v19;
}
