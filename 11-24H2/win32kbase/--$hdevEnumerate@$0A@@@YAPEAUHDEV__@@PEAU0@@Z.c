/*
 * XREFs of ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x140015DB8
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x140015750 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     hdevEnumerateAll @ 0x140015C80 (hdevEnumerateAll.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140016394 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x140023540 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002357C (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x140039260 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?DecrementClientReferenceCountFastOpt@PDEV@@QEAAKAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C0BC0 (-DecrementClientReferenceCountFastOpt@PDEV@@QEAAKAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

PDEV *__fastcall hdevEnumerate<0>(PDEV *this, __int64 a2)
{
  struct Gre::Base::SESSION_GLOBALS *v3; // rdi
  PDEV *v4; // rsi
  PDEV *v5; // rcx
  PDEV *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(this, a2) + 88);
  GreAcquireSemaphore<19,>(v3);
  v4 = 0LL;
  v7 = this;
  if ( this )
    v5 = *(PDEV **)this;
  else
    v5 = (PDEV *)*((_QWORD *)v3 + 481);
  if ( v5 )
  {
    v4 = v5;
    PDEV::IncrementClientReferenceCount(v5);
  }
  if ( this )
  {
    if ( *((_DWORD *)this + 2) <= 1u )
    {
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, *(_QWORD *)v3);
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v7);
      return v4;
    }
    PDEV::DecrementClientReferenceCountFastOpt(this, v3);
  }
  GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, *(_QWORD *)v3);
  return v4;
}
