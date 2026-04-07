/*
 * XREFs of ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180029F90
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180028130 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18000F80C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18000F87C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z @ 0x18002A2E8 (-GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z.c)
 *     ?GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z @ 0x18002A304 (-GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z.c)
 *     ?_GetMarginsVisibleOutside@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z @ 0x18002A3E8 (-_GetMarginsVisibleOutside@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z.c)
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x18002A410 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18002B898 (-HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002EFAC (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x18006A1B4 (-UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z.c)
 *     ?SetInsetFromParentRight@CVisual@@QEAAXH@Z @ 0x18006A324 (-SetInsetFromParentRight@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentBottom@CVisual@@QEAAXH@Z @ 0x18006B8C0 (-SetInsetFromParentBottom@CVisual@@QEAAXH@Z.c)
 *     ?_GetRightFrameThickness@CTopLevelWindow@@AEAAHXZ @ 0x18006FAD4 (-_GetRightFrameThickness@CTopLevelWindow@@AEAAHXZ.c)
 *     ?ScaleForDpi@CWindowData@@QEBAII@Z @ 0x1800809A0 (-ScaleForDpi@CWindowData@@QEBAII@Z.c)
 *     ?SetHeight@CVisual@@QEAAXH@Z @ 0x180095184 (-SetHeight@CVisual@@QEAAXH@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x18009522C (-SetSize@CVisual@@QEAAXHH@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaPositionsAndSizes(CTopLevelWindow *this)
{
  CTopLevelWindow *v2; // rcx
  bool HasThinRenderedBorder; // al
  int v4; // edx
  int v5; // r8d
  int v6; // esi
  int v7; // ecx
  int v8; // ecx
  bool v9; // zf
  int v10; // esi
  unsigned int v11; // r14d
  int updated; // eax
  unsigned int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int cyTopHeight; // edi
  CWindowData *v18; // rcx
  int MetricsForCaptionBar; // r14d
  int v20; // eax
  unsigned int v21; // edx
  __int64 v22; // r14
  CVisual *v23; // rcx
  int v24; // eax
  CVisual *v26; // rcx
  struct _MARGINS v27; // [rsp+30h] [rbp-10h] BYREF
  int v28; // [rsp+70h] [rbp+30h] BYREF
  int v29; // [rsp+78h] [rbp+38h] BYREF
  int v30; // [rsp+80h] [rbp+40h] BYREF

  if ( *((_QWORD *)this + 60) )
  {
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 69), *((_DWORD *)this + 147));
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 69), *((_DWORD *)this + 149));
    CVisual::SetInsetFromParentRight(*((CVisual **)this + 69), *((_DWORD *)this + 148));
    CVisual::SetInsetFromParentBottom(*((CVisual **)this + 69), *((_DWORD *)this + 150));
    v26 = (CVisual *)*((_QWORD *)this + 37);
    if ( v26 )
      CVisual::SetInsetFromParent(v26, (const struct _MARGINS *)(*((_QWORD *)this + 69) + 80LL));
  }
  CTopLevelWindow::_GetRightFrameThickness(this);
  v27 = 0LL;
  CTopLevelWindow::_GetMarginsVisibleOutside(v2, &v27);
  HasThinRenderedBorder = CTopLevelWindow::HasThinRenderedBorder(*((_DWORD *)this + 146));
  v6 = *((_DWORD *)this + 147);
  v7 = v5 + 1;
  if ( !HasThinRenderedBorder )
    v7 = v5;
  v8 = v7 - 1;
  if ( v8 <= v4 )
    v8 = v4;
  v9 = (*((_BYTE *)this + 200) & 4) == 0;
  v29 = v8;
  if ( v9 )
    v10 = 2 * v6 - v27.cxLeftWidth;
  else
    v10 = v6 + 2;
  v28 = 0;
  v30 = 0;
  CTopLevelWindow::GetButtonHeightAndOffset(this, &v28, &v30);
  v11 = v30;
  updated = CTopLevelWindow::UpdateNCAreaButton(this, 3LL, (unsigned int)v28, (unsigned int)v30, &v29);
  v13 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xD0Eu, 0LL);
  }
  else
  {
    v14 = CTopLevelWindow::UpdateNCAreaButton(this, 2LL, (unsigned int)v28, v11, &v29);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xD0Fu, 0LL);
    }
    else
    {
      v15 = CTopLevelWindow::UpdateNCAreaButton(this, 1LL, (unsigned int)v28, v11, &v29);
      v13 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0xD10u, 0LL);
      }
      else
      {
        v16 = CTopLevelWindow::UpdateNCAreaButton(this, 0LL, (unsigned int)v28, v11, &v29);
        v13 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0xD11u, 0LL);
        }
        else
        {
          cyTopHeight = v27.cyTopHeight;
          if ( *((_QWORD *)this + 67) )
          {
            v18 = (CWindowData *)*((_QWORD *)this + 89);
            if ( *((_QWORD *)v18 + 19) || (*((_DWORD *)this + 146) & 0x10000) == 0 )
            {
              MetricsForCaptionBar = CWindowData::GetMetricsForCaptionBar(v18, 49);
              v20 = CWindowData::GetMetricsForCaptionBar(*((CWindowData **)this + 89), 50);
            }
            else
            {
              v20 = 0;
              MetricsForCaptionBar = 0;
            }
            CVisual::SetSize(*((CVisual **)this + 67), MetricsForCaptionBar, v20);
            CVisual::SetInsetFromParentTop(
              *((CVisual **)this + 67),
              cyTopHeight + (*((_DWORD *)this + 149) - *(_DWORD *)(*((_QWORD *)this + 67) + 76LL) - cyTopHeight) / 2);
            CVisual::SetInsetFromParentLeft(*((CVisual **)this + 67), v10);
            v22 = *((_QWORD *)this + 67);
            if ( *(int *)(v22 + 72) > 0 )
              v10 += *(_DWORD *)(v22 + 72) + CWindowData::ScaleForDpi(*((CWindowData **)this + 89), v21);
          }
          v23 = (CVisual *)*((_QWORD *)this + 65);
          if ( v23 )
          {
            CVisual::SetInsetFromParentTop(v23, cyTopHeight);
            CVisual::SetInsetFromParentLeft(*((CVisual **)this + 65), v10);
            CVisual::SetInsetFromParentRight(*((CVisual **)this + 65), v29);
            CVisual::SetHeight(*((CVisual **)this + 65), *((_DWORD *)this + 149) - cyTopHeight);
          }
          v24 = CTopLevelWindow::UpdatePinnedParts(this);
          v13 = v24;
          if ( v24 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0xD39u, 0LL);
        }
      }
    }
  }
  return v13;
}
