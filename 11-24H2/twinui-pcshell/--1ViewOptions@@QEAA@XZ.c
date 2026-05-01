/*
 * XREFs of ??1ViewOptions@@QEAA@XZ @ 0x1800485CC
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedShow_::_1_::dtor$4 @ 0x1806CC698 (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedShow_--_1_--dtor$4.c)
 *     _GetViewOptions_::_1_::dtor$1 @ 0x1806CC782 (_GetViewOptions_--_1_--dtor$1.c)
 *     _KeyboardHosting::TabTipAdapter::InvokeInputAppRequestedShow_::_1_::dtor$0 @ 0x1806CC8A9 (_KeyboardHosting--TabTipAdapter--InvokeInputAppRequestedShow_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::OnInputAppRequestedShow_::_1_::dtor$0 @ 0x1806D885F (_TouchKeyboardExperienceManager--OnInputAppRequestedShow_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::Show_::_1_::dtor$3 @ 0x1806D88C2 (_TouchKeyboardExperienceManager--Show_--_1_--dtor$3.c)
 *     _KeyboardHosting::TabTipAdapter::OnPrimaryViewShowingResponse_::_1_::dtor$1 @ 0x1806EDB9F (_KeyboardHosting--TabTipAdapter--OnPrimaryViewShowingResponse_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall ViewOptions::~ViewOptions(ViewOptions *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 6) - v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
}
