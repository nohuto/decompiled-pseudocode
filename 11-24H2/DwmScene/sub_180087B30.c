/*
 * XREFs of sub_180087B30 @ 0x180087B30
 * Callers:
 *     <none>
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180087B30(__int64 a1)
{
  __int64 result; // rax

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 248LL))(a1);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 256LL))(a1);
  *(_DWORD *)(a1 + 1892) = 0;
  *(_WORD *)(a1 + 1896) = 256;
  return result;
}
