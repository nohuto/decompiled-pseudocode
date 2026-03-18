/*
 * XREFs of ?SetVisible@CVisual@@QEAAX_N@Z @ 0x1801F6960
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18000C3F0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800BD9C0 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800BDF3C (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 */

void __fastcall CVisual::SetVisible(CVisual *this, char a2)
{
  char v3; // cl
  CVisual *v4; // rcx
  char v5; // r8

  v3 = *((_BYTE *)this + 106);
  if ( a2 != ((v3 & 0x40) != 0) )
  {
    *((_BYTE *)this + 106) = (a2 << 6) | v3 & 0xBF;
    v4 = (CVisual *)*((_QWORD *)this + 11);
    if ( v4 )
    {
      if ( a2 )
      {
        CVisual::DirtyForVisibleChild(v4, this);
        v5 = 1;
      }
      else
      {
        CVisual::DirtyForInvisibleChild(v4, this);
        v5 = 0;
      }
      CVisual::UpdateBackdropCounts(*((CVisual **)this + 11), this, v5);
    }
  }
}
