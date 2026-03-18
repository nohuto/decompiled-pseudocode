/*
 * XREFs of ??1CEffectBrush@@MEAA@XZ @ 0x18020FE2C
 * Callers:
 *     ??_GCEffectBrush@@MEAAPEAXI@Z @ 0x18020FDE0 (--_GCEffectBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D64C (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x180132E3C (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 */

void __fastcall CEffectBrush::~CEffectBrush(CEffectBrush *this)
{
  *(_QWORD *)this = &CEffectBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CBackdropBrush::`vftable'{for `IBrushChangeNotification'};
  *((_QWORD *)this + 13) = &CEffectBrush::`vftable';
  CEffectBrush::ReleaseResources(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 136);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
  CBrush::~CBrush(this);
}
