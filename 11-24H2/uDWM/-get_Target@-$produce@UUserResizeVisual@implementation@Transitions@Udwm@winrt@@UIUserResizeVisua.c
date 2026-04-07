/*
 * XREFs of ?get_Target@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHPEAH@Z @ 0x1800EBEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$detach_from@I@impl@winrt@@YA?A_P$$QEAI@Z @ 0x1800E81BC (--$detach_from@I@impl@winrt@@YA-A_P$$QEAI@Z.c)
 *     ?Target@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAHXZ @ 0x1800EBA74 (-Target@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAHXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::IUserResizeVisual>::get_Target(
        __int64 a1)
{
  int v1; // eax
  _DWORD *v2; // rdx
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = winrt::Udwm::Transitions::implementation::UserResizeVisual::Target((winrt::Udwm::Transitions::implementation::UserResizeVisual *)((a1 - 8) & -(__int64)(a1 != 0)));
  v1 = winrt::impl::detach_from<unsigned int>(&v4);
  *v2 = v1;
  return 0LL;
}
