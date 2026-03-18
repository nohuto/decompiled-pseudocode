/*
 * XREFs of ?WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1402595F8
 * Callers:
 *     bDeleteAllFlEntry @ 0x1400FE098 (bDeleteAllFlEntry.c)
 *     bAddAllFlEntry @ 0x140152750 (bAddAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x14030C258 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x14030C520 (GreEudcUnloadLinkW.c)
 * Callees:
 *     ??$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x14002B480 (--$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x14002B4A4 (--$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 */

void __fastcall WaitForConcurrentEUDCOperationCompletion(struct Gre::Font::GLOBALS *a1)
{
  union _LARGE_INTEGER v2; // [rsp+30h] [rbp+8h] BYREF

  v2.QuadPart = -10000LL;
  while ( *((_DWORD *)a1 + 2159) )
  {
    EngSetLastError(0xA7u);
    GreReleasePushLockExclusive2<16,1>((__int64)a1);
    GreDelayExecutionThread(&v2);
    GreAcquirePushLockExclusive2<16,1>((__int64)a1);
  }
}
