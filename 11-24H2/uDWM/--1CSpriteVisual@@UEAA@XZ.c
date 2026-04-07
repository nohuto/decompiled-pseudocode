/*
 * XREFs of ??1CSpriteVisual@@UEAA@XZ @ 0x180039CE0
 * Callers:
 *     ??1CDWriteText@@UEAA@XZ @ 0x18006213C (--1CDWriteText@@UEAA@XZ.c)
 *     ??1CSystemBackdropVisual@@UEAA@XZ @ 0x180066E6C (--1CSystemBackdropVisual@@UEAA@XZ.c)
 *     ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x1800C2ED0 (--_GCSpriteVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CSpriteVisual::~CSpriteVisual(CSpriteVisual *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 18);
  CVisual::~CVisual(this);
}
