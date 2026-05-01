/*
 * XREFs of ?AddRef@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplication@34567@X@impl@winrt@@UEAAIXZ @ 0x18017EA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplication,void>::AddRef(
        __int64 a1)
{
  __int64 v1; // r8
  signed __int64 v2; // rcx
  unsigned int v3; // edx
  bool v5; // zf
  signed __int64 v6; // rax

  v1 = a1 - 8;
  if ( !a1 )
    v1 = 16LL;
  v2 = *(_QWORD *)v1;
  while ( v2 >= 0 )
  {
    v3 = v2 + 1;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)v1, v2 + 1, v2);
    v5 = v2 == v6;
    v2 = v6;
    if ( v5 )
      return v3;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v2 + 24));
}
