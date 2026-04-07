/*
 * XREFs of ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z @ 0x1800ECDEC
 * Callers:
 *     _winrt::to_hresult_::_1_::catch$21 @ 0x1800EEA81 (_winrt--to_hresult_--_1_--catch$21.c)
 *     _winrt::to_hresult_::_1_::catch$22 @ 0x1800EEB24 (_winrt--to_hresult_--_1_--catch$22.c)
 *     _winrt::to_hresult_::_1_::catch$23 @ 0x1800EEBC7 (_winrt--to_hresult_--_1_--catch$23.c)
 * Callees:
 *     ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x1800D83E0 (-originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z.c)
 */

__int64 __fastcall winrt::hresult_error::hresult_error(__int64 a1, unsigned int a2, __int64 *a3)
{
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = -1430532899;
  *(_DWORD *)(a1 + 12) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  winrt::hresult_error::originate(a1, a2, *a3);
  return a1;
}
