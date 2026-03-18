/*
 * XREFs of ??1CAtlasTexture@@QEAA@XZ @ 0x18020067C
 * Callers:
 *     ??R?$default_delete@VCAtlasTexture@@@std@@QEBAXPEAVCAtlasTexture@@@Z @ 0x1802BC524 (--R-$default_delete@VCAtlasTexture@@@std@@QEBAXPEAVCAtlasTexture@@@Z.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x180046790 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x1802006B4 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 */

void __fastcall CAtlasTexture::~CAtlasTexture(CAtlasTexture *this)
{
  *(_QWORD *)this = &CAtlasTexture::`vftable';
  CAtlasTexture::DestroyResources(this);
  std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)this + 2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
}
