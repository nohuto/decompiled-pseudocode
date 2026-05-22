/*
 * XREFs of ??_EBamoShellGesturesClientProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18015AB50
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoShellGesturesClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x180089E88 (--1BamoShellGesturesClientProxyImpl@BamoImpl@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
