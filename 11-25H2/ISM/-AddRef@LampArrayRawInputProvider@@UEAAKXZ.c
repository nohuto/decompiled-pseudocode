/*
 * XREFs of ?AddRef@LampArrayRawInputProvider@@UEAAKXZ @ 0x180061E20
 * Callers:
 *     ?AddRef@ContextualProcessorBuffer@@W7EAAKXZ @ 0x1800CACA0 (-AddRef@ContextualProcessorBuffer@@W7EAAKXZ.c)
 *     ?AddRef@InputStateManager@@WBA@EAAKXZ @ 0x1800CACB0 (-AddRef@InputStateManager@@WBA@EAAKXZ.c)
 *     ?AddRef@ContextualProcessorBuffer@@WBI@EAAKXZ @ 0x1800CACC0 (-AddRef@ContextualProcessorBuffer@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LampArrayRawInputProvider::AddRef(LampArrayRawInputProvider *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}
