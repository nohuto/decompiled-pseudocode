/*
 * XREFs of Uart16550RxReady @ 0x1406A5E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

bool __fastcall Uart16550RxReady(_QWORD *a1, __int64 a2)
{
  char v2; // al
  bool result; // al

  result = 0;
  if ( a1 )
  {
    if ( *a1 )
    {
      LOBYTE(a2) = 5;
      v2 = guard_dispatch_icall_no_overrides(a1, a2);
      if ( v2 != -1 && (v2 & 1) != 0 )
        return 1;
    }
  }
  return result;
}
