/*
 * XREFs of sub_1800C3400 @ 0x1800C3400
 * Callers:
 *     <none>
 * Callees:
 *     sub_180037600 @ 0x180037600 (sub_180037600.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800C3400(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = sub_180037600(a1);
  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 880LL))(v3);
  return result;
}
