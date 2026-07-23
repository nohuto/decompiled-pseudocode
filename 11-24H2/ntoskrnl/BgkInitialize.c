/*
 * XREFs of BgkInitialize @ 0x140C71ED8
 * Callers:
 *     InbvDriverInitialize @ 0x140C1C230 (InbvDriverInitialize.c)
 * Callees:
 *     BgkpTryEnableConsole @ 0x14058D3F0 (BgkpTryEnableConsole.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     BgkDestroy @ 0x140BB2170 (BgkDestroy.c)
 *     BgkpLockBgfxCodeSection @ 0x140BB24F0 (BgkpLockBgfxCodeSection.c)
 *     BgLibraryInitialize @ 0x140BB2760 (BgLibraryInitialize.c)
 *     BgConsoleGetInterface @ 0x140BB29A0 (BgConsoleGetInterface.c)
 */

__int64 __fastcall BgkInitialize(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  if ( !a1 )
    return 3221225473LL;
  if ( a2 == 1 )
    return byte_140E65EE0 == 0 ? 0xC0000001 : 0;
  if ( !a2 )
  {
    BgkDestroy();
    qword_140E3EE60 = 0LL;
    BgkpLockBgfxCodeSection();
  }
  result = BgLibraryInitialize(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 288LL), a2);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      qword_140E65EB0 = BgConsoleGetInterface(v6, v5, v7, v8);
      if ( qword_140E65EB0 )
        guard_dispatch_icall_no_overrides((unsigned int)InitConsoleFlags, 4291217094LL);
      if ( (int)guard_dispatch_icall_no_overrides(9LL, 4LL) < 0 )
        dword_140E3EE58 = 2;
    }
    byte_140E65EE0 = 1;
    byte_140E65EE8 = 1;
    BgkpTryEnableConsole();
    return 0LL;
  }
  return result;
}
