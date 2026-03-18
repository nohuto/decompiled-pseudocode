/*
 * XREFs of EditionInitializeWppLogging @ 0x14023AEDC
 * Callers:
 *     ApiSetEditionInitializeWppLogging @ 0x140100CC4 (ApiSetEditionInitializeWppLogging.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EditionInitializeWppLogging(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64); // rax

  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 7232LL);
  if ( v4 )
    return v4(a1, a2);
  else
    return 3221225659LL;
}
