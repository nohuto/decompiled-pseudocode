/*
 * XREFs of ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x18023AA04
 * Callers:
 *     ??1CLayerVisual@@UEAA@XZ @ 0x180185C3C (--1CLayerVisual@@UEAA@XZ.c)
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x180227B70 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLayerVisual::ClearTreeEffect(struct CResource ***this)
{
  __int64 v2; // rdx
  struct CResource **v3; // rdi
  struct CResource *v4; // rcx

  CResource::UnRegisterNotifierInternal((CResource *)this, *this[85]);
  v3 = this[85];
  if ( v3 )
  {
    v4 = *v3;
    if ( *v3 )
    {
      *v3 = 0LL;
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v4 + 16LL))(v4);
    }
    operator delete(v3);
  }
  this[85] = 0LL;
  CLayerVisual::UpdateBackdropBlurFlagForTreeEffect((CLayerVisual *)this, v2);
}
