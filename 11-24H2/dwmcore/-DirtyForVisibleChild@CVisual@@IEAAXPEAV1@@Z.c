/*
 * XREFs of ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800BD9C0
 * Callers:
 *     ?ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z @ 0x1801D36D4 (-ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z.c)
 *     ?SetVisible@CVisual@@QEAAX_N@Z @ 0x1801F6960 (-SetVisible@CVisual@@QEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1800931D4 (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x180094000 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ @ 0x1800BE8A0 (-GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ.c)
 *     ?NotifyOnChanged@CCachedVisualImage@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BEFF0 (-NotifyOnChanged@CCachedVisualImage@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CVisualSurface@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BF010 (-NotifyOnChanged@CVisualSurface@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetProcessAttributionNoRef@CWindowNode@@UEBAPEAVCProcessAttribution@@XZ @ 0x1800BF030 (-GetProcessAttributionNoRef@CWindowNode@@UEBAPEAVCProcessAttribution@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::DirtyForVisibleChild(CVisual *this, struct CVisual *a2)
{
  __int64 v2; // rax
  struct CVisual *v3; // r14
  struct CManipulationManager *v4; // r12
  struct CProcessAttribution *(__fastcall *v5)(CResource *__hidden); // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  struct CProcessAttribution *(__fastcall *v8)(CWindowNode *__hidden); // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  struct CProcessAttribution *(__fastcall *v11)(CResource *__hidden); // rax
  struct CProcessAttribution *ProcessAttributionNoRef; // rax
  struct CProcessAttribution *v13; // rdi
  _QWORD *v14; // rbx
  char v15; // al
  __int64 v16; // rax
  struct CProcessAttribution *(__fastcall *v17)(CWindowNode *__hidden); // rax
  struct CProcessAttribution *v18; // rax
  _QWORD *v19; // rax
  CComposition *v20; // rbx
  int ManipulationManager; // eax
  struct CManipulationManager *v22; // rbx
  unsigned __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 v25; // rdi
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rbp
  __int64 v30; // r15
  __int64 v31; // rsi
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  void (__fastcall *v35)(unsigned __int64, __int64, _QWORD *); // rax
  void (__fastcall *v36)(unsigned __int64, _QWORD, _QWORD *); // rax
  unsigned __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rbx
  __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  void (__fastcall *v43)(unsigned __int64, _QWORD, struct CManipulationManager *); // rax
  unsigned __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rbx
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  void (__fastcall *v50)(unsigned __int64, __int64, struct CVisual *); // rax
  struct CManipulationManager *v51; // [rsp+60h] [rbp+8h] BYREF
  struct CVisual *v52; // [rsp+68h] [rbp+10h]

  v52 = a2;
  v51 = this;
  v2 = *((_QWORD *)this + 4);
  v3 = a2;
  v4 = this;
  if ( (v2 & 2) != 0 )
    v2 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v2) = v2 & 1;
  if ( (_DWORD)v2 )
  {
    v37 = 0LL;
    v38 = (unsigned int)v2;
    v39 = 16LL;
    do
    {
      v40 = *((_QWORD *)v4 + 4);
      if ( (v40 & 2) != 0 )
      {
        v41 = v40 & 0xFFFFFFFFFFFFFFFCuLL;
        v42 = *(_QWORD *)v41;
      }
      else
      {
        v42 = *((_QWORD *)v4 + 4) & 1LL;
        v41 = v40 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( v37 >= v42 )
      {
        v41 = 0LL;
      }
      else if ( v42 != 1 )
      {
        _mm_lfence();
        v41 = *(_QWORD *)((*((_QWORD *)v4 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + v39);
      }
      if ( v41 != *((_QWORD *)v4 + 11) )
      {
        v43 = *(void (__fastcall **)(unsigned __int64, _QWORD, struct CManipulationManager *))(*(_QWORD *)v41 + 80LL);
        if ( (char *)v43 == (char *)CCachedVisualImage::NotifyOnChanged )
        {
          CCachedVisualImage::NotifyOnChanged(v41, 0LL, v4);
        }
        else if ( (char *)v43 == (char *)CVisualSurface::NotifyOnChanged )
        {
          CVisualSurface::NotifyOnChanged(v41, 0LL, v4);
        }
        else
        {
          v43(v41, 0LL, v4);
        }
      }
      ++v37;
      v39 += 8LL;
      --v38;
    }
    while ( v38 );
  }
  v5 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(*(_QWORD *)v4 + 160LL);
  if ( v5 == CResource::GetProcessAttributionNoRef )
    CResource::GetProcessAttributionNoRef(v4);
  else
    ((void (__fastcall *)(struct CManipulationManager *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))v5)(
      v4,
      CVisualSurface::NotifyOnChanged,
      CCachedVisualImage::NotifyOnChanged);
  v6 = (_QWORD *)*((_QWORD *)v4 + 11);
  *((_BYTE *)v4 + 96) |= 0x11u;
  if ( (*((_BYTE *)v4 + 106) & 0x40) != 0 )
  {
    do
    {
      if ( !v6 || (v6[12] & 0x11) == 0x11 )
        break;
      *((_BYTE *)v6 + 96) |= 0x11u;
      v7 = v6[4];
      if ( (v7 & 2) != 0 )
        v7 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v7) = v7 & 1;
      if ( (_DWORD)v7 )
      {
        v23 = 0LL;
        v24 = (unsigned int)v7;
        v25 = 16LL;
        do
        {
          v26 = v6[4];
          if ( (v26 & 2) != 0 )
            v27 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            v27 = v6[4] & 1LL;
          if ( v23 >= v27 )
          {
            v28 = 0LL;
          }
          else if ( v27 == 1 )
          {
            v28 = v26 & 0xFFFFFFFFFFFFFFFCuLL;
          }
          else
          {
            _mm_lfence();
            v28 = *(_QWORD *)((v6[4] & 0xFFFFFFFFFFFFFFFCuLL) + v25);
          }
          if ( v28 != v6[11] )
          {
            v36 = *(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD *))(*(_QWORD *)v28 + 80LL);
            if ( (char *)v36 == (char *)CCachedVisualImage::NotifyOnChanged )
            {
              CCachedVisualImage::NotifyOnChanged(v28, 0LL, v6);
            }
            else if ( (char *)v36 == (char *)CVisualSurface::NotifyOnChanged )
            {
              CVisualSurface::NotifyOnChanged(v28, 0LL, v6);
            }
            else
            {
              v36(v28, 0LL, v6);
            }
          }
          ++v23;
          v25 += 8LL;
          --v24;
        }
        while ( v24 );
      }
      v8 = *(struct CProcessAttribution *(__fastcall **)(CWindowNode *__hidden))(*v6 + 160LL);
      if ( v8 == CResource::GetProcessAttributionNoRef )
      {
        CResource::GetProcessAttributionNoRef((CResource *)v6);
      }
      else if ( v8 == CWindowNode::GetProcessAttributionNoRef )
      {
        CWindowNode::GetProcessAttributionNoRef((CWindowNode *)v6);
      }
      else
      {
        v8((CWindowNode *)v6);
      }
      v9 = v6;
      v6 = (_QWORD *)v6[11];
    }
    while ( (*((_BYTE *)v9 + 106) & 0x40) != 0 );
    v4 = v51;
  }
  v10 = *((_QWORD *)v3 + 4);
  if ( (v10 & 2) != 0 )
    v10 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v10) = v10 & 1;
  if ( (_DWORD)v10 )
  {
    v44 = 0LL;
    v45 = (unsigned int)v10;
    v46 = 16LL;
    do
    {
      v47 = *((_QWORD *)v3 + 4);
      if ( (v47 & 2) != 0 )
        v48 = *(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v48 = *((_QWORD *)v3 + 4) & 1LL;
      if ( v44 >= v48 )
      {
        v49 = 0LL;
      }
      else if ( v48 == 1 )
      {
        v49 = v47 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      else
      {
        _mm_lfence();
        v49 = *(_QWORD *)((*((_QWORD *)v3 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + v46);
      }
      if ( v49 != *((_QWORD *)v3 + 11) )
      {
        v50 = *(void (__fastcall **)(unsigned __int64, __int64, struct CVisual *))(*(_QWORD *)v49 + 80LL);
        if ( (char *)v50 == (char *)CCachedVisualImage::NotifyOnChanged )
        {
          CCachedVisualImage::NotifyOnChanged(v49, 1LL, v3);
        }
        else if ( (char *)v50 == (char *)CVisualSurface::NotifyOnChanged )
        {
          CVisualSurface::NotifyOnChanged(v49, 1LL, v3);
        }
        else
        {
          v50(v49, 1LL, v3);
        }
      }
      ++v44;
      v46 += 8LL;
      --v45;
    }
    while ( v45 );
    v4 = v51;
  }
  v11 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(*(_QWORD *)v3 + 160LL);
  if ( v11 == CResource::GetProcessAttributionNoRef )
    ProcessAttributionNoRef = CResource::GetProcessAttributionNoRef(v3);
  else
    ProcessAttributionNoRef = v11(v3);
  *((_BYTE *)v3 + 96) |= 4u;
  v13 = ProcessAttributionNoRef;
  if ( ProcessAttributionNoRef )
    ++*((_DWORD *)ProcessAttributionNoRef + 7);
  v14 = (_QWORD *)*((_QWORD *)v3 + 11);
  if ( (*((_BYTE *)v3 + 106) & 0x40) != 0 )
  {
    do
    {
      if ( !v14 )
        break;
      v15 = *((_BYTE *)v14 + 96);
      if ( v15 < 0 )
        break;
      *((_BYTE *)v14 + 96) = v15 | 0x80;
      v16 = v14[4];
      if ( (v16 & 2) != 0 )
        v16 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v16) = v16 & 1;
      if ( (_DWORD)v16 )
      {
        v29 = 0LL;
        v30 = (unsigned int)v16;
        v31 = 16LL;
        do
        {
          v32 = v14[4];
          if ( (v32 & 2) != 0 )
            v33 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            v33 = v14[4] & 1LL;
          if ( v29 >= v33 )
          {
            v34 = 0LL;
          }
          else if ( v33 == 1 )
          {
            v34 = v32 & 0xFFFFFFFFFFFFFFFCuLL;
          }
          else
          {
            _mm_lfence();
            v34 = *(_QWORD *)((v14[4] & 0xFFFFFFFFFFFFFFFCuLL) + v31);
          }
          if ( v34 != v14[11] )
          {
            v35 = *(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(*(_QWORD *)v34 + 80LL);
            if ( (char *)v35 == (char *)CCachedVisualImage::NotifyOnChanged )
            {
              CCachedVisualImage::NotifyOnChanged(v34, 1LL, v14);
            }
            else if ( (char *)v35 == (char *)CVisualSurface::NotifyOnChanged )
            {
              CVisualSurface::NotifyOnChanged(v34, 1LL, v14);
            }
            else
            {
              v35(v34, 1LL, v14);
            }
          }
          ++v29;
          v31 += 8LL;
          --v30;
        }
        while ( v30 );
      }
      v17 = *(struct CProcessAttribution *(__fastcall **)(CWindowNode *__hidden))(*v14 + 160LL);
      if ( v17 == CResource::GetProcessAttributionNoRef )
      {
        v18 = CResource::GetProcessAttributionNoRef((CResource *)v14);
      }
      else if ( v17 == CWindowNode::GetProcessAttributionNoRef )
      {
        v18 = CWindowNode::GetProcessAttributionNoRef((CWindowNode *)v14);
      }
      else
      {
        v18 = v17((CWindowNode *)v14);
      }
      if ( v18 && v13 != v18 )
      {
        ++*((_DWORD *)v18 + 6);
        v13 = v18;
      }
      v19 = v14;
      v14 = (_QWORD *)v14[11];
    }
    while ( (*((_BYTE *)v19 + 106) & 0x40) != 0 );
    v3 = v52;
    v4 = v51;
  }
  if ( (*((_BYTE *)v3 + 105) & 0x20) != 0 )
  {
    v51 = 0LL;
    v20 = (CComposition *)*((_QWORD *)v4 + 3);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v51);
    ManipulationManager = CComposition::GetManipulationManager(v20, &v51);
    v22 = v51;
    if ( ManipulationManager >= 0 )
      CManipulationManager::QueueMidManipulationUpdate((__int64)v51, 2u, (__int64)v3);
    if ( v22 )
      (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v22 + 16LL))(v22);
  }
}
