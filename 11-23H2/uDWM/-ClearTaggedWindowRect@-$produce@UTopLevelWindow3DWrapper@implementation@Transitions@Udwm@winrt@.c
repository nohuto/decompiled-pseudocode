/*
 * XREFs of ?ClearTaggedWindowRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHXZ @ 0x1800FAB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::ClearTaggedWindowRect(
        __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  v1 = a1 + 24;
  if ( !a1 )
    v1 = 32LL;
  v2 = *(_QWORD *)(*(_QWORD *)v1 + 336LL);
  if ( v2 )
    *(_BYTE *)(v2 + 678) &= ~0x20u;
  return 0LL;
}
