/*
 * XREFs of ??1CShadowMaskProducer@@EEAA@XZ @ 0x1802DB388
 * Callers:
 *     ??_ECShadowMaskProducer@@EEAAPEAXI@Z @ 0x1802DB3F0 (--_ECShadowMaskProducer@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 */

void __fastcall CShadowMaskProducer::~CShadowMaskProducer(CRectanglesShape **this)
{
  CShapePtr::~CShapePtr(this + 13);
  detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::~vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>((__int64)(this + 4));
}
