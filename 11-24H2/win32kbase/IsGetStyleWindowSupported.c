/*
 * XREFs of IsGetStyleWindowSupported @ 0x14000F1C4
 * Callers:
 *     CreateCacheDC @ 0x14000E010 (CreateCacheDC.c)
 *     UserSetDCVisRgn @ 0x14000F460 (UserSetDCVisRgn.c)
 *     GetMonitorDC @ 0x14009B3A0 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 IsGetStyleWindowSupported()
{
  __int64 (*v0)(void); // rax

  v0 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2608LL);
  if ( v0 )
    return v0();
  else
    return 3221225659LL;
}
