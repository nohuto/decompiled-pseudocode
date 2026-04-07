/*
 * XREFs of ??1CWindowBorder@@UEAA@XZ @ 0x18003892C
 * Callers:
 *     ??_GCWindowBorder@@UEAAPEAXI@Z @ 0x1800388E0 (--_GCWindowBorder@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800389BC (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowBorder::~CWindowBorder(CWindowBorder *this)
{
  volatile signed __int32 *v1; // rdi

  v1 = (volatile signed __int32 *)*((_QWORD *)this + 31);
  if ( v1 && _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v1);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 29);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 28);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)this + 27);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)this + 26);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)this + 25);
  CContainerVisual::~CContainerVisual(this);
}
