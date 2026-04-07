/*
 * XREFs of ?put_SkipRestoreFromMaximizeTransition@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAH_N@Z @ 0x1800FB560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::put_SkipRestoreFromMaximizeTransition(
        __int64 a1,
        char a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  v2 = a1 + 24;
  if ( !a1 )
    v2 = 32LL;
  v3 = *(_QWORD *)(*(_QWORD *)v2 + 336LL);
  if ( v3 )
  {
    *(_BYTE *)(v3 + 678) &= ~8u;
    *(_BYTE *)(v3 + 678) |= 8 * a2;
  }
  return 0LL;
}
