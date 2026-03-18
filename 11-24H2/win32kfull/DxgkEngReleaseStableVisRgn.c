/*
 * XREFs of DxgkEngReleaseStableVisRgn @ 0x1400D0BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D0C0C (--$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D2050 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D23D0 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400DF014 (--$GreReleaseSemaphoreExclusive@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall DxgkEngReleaseStableVisRgn(Gre::Base *a1)
{
  int v1; // ebx
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi

  v1 = (int)a1;
  v2 = Gre::Base::Globals(a1);
  GreReleaseSemaphoreShared<3,>(v2);
  if ( v1 )
    GreReleaseSemaphoreShared<2,>(v2);
  else
    GreReleaseSemaphoreExclusive<2,>(v2);
  GreReleaseSemaphoreShared<1,>(v2);
  return UserLeaveUserCritSec();
}
