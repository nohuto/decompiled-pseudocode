/*
 * XREFs of sub_180089470 @ 0x180089470
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_180089470(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  if ( *(_BYTE *)(a1 + 232) )
    (*(void (__fastcall **)(_QWORD, _QWORD *, __int64, __int64, _QWORD *))(**(_QWORD **)(a1 + 184) + 16LL))(
      *(_QWORD *)(a1 + 184),
      a2,
      a3,
      a4,
      a5);
  else
    unknown_libname_81(a2, a5);
  return a2;
}
