/*
 * XREFs of ??_EBamoDockDevicePrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18017F290
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoDockDevicePrincipalImpl@BamoImpl@@UEAA@XZ @ 0x18017F198 (--1BamoDockDevicePrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoDockDevicePrincipalImpl *__fastcall BamoImpl::BamoDockDevicePrincipalImpl::`vector deleting destructor'(
        BamoImpl::BamoDockDevicePrincipalImpl *this,
        const struct std::nothrow_t *a2,
        __int64 a3,
        const char *a4)
{
  char v4; // bl

  v4 = (char)a2;
  BamoImpl::BamoDockDevicePrincipalImpl::~BamoDockDevicePrincipalImpl(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
