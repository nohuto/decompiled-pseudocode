/*
 * XREFs of ??1FxWmiIrpHandler@@UEAA@XZ @ 0x1400400B8
 * Callers:
 *     ??_GFxWmiIrpHandler@@UEAAPEAXI@Z @ 0x14003FBB0 (--_GFxWmiIrpHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x140040500 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

void __fastcall FxWmiIrpHandler::~FxWmiIrpHandler(FxWmiIrpHandler *this)
{
  struct _IO_WORKITEM *m_WorkItem; // rcx

  this->__vftable = (FxWmiIrpHandler_vtbl *)FxWmiIrpHandler::`vftable';
  m_WorkItem = this->m_WorkItem;
  if ( m_WorkItem )
    IoFreeWorkItem(m_WorkItem);
  FxNonPagedObject::~FxNonPagedObject(this);
}
