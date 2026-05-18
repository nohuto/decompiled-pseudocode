/*
 * XREFs of sub_180092D10 @ 0x180092D10
 * Callers:
 *     sub_180094C30 @ 0x180094C30 (sub_180094C30.c)
 * Callees:
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180092D10(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 *v5; // rdx
  __int64 result; // rax

  v2 = (__int64 *)(a1 + 24);
  v5 = (__int64 *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 56) || (result = *v5, *v2 != *v5) )
  {
    sub_18001254C(v2, v5);
    result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 120LL))(a2, v2);
  }
  *(_BYTE *)(a1 + 56) = 0;
  return result;
}
