/*
 * XREFs of sub_180011150 @ 0x180011150
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BCCF0 @ 0x1800BCCF0 (sub_1800BCCF0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180011150(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1);
  if ( !(_BYTE)result )
    return sub_1800BCCF0(a1);
  return result;
}
