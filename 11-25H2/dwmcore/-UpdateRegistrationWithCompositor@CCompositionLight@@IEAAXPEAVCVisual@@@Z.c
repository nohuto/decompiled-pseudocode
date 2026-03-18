/*
 * XREFs of ?UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXPEAVCVisual@@@Z @ 0x1800C1028
 * Callers:
 *     ?ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE@@@Z @ 0x1800C020C (-ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMP.c)
 *     ?ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE@@@Z @ 0x1800C047C (-ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSI.c)
 *     ?ProcessSetEnabled@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_SETENABLED@@@Z @ 0x1800C0FB8 (-ProcessSetEnabled@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_SE.c)
 *     ?ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE@@@Z @ 0x1802A247C (-ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOS.c)
 * Callees:
 *     ?UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z @ 0x1800C0F30 (-UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z.c)
 *     ?RegisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z @ 0x1800C10C8 (-RegisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
