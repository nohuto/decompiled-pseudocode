/*
 * XREFs of ?OnKeyChange@RegistryWatcher@@AEAAJXZ @ 0x18000CB20
 * Callers:
 *     ?Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z @ 0x18000D914 (-Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z.c)
 *     ?OnChangeCallbackStatic@RegistryWatcher@@SAJPEAXK0@Z @ 0x18010A2F0 (-OnChangeCallbackStatic@RegistryWatcher@@SAJPEAXK0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RegistryWatcher::OnKeyChange(RegistryWatcher *this)
{
  BOOL fAsynchronous; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  (*((void (__fastcall **)(_QWORD, _QWORD))this + 6))(*((_QWORD *)this + 5), *((_QWORD *)this + 3));
  if ( !RegNotifyChangeKeyValue(*((HKEY *)this + 3), 0, 0x10000004u, *((HANDLE *)this + 4), 1) )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBC,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
    (const char *)0x8000FFFFLL,
    fAsynchronous);
  return 2147549183LL;
}
