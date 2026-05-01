/*
 * XREFs of ??1ElementDragData@@UEAA@XZ @ 0x1804DC71C
 * Callers:
 *     ??_EElementDragData@@UEAAPEAXI@Z @ 0x1804DCA30 (--_EElementDragData@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804DC6F0 (--1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ.c)
 */

void __fastcall ElementDragData::~ElementDragData(ElementDragData *this)
{
  MultitaskingViewTelemetry::DragSwitchItem::~DragSwitchItem((ElementDragData *)((char *)this + 184));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
