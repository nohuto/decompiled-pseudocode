/*
 * XREFs of ??$GrepIsLockOwnedExclusiveByCurrentThread@$04PEAVRFONT@@@@YA_NAEBQEAVRFONT@@@Z @ 0x1400D68B4
 * Callers:
 *     ?vUnlockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1400B1AAC (-vUnlockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D6BD4 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 * Callees:
 *     ?GrepIsLockOwnedExclusiveByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x1400D48B4 (-GrepIsLockOwnedExclusiveByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z.c)
 */

bool __fastcall GrepIsLockOwnedExclusiveByCurrentThread<5,RFONT *>(__int64 a1)
{
  return GrepIsLockOwnedExclusiveByCurrentThread(*(struct _ERESOURCE **)(*(_QWORD *)a1 + 504LL));
}
