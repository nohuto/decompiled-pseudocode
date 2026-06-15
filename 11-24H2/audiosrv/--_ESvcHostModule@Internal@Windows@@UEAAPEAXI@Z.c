/*
 * XREFs of ??_ESvcHostModule@Internal@Windows@@UEAAPEAXI@Z @ 0x1800CC030
 * Callers:
 *     ??_ESvcHostModule@Internal@Windows@@WCI@EAAPEAXI@Z @ 0x1800CBCB0 (--_ESvcHostModule@Internal@Windows@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SvcHostModule@Internal@Windows@@UEAA@XZ @ 0x1800CBBE4 (--1SvcHostModule@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::SvcHostModule *__fastcall Windows::Internal::SvcHostModule::`vector deleting destructor'(
        Windows::Internal::SvcHostModule *this,
        __int64 a2,
        const unsigned __int16 *a3,
        bool a4)
{
  char v4; // bl

  v4 = a2;
  Windows::Internal::SvcHostModule::~SvcHostModule(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
