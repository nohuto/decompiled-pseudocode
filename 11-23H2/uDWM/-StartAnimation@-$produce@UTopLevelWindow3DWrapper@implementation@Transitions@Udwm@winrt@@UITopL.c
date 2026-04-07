/*
 * XREFs of ?StartAnimation@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHHURect@Foundation@Windows@3@@Z @ 0x1800FAFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBW4ShellTransition@345@AEBURect@Foundation@Windows@5@@Z @ 0x1800FB030 (-StartAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBW4ShellTr.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::StartAnimation(
        __int64 a1,
        int a2,
        const struct winrt::Windows::Foundation::Rect *a3)
{
  winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = (winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *)((a1 - 8) & -(__int64)(a1 != 0));
  try
  {
    winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::StartAnimation(
      v3,
      (const enum winrt::Udwm::Transitions::ShellTransition *)&v6,
      a3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
