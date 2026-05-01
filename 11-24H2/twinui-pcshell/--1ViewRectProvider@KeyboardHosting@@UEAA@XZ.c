/*
 * XREFs of ??1ViewRectProvider@KeyboardHosting@@UEAA@XZ @ 0x1802CA034
 * Callers:
 *     ??_EViewRectProvider@KeyboardHosting@@UEAAPEAXI@Z @ 0x180219740 (--_EViewRectProvider@KeyboardHosting@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall KeyboardHosting::ViewRectProvider::~ViewRectProvider(KeyboardHosting::ViewRectProvider *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 96);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  *((_DWORD *)this + 3) = -1073741823;
}
