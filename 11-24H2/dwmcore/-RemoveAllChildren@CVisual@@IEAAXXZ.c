/*
 * XREFs of ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18003A664
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18003941C (--1CVisual@@MEAA@XZ.c)
 *     ?ProcessRemoveAllChildren@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVEALLCHILDREN@@@Z @ 0x18003A64C (-ProcessRemoveAllChildren@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVEALLCHILDR.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800BDF3C (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ @ 0x1800BE8A0 (-GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ.c)
 *     ?NotifyOnChanged@CCachedVisualImage@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BEFF0 (-NotifyOnChanged@CCachedVisualImage@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CVisualSurface@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BF010 (-NotifyOnChanged@CVisualSurface@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetProcessAttributionNoRef@CWindowNode@@UEBAPEAVCProcessAttribution@@XZ @ 0x1800BF030 (-GetProcessAttributionNoRef@CWindowNode@@UEBAPEAVCProcessAttribution@@XZ.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::RemoveAllChildren(CVisual *this)
{
  __int64 v1; // rsi
  int v3; // r15d
  int v4; // r12d
  unsigned __int64 v5; // rbp
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  int v11; // ecx
  unsigned __int64 v12; // rax
  __int64 (__fastcall *v13)(CCachedVisualImage *); // rax
  __int64 v14; // rax
  unsigned __int64 *v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  void *v18; // rdi
  _QWORD *v19; // rdi
  __int64 v20; // rax
  struct CProcessAttribution *(__fastcall *v21)(CResource *__hidden); // rax
  struct CProcessAttribution *ProcessAttributionNoRef; // rax
  struct CProcessAttribution *v23; // rsi
  _QWORD *v24; // rdi
  __int64 v25; // rax
  struct CProcessAttribution *(__fastcall *v26)(CWindowNode *__hidden); // rax
  struct CProcessAttribution *v27; // rax
  _QWORD *v28; // rax
  HANDLE ProcessHeap; // rax
  unsigned __int64 v30; // rbp
  __int64 v31; // r14
  __int64 v32; // rbx
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  void (__fastcall *v36)(unsigned __int64, _QWORD, _QWORD *); // rax
  unsigned __int64 v37; // rbp
  __int64 v38; // r14
  __int64 v39; // rsi
  unsigned __int64 Count; // rax
  unsigned __int64 v41; // rcx
  void (__fastcall *v42)(unsigned __int64, _QWORD, CVisual *); // rax
  CVisual *v43; // rax
  CVisual *v44; // rcx

  v1 = *((_QWORD *)this + 10);
  if ( (v1 & 2) != 0 )
    v1 = *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v1) = v1 & 1;
  v3 = 0;
  v4 = 0;
  if ( (_DWORD)v1 )
  {
    v5 = 0LL;
    v6 = (unsigned int)v1;
    v7 = 2LL;
    do
    {
      v8 = *((_QWORD *)this + 10);
      if ( (v8 & 2) != 0 )
      {
        v9 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
        v10 = *(_QWORD *)v9;
      }
      else
      {
        v10 = *((_QWORD *)this + 10) & 1LL;
        v9 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( v5 < v10 )
      {
        if ( v10 != 1 )
        {
          _mm_lfence();
          v9 = *(_QWORD *)((*((_QWORD *)this + 10) & 0xFFFFFFFFFFFFFFFCuLL) + v7 * 8);
        }
        if ( v9 )
        {
          if ( (*(_BYTE *)(v9 + 106) & 0x40) != 0 )
          {
            CVisual::DirtyForInvisibleChild(this, (struct CVisual *)v9);
            v4 += *(_DWORD *)(v9 + 268);
            v11 = v3 + *(_DWORD *)(v9 + 264);
            v3 = v11 + 1;
            if ( (*(_BYTE *)(v9 + 107) & 1) == 0 )
              v3 = v11;
            if ( (*(_BYTE *)(v9 + 107) & 4) != 0 )
              ++v4;
          }
          v12 = *(_QWORD *)v9;
          *(_QWORD *)(v9 + 88) = 0LL;
          v13 = *(__int64 (__fastcall **)(CCachedVisualImage *))(v12 + 16);
          if ( v13 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
            CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease((CCachedVisualImage *)v9);
          else
            v13((CCachedVisualImage *)v9);
          v14 = *((_QWORD *)this + 10);
          v15 = (unsigned __int64 *)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
          if ( (v14 & 2) != 0 )
            v16 = *v15;
          else
            v16 = v14 & 1;
          if ( v5 >= v16 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x126u, 0LL);
          }
          else if ( v16 == 1 )
          {
            *((_QWORD *)this + 10) = 1LL;
          }
          else
          {
            v15[v7] = 0LL;
          }
        }
      }
      ++v5;
      ++v7;
      --v6;
    }
    while ( v6 );
  }
  v17 = *((_QWORD *)this + 10);
  if ( (v17 & 2) != 0 )
  {
    v18 = (void *)(v17 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v18 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v18);
    }
  }
  *((_QWORD *)this + 10) = 0LL;
  if ( v3 || v4 )
  {
    v43 = this;
    v44 = this;
    do
    {
      *((_DWORD *)v43 + 66) -= v3;
      *((_DWORD *)v43 + 67) -= v4;
      if ( (*((_BYTE *)v43 + 106) & 0x40) == 0 )
        break;
      v43 = (CVisual *)*((_QWORD *)v43 + 11);
      if ( v44 )
      {
        v44 = (CVisual *)*((_QWORD *)v44 + 11);
        if ( v44 )
          v44 = (CVisual *)*((_QWORD *)v44 + 11);
      }
    }
    while ( v43 != v44 );
  }
  if ( (_DWORD)v1 )
  {
    v19 = (_QWORD *)((char *)this + 32);
    v20 = *((_QWORD *)this + 4);
    if ( (v20 & 2) != 0 )
      v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v20) = v20 & 1;
    if ( (_DWORD)v20 )
    {
      v37 = 0LL;
      v38 = (unsigned int)v20;
      v39 = 16LL;
      do
      {
        Count = CPtrArray<CVisual>::GetCount((char *)this + 32);
        if ( v37 >= Count )
        {
          v41 = 0LL;
        }
        else if ( Count == 1 )
        {
          v41 = *v19 & 0xFFFFFFFFFFFFFFFCuLL;
        }
        else
        {
          _mm_lfence();
          v41 = *(_QWORD *)((*v19 & 0xFFFFFFFFFFFFFFFCuLL) + v39);
        }
        if ( v41 != *((_QWORD *)this + 11) )
        {
          v42 = *(void (__fastcall **)(unsigned __int64, _QWORD, CVisual *))(*(_QWORD *)v41 + 80LL);
          if ( (char *)v42 == (char *)CCachedVisualImage::NotifyOnChanged )
          {
            CCachedVisualImage::NotifyOnChanged(v41, 0LL, this);
          }
          else if ( (char *)v42 == (char *)CVisualSurface::NotifyOnChanged )
          {
            CVisualSurface::NotifyOnChanged(v41, 0LL, this);
          }
          else
          {
            v42(v41, 0LL, this);
          }
        }
        ++v37;
        v39 += 8LL;
        --v38;
      }
      while ( v38 );
    }
    v21 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(*(_QWORD *)this + 160LL);
    if ( v21 == CResource::GetProcessAttributionNoRef )
      ProcessAttributionNoRef = CResource::GetProcessAttributionNoRef(this);
    else
      ProcessAttributionNoRef = v21(this);
    *((_BYTE *)this + 96) |= 0x15u;
    v23 = ProcessAttributionNoRef;
    if ( ProcessAttributionNoRef )
      ++*((_DWORD *)ProcessAttributionNoRef + 7);
    v24 = (_QWORD *)*((_QWORD *)this + 11);
    if ( (*((_BYTE *)this + 106) & 0x40) != 0 )
    {
      do
      {
        if ( !v24 || (v24[12] & 0x91) == 0x91 )
          break;
        *((_BYTE *)v24 + 96) |= 0x91u;
        v25 = v24[4];
        if ( (v25 & 2) != 0 )
          v25 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v25) = v25 & 1;
        if ( (_DWORD)v25 )
        {
          v30 = 0LL;
          v31 = (unsigned int)v25;
          v32 = 16LL;
          do
          {
            v33 = v24[4];
            if ( (v33 & 2) != 0 )
              v34 = *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              v34 = v24[4] & 1LL;
            if ( v30 >= v34 )
            {
              v35 = 0LL;
            }
            else if ( v34 == 1 )
            {
              v35 = v33 & 0xFFFFFFFFFFFFFFFCuLL;
            }
            else
            {
              _mm_lfence();
              v35 = *(_QWORD *)((v24[4] & 0xFFFFFFFFFFFFFFFCuLL) + v32);
            }
            if ( v35 != v24[11] )
            {
              v36 = *(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD *))(*(_QWORD *)v35 + 80LL);
              if ( (char *)v36 == (char *)CCachedVisualImage::NotifyOnChanged )
              {
                CCachedVisualImage::NotifyOnChanged(v35, 0LL, v24);
              }
              else if ( (char *)v36 == (char *)CVisualSurface::NotifyOnChanged )
              {
                CVisualSurface::NotifyOnChanged(v35, 0LL, v24);
              }
              else
              {
                v36(v35, 0LL, v24);
              }
            }
            ++v30;
            v32 += 8LL;
            --v31;
          }
          while ( v31 );
        }
        v26 = *(struct CProcessAttribution *(__fastcall **)(CWindowNode *__hidden))(*v24 + 160LL);
        if ( v26 == CResource::GetProcessAttributionNoRef )
          v27 = CResource::GetProcessAttributionNoRef((CResource *)v24);
        else
          v27 = v26 == CWindowNode::GetProcessAttributionNoRef
              ? CWindowNode::GetProcessAttributionNoRef((CWindowNode *)v24)
              : v26((CWindowNode *)v24);
        if ( v27 )
        {
          if ( v23 != v27 )
          {
            ++*((_DWORD *)v27 + 6);
            v23 = v27;
          }
        }
        v28 = v24;
        v24 = (_QWORD *)v24[11];
      }
      while ( (*((_BYTE *)v28 + 106) & 0x40) != 0 );
    }
  }
}
