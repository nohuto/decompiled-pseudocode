/*
 * XREFs of _winrt::get_interfaces_::_1_::dtor$0 @ 0x1806EBDF5
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_array@Uguid@winrt@@@winrt@@QEAA@XZ @ 0x18044EC5C (--1-$com_array@Uguid@winrt@@@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::get_interfaces_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::com_array<winrt::guid>::~com_array<winrt::guid>(*(_QWORD *)(a2 + 112));
  }
}
