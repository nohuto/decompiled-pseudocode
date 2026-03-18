/*
 * XREFs of Uart16550RxReady @ 0x1406A4E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

bool __fastcall Uart16550RxReady(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  bool result; // al

  result = 0;
  if ( a1 )
  {
    if ( *a1 )
    {
      LOBYTE(a2) = 5;
      v4 = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
      if ( v4 != -1 && (v4 & 1) != 0 )
        return 1;
    }
  }
  return result;
}
