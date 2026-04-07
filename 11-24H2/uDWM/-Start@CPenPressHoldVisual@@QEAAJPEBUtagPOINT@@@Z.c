/*
 * XREFs of ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800CA06C
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18000B658 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18000F80C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18000F87C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18001066C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180015024 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180015BD0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001B720 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180024118 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x180094FF0 (-SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800950D4 (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180098BEC (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?Stop@CPenPressHoldVisual@@UEAAXXZ @ 0x1800CA230 (-Stop@CPenPressHoldVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CPenPressHoldVisual::Start(CPenPressHoldVisual *this, const struct tagPOINT *a2)
{
  struct CBitmapSource ***v4; // r14
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // ebx
  struct tagSIZE *v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  CBaseObject *v13; // rax
  _QWORD *v14; // rax
  unsigned int v15; // eax

  *((struct tagPOINT *)this + 32) = *a2;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    McTemplateU0q_EtwEventWriteTransfer((__int64)this, (__int64)&UdwmPenPressHoldVisual_Start, 0LL);
  v4 = (struct CBitmapSource ***)((char *)this + 288);
  Theme = (void *)CDesktopManager::GetTheme(2);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 2,
                                 0xCu,
                                 0LL,
                                 (struct CBitmapSource ***)this + 36);
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    v15 = 56;
    goto LABEL_16;
  }
  v7 = (struct tagSIZE *)((char *)this + 280);
  v8 = *((_QWORD *)**v4 + 3);
  *((_QWORD *)this + 35) = v8;
  v9 = v8;
  if ( (int)v8 < 1 )
  {
    v7->cx = 1;
    v9 = 1;
  }
  v10 = *((_DWORD *)this + 71);
  if ( v10 < 1 )
  {
    *((_DWORD *)this + 71) = 1;
    v10 = 1;
  }
  v11 = a2->x - (v9 >> 1);
  v12 = a2->y - ((unsigned int)v10 >> 1);
  CVisual::SetSize(*((CVisual **)this + 34), v7);
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 34), v11);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 34), v12);
  CImage::SetBitmapSource(*((CImage **)this + 34), **v4);
  CVisual::SetOpacity(this, 1.0);
  v13 = (CBaseObject *)DefaultHeap::AllocClear(0x78uLL);
  if ( v13 )
    v14 = CTimeline<float>::CTimeline<float>(v13, 0.300000011920929, 0.0, 1.0, 0);
  else
    v14 = 0LL;
  *((_QWORD *)this + 33) = v14;
  if ( !v14 )
  {
    BitmapsFromAtlasImageStrip = -2147024882;
    v15 = 83;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapsFromAtlasImageStrip, v15, 0LL);
    CPenPressHoldVisual::Stop(this);
    return (unsigned int)BitmapsFromAtlasImageStrip;
  }
  BitmapsFromAtlasImageStrip = CTouchVisual::RegisterGlobalTimer(this);
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    v15 = 85;
    goto LABEL_16;
  }
  return (unsigned int)BitmapsFromAtlasImageStrip;
}
