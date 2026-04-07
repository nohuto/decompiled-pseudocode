/*
 * XREFs of ?AddRef@CCompositor@@UEAAKXZ @ 0x180058BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::AddRef(CCompositor *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
