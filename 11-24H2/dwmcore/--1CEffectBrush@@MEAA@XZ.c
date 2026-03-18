/*
 * XREFs of ??1CEffectBrush@@MEAA@XZ @ 0x18008D34C
 * Callers:
 *     ??_GCEffectBrush@@MEAAPEAXI@Z @ 0x18008D300 (--_GCEffectBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x18008E4FC (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CEffectBrush::~CEffectBrush(CEffectBrush *this)
{
  *(_QWORD *)this = &CEffectBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CBackdropBrush::`vftable'{for `IBrushChangeNotification'};
  *((_QWORD *)this + 13) = &CEffectBrush::`vftable';
  CEffectBrush::ReleaseResources(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 136);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((char *)this + 128);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
  CBrush::~CBrush(this);
}
