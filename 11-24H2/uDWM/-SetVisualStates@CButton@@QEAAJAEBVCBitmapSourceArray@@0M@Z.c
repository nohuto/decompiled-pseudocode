/*
 * XREFs of ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z @ 0x18001DECC
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180030618 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?InitializeVisualTreeClone@CButton@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x18003106C (-InitializeVisualTreeClone@CButton@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??8CBitmapSourceArray@@QEAA_NAEBV0@@Z @ 0x18001DFDC (--8CBitmapSourceArray@@QEAA_NAEBV0@@Z.c)
 *     ?UpdateCurrentGlyphOpacity@CButton@@AEAAX_N@Z @ 0x18001E060 (-UpdateCurrentGlyphOpacity@CButton@@AEAAX_N@Z.c)
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x180025180 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CButton::SetVisualStates(
        CButton *this,
        const struct CBitmapSourceArray *a2,
        const struct CBitmapSourceArray *a3,
        float a4)
{
  CBitmapSourceArray *v4; // r15
  unsigned int v8; // ebx
  bool v9; // si
  int v10; // eax
  int v11; // eax

  v4 = (CButton *)((char *)this + 264);
  v8 = 0;
  v9 = 0;
  if ( !(unsigned __int8)CBitmapSourceArray::operator==((char *)this + 264) )
  {
    v10 = CBitmapSourceArray::CopyAndAddRef(v4, a2);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x5Fu, 0LL);
      return v8;
    }
    v9 = 1;
  }
  if ( !(unsigned __int8)CBitmapSourceArray::operator==((char *)this + 296) )
  {
    v11 = CBitmapSourceArray::CopyAndAddRef((CButton *)((char *)this + 296), a3);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x65u, 0LL);
      return v8;
    }
    v9 = 1;
  }
  if ( *((float *)this + 89) != a4 )
  {
    *((float *)this + 89) = a4;
    CButton::UpdateCurrentGlyphOpacity(this, v9);
  }
  if ( v9 )
    CVisual::SetDirtyFlags(this, 0x8000);
  return v8;
}
