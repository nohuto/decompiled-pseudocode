/*
 * XREFs of ?UpdateContentFlags@CVisual@@AEAAXXZ @ 0x180037E5C
 * Callers:
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x180037894 (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180037BE0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FDF0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetLiftedOverlayType@CSurfaceBrush@@UEBA?AW4LiftedOverlayType@@XZ @ 0x180037EC0 (-GetLiftedOverlayType@CSurfaceBrush@@UEBA-AW4LiftedOverlayType@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::UpdateContentFlags(CVisual *this)
{
  __int64 v2; // rcx
  __int64 (*v3)(void); // rax
  int LiftedOverlayType; // eax

  v2 = *((_QWORD *)this + 32);
  if ( v2 )
  {
    v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 256LL);
    if ( v3 == CSurfaceBrush::GetLiftedOverlayType )
      LiftedOverlayType = CSurfaceBrush::GetLiftedOverlayType();
    else
      LiftedOverlayType = v3();
    *((_DWORD *)this + 24) ^= (*((_DWORD *)this + 24) ^ (LiftedOverlayType << 18)) & 0xC0000;
  }
  else
  {
    *((_DWORD *)this + 24) &= 0xFFF3FFFF;
  }
  CVisual::UpdateBackdropBlurFlag(this);
}
