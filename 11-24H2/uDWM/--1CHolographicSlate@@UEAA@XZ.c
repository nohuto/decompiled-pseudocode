/*
 * XREFs of ??1CHolographicSlate@@UEAA@XZ @ 0x1800C4638
 * Callers:
 *     ??_ECHolographicSlate@@UEAAPEAXI@Z @ 0x1800C4670 (--_ECHolographicSlate@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnbindWindow@CHolographicSlate@@AEAAXXZ @ 0x1800C4AB0 (-UnbindWindow@CHolographicSlate@@AEAAXXZ.c)
 */

void __fastcall CHolographicSlate::~CHolographicSlate(CHolographicSlate *this)
{
  *(_QWORD *)this = &CHolographicSlate::`vftable';
  CHolographicSlate::UnbindWindow(this);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 3);
  CBaseObject::~CBaseObject(this);
}
