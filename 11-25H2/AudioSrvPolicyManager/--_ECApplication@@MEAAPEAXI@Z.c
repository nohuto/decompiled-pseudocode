/*
 * XREFs of ??_ECApplication@@MEAAPEAXI@Z @ 0x180033A20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CApplication@@MEAA@XZ @ 0x18003327C (--1CApplication@@MEAA@XZ.c)
 */

CApplication *__fastcall CApplication::`vector deleting destructor'(CApplication *this, char a2)
{
  CApplication::~CApplication(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2D8);
  return this;
}
