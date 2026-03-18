/*
 * XREFs of ??1DEVEXCLUDEWNDOBJ@@QEAA@XZ @ 0x140325E78
 * Callers:
 *     ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140326F78 (-iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 * Callees:
 *     EngControlSprites @ 0x14032EAE0 (EngControlSprites.c)
 */

void __fastcall DEVEXCLUDEWNDOBJ::~DEVEXCLUDEWNDOBJ(WNDOBJ **this)
{
  WNDOBJ *v1; // rcx

  v1 = *this;
  if ( v1 )
    EngControlSprites(v1, 2u);
}
