/*
 * XREFs of ??1CBackchannelManager@@UEAA@XZ @ 0x140046BE0
 * Callers:
 *     ??_GCDWMBackchannelManager@@UEAAPEAXI@Z @ 0x140046BA0 (--_GCDWMBackchannelManager@@UEAAPEAXI@Z.c)
 *     ??_GCBackchannelManager@@UEAAPEAXI@Z @ 0x14009E0D0 (--_GCBackchannelManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@CBackchannelManager@@QEAAXXZ @ 0x140046DC8 (-Clear@CBackchannelManager@@QEAAXXZ.c)
 */

void __fastcall CBackchannelManager::~CBackchannelManager(PVOID *this)
{
  *this = &CBackchannelManager::`vftable';
  CBackchannelManager::Clear((CBackchannelManager *)this);
  ObfDereferenceObject(this[4]);
}
