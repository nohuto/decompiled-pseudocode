/*
 * XREFs of ??_GCSid@ATL@@UEAAPEAXI@Z @ 0x180046AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSid@ATL@@UEAA@XZ @ 0x1800109F8 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002067C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ATL::CSid *__fastcall ATL::CSid::`scalar deleting destructor'(ATL::CSid *this, char a2)
{
  ATL::CSid::~CSid(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x78);
  return this;
}
