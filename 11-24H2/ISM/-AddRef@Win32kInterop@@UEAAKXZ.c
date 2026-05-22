/*
 * XREFs of ?AddRef@Win32kInterop@@UEAAKXZ @ 0x18007F880
 * Callers:
 *     ?AddRef@EdgyProcessorTarget@@W7EAAKXZ @ 0x1800EFCF0 (-AddRef@EdgyProcessorTarget@@W7EAAKXZ.c)
 *     ?AddRef@InputRedirectionTarget@@WBA@EAAKXZ @ 0x1800EFD00 (-AddRef@InputRedirectionTarget@@WBA@EAAKXZ.c)
 *     ?AddRef@ControllerProcessor@@WEI@EAAKXZ @ 0x180179200 (-AddRef@ControllerProcessor@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kInterop::AddRef(Win32kInterop *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
