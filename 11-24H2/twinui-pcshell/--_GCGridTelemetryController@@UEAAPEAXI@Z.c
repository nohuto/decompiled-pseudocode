/*
 * XREFs of ??_GCGridTelemetryController@@UEAAPEAXI@Z @ 0x180216620
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVirtualDesktopFactory@@UEAA@XZ @ 0x1802C9E70 (--1CVirtualDesktopFactory@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CGridTelemetryController *__fastcall CGridTelemetryController::`scalar deleting destructor'(
        CGridTelemetryController *this,
        char a2)
{
  CVirtualDesktopFactory::~CVirtualDesktopFactory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
