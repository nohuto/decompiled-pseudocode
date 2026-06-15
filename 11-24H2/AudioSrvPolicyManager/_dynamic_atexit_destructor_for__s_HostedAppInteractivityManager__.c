/*
 * XREFs of _dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__ @ 0x18004B9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAXXZ @ 0x18001EF54 (-RemoveAll@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity.c)
 */

void dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__()
{
  ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::RemoveAll(&qword_180064A48);
  DeleteCriticalSection(&CriticalSection);
}
