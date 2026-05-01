/*
 * XREFs of ??_GCIAMSpecialWindowBase@@UEAAPEAXI@Z @ 0x1802F0190
 * Callers:
 *     <none>
 * Callees:
 *     ??1CIAMSpecialWindowBase@@UEAA@XZ @ 0x180213B54 (--1CIAMSpecialWindowBase@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CIAMSpecialWindowBase *__fastcall CIAMSpecialWindowBase::`scalar deleting destructor'(
        CIAMSpecialWindowBase *this,
        char a2)
{
  CIAMSpecialWindowBase::~CIAMSpecialWindowBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
