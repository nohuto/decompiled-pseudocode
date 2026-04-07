/*
 * XREFs of ?SetBorderDpi@CWindowBorder@@QEAAJH@Z @ 0x180094E94
 * Callers:
 *     ?SetDpi@CAcrylicSheet@@QEAAJH@Z @ 0x180094E3C (-SetDpi@CAcrylicSheet@@QEAAJH@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CWindowBorder::SetBorderDpi(CWindowBorder *this, int a2)
{
  if ( a2 != *((_DWORD *)this + 69) )
  {
    *((_DWORD *)this + 69) = a2;
    CVisual::SetDirtyFlags(this, 4096);
  }
  return 0LL;
}
