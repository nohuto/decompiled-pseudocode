/*
 * XREFs of ?AddRef@ModernResourceManagerProxy@@UEAAKXZ @ 0x180019650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ModernResourceManagerProxy::AddRef(ModernResourceManagerProxy *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
