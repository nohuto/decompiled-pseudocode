/*
 * XREFs of IsUmfdIsCurrentProcessUmfdHostNoLockSupported @ 0x1400BF870
 * Callers:
 *     GrepThreadCallout @ 0x1400BF560 (GrepThreadCallout.c)
 *     GdiProcessCallout @ 0x140179DD0 (GdiProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsUmfdIsCurrentProcessUmfdHostNoLockSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 1384LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
