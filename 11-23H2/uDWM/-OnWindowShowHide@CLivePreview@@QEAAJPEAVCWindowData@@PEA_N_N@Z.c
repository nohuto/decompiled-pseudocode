/*
 * XREFs of ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180049AF0
 * Callers:
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x180048060 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800482A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180049060 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x18000F370 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ?Attach@?$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@QEAAXPEAVCTopLevelWindow@@@Z @ 0x180010884 (-Attach@-$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@QEAAXPEAVCTopLevelWindow@@@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180016A50 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18006CF48 (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x1800B1FB4 (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ?InsertAt@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z @ 0x1800C6B54 (-InsertAt@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z.c)
 *     ?RemoveAt@?$DynArray@ULivePreviewWindow@@$0A@@@QEAAJI@Z @ 0x1800C6D18 (-RemoveAt@-$DynArray@ULivePreviewWindow@@$0A@@@QEAAJI@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800C85EC (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800C8624 (-_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x1800C8F84 (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800E68E8 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLivePreview::OnWindowShowHide(CLivePreview *this, struct CWindowData *a2, bool *a3, char a4)
{
  unsigned int v6; // ebx
  int v7; // r12d
  int v8; // eax
  char v10; // r14
  CLivePreview *v11; // rcx
  bool IsTrulyMaximized; // r12
  int v13; // eax
  __int64 v14; // r8
  HMONITOR v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // rbx
  struct CVisual *v21; // rdx
  int v22; // eax
  CBaseObject *v23; // rcx
  struct CVisual *v24; // rdx
  int v25; // eax
  CBaseObject *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  char *v29; // r12
  int updated; // eax
  char v31; // dl
  unsigned int v32; // eax
  CTopLevelWindow *v33; // r13
  CBaseObject *v34; // rcx
  int v35; // eax
  CBaseObject *v36; // rcx
  CBaseObject *v37; // rcx
  int inserted; // eax
  CBaseObject *v39; // rcx
  CBaseObject *v40; // rcx
  __int64 v41; // r12
  __int64 v42; // rcx
  bool v43; // sf
  __int64 v44; // rcx
  _QWORD *v45; // r12
  __int64 v46; // rdx
  __int64 v47; // r13
  CTopLevelWindow *v48; // rbx
  int v49; // eax
  CBaseObject *v50; // rcx
  struct CVisual *v51; // rdx
  int v52; // eax
  CBaseObject *v53; // rcx
  struct CVisual *v54; // rdx
  int v55; // eax
  CBaseObject *v56; // rcx
  CTopLevelWindow *v57; // rcx
  int v58; // r12d
  __int64 v59; // r13
  __int64 v60; // r8
  unsigned int v61; // ecx
  unsigned int i; // r9d
  int v63; // eax
  int v64; // [rsp+20h] [rbp-E0h]
  unsigned int v65; // [rsp+20h] [rbp-E0h]
  unsigned int v66; // [rsp+20h] [rbp-E0h]
  unsigned int v67; // [rsp+20h] [rbp-E0h]
  CBaseObject *v68; // [rsp+30h] [rbp-D0h] BYREF
  char v69; // [rsp+38h] [rbp-C8h]
  struct CVisual *v70; // [rsp+40h] [rbp-C0h]
  CBaseObject **v71; // [rsp+48h] [rbp-B8h]
  struct CTopLevelWindow *v72; // [rsp+50h] [rbp-B0h] BYREF
  char v73; // [rsp+58h] [rbp-A8h]
  bool *v74; // [rsp+60h] [rbp-A0h]
  struct CWindowData *v75; // [rsp+68h] [rbp-98h] BYREF
  __int128 v76; // [rsp+70h] [rbp-90h]
  bool v77; // [rsp+80h] [rbp-80h]
  HMONITOR v78; // [rsp+88h] [rbp-78h]
  WCHAR ClassName[264]; // [rsp+90h] [rbp-70h] BYREF

  v74 = a3;
  v6 = 0;
  v7 = *((_DWORD *)this + 92);
  v8 = *((_DWORD *)this + 84);
  LODWORD(v68) = v8;
  if ( v7 <= 0 && v8 <= 0 )
    return v6;
  v10 = 0;
  v69 = 0;
  if ( !a4 && CLivePreview::_IsEligibleForLivePreview(this, a2) )
  {
    if ( !*((_BYTE *)this + 288)
      || CLivePreview::_IsInLivePreview(this, a2)
      || GetClassNameW(*((HWND *)a2 + 5), ClassName, 260) && !(unsigned int)_o__wcsicmp(ClassName, aSysshadow_0) )
    {
      goto LABEL_116;
    }
    v70 = (struct CVisual *)*((_QWORD *)a2 + 55);
    IsTrulyMaximized = CLivePreview::_IsTrulyMaximized(v11, a2);
    v13 = CVisual::RenderRecursive(v70);
    v6 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x70Eu, 0LL);
      return v6;
    }
    v10 = 1;
    v15 = MonitorFromWindow(*((HWND *)a2 + 5), 1u);
    if ( IsTrulyMaximized )
    {
      v16 = 0LL;
      v14 = (int)v68;
      if ( (int)v68 > 0 )
      {
        v17 = 0LL;
        v18 = *((_QWORD *)this + 39);
        v19 = (_QWORD *)(v18 + 32);
        while ( !*((_BYTE *)v19 - 8) || (HMONITOR)*v19 != v15 )
        {
          v16 = (unsigned int)(v16 + 1);
          ++v17;
          v19 += 5;
          if ( v17 >= (int)v68 )
            goto LABEL_28;
        }
        v20 = 5 * v16;
        v21 = *(struct CVisual **)(v18 + 40 * v16 + 8);
        if ( v21 )
        {
          v22 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v21 + 3) + 32LL), v21);
          if ( v22 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x71Bu, 0LL);
          v23 = *(CBaseObject **)(*((_QWORD *)this + 39) + 8 * v20 + 8);
          if ( v23 )
          {
            CBaseObject::Release(v23);
            *(_QWORD *)(*((_QWORD *)this + 39) + 8 * v20 + 8) = 0LL;
          }
        }
        v24 = *(struct CVisual **)(*((_QWORD *)this + 39) + 8 * v20 + 16);
        if ( v24 )
        {
          v25 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 61) + 32LL), v24);
          if ( v25 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x721u, 0LL);
          v26 = *(CBaseObject **)(*((_QWORD *)this + 39) + 8 * v20 + 16);
          if ( v26 )
          {
            CBaseObject::Release(v26);
            *(_QWORD *)(*((_QWORD *)this + 39) + 8 * v20 + 16) = 0LL;
          }
        }
        v27 = *(_QWORD *)(*((_QWORD *)this + 39) + 8 * v20);
        *(_BYTE *)(v27 + 675) |= 1u;
        v28 = *(_QWORD *)(*((_QWORD *)this + 39) + 8 * v20);
        *(_BYTE *)(v28 + 674) |= 0x80u;
      }
    }
LABEL_28:
    v75 = a2;
    v76 = 0LL;
    v77 = IsTrulyMaximized;
    v78 = v15;
    v29 = (char *)this + 312;
    updated = DynArray<LivePreviewVisual,0>::InsertAt((char *)this + 312, &v75, v14);
    v6 = updated;
    if ( updated < 0 )
    {
      v65 = 1838;
LABEL_86:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v65, 0LL);
      return v6;
    }
    v31 = *((_BYTE *)a2 + 674);
    if ( *((_DWORD *)this + 136) >= 0x1Eu )
    {
      *((_BYTE *)a2 + 675) |= 1u;
      *((_BYTE *)a2 + 674) = v31 | 0x80;
      goto LABEL_116;
    }
    *((_BYTE *)a2 + 674) = v31 & 0x7F | (*((_QWORD *)a2 + 53) != 0LL ? 0x80 : 0);
    v32 = *((_DWORD *)this + 137);
    if ( v32 >= 0xA )
      *((_BYTE *)a2 + 675) |= 1u;
    else
      *((_DWORD *)this + 137) = v32 + 1;
    if ( *((char *)a2 + 674) >= 0 )
    {
      if ( (*((_BYTE *)a2 + 675) & 1) != 0 )
      {
        v33 = v70;
LABEL_54:
        if ( *((char *)a2 + 674) >= 0 )
        {
          v68 = 0LL;
          v71 = &v68;
          v72 = 0LL;
          v73 = 1;
          v6 = CTopLevelWindow::CloneVisualTreeForLivePreview(v33, 1u, &v72);
          if ( v73 )
            Microsoft::WRL::ComPtr<CTopLevelWindow>::Attach(v71, v72);
          if ( (v6 & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x74Fu, 0LL);
LABEL_61:
            v34 = v68;
            if ( !v68 )
              return v6;
            v68 = 0LL;
            goto LABEL_48;
          }
          inserted = CVisual::RenderRecursive(v68);
          v6 = inserted;
          if ( inserted < 0 )
          {
            v67 = 1872;
LABEL_60:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v67, 0LL);
            goto LABEL_61;
          }
          inserted = VisualCollection::InsertRelative(
                       (VisualCollection *)(*((_QWORD *)this + 61) + 32LL),
                       (unsigned __int64)v68,
                       0LL,
                       0,
                       v64);
          v6 = inserted;
          if ( inserted < 0 )
          {
            v67 = 1873;
            goto LABEL_60;
          }
          v39 = v68;
          v68 = 0LL;
          *(_QWORD *)(*(_QWORD *)v29 + 16LL) = v39;
          v40 = v68;
          if ( v68 )
          {
            v68 = 0LL;
            CBaseObject::Release(v40);
          }
        }
        ++*((_DWORD *)this + 136);
        goto LABEL_115;
      }
LABEL_38:
      v68 = 0LL;
      v71 = &v68;
      v72 = 0LL;
      v73 = 1;
      v33 = v70;
      v6 = CTopLevelWindow::CloneVisualTreeForLivePreview(v70, 0, &v72);
      if ( v73 )
        Microsoft::WRL::ComPtr<CTopLevelWindow>::Attach(v71, v72);
      if ( (v6 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x744u, 0LL);
LABEL_46:
        v34 = v68;
        if ( !v68 )
          return v6;
        v68 = 0LL;
LABEL_48:
        CBaseObject::Release(v34);
        return v6;
      }
      v35 = CVisual::RenderRecursive(v68);
      v6 = v35;
      if ( v35 < 0 )
      {
        v66 = 1861;
LABEL_45:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, v66, 0LL);
        goto LABEL_46;
      }
      v35 = VisualCollection::InsertRelative(
              (VisualCollection *)(*((_QWORD *)this + 59) + 32LL),
              (unsigned __int64)v68,
              0LL,
              0,
              v64);
      v6 = v35;
      if ( v35 < 0 )
      {
        v66 = 1862;
        goto LABEL_45;
      }
      v36 = v68;
      v68 = 0LL;
      *(_QWORD *)(*(_QWORD *)v29 + 8LL) = v36;
      v37 = v68;
      if ( v68 )
      {
        v68 = 0LL;
        CBaseObject::Release(v37);
      }
      goto LABEL_54;
    }
    if ( (*((_BYTE *)a2 + 675) & 1) == 0 )
      goto LABEL_38;
LABEL_115:
    updated = CLivePreview::_UpdateResources(this);
    v6 = updated;
    if ( updated < 0 )
    {
      v65 = 1894;
      goto LABEL_86;
    }
    goto LABEL_116;
  }
  v41 = (unsigned int)(v7 - 1);
  if ( (int)v41 >= 0 )
  {
    v42 = *((_QWORD *)this + 43);
    while ( *(struct CWindowData **)(v42 + 48 * v41 + 8) != a2 )
    {
      v41 = (unsigned int)(v41 - 1);
      if ( (int)v41 < 0 )
        goto LABEL_74;
    }
    v48 = *(CTopLevelWindow **)(v42 + 48 * v41);
    CTopLevelWindow::StopLivePreviewAnimation(v48);
    v49 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v48 + 3) + 32LL), v48);
    if ( v49 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x6CFu, 0LL);
    v50 = *(CBaseObject **)(*((_QWORD *)this + 43) + 48 * v41 + 16);
    if ( v50 )
    {
      CBaseObject::Release(v50);
      *(_QWORD *)(*((_QWORD *)this + 43) + 48 * v41 + 16) = 0LL;
    }
    updated = DynArray<LivePreviewWindow,0>::RemoveAt((char *)this + 344, (unsigned int)v41);
    v6 = updated;
    if ( updated < 0 )
    {
      v65 = 1745;
      goto LABEL_86;
    }
  }
LABEL_74:
  v43 = (int)v68 - 1 < 0;
  v44 = (unsigned int)((_DWORD)v68 - 1);
  LODWORD(v68) = (_DWORD)v68 - 1;
  if ( !v43 )
  {
    v45 = (_QWORD *)((char *)this + 312);
    v46 = *((_QWORD *)this + 39);
    while ( 1 )
    {
      v47 = 5 * v44;
      if ( *(struct CWindowData **)(v46 + 40 * v44) == a2 )
        break;
      v44 = (unsigned int)(v44 - 1);
      LODWORD(v68) = v44;
      if ( (int)v44 < 0 )
        goto LABEL_103;
    }
    v51 = *(struct CVisual **)(v46 + 40 * v44 + 8);
    if ( v51 )
    {
      v52 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v51 + 3) + 32LL), v51);
      if ( v52 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x6DDu, 0LL);
      v53 = *(CBaseObject **)(*v45 + 8 * v47 + 8);
      if ( v53 )
      {
        CBaseObject::Release(v53);
        *(_QWORD *)(*v45 + 8 * v47 + 8) = 0LL;
      }
    }
    v54 = *(struct CVisual **)(*v45 + 8 * v47 + 16);
    if ( v54 )
    {
      v55 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v54 + 3) + 32LL), v54);
      if ( v55 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0x6E3u, 0LL);
      v56 = *(CBaseObject **)(*v45 + 8 * v47 + 16);
      if ( v56 )
      {
        CBaseObject::Release(v56);
        *(_QWORD *)(*v45 + 8 * v47 + 16) = 0LL;
      }
    }
    v57 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
    if ( v57 )
      CTopLevelWindow::StopLivePreviewAnimation(v57);
    updated = DynArray<CPenContact,0>::RemoveAt((char *)this + 312, (unsigned int)v68);
    v6 = updated;
    if ( updated < 0 )
    {
      v65 = 1772;
      goto LABEL_86;
    }
    v69 = 1;
  }
LABEL_103:
  v58 = *((_DWORD *)this + 108) - 1;
  if ( v58 >= 0 )
  {
    v59 = 16LL * v58;
    do
    {
      v60 = *((_QWORD *)this + 51);
      v70 = *(struct CVisual **)(v60 + v59);
      if ( *((struct CWindowData **)v70 + 94) == a2 )
      {
        v61 = *((_DWORD *)this + 108);
        if ( v58 < v61 )
        {
          for ( i = v58; i < v61 - 1; v61 = *((_DWORD *)this + 108) )
          {
            *(_OWORD *)(v60 + 16LL * i) = *(_OWORD *)(v60 + 16LL * (i + 1));
            ++i;
          }
          *((_DWORD *)this + 108) = v61 - 1;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x194u, 0LL);
        }
        v63 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 58) + 32LL), v70);
        v6 = v63;
        if ( v63 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v63, 0x6FAu, 0LL);
      }
      v59 -= 16LL;
      --v58;
    }
    while ( v58 >= 0 );
  }
  v10 = 0;
  if ( v69 )
    goto LABEL_115;
LABEL_116:
  if ( v74 )
    *v74 = v10;
  return v6;
}
