/*
 * XREFs of ?GetUsedSamplersBitmask@CWarpRenderingEffect@@UEBAIXZ @ 0x180293FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWarpRenderingEffect::GetUsedSamplersBitmask(CWarpRenderingEffect *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
}
