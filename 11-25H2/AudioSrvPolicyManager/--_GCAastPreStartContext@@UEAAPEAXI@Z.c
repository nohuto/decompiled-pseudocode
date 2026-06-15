/*
 * XREFs of ??_GCAastPreStartContext@@UEAAPEAXI@Z @ 0x18003EE20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAastPreStartContext@@UEAA@XZ @ 0x18003ECEC (--1CAastPreStartContext@@UEAA@XZ.c)
 */

CAastPreStartContext *__fastcall CAastPreStartContext::`scalar deleting destructor'(
        CAastPreStartContext *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl

  v4 = a2;
  CAastPreStartContext::~CAastPreStartContext(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
