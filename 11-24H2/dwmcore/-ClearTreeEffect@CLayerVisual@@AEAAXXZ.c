/*
 * XREFs of ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x18022E8F4
 * Callers:
 *     ??1CLayerVisual@@UEAA@XZ @ 0x18018DACC (--1CLayerVisual@@UEAA@XZ.c)
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x18021C070 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLayerVisual::ClearTreeEffect(struct CResource ***this)
{
  __int64 v2; // rdx
  struct CResource **v3; // rdi
  struct CResource *v4; // rcx

  CResource::UnRegisterNotifierInternal((CResource *)this, *this[86]);
  v3 = this[86];
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
  this[86] = 0LL;
  CLayerVisual::UpdateBackdropBlurFlagForTreeEffect((CLayerVisual *)this, v2);
}
