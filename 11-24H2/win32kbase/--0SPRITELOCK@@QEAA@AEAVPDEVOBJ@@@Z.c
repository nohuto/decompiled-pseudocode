/*
 * XREFs of ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400143F0
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x140176B40 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140014484 (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEBAHXZ @ 0x140014590 (-bAllowShareAccess@PDEVOBJ@@QEBAHXZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

SPRITELOCK *__fastcall SPRITELOCK::SPRITELOCK(SPRITELOCK *this, struct PDEVOBJ *a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 SessionState; // rax

  *(_QWORD *)this = 0LL;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
  if ( CurrentThreadNonPaged )
    v7 = *CurrentThreadNonPaged;
  else
    v7 = 0LL;
  v8 = (v7 + 8) & -(__int64)(v7 != 0);
  if ( !v8 || !(unsigned int)PDEVOBJ::bAllowShareAccess(a2) || !*(_DWORD *)(v8 + 348) && !*(_DWORD *)(v8 + 352) )
  {
    *(_QWORD *)this = *(_QWORD *)a2 + 80LL;
    SessionState = W32GetSessionState(v6, v5);
    GreAcquireSemaphore<6,>(*(_QWORD *)(SessionState + 88));
  }
  return this;
}
