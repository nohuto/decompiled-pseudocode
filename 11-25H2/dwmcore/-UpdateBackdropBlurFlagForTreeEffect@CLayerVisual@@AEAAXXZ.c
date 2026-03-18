/*
 * XREFs of ?UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ @ 0x1801E4DD0
 * Callers:
 *     ?OnChanged@CLayerVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801E4D90 (-OnChanged@CLayerVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x180227B70 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 *     ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x18023AA04 (-ClearTreeEffect@CLayerVisual@@AEAAXXZ.c)
 * Callees:
 *     ?UpdateHasBackdropInputFlag@CVisual@@IEAAX_N@Z @ 0x1801E4E60 (-UpdateHasBackdropInputFlag@CVisual@@IEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLayerVisual::UpdateBackdropBlurFlagForTreeEffect(CLayerVisual *this, __int64 a2)
{
  bool v3; // cl
  bool v4; // di
  _QWORD *v5; // rax
  char v6; // al

  v3 = 0;
  v4 = 0;
  LOBYTE(a2) = 0;
  v5 = (_QWORD *)*((_QWORD *)this + 85);
  if ( v5 && *v5 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v5 + 304LL))(*v5, a2);
    v3 = v6 & 1;
    v4 = (v6 & 2) != 0;
    LOBYTE(a2) = (v6 & 8) != 0;
  }
  *((_BYTE *)this + 106) = (2 * a2) | *((_BYTE *)this + 106) & 0xFD;
  CVisual::UpdateHasBackdropInputFlag(this, v3);
  CVisual::UpdateHasWindowBackdropInputFlag(this, v4);
}
