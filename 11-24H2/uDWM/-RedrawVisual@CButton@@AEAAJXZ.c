/*
 * XREFs of ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001E1D0
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x18001E130 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateCurrentGlyphOpacity@CButton@@AEAAX_N@Z @ 0x18001E060 (-UpdateCurrentGlyphOpacity@CButton@@AEAAX_N@Z.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x18001E480 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x18001E4E4 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 *     ?DisconnectFromParent@CAtlasedImage@@QEAAXXZ @ 0x180021FCC (-DisconnectFromParent@CAtlasedImage@@QEAAXXZ.c)
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18002262C (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     ?DrawStateW@CButton@@AEAAXPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x180024348 (-DrawStateW@CButton@@AEAAXPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@@Z @ 0x18002FFEC (-AddAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@@Z.c)
 *     ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x180077A44 (-ComputeFadeValues@CButton@@AEAAXPEAM0@Z.c)
 *     ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x180079720 (-ActivateTimeline@CButton@@AEAAJPEAPEAV-$CTimeline@M@@NMMW4InterpolationMode@@@Z.c)
 */

__int64 __fastcall CButton::RedrawVisual(CButton *this)
{
  char v1; // al
  int *v2; // r14
  unsigned int v3; // r15d
  unsigned int v4; // esi
  char v6; // di
  int v7; // eax
  CAtlasedRectsVisual *v8; // rbp
  CAtlasedImage *v9; // rcx
  char *v10; // r14
  int v12; // eax
  int v13; // eax
  float v14; // xmm5_4
  float v15; // [rsp+60h] [rbp+8h] BYREF
  float v16; // [rsp+68h] [rbp+10h] BYREF

  v1 = *((_BYTE *)this + 240);
  v2 = (int *)((char *)this + 328);
  v3 = *((_DWORD *)this + 82);
  v4 = 0;
  v6 = 1;
  if ( (v1 & 1) != 0 )
  {
    if ( (v1 & 2) != 0 )
      v7 = ((v1 & 4) != 0) + 1;
    else
      v7 = 0;
  }
  else
  {
    v7 = 3;
  }
  *v2 = v7;
  CButton::UpdateCurrentGlyphOpacity(this, 0);
  CButton::DrawStateW(this, *((_QWORD *)this + 31), (unsigned int)*v2);
  if ( (v3 != 1 || *v2) && (*v2 != 1 || v3) )
  {
    v8 = (CAtlasedRectsVisual *)*((_QWORD *)this + 3);
    v6 = 0;
  }
  else
  {
    v8 = this;
  }
  v9 = (CAtlasedImage *)*((_QWORD *)this + 31);
  if ( v8 != *((CAtlasedRectsVisual **)v9 + 10) )
  {
    CAtlasedImage::DisconnectFromParent(v9);
    v12 = CAtlasedRectsVisual::AddAtlasImage(v8, *((struct CAtlasedImage **)this + 31));
    v4 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x146u, 0LL);
      return v4;
    }
    CButton::UpdateAtlasPositionAndSize(this);
  }
  v10 = (char *)this + 344;
  if ( v6 )
  {
    if ( !*(_QWORD *)v10 || *(_BYTE *)(*(_QWORD *)v10 + 72LL) )
    {
      *((_DWORD *)this + 84) = *((_DWORD *)this + 88);
    }
    else
    {
      v15 = 0.0;
      v16 = 0.0;
      CButton::ComputeFadeValues(this, &v15, &v16);
      v14 = v15;
      *((float *)this + 83) = v16;
      *((float *)this + 84) = v14;
    }
    CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 31), *((float *)this + 83));
    CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 32), *((float *)this + 84));
    CButton::DrawStateW(this, *((_QWORD *)this + 32), v3);
    v13 = CButton::ActivateTimeline(this, *((_DWORD *)this + 88));
    v4 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x15Eu, 0LL);
  }
  else
  {
    CButton::DeactivateTimeline(this);
    CButton::DrawStateW(this, *((_QWORD *)this + 32), 4LL);
    CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 31), *((float *)this + 88));
    CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 32), 0.0);
  }
  return v4;
}
