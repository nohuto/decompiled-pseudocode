/*
 * XREFs of ?Dispose@FxWmiInstance@@UEAAEXZ @ 0x14007A280
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x14007A2CC (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxWmiInstance::Dispose(FxWmiInstance *this)
{
  FxWmiProvider::RemoveInstance(this->m_Provider, this);
  this->m_Provider->Release(
    this->m_Provider,
    this,
    52,
    "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiinstance.cpp");
  return 1;
}
