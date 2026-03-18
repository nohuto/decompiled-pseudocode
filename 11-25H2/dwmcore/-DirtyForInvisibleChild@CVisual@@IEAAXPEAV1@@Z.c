/*
 * XREFs of ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800E433C
 * Callers:
 *     ?ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z @ 0x1800B3570 (-ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18010A1B4 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x18012E610 (-ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVECHILD@@@Z.c)
 *     ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x1801380F0 (-InsertChild@CVisual@@IEAAJPEAV1@0_N@Z.c)
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@@Z @ 0x1801D8550 (-RemoveChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z @ 0x1801E0954 (-ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z.c)
 *     ?SetVisible@CVisual@@QEAAX_N@Z @ 0x1802028D0 (-SetVisible@CVisual@@QEAAX_N@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x18003F160 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsPure2DRect@@YA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008244C (-IsPure2DRect@@YA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 *     ??$_Emplace_reallocate@AEAPEAVCVisual@@@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCVisual@@@Z @ 0x1800C0BEC (--$_Emplace_reallocate@AEAPEAVCVisual@@@-$vector@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@w.c)
 *     ?GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ @ 0x1800E4CA0 (-GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ.c)
 *     ?NotifyOnChanged@CCachedVisualImage@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800E5530 (-NotifyOnChanged@CCachedVisualImage@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CVisualSurface@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800E5550 (-NotifyOnChanged@CVisualSurface@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetProcessAttributionNoRef@CWindowNode@@UEBAPEAVCProcessAttribution@@XZ @ 0x1800E5570 (-GetProcessAttributionNoRef@CWindowNode@@UEBAPEAVCProcessAttribution@@XZ.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180106E70 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180137CA4 (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x180138AD0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::DirtyForInvisibleChild(CComposition **this, struct CVisual *a2)
{
  unsigned int v2; // ebp
  struct CManipulationManager *v3; // rdi
  char *v5; // rcx
  CComposition *v6; // rbx
  int ManipulationManager; // eax
  struct CManipulationManager *v8; // rbx
  CComposition *v9; // rbx
  _DWORD *v10; // r8
  __int64 v11; // rcx
  _BYTE *v12; // rdx
  unsigned int i; // eax
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  CComposition *v17; // rax
  struct CProcessAttribution *(__fastcall *v18)(CResource *__hidden); // rax
  struct CProcessAttribution *ProcessAttributionNoRef; // rax
  struct CManipulationManager *v20; // rdi
  CComposition *v21; // rbx
  __int64 v22; // rax
  struct CProcessAttribution *(__fastcall *v23)(CResource *__hidden); // rax
  struct CProcessAttribution *v24; // rax
  CComposition *v25; // rax
  unsigned __int64 v26; // r14
  __int64 v27; // r15
  __int64 v28; // rsi
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  void (__fastcall *v32)(unsigned __int64, _QWORD, CComposition *); // rax
  unsigned __int64 v33; // rdi
  __int64 v34; // r14
  __int64 v35; // rbx
  CComposition *v36; // rcx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  void (__fastcall *v39)(unsigned __int64, _QWORD, CVisual *); // rax
  int v40; // [rsp+50h] [rbp+8h]
  struct CManipulationManager *v41; // [rsp+58h] [rbp+10h] BYREF

  v2 = 17;
  v40 = 17;
  v3 = a2;
  if ( ((_BYTE)this[12] & 4) == 0 )
  {
    v5 = (char *)a2 + 152;
    if ( !*((_DWORD *)a2 + 28) || IsPure2DRect((__int64)v5) )
    {
      CVisual::AddAdditionalDirtyRect(this, v5, 0LL);
    }
    else
    {
      v2 = 21;
      v40 = 21;
    }
  }
  if ( (*((_BYTE *)v3 + 105) & 0x20) != 0 )
  {
    v41 = 0LL;
    v6 = this[3];
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v41);
    ManipulationManager = CComposition::GetManipulationManager(v6, &v41);
    v8 = v41;
    if ( ManipulationManager >= 0 )
      CManipulationManager::QueueMidManipulationUpdate(v41, 3LL, v3);
    if ( v8 )
      (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = this[3];
  v41 = v3;
  if ( !*((_BYTE *)v9 + 6497) )
  {
    v10 = (_DWORD *)*((_QWORD *)v3 + 29);
    if ( (*v10 & 0x1000000) != 0 )
    {
      v11 = (unsigned int)v10[1];
      v12 = v10 + 2;
      for ( i = 0; i < (unsigned int)v11; ++v12 )
      {
        if ( *v12 == 8 )
          break;
        ++i;
      }
      v14 = i >= (unsigned int)v11 ? 0LL : (__int64 *)((char *)v10 + 8LL * i - (((_BYTE)v11 + 15) & 7) + v11 + 15);
      v15 = *v14;
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 112);
        if ( v16 )
        {
          if ( *(_QWORD *)(v16 + 64) )
            goto LABEL_61;
        }
      }
    }
    if ( (*((_DWORD *)v3 + 24) & 0x2000) != 0 || (*((_BYTE *)v3 + 96) & 0x10) != 0 )
    {
LABEL_61:
      if ( *((_QWORD *)v9 + 816) == *((_QWORD *)v9 + 817) )
      {
        std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::_Emplace_reallocate<CVisual * &>(
          (__int64 **)v9 + 815,
          *((__int64 **)v9 + 816),
          (__int64 *)&v41);
        v3 = v41;
      }
      else
      {
        wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
          *((_QWORD **)v9 + 816),
          (__int64)v3);
        *((_QWORD *)v9 + 816) += 8LL;
      }
      *((_BYTE *)v3 + 96) |= 0x20u;
    }
  }
  v17 = this[4];
  if ( ((unsigned __int8)v17 & 2) != 0 )
    v17 = *(CComposition **)((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v17) = (unsigned __int8)v17 & 1;
  if ( (_DWORD)v17 )
  {
    v33 = 0LL;
    v34 = (unsigned int)v17;
    v35 = 16LL;
    do
    {
      v36 = this[4];
      if ( ((unsigned __int8)v36 & 2) != 0 )
      {
        v37 = (unsigned __int64)v36 & 0xFFFFFFFFFFFFFFFCuLL;
        v38 = *(_QWORD *)v37;
      }
      else
      {
        v38 = (unsigned __int64)this[4] & 1;
        v37 = (unsigned __int64)v36 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( v33 >= v38 )
      {
        v37 = 0LL;
      }
      else if ( v38 != 1 )
      {
        _mm_lfence();
        v37 = *(_QWORD *)(((unsigned __int64)this[4] & 0xFFFFFFFFFFFFFFFCuLL) + v35);
      }
      if ( (CComposition *)v37 != this[11] )
      {
        v39 = *(void (__fastcall **)(unsigned __int64, _QWORD, CVisual *))(*(_QWORD *)v37 + 80LL);
        if ( (char *)v39 == (char *)CCachedVisualImage::NotifyOnChanged )
        {
          CCachedVisualImage::NotifyOnChanged(v37, 0LL, this);
        }
        else if ( (char *)v39 == (char *)CVisualSurface::NotifyOnChanged )
        {
          CVisualSurface::NotifyOnChanged(v37, 0LL, this);
        }
        else
        {
          v39(v37, 0LL, (CVisual *)this);
        }
      }
      ++v33;
      v35 += 8LL;
      --v34;
    }
    while ( v34 );
  }
  v18 = (struct CProcessAttribution *(__fastcall *)(CResource *__hidden))*((_QWORD *)*this + 20);
  if ( v18 == CResource::GetProcessAttributionNoRef )
    ProcessAttributionNoRef = CResource::GetProcessAttributionNoRef((CResource *)this);
  else
    ProcessAttributionNoRef = (struct CProcessAttribution *)((__int64 (__fastcall *)(CComposition **, _QWORD, _QWORD))v18)(
                                                              this,
                                                              CVisualSurface::NotifyOnChanged,
                                                              CCachedVisualImage::NotifyOnChanged);
  *((_BYTE *)this + 96) |= v2;
  v20 = ProcessAttributionNoRef;
  v41 = ProcessAttributionNoRef;
  if ( (v2 & 0xC) != 0 )
  {
    v2 = v2 & 0xFFFFFF73 | 0x80;
    v40 = v2;
    if ( ProcessAttributionNoRef )
      ++*((_DWORD *)ProcessAttributionNoRef + 7);
  }
  v21 = this[11];
  if ( (*((_BYTE *)this + 106) & 0x40) != 0 )
  {
    do
    {
      if ( !v21 || (v2 & *((char *)v21 + 96)) == v2 )
        break;
      *((_BYTE *)v21 + 96) |= v2;
      v22 = *((_QWORD *)v21 + 4);
      if ( (v22 & 2) != 0 )
        v22 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v22) = v22 & 1;
      if ( (_DWORD)v22 )
      {
        v26 = 0LL;
        v27 = (unsigned int)v22;
        v28 = 16LL;
        do
        {
          v29 = *((_QWORD *)v21 + 4);
          if ( (v29 & 2) != 0 )
            v30 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            v30 = *((_QWORD *)v21 + 4) & 1LL;
          if ( v26 >= v30 )
          {
            v31 = 0LL;
          }
          else if ( v30 == 1 )
          {
            v31 = v29 & 0xFFFFFFFFFFFFFFFCuLL;
          }
          else
          {
            _mm_lfence();
            v31 = *(_QWORD *)((*((_QWORD *)v21 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + v28);
          }
          if ( v31 != *((_QWORD *)v21 + 11) )
          {
            v32 = *(void (__fastcall **)(unsigned __int64, _QWORD, CComposition *))(*(_QWORD *)v31 + 80LL);
            if ( (char *)v32 == (char *)CCachedVisualImage::NotifyOnChanged )
            {
              CCachedVisualImage::NotifyOnChanged(v31, 0LL, v21);
            }
            else if ( (char *)v32 == (char *)CVisualSurface::NotifyOnChanged )
            {
              CVisualSurface::NotifyOnChanged(v31, 0LL, v21);
            }
            else
            {
              v32(v31, 0LL, v21);
            }
          }
          ++v26;
          v28 += 8LL;
          --v27;
        }
        while ( v27 );
        v2 = v40;
        v20 = v41;
      }
      v23 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(*(_QWORD *)v21 + 160LL);
      if ( v23 == CResource::GetProcessAttributionNoRef )
      {
        v24 = CResource::GetProcessAttributionNoRef(v21);
      }
      else if ( v23 == CWindowNode::GetProcessAttributionNoRef )
      {
        v24 = CWindowNode::GetProcessAttributionNoRef(v21);
      }
      else
      {
        v24 = v23(v21);
      }
      if ( v24 && v20 != v24 )
      {
        if ( (v2 & 0x80u) != 0 )
          ++*((_DWORD *)v24 + 6);
        v20 = v24;
        v41 = v24;
      }
      v25 = v21;
      v21 = (CComposition *)*((_QWORD *)v21 + 11);
    }
    while ( (*((_BYTE *)v25 + 106) & 0x40) != 0 );
  }
}
