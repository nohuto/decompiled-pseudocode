/*
 * XREFs of IsModerncoreAtomTableSupported @ 0x14023B4A8
 * Callers:
 *     W32CalloutDispatchWorker @ 0x1400DAD6C (W32CalloutDispatchWorker.c)
 *     UserGlobalAtomTableCallout @ 0x140166C60 (UserGlobalAtomTableCallout.c)
 *     JobAddProcessNotify @ 0x1401AA560 (JobAddProcessNotify.c)
 *     JobSetUIRestrictionsNotify @ 0x1401AA5B0 (JobSetUIRestrictionsNotify.c)
 *     JobTerminateNotify @ 0x1401AA5E0 (JobTerminateNotify.c)
 *     ?UserGlobalAtomTableCallout_Old@@YAPEAXXZ @ 0x1401B2370 (-UserGlobalAtomTableCallout_Old@@YAPEAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsModerncoreAtomTableSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 3536LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
