/*
 * XREFs of sub_1800879D0 @ 0x1800879D0
 * Callers:
 *     <none>
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800879D0(__int64 a1)
{
  __int64 result; // rax

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 248LL))(a1);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 256LL))(a1);
  *(_DWORD *)(a1 + 1892) = 0;
  *(_WORD *)(a1 + 1896) = 256;
  return result;
}
