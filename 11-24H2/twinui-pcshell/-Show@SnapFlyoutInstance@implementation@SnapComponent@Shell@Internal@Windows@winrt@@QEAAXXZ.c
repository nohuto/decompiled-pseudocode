/*
 * XREFs of ?Show@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805C10C8
 * Callers:
 *     ?Show@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHXZ @ 0x180211FE0 (-Show@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U.c)
 * Callees:
 *     ??$SnapFlyoutInstance_Show@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z @ 0x1800D05A4 (--$SnapFlyoutInstance_Show@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z.c)
 *     ?ShowFlyoutAsync@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@7@XZ @ 0x1802218E4 (-ShowFlyoutAsync@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@A.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029721C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1802CFC8C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Show(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  int v8; // eax
  unsigned int v9; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v12; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 339) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x8D,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyoutinstance.cpp",
      a4);
  if ( *((_BYTE *)this + 340) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x8E,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyoutinstance.cpp",
      a4);
  *((_BYTE *)this + 339) = 1;
  SnapFlyoutTelemetry::SnapFlyoutInstance_Show<unsigned int &>((int *)this + 80);
  v8 = *((_DWORD *)this + 93);
  if ( v8 == 1 )
  {
    winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::ShowFlyoutAsync(
      (__int64)this,
      (__int64)&v12);
  }
  else
  {
    if ( v8 != 2 )
    {
      v9 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x9F,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyoutinstance.cpp",
        (const char *)v9,
        v10);
    }
    winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::ShowBar(this, v5, v6, v7);
  }
}
