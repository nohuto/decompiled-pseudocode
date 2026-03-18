/*
 * XREFs of ??_ECEffectIntermediateProducer@@EEAAPEAXI@Z @ 0x1800DD080
 * Callers:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18010FE80 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??$Delete@VIBitmapResource@@@CMilObjectDeleter@@SAXPEAV?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@@Z @ 0x18020658C (--$Delete@VIBitmapResource@@@CMilObjectDeleter@@SAXPEAV-$CMILRefCountBaseT@VIBitmapResource@@VCM.c)
 * Callees:
 *     ??1?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800DD0C0 (--1-$vector_facade@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCC.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

CEffectIntermediateProducer *__fastcall CEffectIntermediateProducer::`vector deleting destructor'(
        CEffectIntermediateProducer *this,
        char a2)
{
  detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::~vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>((char *)this + 32);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x68uLL);
  return this;
}
