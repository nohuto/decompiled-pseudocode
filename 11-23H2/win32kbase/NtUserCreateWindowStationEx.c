/*
 * XREFs of NtUserCreateWindowStationEx @ 0x1C00D1460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCreateWindowStationEx(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_1C0295360 )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64))qword_1C0295360)(a1, a2, a3);
  return result;
}
