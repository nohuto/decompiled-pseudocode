/*
 * XREFs of sub_18008D450 @ 0x18008D450
 * Callers:
 *     <none>
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18008D450(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  _QWORD *v6; // rsi
  _QWORD *i; // rdi

  v6 = (_QWORD *)a1[20];
  for ( i = (_QWORD *)a1[19]; i != v6; i += 2 )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, int))(*(_QWORD *)*i + 8LL))(*i, a2, a3, a4, a5, a6);
  return (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD, int, int))(*a1 + 32LL))(a1, a2, a3, a4, a5, a6);
}
