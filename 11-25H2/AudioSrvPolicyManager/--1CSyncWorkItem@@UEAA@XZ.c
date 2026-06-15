/*
 * XREFs of ??1CSyncWorkItem@@UEAA@XZ @ 0x18001F764
 * Callers:
 *     _QueueGenericWorkItem_::_1_::dtor$6 @ 0x18004B9A0 (_QueueGenericWorkItem_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall CSyncWorkItem::~CSyncWorkItem(CSyncWorkItem *this)
{
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
}
