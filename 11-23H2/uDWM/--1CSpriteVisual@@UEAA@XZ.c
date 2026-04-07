/*
 * XREFs of ??1CSpriteVisual@@UEAA@XZ @ 0x1800307EC
 * Callers:
 *     ??_ECMicaSystemBackdropVisual@@UEAAPEAXI@Z @ 0x18000ABD0 (--_ECMicaSystemBackdropVisual@@UEAAPEAXI@Z.c)
 *     ??1CDWriteText@@UEAA@XZ @ 0x18003082C (--1CDWriteText@@UEAA@XZ.c)
 *     ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x1800BF900 (--_GCSpriteVisual@@UEAAPEAXI@Z.c)
 *     ??_GCSystemBackdropVisual@@UEAAPEAXI@Z @ 0x1800E32F0 (--_GCSystemBackdropVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18001BFC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CSpriteVisual::~CSpriteVisual(CSpriteVisual *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 32);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 31);
  CVisual::~CVisual(this);
}
