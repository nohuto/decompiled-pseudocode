/*
 * XREFs of UmfdUninitializeProcess @ 0x14023ACC0
 * Callers:
 *     GdiProcessCallout @ 0x140179DD0 (GdiProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall UmfdUninitializeProcess(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 1408LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
