/*
 * XREFs of ??$make_shared@UBootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x1802C43B8
 * Callers:
 *     ?CreateInstance@RemoteSessionWindowManagerFactory@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSessionWindowManager@3456@W4Mode@CloudPCHelpers@@@Z @ 0x18065565C (-CreateInstance@RemoteSessionWindowManagerFactory@implementation@Shell@Internal@Windows@winrt@@S.c)
 * Callees:
 *     ??0BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802C442C (--0BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<winrt::Windows::Internal::Shell::implementation::BootConnectionHandler,>(
        _QWORD *a1)
{
  _DWORD *v3; // [rsp+40h] [rbp+8h]

  v3 = operator new(0x58uLL);
  *(_OWORD *)v3 = 0LL;
  v3[2] = 1;
  v3[3] = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::BootConnectionHandler>::`vftable';
  winrt::Windows::Internal::Shell::implementation::BootConnectionHandler::BootConnectionHandler((winrt::Windows::Internal::Shell::implementation::BootConnectionHandler *)(v3 + 4));
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
