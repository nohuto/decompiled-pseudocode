/*
 * XREFs of ??1CProjectedShadowReceiver@@MEAA@XZ @ 0x18022157C
 * Callers:
 *     ??_ECProjectedShadowReceiver@@MEAAPEAXI@Z @ 0x180221530 (--_ECProjectedShadowReceiver@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x180250644 (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
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
