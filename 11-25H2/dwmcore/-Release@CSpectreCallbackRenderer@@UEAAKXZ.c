/*
 * XREFs of ?Release@CSpectreCallbackRenderer@@UEAAKXZ @ 0x180227B60
 * Callers:
 *     ?Release@CHolographicManager@@W7EAAKXZ @ 0x180262900 (-Release@CHolographicManager@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpectreCallbackRenderer::Release(CSpectreCallbackRenderer *this)
{
  return CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((CSpectreCallbackRenderer *)((char *)this + 8));
}
