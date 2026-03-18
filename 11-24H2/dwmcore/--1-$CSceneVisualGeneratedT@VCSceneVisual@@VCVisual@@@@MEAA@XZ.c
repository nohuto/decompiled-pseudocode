/*
 * XREFs of ??1?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@MEAA@XZ @ 0x180275044
 * Callers:
 *     ??_GCSuperWetInkVisual@@UEAAPEAXI@Z @ 0x180275E70 (--_GCSuperWetInkVisual@@UEAAPEAXI@Z.c)
 *     ??_GCSceneVisual@@UEAAPEAXI@Z @ 0x18028E3E0 (--_GCSceneVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSceneVisualGeneratedT<CSceneVisual,CVisual>::~CSceneVisualGeneratedT<CSceneVisual,CVisual>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[85]);
  this[85] = 0LL;
  CVisual::~CVisual((CVisual *)this);
}
