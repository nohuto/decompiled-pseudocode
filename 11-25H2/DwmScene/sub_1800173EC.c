/*
 * XREFs of sub_1800173EC @ 0x1800173EC
 * Callers:
 *     sub_180017A70 @ 0x180017A70 (sub_180017A70.c)
 *     ??_Gcritical_section@Concurrency@@QEAAPEAXI@Z_0 @ 0x180017AB0 (--_Gcritical_section@Concurrency@@QEAAPEAXI@Z_0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_1800173EC(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    result = sub_18001050C(v2);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
