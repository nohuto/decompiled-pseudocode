/*
 * XREFs of ??_ECCompositeSystemEffect@@UEAAPEAXI@Z @ 0x18005CFA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompositeSystemEffect@@UEAA@XZ @ 0x18005CFDC (--1CCompositeSystemEffect@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CCompositeSystemEffect *__fastcall CCompositeSystemEffect::`vector deleting destructor'(
        CCompositeSystemEffect *this,
        char a2)
{
  CCompositeSystemEffect::~CCompositeSystemEffect(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x90);
  return this;
}
