/*
 * XREFs of ??_ECActivatedEventArgsBase@@MEAAPEAXI@Z @ 0x18032D950
 * Callers:
 *     <none>
 * Callees:
 *     ??1CActivatedEventArgsBase@@MEAA@XZ @ 0x1801C2538 (--1CActivatedEventArgsBase@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CActivatedEventArgsBase *__fastcall CActivatedEventArgsBase::`vector deleting destructor'(
        CActivatedEventArgsBase *this,
        char a2)
{
  CActivatedEventArgsBase::~CActivatedEventArgsBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x98);
  return this;
}
