/*
 * XREFs of ??1CBackchannelManager@@UEAA@XZ @ 0x1400465B0
 * Callers:
 *     ??_GCDWMBackchannelManager@@UEAAPEAXI@Z @ 0x140046570 (--_GCDWMBackchannelManager@@UEAAPEAXI@Z.c)
 *     ??_GCBackchannelManager@@UEAAPEAXI@Z @ 0x1400A0430 (--_GCBackchannelManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@CBackchannelManager@@QEAAXXZ @ 0x140046798 (-Clear@CBackchannelManager@@QEAAXXZ.c)
 */

void __fastcall CBackchannelManager::~CBackchannelManager(PVOID *this)
{
  *this = &CBackchannelManager::`vftable';
  CBackchannelManager::Clear((CBackchannelManager *)this);
  ObfDereferenceObject(this[4]);
}
