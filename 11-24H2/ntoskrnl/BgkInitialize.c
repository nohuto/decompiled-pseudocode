/*
 * XREFs of BgkInitialize @ 0x140C6FD78
 * Callers:
 *     InbvDriverInitialize @ 0x140C1A1F0 (InbvDriverInitialize.c)
 * Callees:
 *     BgkpTryEnableConsole @ 0x1405903D0 (BgkpTryEnableConsole.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     BgkDestroy @ 0x140BB0170 (BgkDestroy.c)
 *     BgkpLockBgfxCodeSection @ 0x140BB04F0 (BgkpLockBgfxCodeSection.c)
 *     BgLibraryInitialize @ 0x140BB0760 (BgLibraryInitialize.c)
 *     BgConsoleGetInterface @ 0x140BB09A0 (BgConsoleGetInterface.c)
 */

__int64 __fastcall BgkInitialize(__int64 a1, int a2)
{
  __int64 result; // rax
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  if ( !a1 )
    return 3221225473LL;
  if ( a2 == 1 )
    return byte_140E65DA8 == 0 ? 0xC0000001 : 0;
  if ( !a2 )
  {
    BgkDestroy();
    qword_140E3ED20 = 0LL;
    BgkpLockBgfxCodeSection();
  }
  result = BgLibraryInitialize(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 288LL), a2);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      qword_140E65D70 = BgConsoleGetInterface();
      if ( qword_140E65D70 )
        guard_dispatch_icall_no_overrides(
          (unsigned int)InitConsoleFlags,
          4291217094LL,
          (unsigned int)dword_140E65DAC,
          0LL);
      if ( (int)guard_dispatch_icall_no_overrides(9LL, 4LL, &dword_140E3ED18, &v5) < 0 )
        dword_140E3ED18 = 2;
    }
    byte_140E65DA8 = 1;
    byte_140E65DB1 = 1;
    BgkpTryEnableConsole();
    return 0LL;
  }
  return result;
}
