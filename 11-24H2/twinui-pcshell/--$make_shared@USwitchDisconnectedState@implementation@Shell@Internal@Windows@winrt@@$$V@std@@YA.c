/*
 * XREFs of ??$make_shared@USwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@USwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x18066C53C
 * Callers:
 *     ??0SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x1802A9410 (--0SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr@UR.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

_QWORD *__fastcall std::make_shared<winrt::Windows::Internal::Shell::implementation::SwitchDisconnectedState,>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  _DWORD *v3; // [rsp+40h] [rbp+8h]

  v3 = operator new(0x58uLL);
  *(_OWORD *)v3 = 0LL;
  v3[2] = 1;
  v3[3] = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::SwitchDisconnectedState>::`vftable';
  memset_0(v3 + 4, 0, 0x48uLL);
  *((_QWORD *)v3 + 2) = &winrt::Windows::Internal::Shell::implementation::SwitchDisconnectedState::`vftable';
  result = a1;
  *((_QWORD *)v3 + 10) = 0LL;
  *a1 = v3 + 4;
  a1[1] = v3;
  return result;
}
