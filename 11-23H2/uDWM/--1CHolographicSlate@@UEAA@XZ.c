/*
 * XREFs of ??1CHolographicSlate@@UEAA@XZ @ 0x1800C170C
 * Callers:
 *     ??_ECHolographicSlate@@UEAAPEAXI@Z @ 0x1800C1750 (--_ECHolographicSlate@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnbindWindow@CHolographicSlate@@AEAAJXZ @ 0x1800C1C60 (-UnbindWindow@CHolographicSlate@@AEAAJXZ.c)
 */

void __fastcall CHolographicSlate::~CHolographicSlate(CHolographicSlate *this)
{
  *(_QWORD *)this = &CHolographicSlate::`vftable';
  CHolographicSlate::UnbindWindow(this);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
