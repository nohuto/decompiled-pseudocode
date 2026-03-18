/*
 * XREFs of ??1CSuperWetSource@@UEAA@XZ @ 0x1801F19E8
 * Callers:
 *     ??1CGenericInk@@EEAA@XZ @ 0x18022DCCC (--1CGenericInk@@EEAA@XZ.c)
 *     ??1CDelegatedInkCanvas@@EEAA@XZ @ 0x180298FAC (--1CDelegatedInkCanvas@@EEAA@XZ.c)
 *     ??1?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@MEAA@XZ @ 0x1802A6E68 (--1-$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@MEAA@XZ.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x180046790 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x18019C0B4 (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@QEAA@XZ @ 0x1801EFCC8 (--1-$unique_ptr@VCSharedCircularQueueProducer@@U-$default_delete@VCSharedCircularQueueProducer@@.c)
 */

void __fastcall CSuperWetSource::~CSuperWetSource(CSuperWetSource *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  CCachedVisualImage *v4; // rcx

  std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)this + 15);
  std::unique_ptr<CSharedCircularQueueProducer>::~unique_ptr<CSharedCircularQueueProducer>((void **)this + 14);
  v4 = (CCachedVisualImage *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    *((_QWORD *)this + 13) = 0LL;
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v4, v2, v3);
  }
  Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease((CDrawListCache **)this + 11);
  CResource::~CResource(this);
}
