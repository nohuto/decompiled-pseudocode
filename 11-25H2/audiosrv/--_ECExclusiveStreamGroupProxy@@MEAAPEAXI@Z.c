/*
 * XREFs of ??_ECExclusiveStreamGroupProxy@@MEAAPEAXI@Z @ 0x1800EF85C
 * Callers:
 *     ??_ECExclusiveStreamGroupProxy@@O7EAAPEAXI@Z @ 0x1800EF740 (--_ECExclusiveStreamGroupProxy@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CExclusiveStreamGroupProxy@@MEAA@XZ @ 0x1800EEE5C (--1CExclusiveStreamGroupProxy@@MEAA@XZ.c)
 */

CExclusiveStreamGroupProxy *__fastcall CExclusiveStreamGroupProxy::`vector deleting destructor'(
        CExclusiveStreamGroupProxy *this,
        char a2)
{
  CExclusiveStreamGroupProxy::~CExclusiveStreamGroupProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2C0);
  return this;
}
