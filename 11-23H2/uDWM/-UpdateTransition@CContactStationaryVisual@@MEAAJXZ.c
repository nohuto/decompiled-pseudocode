/*
 * XREFs of ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x18006C4B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x18000DB8C (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x1800279CC (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800354E0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180041E40 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x180051BE4 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18005398C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x1800539C8 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x1800B2BE0 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CContactStationaryVisual::UpdateTransition(CContactStationaryVisual *this)
{
  char *v2; // rsi
  int v3; // ecx
  unsigned int v4; // eax
  float v5; // xmm0_4
  int v6; // ecx
  struct tagSIZE *v7; // rbx
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm2_4
  int v12; // ecx
  float v13; // xmm0_4
  int v14; // eax
  float v15; // xmm0_4
  CVisual *v16; // rcx
  __int64 cx; // kr00_8
  int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // rax
  bool v21; // zf
  char v22; // al
  __int64 v23; // rax
  _QWORD *v24; // r8
  int v25; // eax
  double v26; // xmm1_8

  if ( !*((_QWORD *)this + 46) )
  {
    v2 = (char *)this + 360;
    if ( (*((_BYTE *)this + 356) & 1) != 0 )
    {
      v3 = *((_DWORD *)this + 104);
      v4 = (int)(float)((float)*(double *)(*(_QWORD *)v2 + 48LL) * (float)v3);
      if ( v4 >= v3 )
        v4 = v3 - 1;
      CImage::SetBitmapSource(*((CImage **)this + 47), *(struct CBitmapSource **)(*((_QWORD *)this + 49) + 8LL * v4));
    }
    if ( (*((_BYTE *)this + 356) & 2) != 0 )
    {
      v5 = *(double *)(*(_QWORD *)v2 + 48LL);
      CVisual::SetOpacity(
        this,
        fmaxf(0.0, (float)((float)(*((float *)this + 85) - *((float *)this + 84)) * v5) + *((float *)this + 84)));
    }
    v6 = *((_DWORD *)this + 89);
    if ( (v6 & 8) != 0 )
    {
      v7 = (struct tagSIZE *)((char *)this + 384);
      v8 = *((float *)this + 86);
      v9 = *((float *)this + 87);
      v10 = *(double *)(*(_QWORD *)v2 + 48LL);
      *((_QWORD *)this + 48) = *(_QWORD *)(**((_QWORD **)this + 49) + 24LL);
      v11 = (float)((float)(v9 - v8) * v10) + v8;
      v12 = (int)(float)((float)*((int *)this + 96) * v11);
      v13 = (float)*((int *)this + 97);
      if ( v12 < 1 )
        v12 = 1;
      v7->cx = v12;
      v14 = (int)(float)(v13 * v11);
      if ( v14 < 1 )
        v14 = 1;
    }
    else
    {
      if ( (v6 & 4) == 0 )
        goto LABEL_19;
      v7 = (struct tagSIZE *)((char *)this + 384);
      v15 = *(double *)(*(_QWORD *)v2 + 48LL);
      v14 = (int)(float)((float)((float)((float)(*((float *)this + 87) - *((float *)this + 86)) * v15)
                               + *((float *)this + 86))
                       * (float)*((int *)this + 78));
      *((_DWORD *)this + 96) = v14;
      if ( v14 < 1 )
      {
        v7->cx = 1;
        v14 = 1;
      }
    }
    v16 = (CVisual *)*((_QWORD *)this + 47);
    *((_DWORD *)this + 97) = v14;
    CVisual::SetSize(v16, v7);
    cx = v7->cx;
    v18 = *((_DWORD *)this + 77) - *((_DWORD *)this + 97) / 2;
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 47), *((_DWORD *)this + 76) - cx / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 47), v18);
    goto LABEL_19;
  }
  CVisual::SetOpacity(this, 0.0);
  v2 = (char *)this + 360;
LABEL_19:
  if ( *(_QWORD *)v2 )
  {
    if ( *(_BYTE *)(*(_QWORD *)v2 + 72LL) )
    {
      CContactStationaryVisual::StopTimer(this);
      CVisual::SetOpacity(this, 0.0);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0q_EtwEventWriteTransfer(v19, (int)&UdwmContactStationaryVisual_End, *((_DWORD *)this + 106));
    }
  }
  v20 = *((_QWORD *)this + 46);
  if ( v20 && (*(_BYTE *)(v20 + 72) || (float)*(double *)(v20 + 48) == 1.0) )
  {
    v21 = (*(_DWORD *)(v20 + 8))-- == 1;
    v22 = CDesktopManager::s_fTimelineDirty;
    if ( v21 )
      v22 = 1;
    *((_QWORD *)this + 46) = 0LL;
    CDesktopManager::s_fTimelineDirty = v22;
    v23 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            120LL);
    if ( v23 )
    {
      CTimelineBase::CTimelineBase(v23, *((float *)this + 81), 0.0, 1.0, *((_DWORD *)this + 88));
      *v24 = &CTimeline<float>::`vftable';
    }
    else
    {
      v24 = 0LL;
    }
    v25 = *((_DWORD *)this + 89) & 2;
    *(_QWORD *)v2 = v24;
    if ( (_BYTE)v25 )
      v26 = *((float *)this + 84);
    else
      v26 = DOUBLE_1_0;
    CVisual::SetOpacity(this, v26);
  }
  return 0LL;
}
