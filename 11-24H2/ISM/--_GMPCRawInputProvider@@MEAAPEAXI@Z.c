/*
 * XREFs of ??_GMPCRawInputProvider@@MEAAPEAXI@Z @ 0x1800CF580
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x1800CF2D4 (--1MPCRawInputProvider@@MEAA@XZ.c)
 */

MPCRawInputProvider *__fastcall MPCRawInputProvider::`scalar deleting destructor'(MPCRawInputProvider *this, char a2)
{
  MPCRawInputProvider::~MPCRawInputProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xD0);
  return this;
}
