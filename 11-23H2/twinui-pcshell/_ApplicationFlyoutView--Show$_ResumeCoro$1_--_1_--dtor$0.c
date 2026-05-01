/*
 * XREFs of _ApplicationFlyoutView::Show$_ResumeCoro$1_::_1_::dtor$0 @ 0x180255E1C
 * Callers:
 *     <none>
 * Callees:
 *     ??1CorrelationVector@@QEAA@XZ @ 0x1801B94B8 (--1CorrelationVector@@QEAA@XZ.c)
 */

void __fastcall ApplicationFlyoutView::Show__ResumeCoro_1_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 80) + 16LL;
  CorrelationVector::~CorrelationVector(*(void ***)(a2 + 40));
}
