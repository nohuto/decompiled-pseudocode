/*
 * XREFs of ??1?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@MEAA@XZ @ 0x18027F7D8
 * Callers:
 *     ??_GCSuperWetInkVisual@@UEAAPEAXI@Z @ 0x1802808F0 (--_GCSuperWetInkVisual@@UEAAPEAXI@Z.c)
 *     ??_GCSceneVisual@@UEAAPEAXI@Z @ 0x180299810 (--_GCSceneVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSceneVisualGeneratedT<CSceneVisual,CVisual>::~CSceneVisualGeneratedT<CSceneVisual,CVisual>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[84]);
  this[84] = 0LL;
  CVisual::~CVisual(this);
}
