/*
 * XREFs of ReferenceWindowStation @ 0x1400CF2E4
 * Callers:
 *     ?UserGlobalAtomTableCallout_Old@@YAPEAXXZ @ 0x1401B2370 (-UserGlobalAtomTableCallout_Old@@YAPEAXXZ.c)
 *     GetCurrentProcessAtomTable @ 0x1401B2D78 (GetCurrentProcessAtomTable.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ReferenceWindowStation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v7)(__int64, __int64, __int64, __int64, int); // rax

  v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                         a1,
                                                                                         a2)
                                                                                     + 48)
                                                                         + 3528LL);
  if ( v7 )
    return v7(a1, a2, 32LL, a4, 1);
  else
    return 3221225659LL;
}
