/*
 * XREFs of ?_PowerThreadInterfaceDereference@FxPkgPnp@@CAXPEAX@Z @ 0x1400A66E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPnp::_PowerThreadInterfaceDereference(void *Context)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Context + 314, 0xFFFFFFFF) == 1 )
    KeSetEvent(*((PRKEVENT *)Context + 158), 0, 0);
}
