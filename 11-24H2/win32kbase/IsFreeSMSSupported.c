/*
 * XREFs of IsFreeSMSSupported @ 0x14019E610
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x140165460 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1401C0520 (-_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsFreeSMSSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 160LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
