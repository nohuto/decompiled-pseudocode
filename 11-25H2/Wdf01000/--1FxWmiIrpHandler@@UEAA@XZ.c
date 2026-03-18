/*
 * XREFs of ??1FxWmiIrpHandler@@UEAA@XZ @ 0x14004BED8
 * Callers:
 *     ??_GFxWmiIrpHandler@@UEAAPEAXI@Z @ 0x14004B9D0 (--_GFxWmiIrpHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14004C320 (--1FxNonPagedObject@@UEAA@XZ.c)
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
