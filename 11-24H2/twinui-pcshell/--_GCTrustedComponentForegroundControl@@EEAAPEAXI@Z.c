/*
 * XREFs of ??_GCTrustedComponentForegroundControl@@EEAAPEAXI@Z @ 0x1802EFE90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CTrustedComponentForegroundControl@@EEAA@XZ @ 0x1802EFE40 (--1CTrustedComponentForegroundControl@@EEAA@XZ.c)
 */

CTrustedComponentForegroundControl *__fastcall CTrustedComponentForegroundControl::`scalar deleting destructor'(
        CTrustedComponentForegroundControl *this,
        char a2)
{
  CTrustedComponentForegroundControl::~CTrustedComponentForegroundControl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
