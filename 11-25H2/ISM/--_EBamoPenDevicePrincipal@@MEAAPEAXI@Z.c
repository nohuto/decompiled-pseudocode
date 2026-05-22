/*
 * XREFs of ??_EBamoPenDevicePrincipal@@MEAAPEAXI@Z @ 0x1801890B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoPenDevicePrincipalImpl@BamoImpl@@UEAA@XZ @ 0x180189024 (--1BamoPenDevicePrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoPenDevicePrincipal *__fastcall BamoPenDevicePrincipal::`vector deleting destructor'(
        BamoPenDevicePrincipal *this,
        char a2)
{
  BamoImpl::BamoPenDevicePrincipalImpl::~BamoPenDevicePrincipalImpl((BamoPenDevicePrincipal *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
