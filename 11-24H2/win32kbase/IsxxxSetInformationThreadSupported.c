/*
 * XREFs of IsxxxSetInformationThreadSupported @ 0x1400EA91C
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1400E96D0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsxxxSetInformationThreadSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 2440LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
