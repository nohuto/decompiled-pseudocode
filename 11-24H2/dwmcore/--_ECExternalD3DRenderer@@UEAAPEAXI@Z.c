/*
 * XREFs of ??_ECExternalD3DRenderer@@UEAAPEAXI@Z @ 0x1802B7E30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ??1CExternalD3DRenderer@@UEAA@XZ @ 0x1802B7DFC (--1CExternalD3DRenderer@@UEAA@XZ.c)
 */

CExternalD3DRenderer *__fastcall CExternalD3DRenderer::`vector deleting destructor'(
        CExternalD3DRenderer *this,
        char a2)
{
  CExternalD3DRenderer::~CExternalD3DRenderer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
