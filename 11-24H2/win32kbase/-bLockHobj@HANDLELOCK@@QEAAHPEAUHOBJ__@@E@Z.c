/*
 * XREFs of ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1400D0C38
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x14000D300 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     bDeleteBrush @ 0x140014820 (bDeleteBrush.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z @ 0x1401C1A94 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x1401C4C40 (-DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 *     HANDLELOCK_bLockHobj @ 0x1401C4DF0 (HANDLELOCK_bLockHobj.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x1400307E0 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 */

__int64 __fastcall HANDLELOCK::bLockHobj(HANDLELOCK *this, struct HOBJ__ *a2, char a3)
{
  __int16 v4; // edi^2

  v4 = WORD1(a2);
  if ( *((_DWORD *)this + 2) )
    return 0LL;
  HANDLELOCK::vLockHandle((__int64 *)this, (unsigned __int16)a2 | ((unsigned int)a2 >> 8) & 0xFF0000, 0);
  if ( *((_DWORD *)this + 2) && (*(_BYTE *)(*(_QWORD *)this + 14LL) != a3 || *(_WORD *)(*(_QWORD *)this + 12LL) != v4) )
  {
    *((_BYTE *)this + 13) = 1;
    HANDLELOCK::vUnlock(this);
  }
  return *((unsigned int *)this + 2);
}
