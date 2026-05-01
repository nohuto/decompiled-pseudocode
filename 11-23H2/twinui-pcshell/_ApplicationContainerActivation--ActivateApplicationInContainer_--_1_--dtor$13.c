/*
 * XREFs of _ApplicationContainerActivation::ActivateApplicationInContainer_::_1_::dtor$13 @ 0x1806301F1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationContainerActivation::ActivateApplicationInContainer_::_1_::dtor_13(
        __int64 a1,
        __int64 a2)
{
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>((__int64 *)(a2 + 192));
}
