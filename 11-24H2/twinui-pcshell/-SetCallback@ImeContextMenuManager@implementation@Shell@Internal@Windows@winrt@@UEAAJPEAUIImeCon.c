/*
 * XREFs of ?SetCallback@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIImeContextMenuExperienceManagerCallback@@@Z @ 0x18063B180
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::SetCallback(
        winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager *this,
        struct IImeContextMenuExperienceManagerCallback *a2)
{
  _QWORD *v3; // rdi

  v3 = (_QWORD *)((char *)this + 96);
  if ( *((struct IImeContextMenuExperienceManagerCallback **)this + 12) != a2 )
  {
    if ( *v3 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 12);
    *v3 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IImeContextMenuExperienceManagerCallback *))(*(_QWORD *)a2 + 8LL))(a2);
  }
  return 0LL;
}
