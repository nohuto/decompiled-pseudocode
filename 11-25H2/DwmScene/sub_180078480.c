/*
 * XREFs of sub_180078480 @ 0x180078480
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800784EC @ 0x1800784EC (sub_1800784EC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180078480(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax

  sub_1800784EC();
  result = *a4;
  if ( (*(_DWORD *)(*a4 + 440) & 0x10000) != 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)a1 + 160LL))(a1, a2, a3, a4);
  return result;
}
