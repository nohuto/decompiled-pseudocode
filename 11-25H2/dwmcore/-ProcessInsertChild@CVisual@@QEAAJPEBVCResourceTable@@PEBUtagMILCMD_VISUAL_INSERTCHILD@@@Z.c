/*
 * XREFs of ?ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z @ 0x1800B3570
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800209D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?IsOfType@CBaseExpression@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800387B0 (-IsOfType@CBaseExpression@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
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
 *     ?IsOfType@CSharedSectionBase@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18025BB70 (-IsOfType@CSharedSectionBase@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::ProcessInsertChild(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_INSERTCHILD *a3)
{
  const char *v4; // r9
  unsigned int v5; // edx
  unsigned int *v7; // rdi
  __int64 v8; // rax
  _DWORD *v9; // rsi
  _QWORD *v10; // r14
  _DWORD *v11; // r15
  _QWORD *v12; // r12
  CVisual **v13; // r13
  unsigned int v14; // edx
  unsigned __int64 *v15; // r11
  CVisual *v16; // r12
  char v17; // di
  __int64 v18; // rbx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rdx
  bool v23; // zf
  unsigned __int64 *v24; // rdx
  int v25; // ebx
  unsigned int v26; // r15d
  CVisual *v27; // rsi
  __int64 v28; // rbx
  unsigned __int64 *v29; // rdi
  unsigned __int64 v30; // rdx
  int v31; // r8d
  int v32; // eax
  CVisual *v33; // rax
  __int64 (__fastcall *v34)(CResource *); // rax
  _BYTE *v35; // rdx
  __int64 v36; // rax
  void (__fastcall *v37)(unsigned __int64, _QWORD, CVisual *); // r8
  void (__fastcall *v38)(unsigned __int64, _QWORD, CVisual *); // rdx
  struct CProcessAttribution *(__fastcall *v39)(CResource *__hidden); // rax
  __int64 v40; // rbx
  char v41; // cl
  __int64 v42; // rax
  struct CProcessAttribution *(__fastcall *v43)(CResource *__hidden); // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  struct CProcessAttribution *(__fastcall *v46)(CResource *__hidden); // rax
  CVisual *v47; // rax
  __int64 v48; // r14
  __int64 v49; // rbx
  char v50; // al
  __int64 v51; // rax
  struct CProcessAttribution *(__fastcall *v52)(CResource *__hidden); // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  CComposition *v56; // rbx
  int ManipulationManager; // eax
  struct CManipulationManager *v58; // rbx
  int v59; // r8d
  int v60; // eax
  unsigned __int64 v62; // rax
  __int64 v63; // rbp
  unsigned __int64 v64; // rdi
  __int64 v65; // rsi
  __int64 v66; // rcx
  unsigned __int64 v67; // rcx
  __int64 v68; // rsi
  __int64 v69; // rbp
  unsigned __int64 v70; // rdi
  __int64 v71; // rcx
  unsigned __int64 v72; // rcx
  void (__fastcall *v73)(unsigned __int64, __int64, __int64); // rax
  unsigned int v74; // edx
  void (__fastcall *v75)(unsigned __int64, _QWORD, __int64); // rax
  unsigned int v76; // edx
  unsigned int v77; // ecx
  __int64 v78; // rax
  unsigned __int64 v79; // r9
  unsigned __int64 v80; // rbx
  __int64 v81; // rcx
  unsigned __int64 v82; // rbx
  unsigned __int64 v83; // rsi
  __int64 v84; // rbp
  __int64 v85; // rdi
  unsigned __int64 Count; // rax
  unsigned __int64 v87; // rcx
  __int64 v88; // rbp
  unsigned __int64 v89; // rsi
  __int64 v90; // rdi
  unsigned __int64 v91; // rax
  unsigned __int64 v92; // rcx
  unsigned int v93; // eax
  __int64 v94; // r13
  __int64 v95; // rcx
  __int64 (__fastcall *v96)(_QWORD, _QWORD); // rax
  __int64 v97; // rbx
  __int64 v98; // rcx
  __int64 (__fastcall *v99)(_QWORD, _QWORD); // rax
  char v100; // al
  void (__fastcall *v101)(unsigned __int64, _QWORD, CVisual *); // rax
  unsigned int v102; // edx
  void (__fastcall *v103)(unsigned __int64, __int64, CVisual **); // rax
  unsigned int v104; // edx
  unsigned __int64 v105; // rbx
  CVisual *v106; // rcx
  CVisual *v107; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct CManipulationManager *v110; // [rsp+88h] [rbp+10h] BYREF
  CVisual **v111; // [rsp+90h] [rbp+18h]

  v4 = (const char *)CKeyframeAnimation::IsOfType;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
  {
    v7 = (unsigned int *)((char *)a2 + 28);
    if ( v5 < *((_DWORD *)a2 + 7) )
    {
      v8 = *((_QWORD *)a2 + 5);
      v9 = (_DWORD *)((char *)a2 + 24);
      v10 = (_QWORD *)((char *)a2 + 40);
      if ( *(_DWORD *)(*((_DWORD *)a2 + 6) * v5 + v8) )
      {
        v12 = (_QWORD *)((char *)a2 + 40);
        v11 = (_DWORD *)((char *)a2 + 24);
        v94 = v8 + *v9 * v5;
        v95 = *(_QWORD *)(v94 + 8);
        if ( !v95 )
          goto LABEL_5;
        v96 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v95 + 64LL);
        if ( v96 == CKeyframeAnimation::IsOfType )
        {
          if ( !CBaseExpression::IsOfType(v95, 182) )
            goto LABEL_5;
        }
        else if ( v96 != CVisual::IsOfType )
        {
          if ( v96 == CSharedSection::IsOfType )
          {
            if ( !(unsigned __int8)CSharedSectionBase::IsOfType(v95, 182LL) )
              goto LABEL_5;
          }
          else if ( !((unsigned __int8 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(_QWORD, _QWORD), __int64 (__fastcall *)(_QWORD, _QWORD)))v96)(
                       v95,
                       182LL,
                       CVisual::IsOfType,
                       CKeyframeAnimation::IsOfType) )
          {
            goto LABEL_5;
          }
        }
        v13 = *(CVisual ***)(v94 + 8);
        v7 = (unsigned int *)((char *)a2 + 28);
        goto LABEL_8;
      }
    }
  }
  v11 = (_DWORD *)((char *)a2 + 24);
  v12 = (_QWORD *)((char *)a2 + 40);
  v9 = (_DWORD *)((char *)a2 + 24);
  v10 = (_QWORD *)((char *)a2 + 40);
  v7 = (unsigned int *)((char *)a2 + 28);
LABEL_5:
  v13 = 0LL;
LABEL_8:
  v14 = *((_DWORD *)a3 + 3);
  v111 = v13;
  if ( !v14 )
    goto LABEL_11;
  if ( v14 >= *v7 )
    goto LABEL_11;
  if ( !*(_DWORD *)(*v11 * v14 + *v12) )
    goto LABEL_11;
  v97 = *v10 + *v9 * v14;
  v98 = *(_QWORD *)(v97 + 8);
  if ( !v98 )
    goto LABEL_11;
  v99 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v98 + 64LL);
  if ( v99 == CKeyframeAnimation::IsOfType )
  {
    v100 = CBaseExpression::IsOfType(v98, 182);
    goto LABEL_187;
  }
  if ( v99 != CVisual::IsOfType )
  {
    if ( v99 != CSharedSection::IsOfType )
    {
      if ( ((unsigned __int8 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(_QWORD, _QWORD), const char *))v99)(
             v98,
             182LL,
             CKeyframeAnimation::IsOfType,
             v4) )
      {
        goto LABEL_185;
      }
LABEL_11:
      v15 = 0LL;
      goto LABEL_12;
    }
    v100 = CSharedSectionBase::IsOfType(v98, 182LL);
LABEL_187:
    if ( v100 )
      goto LABEL_185;
    goto LABEL_11;
  }
LABEL_185:
  v15 = *(unsigned __int64 **)(v97 + 8);
LABEL_12:
  if ( !v13 )
  {
    v26 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xC64u, 0LL);
    return v26;
  }
  v16 = this;
  v17 = *((_BYTE *)a3 + 16);
  if ( v13[11] == this )
  {
    v26 = -2147024809;
    v93 = 561;
    v25 = -2147024809;
    goto LABEL_176;
  }
  v18 = *((_QWORD *)this + 10);
  if ( (v18 & 2) != 0 )
    v19 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v19 = v18 & 1;
  if ( v15 )
  {
    if ( !v19 )
      goto LABEL_153;
    v20 = v19 - 1;
    v21 = (unsigned __int64 *)(v18 & 0xFFFFFFFFFFFFFFFCuLL);
    v4 = (const char *)(8 * v19 + 8);
    while ( 1 )
    {
      if ( (*((_QWORD *)this + 10) & 2LL) != 0 )
        v22 = *v21;
      else
        v22 = v18 & 1;
      if ( v20 >= v22 )
      {
        v21 = (unsigned __int64 *)(v18 & 0xFFFFFFFFFFFFFFFCuLL);
      }
      else
      {
        v23 = v22 == 1;
        v24 = v21;
        if ( !v23 )
          v24 = *(unsigned __int64 **)((char *)v21 + (_QWORD)v4);
        if ( v24 == v15 )
        {
LABEL_26:
          if ( v19 )
          {
            if ( !v17 )
              --v19;
            goto LABEL_29;
          }
LABEL_153:
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x247,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visual.cpp",
            v4);
        }
      }
      --v20;
      v4 -= 8;
      if ( !--v19 )
        goto LABEL_26;
    }
  }
  v62 = 0LL;
  if ( !v17 )
    v62 = v19;
  v19 = v62;
LABEL_29:
  LODWORD(v110) = CPtrArrayBase::InsertAt((CVisual *)((char *)this + 80), (unsigned __int64)v13, v19);
  v25 = (int)v110;
  v26 = (unsigned int)v110;
  if ( (int)v110 < 0 )
  {
    v93 = 591;
LABEL_176:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, v93, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xC67u, 0LL);
    return v26;
  }
  (*((void (__fastcall **)(CVisual **))*v13 + 1))(v13);
  v27 = v13[11];
  if ( !v27 )
    goto LABEL_45;
  v28 = *((_QWORD *)v27 + 10);
  if ( (v28 & 2) != 0 )
  {
    v29 = (unsigned __int64 *)(v28 & 0xFFFFFFFFFFFFFFFCuLL);
    v30 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  else
  {
    v30 = v28 & 1;
    v29 = (unsigned __int64 *)(v28 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  if ( v30 == 1 )
  {
    if ( v13 != (CVisual **)v29 )
      goto LABEL_45;
    *((_QWORD *)v27 + 10) = 0LL;
  }
  else
  {
    if ( !v30 )
      goto LABEL_45;
    v77 = 0;
    v78 = 0LL;
    do
    {
      if ( v13 == (CVisual **)v29[v78 + 2] )
        break;
      v78 = ++v77;
    }
    while ( v77 < v30 );
    v79 = v77;
    if ( v77 >= v30 )
      goto LABEL_45;
    if ( (*((_QWORD *)v27 + 10) & 2LL) != 0 )
      v80 = *v29;
    else
      v80 = v28 & 1;
    if ( v77 < v80 )
    {
      v81 = 1LL;
      if ( v80 - v79 <= 1 )
        v81 = v80 - v79;
      if ( v80 == v81 )
      {
        if ( v80 > 1 )
          operator delete(v29);
        *((_QWORD *)v27 + 10) = 0LL;
      }
      else
      {
        v82 = v80 - v81;
        if ( v82 == 1 )
        {
          v105 = v29[(v81 & (v79 - 1)) + 2];
          operator delete(v29);
          *((_QWORD *)v27 + 10) = v105 | 1;
        }
        else
        {
          if ( v79 < v82 )
            memmove_0(&v29[v79 + 2], &v29[v79 + 2 + v81], 8 * (v82 - v79));
          *v29 = v82;
        }
      }
    }
  }
  if ( (*((_BYTE *)v13 + 106) & 0x40) != 0 )
  {
    CVisual::DirtyForInvisibleChild(v27, (struct CVisual *)v13);
    v31 = *((_DWORD *)v13 + 66) + 1;
    if ( (*((_BYTE *)v13 + 107) & 1) == 0 )
      v31 = *((_DWORD *)v13 + 66);
    v32 = *((_DWORD *)v13 + 67) + 1;
    if ( (*((_BYTE *)v13 + 107) & 4) == 0 )
      v32 = *((_DWORD *)v13 + 67);
    if ( v31 || v32 )
    {
      v107 = v27;
      do
      {
        *((_DWORD *)v27 + 66) -= v31;
        *((_DWORD *)v27 + 67) -= v32;
        if ( (*((_BYTE *)v27 + 106) & 0x40) == 0 )
          break;
        v27 = (CVisual *)*((_QWORD *)v27 + 11);
        if ( v107 )
        {
          v107 = (CVisual *)*((_QWORD *)v107 + 11);
          if ( v107 )
            v107 = (CVisual *)*((_QWORD *)v107 + 11);
        }
      }
      while ( v27 != v107 );
    }
  }
  v33 = *v13;
  v13[11] = 0LL;
  v34 = (__int64 (__fastcall *)(CResource *))*((_QWORD *)v33 + 2);
  if ( v34 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease((CResource *)v13);
  else
    v34((CResource *)v13);
LABEL_45:
  v13[11] = this;
  CVisual::OnOuterTransformChanged((CVisual *)v13);
  CVisual::OnClipChanged((CVisual *)v13, v35);
  if ( (*((_BYTE *)v13 + 106) & 0x40) == 0 )
    return v26;
  v36 = *((_QWORD *)this + 4);
  if ( (v36 & 2) != 0 )
    v36 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v36) = v36 & 1;
  v37 = (void (__fastcall *)(unsigned __int64, _QWORD, CVisual *))&CCachedVisualImage::NotifyOnChanged;
  v38 = (void (__fastcall *)(unsigned __int64, _QWORD, CVisual *))&CVisualSurface::NotifyOnChanged;
  if ( (_DWORD)v36 )
  {
    v83 = 0LL;
    v84 = (unsigned int)v36;
    v85 = 16LL;
    do
    {
      Count = CPtrArray<CVisual>::GetCount((char *)this + 32);
      if ( v83 >= Count )
      {
        v87 = 0LL;
      }
      else if ( Count == 1 )
      {
        v87 = *((_QWORD *)this + 4) & 0xFFFFFFFFFFFFFFFCuLL;
      }
      else
      {
        _mm_lfence();
        v87 = *(_QWORD *)((*((_QWORD *)this + 4) & 0xFFFFFFFFFFFFFFFCuLL) + v85);
      }
      if ( v87 != *((_QWORD *)this + 11) )
      {
        v101 = *(void (__fastcall **)(unsigned __int64, _QWORD, CVisual *))(*(_QWORD *)v87 + 80LL);
        if ( v101 == v37 )
        {
          CResource::NotifyOnChanged((_DWORD *)v87, 0, (__int64)this);
        }
        else if ( v101 == v38 )
        {
          v102 = 6;
          if ( this != *(CVisual **)(v87 + 72) )
            v102 = 0;
          CResource::NotifyOnChanged((_DWORD *)v87, v102, (__int64)this);
        }
        else
        {
          v101(v87, 0LL, this);
        }
        v38 = (void (__fastcall *)(unsigned __int64, _QWORD, CVisual *))&CVisualSurface::NotifyOnChanged;
        v37 = (void (__fastcall *)(unsigned __int64, _QWORD, CVisual *))&CCachedVisualImage::NotifyOnChanged;
      }
      ++v83;
      v85 += 8LL;
      --v84;
    }
    while ( v84 );
  }
  v39 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(*(_QWORD *)this + 160LL);
  if ( v39 != CResource::GetProcessAttributionNoRef )
    ((void (__fastcall *)(CVisual *, _QWORD, _QWORD))v39)(this, v38, v37);
  *((_BYTE *)this + 96) |= 0x11u;
  v40 = *((_QWORD *)this + 11);
  if ( (*((_BYTE *)this + 106) & 0x40) != 0 )
  {
    do
    {
      if ( !v40 )
        break;
      v41 = *(_BYTE *)(v40 + 96);
      if ( (v41 & 0x11) == 0x11 )
        break;
      *(_BYTE *)(v40 + 96) = v41 | 0x11;
      v42 = *(_QWORD *)(v40 + 32);
      if ( (v42 & 2) != 0 )
        v42 = *(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v42) = v42 & 1;
      if ( (_DWORD)v42 )
      {
        v63 = (unsigned int)v42;
        v64 = 0LL;
        v65 = 16LL;
        do
        {
          v66 = *(_QWORD *)(v40 + 32);
          if ( (v66 & 2) != 0 )
            v38 = *(void (__fastcall **)(unsigned __int64, _QWORD, CVisual *))(v66 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            v38 = (void (__fastcall *)(unsigned __int64, _QWORD, CVisual *))(*(_QWORD *)(v40 + 32) & 1LL);
          if ( v64 >= (unsigned __int64)v38 )
          {
            v67 = 0LL;
          }
          else if ( v38 == (void (__fastcall *)(unsigned __int64, _QWORD, CVisual *))1 )
          {
            v67 = v66 & 0xFFFFFFFFFFFFFFFCuLL;
          }
          else
          {
            _mm_lfence();
            v67 = *(_QWORD *)((*(_QWORD *)(v40 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + v65);
          }
          if ( v67 != *(_QWORD *)(v40 + 88) )
          {
            v75 = *(void (__fastcall **)(unsigned __int64, _QWORD, __int64))(*(_QWORD *)v67 + 80LL);
            if ( (char *)v75 == (char *)&CCachedVisualImage::NotifyOnChanged )
            {
              CResource::NotifyOnChanged((_DWORD *)v67, 0, v40);
            }
            else if ( (char *)v75 == (char *)&CVisualSurface::NotifyOnChanged )
            {
              v76 = 6;
              if ( v40 != *(_QWORD *)(v67 + 72) )
                v76 = 0;
              CResource::NotifyOnChanged((_DWORD *)v67, v76, v40);
            }
            else
            {
              v75(v67, 0LL, v40);
            }
          }
          ++v64;
          v65 += 8LL;
          --v63;
        }
        while ( v63 );
        v26 = (unsigned int)v110;
      }
      v43 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(*(_QWORD *)v40 + 160LL);
      if ( v43 != CResource::GetProcessAttributionNoRef && v43 != CWindowNode::GetProcessAttributionNoRef )
        ((void (__fastcall *)(__int64, _QWORD, _QWORD))v43)(v40, v38, v37);
      v44 = v40;
      v40 = *(_QWORD *)(v40 + 88);
    }
    while ( (*(_BYTE *)(v44 + 106) & 0x40) != 0 );
    v16 = this;
  }
  v45 = (unsigned __int64)v13[4];
  if ( (v45 & 2) != 0 )
    v45 = *(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v45) = v45 & 1;
  if ( (_DWORD)v45 )
  {
    v88 = (unsigned int)v45;
    v89 = 0LL;
    v90 = 16LL;
    do
    {
      v91 = CPtrArray<CVisual>::GetCount(v13 + 4);
      if ( v89 >= v91 )
      {
        v92 = (unsigned __int64)v38;
      }
      else if ( v91 == 1 )
      {
        v92 = (unsigned __int64)v13[4] & 0xFFFFFFFFFFFFFFFCuLL;
      }
      else
      {
        _mm_lfence();
        v92 = *(_QWORD *)(((unsigned __int64)v13[4] & 0xFFFFFFFFFFFFFFFCuLL) + v90);
      }
      if ( (CVisual *)v92 != v13[11] )
      {
        v103 = *(void (__fastcall **)(unsigned __int64, __int64, CVisual **))(*(_QWORD *)v92 + 80LL);
        if ( (char *)v103 == (char *)&CCachedVisualImage::NotifyOnChanged )
        {
          CResource::NotifyOnChanged((_DWORD *)v92, 6u, (__int64)v13);
        }
        else if ( (char *)v103 == (char *)&CVisualSurface::NotifyOnChanged )
        {
          v104 = 6;
          if ( v13 != *(CVisual ***)(v92 + 72) )
            v104 = 1;
          CResource::NotifyOnChanged((_DWORD *)v92, v104, (__int64)v13);
        }
        else
        {
          v103(v92, 1LL, v13);
        }
        v38 = 0LL;
      }
      ++v89;
      v90 += 8LL;
      --v88;
    }
    while ( v88 );
    v26 = (unsigned int)v110;
    v16 = this;
  }
  v46 = (struct CProcessAttribution *(__fastcall *)(CResource *__hidden))*((_QWORD *)*v13 + 20);
  if ( v46 == CResource::GetProcessAttributionNoRef )
  {
    v47 = v13[7];
    if ( !v47 )
    {
      *((_BYTE *)v13 + 96) |= 4u;
      v48 = 0LL;
      goto LABEL_68;
    }
    v48 = *((_QWORD *)v47 + 8);
  }
  else
  {
    v48 = ((__int64 (__fastcall *)(CVisual **, _QWORD, _QWORD))v46)(v13, v38, v37);
  }
  *((_BYTE *)v13 + 96) |= 4u;
  if ( v48 )
    ++*(_DWORD *)(v48 + 28);
LABEL_68:
  v49 = (__int64)v13[11];
  if ( (*((_BYTE *)v13 + 106) & 0x40) == 0 )
    goto LABEL_82;
  do
  {
    if ( !v49 )
      break;
    v50 = *(_BYTE *)(v49 + 96);
    if ( v50 < 0 )
      break;
    *(_BYTE *)(v49 + 96) = v50 | 0x80;
    v51 = *(_QWORD *)(v49 + 32);
    if ( (v51 & 2) != 0 )
      v51 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v51) = v51 & 1;
    if ( (_DWORD)v51 )
    {
      v68 = 16LL;
      v69 = (unsigned int)v51;
      v70 = 0LL;
      do
      {
        v71 = *(_QWORD *)(v49 + 32);
        if ( (v71 & 2) != 0 )
          v38 = *(void (__fastcall **)(unsigned __int64, _QWORD, CVisual *))(v71 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v38 = (void (__fastcall *)(unsigned __int64, _QWORD, CVisual *))(*(_QWORD *)(v49 + 32) & 1LL);
        if ( v70 >= (unsigned __int64)v38 )
        {
          v72 = 0LL;
        }
        else if ( v38 == (void (__fastcall *)(unsigned __int64, _QWORD, CVisual *))1 )
        {
          v72 = v71 & 0xFFFFFFFFFFFFFFFCuLL;
        }
        else
        {
          _mm_lfence();
          v72 = *(_QWORD *)((*(_QWORD *)(v49 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + v68);
        }
        if ( v72 != *(_QWORD *)(v49 + 88) )
        {
          v73 = *(void (__fastcall **)(unsigned __int64, __int64, __int64))(*(_QWORD *)v72 + 80LL);
          if ( (char *)v73 == (char *)&CCachedVisualImage::NotifyOnChanged )
          {
            CResource::NotifyOnChanged((_DWORD *)v72, 6u, v49);
          }
          else if ( (char *)v73 == (char *)&CVisualSurface::NotifyOnChanged )
          {
            v74 = 6;
            if ( v49 != *(_QWORD *)(v72 + 72) )
              v74 = 1;
            CResource::NotifyOnChanged((_DWORD *)v72, v74, v49);
          }
          else
          {
            v73(v72, 1LL, v49);
          }
        }
        ++v70;
        v68 += 8LL;
        --v69;
      }
      while ( v69 );
      v26 = (unsigned int)v110;
    }
    v52 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(*(_QWORD *)v49 + 160LL);
    if ( v52 != CResource::GetProcessAttributionNoRef )
    {
      if ( v52 == CWindowNode::GetProcessAttributionNoRef )
        v54 = *(_QWORD *)(v49 + 816);
      else
        v54 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v52)(v49, v38, 0LL);
LABEL_77:
      if ( v54 && v48 != v54 )
      {
        ++*(_DWORD *)(v54 + 24);
        v48 = v54;
      }
      goto LABEL_80;
    }
    v53 = *(_QWORD *)(v49 + 56);
    if ( v53 )
    {
      v54 = *(_QWORD *)(v53 + 64);
      goto LABEL_77;
    }
LABEL_80:
    v55 = v49;
    v49 = *(_QWORD *)(v49 + 88);
  }
  while ( (*(_BYTE *)(v55 + 106) & 0x40) != 0 );
  v13 = v111;
  v16 = this;
LABEL_82:
  if ( (*((_BYTE *)v13 + 105) & 0x20) != 0 )
  {
    v56 = (CComposition *)*((_QWORD *)v16 + 3);
    v110 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v110);
    ManipulationManager = CComposition::GetManipulationManager(v56, &v110);
    v58 = v110;
    if ( ManipulationManager >= 0 )
      CManipulationManager::QueueMidManipulationUpdate(v110, 2LL, v13);
    if ( v58 )
      (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v58 + 16LL))(v58);
  }
  v59 = *((_DWORD *)v13 + 67) + 1;
  if ( (*((_BYTE *)v13 + 107) & 4) == 0 )
    v59 = *((_DWORD *)v13 + 67);
  v60 = *((_DWORD *)v13 + 66) + 1;
  if ( (*((_BYTE *)v13 + 107) & 1) == 0 )
    v60 = *((_DWORD *)v13 + 66);
  if ( v60 || v59 )
  {
    v106 = v16;
    do
    {
      *((_DWORD *)v16 + 66) += v60;
      *((_DWORD *)v16 + 67) += v59;
      if ( (*((_BYTE *)v16 + 106) & 0x40) == 0 )
        break;
      v16 = (CVisual *)*((_QWORD *)v16 + 11);
      if ( v106 )
      {
        v106 = (CVisual *)*((_QWORD *)v106 + 11);
        if ( v106 )
          v106 = (CVisual *)*((_QWORD *)v106 + 11);
      }
    }
    while ( v16 != v106 );
  }
  return v26;
}
