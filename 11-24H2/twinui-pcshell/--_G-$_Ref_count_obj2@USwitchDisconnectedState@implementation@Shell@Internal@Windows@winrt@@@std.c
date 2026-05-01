/*
 * XREFs of ??_G?$_Ref_count_obj2@USwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@@std@@UEAAPEAXI@Z @ 0x18066CD00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::SwitchDisconnectedState>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::SwitchDisconnectedState>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x58);
  return a1;
}
