/*
 * XREFs of ?Release@CSpectreCallbackRenderer@@UEAAKXZ @ 0x18021C060
 * Callers:
 *     ?Release@CHolographicManager@@W7EAAKXZ @ 0x1802577B0 (-Release@CHolographicManager@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpectreCallbackRenderer::Release(CSpectreCallbackRenderer *this)
{
  return CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((CSpectreCallbackRenderer *)((char *)this + 8));
}
