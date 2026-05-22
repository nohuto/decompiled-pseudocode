/*
 * XREFs of ?AddRef@MouseProcessor@@UEAAKXZ @ 0x180061E40
 * Callers:
 *     ?AddRef@DWMLegacyInputTarget@@W7EAAKXZ @ 0x1800A2F40 (-AddRef@DWMLegacyInputTarget@@W7EAAKXZ.c)
 *     ?AddRef@GameControllerRawInputProvider@@WBI@EAAKXZ @ 0x1800A2F50 (-AddRef@GameControllerRawInputProvider@@WBI@EAAKXZ.c)
 *     ?AddRef@OneCoreUAPInputHost@@WCA@EAAKXZ @ 0x1800A2F60 (-AddRef@OneCoreUAPInputHost@@WCA@EAAKXZ.c)
 *     ?AddRef@GameControllerRawInputProvider@@WBA@EAAKXZ @ 0x1800CB3B0 (-AddRef@GameControllerRawInputProvider@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::AddRef(MouseProcessor *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
