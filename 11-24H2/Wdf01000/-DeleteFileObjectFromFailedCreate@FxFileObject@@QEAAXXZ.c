/*
 * XREFs of ?DeleteFileObjectFromFailedCreate@FxFileObject@@QEAAXXZ @ 0x1400953D0
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1400374F0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14002BD60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 */

void __fastcall FxFileObject::DeleteFileObjectFromFailedCreate(FxFileObject *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this->m_DeviceBase, &irql, a3);
  Flink = this->m_Link.Flink;
  if ( Flink->Blink != &this->m_Link || (Blink = this->m_Link.Blink, Blink->Flink != &this->m_Link) )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  FxNonPagedObject::Unlock(this->m_DeviceBase, irql, v4);
  FxObject::DeleteFromFailedCreate(this);
}
