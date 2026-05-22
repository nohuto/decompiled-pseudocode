/*
 * XREFs of ?AddRef@DWMLegacyInputTarget@@UEAAKXZ @ 0x180061A90
 * Callers:
 *     ?AddRef@DWMLegacyInputTarget@@W7EAAKXZ @ 0x1800A3310 (-AddRef@DWMLegacyInputTarget@@W7EAAKXZ.c)
 *     ?AddRef@GameControllerRawInputProvider@@WBI@EAAKXZ @ 0x1800A3320 (-AddRef@GameControllerRawInputProvider@@WBI@EAAKXZ.c)
 *     ?AddRef@OneCoreUAPInputHost@@WCA@EAAKXZ @ 0x1800A3330 (-AddRef@OneCoreUAPInputHost@@WCA@EAAKXZ.c)
 *     ?AddRef@GameControllerRawInputProvider@@WBA@EAAKXZ @ 0x1800CDA20 (-AddRef@GameControllerRawInputProvider@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMLegacyInputTarget::AddRef(DWMLegacyInputTarget *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
