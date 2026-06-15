/*
 * XREFs of _dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__ @ 0x18004E200
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAXXZ @ 0x18001F094 (-RemoveAll@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity.c)
 */

void dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__()
{
  ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::RemoveAll(&qword_180067AC8);
  DeleteCriticalSection(&CriticalSection);
}
