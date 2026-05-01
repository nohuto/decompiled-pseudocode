/*
 * XREFs of ??1DesktopVisibilityChangeListener@CImmersiveMode@@QEAA@XZ @ 0x1802F152C
 * Callers:
 *     ??_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z @ 0x1802F164C (--_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Revoke@GlobalInterfaceTable@@SAXK@Z @ 0x1801DFE6C (-Revoke@GlobalInterfaceTable@@SAXK@Z.c)
 */

void __fastcall CImmersiveMode::DesktopVisibilityChangeListener::~DesktopVisibilityChangeListener(
        CImmersiveMode::DesktopVisibilityChangeListener *this)
{
  unsigned int v1; // ecx

  v1 = *(_DWORD *)this;
  if ( v1 )
    GlobalInterfaceTable::Revoke(v1);
}
