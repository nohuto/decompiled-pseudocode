/*
 * XREFs of ?DwmClientStartup@@YAJPEAUIUnknown@@@Z @ 0x180025D50
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x180025D74 (-Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DwmClientStartup(struct IUnknown *a1, struct CDesktopManager **a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CDesktopManager::Create(a1, a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *const)"2", 2u, v2, 0x65u, 0LL);
  return v3;
}
