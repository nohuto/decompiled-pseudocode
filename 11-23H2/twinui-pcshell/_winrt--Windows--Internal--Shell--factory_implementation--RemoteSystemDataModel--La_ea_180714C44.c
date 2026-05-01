/*
 * XREFs of _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::LaunchBootToCloudAsync_::_1_::dtor$11 @ 0x180714C44
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::LaunchBootToCloudAsync_::_1_::dtor_11(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 0x40) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~0x40u;
    winrt::hstring::~hstring((void **)(a2 + 176));
  }
}
