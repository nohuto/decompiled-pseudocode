/*
 * XREFs of ?UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXPEAVCVisual@@@Z @ 0x18018BEE0
 * Callers:
 *     ?ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE@@@Z @ 0x18018ADB8 (-ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSI.c)
 *     ?ProcessSetEnabled@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_SETENABLED@@@Z @ 0x18018BE70 (-ProcessSetEnabled@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_SE.c)
 *     ?ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE@@@Z @ 0x18021D01C (-ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMP.c)
 *     ?ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE@@@Z @ 0x1802983FC (-ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOS.c)
 * Callees:
 *     ?UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z @ 0x18018BDE8 (-UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z.c)
 *     ?RegisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z @ 0x18018BF80 (-RegisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCompositionLight::UpdateRegistrationWithCompositor(CCompositionLight *this, struct CVisual *a2)
{
  struct CVisual *v4; // rax
  char v5; // cl
  struct CVisual *v6; // rdi
  char v7; // al

  if ( !*((_BYTE *)this + 169) )
  {
    v4 = (struct CVisual *)(*(__int64 (__fastcall **)(CCompositionLight *))(*(_QWORD *)this + 200LL))(this);
    v5 = *((_BYTE *)this + 253);
    v6 = v4;
    if ( v5 && a2 != v4 )
    {
      CPreWalkVisual::UnregisterLightCoordspace(a2, this);
      v5 = 0;
      *((_BYTE *)this + 253) = 0;
    }
    v7 = *((_BYTE *)this + 170) && v6;
    if ( v5 != v7 )
    {
      *((_BYTE *)this + 253) = v7;
      if ( v7 )
        CPreWalkVisual::RegisterLightCoordspace(v6, this);
      else
        CPreWalkVisual::UnregisterLightCoordspace(v6, this);
    }
  }
}
