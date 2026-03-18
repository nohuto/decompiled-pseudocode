/*
 * XREFs of ??1SPRITELOCK@@QEAA@XZ @ 0x140014680
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x140176B40 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400146AC (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall SPRITELOCK::~SPRITELOCK(SPRITELOCK *this, __int64 a2)
{
  __int64 SessionState; // rax

  if ( *(_QWORD *)this )
  {
    SessionState = W32GetSessionState(this, a2);
    GreReleaseSemaphoreExclusive<6,>(*(_QWORD *)(SessionState + 88));
  }
}
