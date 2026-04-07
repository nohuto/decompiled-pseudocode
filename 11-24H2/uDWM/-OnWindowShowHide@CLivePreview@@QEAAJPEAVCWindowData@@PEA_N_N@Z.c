/*
 * XREFs of ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001C608
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001B770 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001BC68 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x1800EE880 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 * Callees:
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x1800076C4 (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x18000F45C (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x180020E90 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18002D8B0 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x180031D68 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x180032DDC (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x180040FF0 (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18007C7A8 (-_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x18007DBF8 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ??1?$out_param_t@V?$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@@details@wil@@QEAA@XZ @ 0x18008B66C (--1-$out_param_t@V-$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@@details@wil@@QEAA@XZ.c)
 *     ?RemoveAt@?$DynArray@ULivePreviewWindow@@$0A@@@QEAAJI@Z @ 0x180099FFC (-RemoveAt@-$DynArray@ULivePreviewWindow@@$0A@@@QEAAJI@Z.c)
 *     ??$out_param@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AU?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@0@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x18009B040 (--$out_param@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-Reg.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?InsertAt@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z @ 0x1800C7C3C (-InsertAt@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800C7E88 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x1800C7EBC (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLivePreview::OnWindowShowHide(CLivePreview *this, struct CWindowData *a2, bool *a3, char a4)
{
  unsigned int v6; // ebx
  int v7; // r12d
  int v8; // r13d
  __int64 v10; // r12
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // r13
  __int64 v14; // r12
  int v15; // r12d
  _QWORD *v16; // r8
  __int64 v17; // r13
  char v18; // al
  CContainerVisual **v19; // rbx
  int v20; // eax
  CBaseObject *v21; // rcx
  int updated; // eax
  CLivePreview *v23; // rcx
  bool IsTrulyMaximized; // r12
  int v25; // eax
  CContainerVisual *v26; // rdx
  __int64 i; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  CContainerVisual **v30; // rdx
  int v31; // eax
  CBaseObject *v32; // rcx
  struct CVisual *v33; // rdx
  int v34; // eax
  CBaseObject *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  char v38; // dl
  unsigned int v39; // eax
  CTopLevelWindow *v40; // r12
  __int64 v41; // rax
  int inserted; // eax
  CContainerVisual *v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  CContainerVisual *v46; // rcx
  int v47; // r9d
  CContainerVisual **v48; // rdx
  int v49; // eax
  CBaseObject *v50; // rcx
  CContainerVisual **v51; // rdx
  int v52; // eax
  CBaseObject *v53; // rcx
  CTopLevelWindow *v54; // rcx
  int v55; // eax
  unsigned int v56; // [rsp+20h] [rbp-E0h]
  unsigned int v57; // [rsp+20h] [rbp-E0h]
  char v58; // [rsp+30h] [rbp-D0h]
  CContainerVisual *v59; // [rsp+38h] [rbp-C8h] BYREF
  char v60; // [rsp+40h] [rbp-C0h]
  struct CVisual *v61; // [rsp+48h] [rbp-B8h]
  bool *v62; // [rsp+50h] [rbp-B0h]
  struct CWindowData *v63; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v64; // [rsp+60h] [rbp-A0h]
  bool v65; // [rsp+70h] [rbp-90h]
  int v66; // [rsp+71h] [rbp-8Fh]
  __int16 v67; // [rsp+75h] [rbp-8Bh]
  char v68; // [rsp+77h] [rbp-89h]
  CContainerVisual *v69; // [rsp+78h] [rbp-88h]
  _BYTE v70[32]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR ClassName[264]; // [rsp+A0h] [rbp-60h] BYREF

  v62 = a3;
  v6 = 0;
  v7 = *((_DWORD *)this + 80);
  v8 = *((_DWORD *)this + 72);
  LODWORD(v59) = v8;
  if ( v7 <= 0 && v8 <= 0 )
    return v6;
  v58 = 0;
  v60 = 0;
  if ( a4 || !CLivePreview::_IsEligibleForLivePreview(this, a2) )
  {
    v10 = (unsigned int)(v7 - 1);
    v11 = (_QWORD *)((char *)this + 296);
    while ( (int)v10 >= 0 )
    {
      if ( *(struct CWindowData **)(*v11 + 48 * v10 + 8) == a2 )
      {
        _mm_lfence();
        v19 = *(CContainerVisual ***)(*v11 + 48 * v10);
        CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)v19);
        v20 = CContainerVisual::RemoveChild(v19[3], (struct CVisual *)v19);
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x6CFu, 0LL);
        v21 = *(CBaseObject **)(*((_QWORD *)this + 37) + 48 * v10 + 16);
        if ( v21 )
        {
          CBaseObject::Release(v21);
          *(_QWORD *)(*((_QWORD *)this + 37) + 48 * v10 + 16) = 0LL;
        }
        updated = DynArray<LivePreviewWindow,0>::RemoveAt((char *)this + 296, (unsigned int)v10);
        v6 = updated;
        if ( updated < 0 )
        {
          v56 = 1746;
          goto LABEL_27;
        }
        break;
      }
      v10 = (unsigned int)(v10 - 1);
    }
    v12 = (unsigned int)((_DWORD)v59 - 1);
    v13 = (_QWORD *)((char *)this + 264);
    while ( 1 )
    {
      LODWORD(v59) = v12;
      if ( (int)v12 < 0 )
        break;
      v14 = 5 * v12;
      if ( *(struct CWindowData **)(*v13 + 40 * v12) == a2 )
      {
        if ( *(_QWORD *)(*v13 + 40 * v12 + 8) )
        {
          _mm_lfence();
          v48 = *(CContainerVisual ***)(*v13 + 40 * v12 + 8);
          v49 = CContainerVisual::RemoveChild(v48[3], (struct CVisual *)v48);
          if ( v49 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x6DEu, 0LL);
          v50 = *(CBaseObject **)(*v13 + 8 * v14 + 8);
          if ( v50 )
          {
            CBaseObject::Release(v50);
            *(_QWORD *)(*v13 + 8 * v14 + 8) = 0LL;
          }
        }
        if ( *(_QWORD *)(*v13 + 8 * v14 + 16) )
        {
          _mm_lfence();
          v51 = *(CContainerVisual ***)(*v13 + 8 * v14 + 16);
          v52 = CContainerVisual::RemoveChild(v51[3], (struct CVisual *)v51);
          if ( v52 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x6E4u, 0LL);
          v53 = *(CBaseObject **)(*v13 + 8 * v14 + 16);
          if ( v53 )
          {
            CBaseObject::Release(v53);
            *(_QWORD *)(*v13 + 8 * v14 + 16) = 0LL;
          }
        }
        v54 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
        if ( v54 )
          CTopLevelWindow::StopLivePreviewAnimation(v54);
        updated = DynArray<CPenContact,0>::RemoveAt((__int64 *)this + 33, (unsigned int)v59);
        v6 = updated;
        if ( updated < 0 )
        {
          v56 = 1773;
          goto LABEL_27;
        }
        v60 = 1;
        break;
      }
      v12 = (unsigned int)(v12 - 1);
    }
    v15 = *((_DWORD *)this + 96) - 1;
    if ( v15 >= 0 )
    {
      v16 = (_QWORD *)((char *)this + 360);
      v17 = 16LL * v15;
      do
      {
        v61 = *(struct CVisual **)(*v16 + v17);
        if ( CTopLevelWindow::GetWindowData(v61) == a2 )
        {
          DynArray<CIconicBitmapPending,0>::RemoveAt(v16, (unsigned int)v15);
          v55 = CContainerVisual::RemoveChild(*((CContainerVisual **)this + 52), v61);
          v6 = v55;
          if ( v55 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0x6FBu, 0LL);
          v16 = (_QWORD *)((char *)this + 360);
        }
        v17 -= 16LL;
        --v15;
      }
      while ( v15 >= 0 );
    }
    if ( !v60 )
    {
      v18 = 0;
      goto LABEL_19;
    }
    goto LABEL_58;
  }
  if ( !*((_BYTE *)this + 240)
    || CLivePreview::_IsInLivePreview(this, a2)
    || GetClassNameW(*((HWND *)a2 + 5), ClassName, 260) && !(unsigned int)_o__wcsicmp(ClassName, aSysshadow_0) )
  {
    v18 = 0;
    goto LABEL_19;
  }
  v61 = (struct CVisual *)*((_QWORD *)a2 + 55);
  IsTrulyMaximized = CLivePreview::_IsTrulyMaximized(v23, a2);
  v25 = CContainerVisual::RenderRecursive(v61);
  v6 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x70Fu, 0LL);
    return v6;
  }
  v26 = (CContainerVisual *)MonitorFromWindow(*((HWND *)a2 + 5), 1u);
  v59 = v26;
  if ( IsTrulyMaximized )
  {
    for ( i = 0LL; (int)i < v8; i = (unsigned int)(i + 1) )
    {
      v28 = 5 * i;
      v29 = *((_QWORD *)this + 33);
      if ( *(_BYTE *)(v29 + 40 * i + 24) && *(CContainerVisual **)(v29 + 40 * i + 32) == v26 )
      {
        _mm_lfence();
        if ( *(_QWORD *)(*((_QWORD *)this + 33) + 40 * i + 8) )
        {
          _mm_lfence();
          v30 = *(CContainerVisual ***)(*((_QWORD *)this + 33) + 40 * i + 8);
          v31 = CContainerVisual::RemoveChild(v30[3], (struct CVisual *)v30);
          if ( v31 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x71Cu, 0LL);
          v32 = *(CBaseObject **)(*((_QWORD *)this + 33) + 8 * v28 + 8);
          if ( v32 )
          {
            CBaseObject::Release(v32);
            *(_QWORD *)(*((_QWORD *)this + 33) + 8 * v28 + 8) = 0LL;
          }
        }
        v33 = *(struct CVisual **)(*((_QWORD *)this + 33) + 8 * v28 + 16);
        if ( v33 )
        {
          v34 = CContainerVisual::RemoveChild(*((CContainerVisual **)this + 55), v33);
          if ( v34 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x722u, 0LL);
          v35 = *(CBaseObject **)(*((_QWORD *)this + 33) + 8 * v28 + 16);
          if ( v35 )
          {
            CBaseObject::Release(v35);
            *(_QWORD *)(*((_QWORD *)this + 33) + 8 * v28 + 16) = 0LL;
          }
        }
        v36 = *(_QWORD *)(*((_QWORD *)this + 33) + 8 * v28);
        *(_BYTE *)(v36 + 739) |= 1u;
        v37 = *(_QWORD *)(*((_QWORD *)this + 33) + 8 * v28);
        *(_BYTE *)(v37 + 738) |= 0x80u;
        v26 = v59;
        break;
      }
    }
  }
  v63 = a2;
  v64 = 0LL;
  v65 = IsTrulyMaximized;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = v26;
  updated = DynArray<LivePreviewVisual,0>::InsertAt((char *)this + 264, &v63);
  v6 = updated;
  if ( updated < 0 )
  {
    v56 = 1839;
    goto LABEL_27;
  }
  v18 = 1;
  v58 = 1;
  v38 = *((_BYTE *)a2 + 738);
  if ( *((_DWORD *)this + 124) >= 0x1Eu )
  {
    *((_BYTE *)a2 + 739) |= 1u;
    *((_BYTE *)a2 + 738) = v38 | 0x80;
    goto LABEL_19;
  }
  *((_BYTE *)a2 + 738) = v38 & 0x7F | (*((_QWORD *)a2 + 53) != 0LL ? 0x80 : 0);
  v39 = *((_DWORD *)this + 125);
  if ( v39 >= 0xA )
    *((_BYTE *)a2 + 739) |= 1u;
  else
    *((_DWORD *)this + 125) = v39 + 1;
  if ( *((char *)a2 + 738) >= 0 )
  {
    if ( (*((_BYTE *)a2 + 739) & 1) != 0 )
    {
      v40 = v61;
LABEL_62:
      if ( *((char *)a2 + 738) < 0 )
      {
LABEL_67:
        ++*((_DWORD *)this + 124);
        goto LABEL_58;
      }
      v59 = 0LL;
      v41 = wil::out_param<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>>(
              v70,
              &v59);
      v6 = CTopLevelWindow::CloneVisualTreeForLivePreview(v40, 1, (struct CTopLevelWindow **)(v41 + 8));
      wil::details::out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>::~out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>(v70);
      if ( (v6 & 0x80000000) != 0 )
      {
        v57 = 1871;
        v47 = v6;
      }
      else
      {
        inserted = CContainerVisual::RenderRecursive(v59);
        v6 = inserted;
        if ( inserted < 0 )
        {
          v57 = 1872;
        }
        else
        {
          inserted = CContainerVisual::InsertChildBefore(*((CContainerVisual **)this + 55), v59, 0LL);
          v6 = inserted;
          if ( inserted >= 0 )
          {
            v43 = v59;
            v59 = 0LL;
            *(_QWORD *)(*((_QWORD *)this + 33) + 16LL) = v43;
            Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v59);
            goto LABEL_67;
          }
          v57 = 1873;
        }
        v47 = inserted;
      }
LABEL_77:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, v57, 0LL);
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v59);
      return v6;
    }
LABEL_68:
    v59 = 0LL;
    v44 = wil::out_param<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>>(
            v70,
            &v59);
    v40 = v61;
    v6 = CTopLevelWindow::CloneVisualTreeForLivePreview(v61, 0, (struct CTopLevelWindow **)(v44 + 8));
    wil::details::out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>::~out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>(v70);
    if ( (v6 & 0x80000000) != 0 )
    {
      v57 = 1861;
      v47 = v6;
      goto LABEL_77;
    }
    v45 = CContainerVisual::RenderRecursive(v59);
    v6 = v45;
    if ( v45 < 0 )
    {
      v57 = 1862;
    }
    else
    {
      v45 = CContainerVisual::InsertChildBefore(*((CContainerVisual **)this + 53), v59, 0LL);
      v6 = v45;
      if ( v45 >= 0 )
      {
        v46 = v59;
        v59 = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 33) + 8LL) = v46;
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v59);
        goto LABEL_62;
      }
      v57 = 1863;
    }
    v47 = v45;
    goto LABEL_77;
  }
  if ( (*((_BYTE *)a2 + 739) & 1) == 0 )
    goto LABEL_68;
LABEL_58:
  updated = CLivePreview::_UpdateResources(this);
  v6 = updated;
  if ( updated < 0 )
  {
    v56 = 1893;
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v56, 0LL);
    return v6;
  }
  v18 = v58;
LABEL_19:
  if ( v62 )
    *v62 = v18;
  return v6;
}
