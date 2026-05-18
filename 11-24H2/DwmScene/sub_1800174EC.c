/*
 * XREFs of sub_1800174EC @ 0x1800174EC
 * Callers:
 *     sub_180017B30 @ 0x180017B30 (sub_180017B30.c)
 *     ??_Gcritical_section@Concurrency@@QEAAPEAXI@Z_0 @ 0x180017B70 (--_Gcritical_section@Concurrency@@QEAAPEAXI@Z_0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_1800174EC(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    result = sub_18001060C(v2);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
