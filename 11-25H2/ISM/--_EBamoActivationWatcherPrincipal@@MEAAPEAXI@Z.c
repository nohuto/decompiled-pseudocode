/*
 * XREFs of ??_EBamoActivationWatcherPrincipal@@MEAAPEAXI@Z @ 0x1800B1350
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoActivationWatcherPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x1800B1290 (--1BamoActivationWatcherPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoActivationWatcherPrincipal *__fastcall BamoActivationWatcherPrincipal::`vector deleting destructor'(
        BamoActivationWatcherPrincipal *this,
        char a2)
{
  BamoImpl::BamoActivationWatcherPrincipalImpl::~BamoActivationWatcherPrincipalImpl((BamoActivationWatcherPrincipal *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
