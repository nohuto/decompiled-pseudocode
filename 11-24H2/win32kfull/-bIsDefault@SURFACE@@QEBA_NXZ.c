/*
 * XREFs of ?bIsDefault@SURFACE@@QEBA_NXZ @ 0x1402FC8DC
 * Callers:
 *     vMirrorIncludeNotifyWrap @ 0x140162C40 (vMirrorIncludeNotifyWrap.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x140167A80 (vAccNotifyDeleteSurfaceWrap.c)
 * Callees:
 *     <none>
 */

bool __fastcall SURFACE::bIsDefault(SURFACE *this)
{
  return this == *((SURFACE **)Gre::Base::Globals(this) + 533);
}
