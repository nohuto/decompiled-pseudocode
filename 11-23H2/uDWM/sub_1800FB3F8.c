/*
 * XREFs of sub_1800FB3F8 @ 0x1800FB3F8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FB3F8()
{
  char v0; // of
  __int64 v1; // rax

  if ( !v0 )
    JUMPOUT(0x1800FB404LL);
  *(int *)(v1 + 2) >>= 1;
  return winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::get_IsInSnapUIArrangement();
}
