/*
 * XREFs of ??1ContactData@PointerInputMediator@@QEAA@XZ @ 0x18006E5A0
 * Callers:
 *     _PointerInputMediator::PointerFrame::Initialize_::_1_::dtor$0 @ 0x1801CFD4A (_PointerInputMediator--PointerFrame--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall PointerInputMediator::ContactData::~ContactData(PointerInputMediator::ContactData *this, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v2, a2);
}
