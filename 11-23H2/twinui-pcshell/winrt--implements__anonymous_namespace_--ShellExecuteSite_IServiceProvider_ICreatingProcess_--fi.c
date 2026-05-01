/*
 * XREFs of winrt::implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::find_interface @ 0x1806C3B30
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r8

  if ( !winrt::operator==(a2, &winrt::impl::guid_v<IServiceProvider>) )
  {
    if ( winrt::operator==(v2, winrt::impl::guid_v<ICreatingProcess>) )
      return (v4 + 8) & -(__int64)(v4 != 0);
    else
      return 0LL;
  }
  return v3;
}
