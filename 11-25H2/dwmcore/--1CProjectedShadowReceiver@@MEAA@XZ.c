/*
 * XREFs of ??1CProjectedShadowReceiver@@MEAA@XZ @ 0x18022C6EC
 * Callers:
 *     ??_ECProjectedShadowReceiver@@MEAAPEAXI@Z @ 0x18022C6A0 (--_ECProjectedShadowReceiver@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ @ 0x18012FE04 (-InternalRelease@-$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x18025BC74 (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 */

void __fastcall CProjectedShadowReceiver::~CProjectedShadowReceiver(struct CResource **this)
{
  struct CResource *v2; // rcx

  *this = (struct CResource *)&CProjectedShadowReceiver::`vftable';
  CProjectedShadowReceiver::SetReceivingVisual((CProjectedShadowReceiver *)this, 0LL);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[14]);
  Microsoft::WRL::ComPtr<CShadowMaskProducer>::InternalRelease(this + 15);
  v2 = this[10];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (this[12] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    this[10] = 0LL;
    this[11] = 0LL;
    this[12] = 0LL;
  }
  CResource::~CResource((CResource *)this);
}
