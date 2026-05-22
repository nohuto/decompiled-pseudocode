/*
 * XREFs of ??_EBamoShellGesturesClientProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180159D20
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoShellGesturesClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x180089700 (--1BamoShellGesturesClientProxyImpl@BamoImpl@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BamoImpl::BamoShellGesturesClientProxyImpl *__fastcall BamoImpl::BamoShellGesturesClientProxyImpl::`vector deleting destructor'(
        BamoImpl::BamoShellGesturesClientProxyImpl *this,
        const struct std::nothrow_t *a2)
{
  char v2; // bl

  v2 = (char)a2;
  BamoImpl::BamoShellGesturesClientProxyImpl::~BamoShellGesturesClientProxyImpl(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
