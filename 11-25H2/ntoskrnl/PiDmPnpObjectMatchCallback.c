/*
 * XREFs of PiDmPnpObjectMatchCallback @ 0x14071B340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PiDmPnpObjectMatchCallback(__int64 a1, _QWORD *a2, char *a3)
{
  char v4; // al

  if ( *a2 )
    v4 = guard_dispatch_icall_no_overrides(*(_QWORD *)&PiPnpRtlCtx);
  else
    v4 = 1;
  *a3 = v4;
  return 0LL;
}
