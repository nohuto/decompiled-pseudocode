/*
 * XREFs of ??4resume_apartment_context@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180225320
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800EDF64 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801449D0 (-RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

__int64 __fastcall winrt::impl::resume_apartment_context::operator=(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  int v5; // eax

  if ( (__int64 *)a1 != a2 )
  {
    if ( *(_QWORD *)a1 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a1);
    v4 = *a2;
    *a2 = 0LL;
    *(_QWORD *)a1 = v4;
  }
  v5 = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 2) = -1;
  *(_DWORD *)(a1 + 8) = v5;
  return a1;
}
