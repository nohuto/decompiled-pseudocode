/*
 * XREFs of sub_180011250 @ 0x180011250
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BCE50 @ 0x1800BCE50 (sub_1800BCE50.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180011250(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1);
  if ( !(_BYTE)result )
    return sub_1800BCE50(a1);
  return result;
}
