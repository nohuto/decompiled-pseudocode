/*
 * XREFs of ?SetPixelSnappingEnabled@CVisual@@QEAAX_N@Z @ 0x18028C214
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18000C3F0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1801F013C (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 */

void __fastcall CVisual::SetPixelSnappingEnabled(CVisual *this, char a2)
{
  if ( ((*((_BYTE *)this + 105) & 0x40) != 0) != a2 )
  {
    *((_BYTE *)this + 105) = (a2 << 6) | *((_BYTE *)this + 105) & 0xBF;
    CVisual::OnInnerTransformChanged(this);
    CVisual::PropagateFlags((__int64)this, 5u);
  }
}
