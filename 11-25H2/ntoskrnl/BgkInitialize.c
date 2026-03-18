/*
 * XREFs of BgkInitialize @ 0x140C5E998
 * Callers:
 *     InbvDriverInitialize @ 0x140C09150 (InbvDriverInitialize.c)
 * Callees:
 *     BgkpTryEnableConsole @ 0x14058CBF0 (BgkpTryEnableConsole.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     BgkDestroy @ 0x140BA0170 (BgkDestroy.c)
 *     BgkpLockBgfxCodeSection @ 0x140BA04F0 (BgkpLockBgfxCodeSection.c)
 *     BgLibraryInitialize @ 0x140BA0760 (BgLibraryInitialize.c)
 *     BgConsoleGetInterface @ 0x140BA09A0 (BgConsoleGetInterface.c)
 */

__int64 __fastcall BgkInitialize(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( !a1 )
    return 3221225473LL;
  if ( a2 == 1 )
    return byte_140E65B48 == 0 ? 0xC0000001 : 0;
  if ( !a2 )
  {
    BgkDestroy();
    qword_140E3EAE0 = 0LL;
    BgkpLockBgfxCodeSection();
  }
  result = BgLibraryInitialize(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 288LL), a2);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      qword_140E65B08 = BgConsoleGetInterface();
      if ( qword_140E65B08 )
        guard_dispatch_icall_no_overrides((unsigned int)InitConsoleFlags);
      if ( (int)guard_dispatch_icall_no_overrides(9LL) < 0 )
        dword_140E3EAD8 = 2;
    }
    byte_140E65B48 = 1;
    byte_140E65B52 = 1;
    BgkpTryEnableConsole();
    return 0LL;
  }
  return result;
}
