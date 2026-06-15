/*
 * XREFs of ??_ECProcess@@MEAAPEAXI@Z @ 0x180033A60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CProcess@@MEAA@XZ @ 0x1800333C4 (--1CProcess@@MEAA@XZ.c)
 */

CProcess *__fastcall CProcess::`vector deleting destructor'(CProcess *this, char a2)
{
  CProcess::~CProcess(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x318);
  return this;
}
