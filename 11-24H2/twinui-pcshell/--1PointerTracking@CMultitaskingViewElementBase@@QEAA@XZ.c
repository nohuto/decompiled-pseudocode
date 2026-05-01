/*
 * XREFs of ??1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804B76C4
 * Callers:
 *     ??1CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804B7494 (--1CMultitaskingViewElementBase@@QEAA@XZ.c)
 *     ?DragLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804C3900 (-DragLeave@CMultitaskingViewElementBase@@UEAAXXZ.c)
 *     ?DragOver@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C3990 (-DragOver@CMultitaskingViewElementBase@@UEAA-AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskin.c)
 *     ?Drop@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C3B70 (-Drop@CMultitaskingViewElementBase@@UEAA-AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingVie.c)
 *     ?PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804C4840 (-PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C58D4 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     _CMultitaskingViewElementBase::DragOver_::_1_::dtor$0 @ 0x1806EFCC1 (_CMultitaskingViewElementBase--DragOver_--_1_--dtor$0.c)
 *     _CMultitaskingViewElementBase::PointerLeave_::_1_::dtor$0 @ 0x1806EFD2D (_CMultitaskingViewElementBase--PointerLeave_--_1_--dtor$0.c)
 *     _CMultitaskingViewElementBase::_PointerMove_::_1_::dtor$0 @ 0x1806EFD99 (_CMultitaskingViewElementBase--_PointerMove_--_1_--dtor$0.c)
 *     _CMultitaskingViewElementBase::_PointerMove_::_1_::dtor$1 @ 0x1806EFDAB (_CMultitaskingViewElementBase--_PointerMove_--_1_--dtor$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall CMultitaskingViewElementBase::PointerTracking::~PointerTracking(
        CMultitaskingViewElementBase::PointerTracking *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
}
