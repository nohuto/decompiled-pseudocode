/*
 * XREFs of ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800CCFF4
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800B032C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x18000DB8C (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x1800279CC (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800354E0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180037F44 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180041E40 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x180051BE4 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x1800537F4 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18005398C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x1800539C8 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18006EA9E (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?Stop@CPenPressHoldVisual@@UEAAXXZ @ 0x1800CD1E0 (-Stop@CPenPressHoldVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CPenPressHoldVisual::Start(CPenPressHoldVisual *this, const struct tagPOINT *a2)
{
  struct CBitmapSource ***v4; // r14
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // ebx
  unsigned int v7; // eax
  struct tagSIZE *v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // edi
  int v13; // ebx
  __int64 v14; // rax
  _QWORD *v15; // r8

  *((struct tagPOINT *)this + 38) = *a2;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    McTemplateU0q_EtwEventWriteTransfer((__int64)this, (int)&UdwmPenPressHoldVisual_Start, 0);
  v4 = (struct CBitmapSource ***)((char *)this + 336);
  Theme = (void *)CDesktopManager::GetTheme(2);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 2,
                                 0xCu,
                                 0LL,
                                 (__int64)this + 336);
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    v7 = 56;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapsFromAtlasImageStrip, v7);
    CPenPressHoldVisual::Stop(this);
    return (unsigned int)BitmapsFromAtlasImageStrip;
  }
  v8 = (struct tagSIZE *)((char *)this + 328);
  v9 = *((_QWORD *)**v4 + 3);
  *((_QWORD *)this + 41) = v9;
  v10 = v9;
  if ( (int)v9 < 1 )
  {
    v8->cx = 1;
    v10 = 1;
  }
  v11 = *((_DWORD *)this + 83);
  if ( v11 < 1 )
  {
    *((_DWORD *)this + 83) = 1;
    v11 = 1;
  }
  v12 = a2->x - (v10 >> 1);
  v13 = a2->y - ((unsigned int)v11 >> 1);
  CVisual::SetSize(*((CVisual **)this + 40), v8);
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 40), v12);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 40), v13);
  CImage::SetBitmapSource(*((CImage **)this + 40), **v4);
  CVisual::SetOpacity(this, 1.0);
  v14 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          120LL);
  if ( v14 )
  {
    CTimelineBase::CTimelineBase(v14, 0.300000011920929, 0.0, 1.0, 0);
    *v15 = &CTimeline<float>::`vftable';
  }
  else
  {
    v15 = 0LL;
  }
  *((_QWORD *)this + 39) = v15;
  if ( !v15 )
  {
    BitmapsFromAtlasImageStrip = -2147024882;
    v7 = 83;
    goto LABEL_16;
  }
  BitmapsFromAtlasImageStrip = CTouchVisual::RegisterGlobalTimer(this);
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    v7 = 85;
    goto LABEL_16;
  }
  return (unsigned int)BitmapsFromAtlasImageStrip;
}
