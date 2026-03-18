/*
 * XREFs of IsEditionGetProcessWindowStationEntryPointSupported @ 0x140114448
 * Callers:
 *     ApiSetEditionGetProcessWindowStationEntryPoint @ 0x140114388 (ApiSetEditionGetProcessWindowStationEntryPoint.c)
 *     ApiSetEditionCreateWindowStationEntryPoint @ 0x140149470 (ApiSetEditionCreateWindowStationEntryPoint.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsEditionGetProcessWindowStationEntryPointSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 912LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
