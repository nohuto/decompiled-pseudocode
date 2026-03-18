/*
 * XREFs of ?Delete@FxMemoryObject@@UEAAXXZ @ 0x140069B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxMemoryObject::Delete(FxMemoryObject *this)
{
  (*(void (__fastcall **)(_FX_DRIVER_GLOBALS **))&this[-1].m_Globals->DestroyEvent.m_DbgFlagIsInitialized)(&this[-1].m_Globals);
}
