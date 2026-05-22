/*
 * XREFs of ??_EBamoDockableDevicePrincipal@@MEAAPEAXI@Z @ 0x18017F250
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoDockDevicePrincipalImpl@BamoImpl@@UEAA@XZ @ 0x18017F198 (--1BamoDockDevicePrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoDockableDevicePrincipal *__fastcall BamoDockableDevicePrincipal::`vector deleting destructor'(
        BamoDockableDevicePrincipal *this,
        const struct std::nothrow_t *a2,
        __int64 a3,
        const char *a4)
{
  char v5; // bl

  v5 = (char)a2;
  BamoImpl::BamoDockDevicePrincipalImpl::~BamoDockDevicePrincipalImpl(
    (BamoDockableDevicePrincipal *)((char *)this + 16),
    a2,
    a3,
    a4);
  if ( (v5 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
